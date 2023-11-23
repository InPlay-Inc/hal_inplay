#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file hal_dma.c
 *
 * @brief DMA driver implementation file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include "stdlib.h"
#include "stdio.h"

#include "in_arm.h"
#include "in_irq.h"
#include "in_debug.h"

#include "./hal/hal_clk.h"
#include "./hal/hal_dma.h"
#include "./hal/hal_global.h"
#include "./hal/hal_gpio.h"

/*
 * Structures
 ****************************************************************************************
 */

typedef struct {
	char used;
	char chn;
	char ll_en;		// use link list (block chain transfer)
	char dma_id;

	void *arg;
	void (*callback)(int id, void *arg, uint32_t status);

	uint32_t bda;		// block chain descriptor address
	uint32_t c_bda;		// current block descriptor address
	char bda_nb;
	char c_idx;
	char pad[2];
} dma_ch_t;

typedef struct {
	dma_ch_t ch[DMA_MAX_CH_NB];
} dma_dev_t;

static dma_dev_t dma_dev[2] = {
	{ 
		.ch[0] = {
			.used = 0,
			.chn = 0,
			.dma_id = DMA0_ID
		},
		.ch[1] = {
			.used = 0,
			.chn = 1,
			.dma_id = DMA0_ID
		},
		.ch[2] = {
			.used = 0,
			.chn = 2,
			.dma_id = DMA0_ID
		},
		.ch[3] = {
			.used = 0,
			.chn = 3,
			.dma_id = DMA0_ID
		},
	},
	{
		.ch[0] = {
			.used = 0,
			.chn = 0,
			.dma_id = DMA1_ID
		},
		.ch[1] = {
			.used = 0,
			.chn = 1,
			.dma_id = DMA1_ID
		},
		.ch[2] = {
			.used = 0,
			.chn = 2,
			.dma_id = DMA1_ID
		},
		.ch[3] = {
			.used = 0,
			.chn = 3,
			.dma_id = DMA1_ID
		},
	}
};

#if !CFG_FPGA
static int dma_clk_en = 0;
#endif

/*
 * ISR
 ****************************************************************************************
 */
static void dma_isr(int id) __attribute__((section("ISR")));
static void dma_isr(int id)
{
	dma_dev_t	*pd = &dma_dev[id];
	uint32_t base = (id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	uint32_t tfr_status = dma_intr_tfr_status(base);
	uint32_t err_status = dma_intr_err_status(base);
	uint32_t blk_status = dma_intr_block_status(base);
	uint32_t src_status = dma_intr_src_status(base);
	uint32_t dst_status = dma_intr_dst_status(base);


 
	for (uint32_t i = 0; i < DMA_MAX_CH_NB; i++) {
		uint32_t status = 0;
		if (tfr_status && ((tfr_status >> i) & 1)) 
			status |= (1 << (DMA_IT_STATUS_TFR-1));
		if (err_status && ((err_status >> i) & 1)) 
			status |= (1 << (DMA_IT_STATUS_ERR-1));
		if (blk_status && ((blk_status >> i) & 1)) 
			status |= (1 << (DMA_IT_STATUS_BLOCK-1));
		if (dst_status && ((dst_status >> i) & 1)) 
			status |= (1 << (DMA_IT_STATUS_DSTT-1));

		if (status) {
			if (pd->ch[i].callback) {
				if (pd->ch[i].ll_en) {
					uint32_t ch_base = base + i * DMA_CH_REG_GAP; 
					// FInd the completed block index
					dma_bd_t *first = (dma_bd_t *)pd->ch[i].c_bda;
					uint32_t next_bda = dma_ch_get_llp(ch_base);
					int index = pd->ch[i].c_idx;
					while (1) {
						pd->ch[i].callback(index, pd->ch[i].arg, status);
						index += 1;
						if (index >= pd->ch[i].bda_nb)
							index = 0;
						if (first->llp != next_bda) {
							first = (dma_bd_t *)first->llp;
						} else {
							pd->ch[i].c_bda = next_bda;
							break;
						}
					}
					pd->ch[i].c_idx = index;
				} else {
					pd->ch[i].callback(id, pd->ch[i].arg, status);
				}
			}
		}
	}

	if (tfr_status)
		dma_intr_tfr_clear(base);
	if (err_status)
		dma_intr_err_clear(base);
	if (blk_status)
		dma_intr_block_clear(base);
	if (src_status)
		dma_intr_src_clear(base);
	if (dst_status)
		dma_intr_dst_clear(base);




}

__irq void DMA0_Handler(void) __attribute__((section("ISR")));
__irq void DMA0_Handler(void)
{
	dma_isr(DMA0_ID);
}

__irq void DMA1_Handler(void) __attribute__((section("ISR")));
__irq void DMA1_Handler(void)
{
	dma_isr(DMA1_ID);
}

/*
 * DMA APIs
 ****************************************************************************************
 */
#if 0
void *hal_dma_open(int id, int periph_id, uint32_t sar, uint32_t dar, int size, int sdw, int ddw, int sai, int dai, int sbz, int dbz, int sahb, int dahb, int ttype)
{
	uint32_t base = (id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	dma_dev_t *pd = &dma_dev[id];
	dma_ch_t *pch = NULL;

	for (uint32_t i = 0; i < DMA_MAX_CH_NB; i++) {
		if (!pd->ch[i].used) {
			pch = &pd->ch[i];
			break;
		}
	}

	if (!pch)
		return NULL;

	uint32_t ch_base = base + (pch->chn * DMA_CH_REG_GAP);

#if !CFG_FPGA
	// dma clk
	if (!dma_clk_en) {
		hal_clk_dma_en(1);
		/// turn on force on ahb bus clocks 
		clk_force_dma_ctl_clks(1);
		dma_clk_en = 1;
	}
#endif

	// config dma
	dma_enable(base);		
	dma_ch_set_sar(ch_base, sar);			// soruce address
	dma_ch_set_dar(ch_base, dar);			// destination base
 	dma_ch_src_width(ch_base, sdw);
	dma_ch_dst_width(ch_base, ddw);
	dma_ch_src_inc(ch_base, sai);
	dma_ch_dst_inc(ch_base, dai);
	dma_ch_src_msize(ch_base, sbz);
	dma_ch_dst_msize(ch_base, dbz);
	dma_ch_src_ahb_master(ch_base, sahb);
	dma_ch_dst_ahb_master(ch_base, dahb);
	dma_ch_tran_type_fc(ch_base, ttype);
	dma_ch_tran_block_size(ch_base, size);
	dma_ch_hs_src(ch_base, 1);
	dma_ch_hs_dest(ch_base, 1);

	if (id == DMA0_ID) {
		dma_ch_dest_periph_id(ch_base, periph_id);		
	} else {
		dma_ch_src_periph_id(ch_base, periph_id);		
	}

	pch->used = 1;

	return (void *)pch;
}
#endif

void *hal_dma_open(int id, int periph_id, int sai, int dai, int sahb, int dahb, int ttype, int prio)
{
	uint32_t base = (id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	IRQn_Type irqn = (id == DMA0_ID) ? Dma0_IRQn : Dma1_IRQn;
	dma_dev_t *pd = &dma_dev[id];
	dma_ch_t *pch = NULL;

	for (uint32_t i = 0; i < DMA_MAX_CH_NB; i++) {
		if (!pd->ch[i].used) {
			pch = &pd->ch[i];
			break;
		}
	}

	if (!pch)
		return NULL;

	uint32_t ch_base = base + (pch->chn * DMA_CH_REG_GAP);

#if !CFG_FPGA
	// dma clk
	if (!dma_clk_en) {
		hal_clk_dma_en(1);
		/// turn on force on ahb bus clocks 
		clk_force_dma_ctl_clks(1);
		dma_clk_en = 1;
	}
#endif

	// config dma
	dma_enable(base);		
	dma_ch_src_inc(ch_base, sai);
	dma_ch_dst_inc(ch_base, dai);
	dma_ch_src_ahb_master(ch_base, sahb);
	dma_ch_dst_ahb_master(ch_base, dahb);
	dma_ch_tran_type_fc(ch_base, ttype);
	dma_ch_hs_src(ch_base, 1);
	dma_ch_hs_dest(ch_base, 1);

	if (id == DMA0_ID) {
		dma_ch_dest_periph_id(ch_base, periph_id);		
	} else {
		dma_ch_src_periph_id(ch_base, periph_id);		
	}

	if (!NVIC_GetEnableIRQ(irqn)) {
		NVIC_SetPriority(irqn, prio);	
		NVIC_EnableIRQ(irqn);
	} else {
		if (NVIC_GetPriority(irqn) > prio) {
			NVIC_SetPriority(irqn, prio);	
		}
	}

	pch->used = 1;

	return (void *)pch;
}

#if 0
int hal_dma_ch_enable(void *hdl, void *arg, void (*callback)(int id, void *arg, uint32_t status))
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	IRQn_Type irqn = (pch->dma_id == DMA0_ID) ? Dma0_IRQn : Dma1_IRQn;
	int chn = pch->chn;

	pch->arg = arg;
	pch->callback = callback;
	dma_intr_ch_tfr_clear(base, chn);
	dma_intr_ch_err_clear(base, chn);
	dma_intr_unmask(base, chn, (DMA_IT_STATUS_TFR|DMA_IT_STATUS_ERR));
	if (!NVIC_GetEnableIRQ(irqn)) {
		NVIC_SetPriority(irqn, IRQ_PRI_Normal);	
		NVIC_EnableIRQ(irqn);
	}

	// enable channel
	dma_ch_enable(base, chn);
	
	return DMA_ERR_OK;
}

int hal_dma_ch_disable(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	// disable channel
	dma_ch_disable(base, ch_base, chn);
	dma_intr_mask(base, chn, DMA_IT_STATUS_ALL);

	pch->arg = NULL;
	pch->callback = NULL;

	return DMA_ERR_OK;
}
#endif

int hal_dma_ch_enable(void *hdl, void *arg, void (*callback)(int id, void *arg, uint32_t status))
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	IRQn_Type irqn = (pch->dma_id == DMA0_ID) ? Dma0_IRQn : Dma1_IRQn;
	int chn = pch->chn;

	pch->arg = arg;
	pch->callback = callback;
	dma_intr_ch_tfr_clear(base, chn);
	dma_intr_ch_err_clear(base, chn);
	dma_intr_unmask(base, chn, (DMA_IT_STATUS_TFR|DMA_IT_STATUS_ERR|DMA_IT_STATUS_BLOCK|DMA_IT_STATUS_DSTT|DMA_IT_STATUS_SRCT));

	// enable channel
	dma_ch_enable(base, chn);
	
	return DMA_ERR_OK;
}

int hal_dma_ch_disable(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	// disable channel
	dma_ch_disable(base, ch_base, chn);
	dma_intr_mask(base, chn, DMA_IT_STATUS_ALL);

	pch->arg = NULL;
	pch->callback = NULL;

	return DMA_ERR_OK;
}

void hal_dma_close(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;
	dma_dev_t *pd = NULL;

	if (!pch)
		return;
	
	if (!pch->used)	
		return;

	pch->used = 0;
	pch->ll_en = 0;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	pd = (pch->dma_id == DMA0_ID) ? (&dma_dev[0]) : (&dma_dev[1]);
	IRQn_Type irqn = (pch->dma_id == DMA0_ID) ? Dma0_IRQn : Dma1_IRQn;

	/// any channel still in use
	int disable = 1;
	for (uint32_t i = 0; i < DMA_MAX_CH_NB; i++) {
		if (pd->ch[i].used) {
			disable = 0;
			break;
		}
	}
	
	/// disable interrupt if no channel in use
	if (disable) {
		dma_disable(base);
		if (NVIC_GetEnableIRQ(irqn)) {
			NVIC_DisableIRQ(irqn);
		}

		/// check any channel is used by the other DMA  
		pd = (pch->dma_id == DMA0_ID) ? (&dma_dev[1]) : (&dma_dev[0]);
		int disable = 1;
		for (uint32_t i = 0; i < DMA_MAX_CH_NB; i++) {
			if (pd->ch[i].used) {
				disable = 0;
				break;
			}
		}

		/// shut off clock if no channel is in use.		
		if (disable) {
#if !CFG_FPGA
			/// turn off force on ahb bus clocks 
			clk_force_dma_ctl_clks(0);
			// dma clk
			hal_clk_dma_en(0);
			dma_clk_en = 0;
#endif
		}
	}

}

int hal_dma_ch_enable_no_int(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;

	// enable channel
	dma_ch_enable(base, chn);
	
	return DMA_ERR_OK;
}

int hal_dma_ch_disable_no_int(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	// disable channel
	dma_ch_disable(base, ch_base, chn);

	return DMA_ERR_OK;
}

int hal_dma_poll_tran_done(void *hdl, int max_poll_nb)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;
	int res = DMA_ERR_OK;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;

	while (max_poll_nb--) {

		if (dma_intr_ch_raw_tfr_status(base, chn)) {
			break;
		}
		if (dma_intr_ch_raw_err_status(base, chn)) {
			res = DMA_ERR_TRAN;
			break;
		}
	}

	if (max_poll_nb <= 0) {
		PRINTD(DBG_ERR, "DMA: Error not completed...\n");
		res = DMA_ERR_TRAN;
	}

	return res;
}

int hal_dma_poll_block_done(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;
	int res = DMA_ERR_OK;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;

	while (1) {
		if (dma_intr_ch_raw_block_status(base, chn)) {
			break;
		}
		if (dma_intr_ch_raw_err_status(base, chn)) {
			res = DMA_ERR_BLOCK;
			break;
		}
	}

	return res;

}

uint32_t hal_dma_get_tran_len(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return 0;

	if (!pch->used)	
		return 0;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	return dma_ch_get_tran_block_size(ch_base);
}

int hal_dma_set_sar(void *hdl, uint32_t sar)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	dma_ch_set_sar(ch_base, sar);

	return DMA_ERR_OK;
}

int hal_dma_set_dar(void *hdl, uint32_t dar)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	dma_ch_set_dar(ch_base, dar);

	return DMA_ERR_OK;
}

int hal_dma_set_dw(void *hdl, int sdw, int ddw)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

 	dma_ch_src_width(ch_base, sdw);
	dma_ch_dst_width(ch_base, ddw);

	return DMA_ERR_OK;
}

int hal_dma_set_bz(void *hdl, int sbz, int dbz)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	dma_ch_src_msize(ch_base, sbz);
	dma_ch_dst_msize(ch_base, dbz);

	return DMA_ERR_OK;
}

int hal_dma_set_tran_block_size(void *hdl, uint32_t size)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	dma_ch_tran_block_size(ch_base, size);

	return DMA_ERR_OK;
}

int hal_dma_set_llcp(void *hdl, uint32_t addr)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	dma_ch_llp(ch_base, addr);

	return DMA_ERR_OK;
}

int hal_dma_add_mb_item(uint32_t ba, uint32_t next_ba, uint32_t dar, uint32_t sar,  int dtw, int stw, int dai, int sai, int dbz, int sbz, int dms, int sms, int tt_fc, int size)
{
	if (ba & 0x3)
		return DMA_ERR_INVALID_PARA;

	dma_bd_t *pb = (dma_bd_t *)ba;

	pb->sar = sar;
	pb->dar = dar;
	pb->llp = (next_ba & ~0x3);
	pb->ctl_l.u.int_en = 1;
	pb->ctl_l.u.dst_tr_width = dtw;
	pb->ctl_l.u.src_tr_width = stw;
	pb->ctl_l.u.dinc = dai;
	pb->ctl_l.u.sinc = sai;
	pb->ctl_l.u.dest_mszie = dbz;
	pb->ctl_l.u.src_mszie = sbz;
	pb->ctl_l.u.src_gather_en = 0;
	pb->ctl_l.u.dst_scatter_en = 0;
	pb->ctl_l.u.tt_fc = tt_fc;
	pb->ctl_l.u.dms = dms;
	pb->ctl_l.u.sms = sms;
	pb->ctl_l.u.llp_dst_en = 1;
	pb->ctl_l.u.llp_src_en = 1;
	pb->ctl_h = size;

	return DMA_ERR_OK;
}

void *hal_dma_mb_open(int id, uint32_t bd_addr, int bda_nb, int src_periph_id, int dst_periph_id)
{
	uint32_t base = (id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	dma_dev_t *pd = &dma_dev[id];
	dma_ch_t *pch = NULL;

	for (uint32_t i = 0; i < DMA_MAX_CH_NB; i++) {
		if (!pd->ch[i].used) {
			pch = &pd->ch[i];
			break;
		}
	}

	if (!pch)
		return NULL;

	uint32_t ch_base = base + (pch->chn * DMA_CH_REG_GAP);

	// dma clk
#if !CFG_FPGA
	if (!dma_clk_en) {
		hal_clk_dma_en(1);
		/// turn on force on ahb bus clocks 
		clk_force_dma_ctl_clks(1);
		dma_clk_en = 1;
	}
#endif

	// config dma
	dma_enable(base);		
	//dma_ch_llp(pch->base, bbase);			// link list (block descriptor list) base address (4 bytes aligned)
	dma_ch_llp_dst_en(ch_base, 1);		// enable block chainning on destinationl 
	dma_ch_llp_src_en(ch_base, 1);		// enable block chainning on source
	dma_ch_sar_reload(ch_base, 0);		
	dma_ch_dest_reload(ch_base, 0);

	dma_ch_hs_src(ch_base, 1);			// soruce hardware handshaking
	dma_ch_hs_dest(ch_base, 1);		// destination hardware handshaking

	dma_ch_dest_periph_id(ch_base, dst_periph_id);		
	dma_ch_src_periph_id(ch_base, src_periph_id);		

	pch->used = 1;
	pch->ll_en = 1;
	pch->bda = bd_addr;
	pch->bda_nb = (char)bda_nb;
	pch->c_bda = bd_addr;
	pch->c_idx = 0;

	return (void *)pch;
}

int hal_dma_mb_ch_enable(void *hdl, void *arg, void (*callback)(int id, void *arg, uint32_t status))
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	IRQn_Type irqn = (pch->dma_id == DMA0_ID) ? Dma0_IRQn : Dma1_IRQn;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	/// link list pointer address
	dma_ch_llp(ch_base, pch->bda);			// link list (block descriptor list) base address (4 bytes aligned)

	pch->arg = arg;
	pch->callback = callback;
	dma_intr_ch_block_clear(base, chn);
	dma_intr_ch_err_clear(base, chn);
	dma_intr_unmask(base, chn, (DMA_IT_STATUS_TFR|DMA_IT_STATUS_BLOCK|DMA_IT_STATUS_ERR));
	if (!NVIC_GetEnableIRQ(irqn)) {
		NVIC_SetPriority(irqn, IRQ_PRI_Normal);	
		NVIC_EnableIRQ(irqn);
	}

	// enable channel
	dma_ch_enable(base, chn);
	
	return DMA_ERR_OK;
}

int hal_dma_mb_ch_disable(void *hdl, uint32_t bbase)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	// disable channel
	dma_ch_disable(base, ch_base, chn);
	dma_intr_mask(base, chn, DMA_IT_STATUS_ALL);

	pch->arg = NULL;
	pch->callback = NULL;

	return DMA_ERR_OK;
}

int hal_dma_mb_ch_enable_no_int(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	/// link list pointer address
	dma_ch_llp(ch_base, pch->bda);			// link list (block descriptor list) base address (4 bytes aligned)

	// enable channel
	dma_ch_enable(base, chn);
	
	return DMA_ERR_OK;
}

int hal_dma_mb_ch_disable_no_int(void *hdl)
{
	dma_ch_t *pch = (dma_ch_t *)hdl;

	if (!pch)
		return DMA_ERR_INVALID_PARA;

	if (!pch->used)	
		return DMA_ERR_BAD_STATE;

	uint32_t base = (pch->dma_id == DMA0_ID) ? DMAC_0_BASE : DMAC_1_BASE;
	int chn = pch->chn;
	uint32_t ch_base = base + (chn * DMA_CH_REG_GAP);

	// clear interrupt
	dma_intr_clr(base, chn, DMA_IT_STATUS_ALL);

	// disable channel
	dma_ch_disable(base, ch_base, chn);

	return DMA_ERR_OK;
}

/*
 * PCM DMA
 ****************************************************************************************
 */

typedef struct {
	char used;
	char buffer_idx;
	char pad[2];

	void *h_dma;
	void *arg;
	void (*callback)(void *arg, int id, uint32_t status) ;	

} dma_pcm_t;

static dma_bd_t pcm_dma_bd[2]__attribute__((aligned (4)));

static dma_pcm_t dp_dev = {0};

static void dma_pcm_isr_cb(int id, void *arg, uint32_t status)
{
	dma_pcm_t *pd = (dma_pcm_t *)arg;

	if (status & DMA_IT_STATUS_BLOCK) {

		// Current user's buffer completed
		// call back to user 
		int res = DMA_PCM_ERR_OK;
		if (status & DMA_IT_STATUS_ERR)
			res = 	DMA_PCM_ERR_DMA_TRAN;

		if (pd->callback) {
			pd->callback(pd->arg, id, res);
			pd->buffer_idx = id;
		}
	}
}

int hal_dma_pcm_en(void *buffer0, void *buffer1, uint16_t buffer_len, void *arg, void (*callback)(void * arg, int id, uint32_t status))
{
	int res = DMA_PCM_ERR_OK;
	dma_pcm_t *pd = &dp_dev;

	if (pd->used)
		return DMA_PCM_ERR_BUSY;

	if (!buffer_len)
		return DMA_PCM_ERR_INVALID_PARA;

	/// PCM DMA RX (Block Chaining)
	// first list item
	hal_dma_add_mb_item((uint32_t)&pcm_dma_bd[0], 													// First block descriptor address
													(uint32_t)&pcm_dma_bd[1],									// Second block descriptor address
														(uint32_t)buffer0,  												// Dst buffer address
															0x44106110,  													// Src address
																DMA_CTL_TR_WIDTH_32BITS, DMA_CTL_TR_WIDTH_32BITS,
																	DMA_ADDR_INC,
																		DMA_ADDR_SAME,
																			DMA_CTL_TR_MSIZE_1,
																				DMA_CTL_TR_MSIZE_1,
																					DMA_AHB_MASTER_MEM,
																						DMA_AHB_MASTER_PERIPH,
																							DMA_TT_PERF_TO_MEM_FC_DMAC,
																								buffer_len);
	// second list item
	hal_dma_add_mb_item((uint32_t)&pcm_dma_bd[1], 												// Second block descriptor address
												(uint32_t)&pcm_dma_bd[0],										// First block descriptor address
													(uint32_t)buffer1,  											// Dst buffer address
														0x44106110,  			// Src address
															DMA_CTL_TR_WIDTH_32BITS, DMA_CTL_TR_WIDTH_32BITS,
																DMA_ADDR_INC,
																	DMA_ADDR_SAME,
																		DMA_CTL_TR_MSIZE_1,
																			DMA_CTL_TR_MSIZE_1,
																				DMA_AHB_MASTER_MEM,
																					DMA_AHB_MASTER_PERIPH,
																						DMA_TT_PERF_TO_MEM_FC_DMAC,
																							buffer_len);

	// Find Dma channel
	pd->h_dma = hal_dma_mb_open(DMA0_ID,	(uint32_t)&pcm_dma_bd[0], 2, DMA_ID_AUD_ENC_TX, 0);
	if (pd->h_dma) {
		pd->used = 1;

		pd->arg = arg;
		pd->callback = callback;
	
		// Found channel, enable it
		hal_dma_mb_ch_enable(pd->h_dma, (void *)pd, dma_pcm_isr_cb);
	} else {
		res = DMA_PCM_ERR_DMA_BUSY;
	}	   

	return res;
}

int hal_dma_pcm_dis(void)
{
	int res = DMA_PCM_ERR_OK;
	dma_pcm_t *pd = &dp_dev;

	if (!pd->used)
		return res;

	int index = pd->buffer_idx;
	hal_dma_mb_ch_disable(pd->h_dma, (uint32_t)&pcm_dma_bd[index]);
	hal_dma_close(pd->h_dma);	

	pd->used = 0;
	pd->h_dma = NULL;

	return res;
}

