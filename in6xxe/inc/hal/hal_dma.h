/**
 ****************************************************************************************
 *
 * @file hal_dma.h
 *
 * @brief DMA driver header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_DMA_H
#define HAL_DMA_H

/**
 ****************************************************************************************
 * @defgroup HAL_DMA DMA device driver  
 * @ingroup HAL
 * @brief  HAL_DMA
 * @{
 ****************************************************************************************
 */

#include "in_mmap.h"

/*
 * Defines
 ****************************************************************************************
 */

#define DMA_REG_CFG_OFS					0x00000398UL
#define DMA_REG_CH_EN_OFS				0x000003A0UL

#define DMA_REG_INTR_RAW_TFR			0x000002C0UL
#define DMA_REG_INTR_RAW_BLOCK		0x000002C8UL
#define DMA_REG_INTR_RAW_SRC			0x000002D0UL
#define DMA_REG_INTR_RAW_DST			0x000002D8UL
#define DMA_REG_INTR_RAW_ERR			0x000002E0UL

#define DMA_REG_INTR_STAT_TFR			0x000002E8UL
#define DMA_REG_INTR_STAT_BLOCK		0x000002F0UL
#define DMA_REG_INTR_STAT_SRC			0x000002F8UL
#define DMA_REG_INTR_STAT_DST			0x00000300UL
#define DMA_REG_INTR_STAT_ERR			0x00000308UL

#define DMA_REG_INTR_MASK_TFR			0x00000310UL
#define DMA_REG_INTR_MASK_BLOCK		0x00000318UL
#define DMA_REG_INTR_MASK_SRC			0x00000320UL
#define DMA_REG_INTR_MASK_DST			0x00000328UL
#define DMA_REG_INTR_MASK_ERR			0x00000330UL

#define DMA_REG_INTR_CLR_TFR				0x00000338UL
#define DMA_REG_INTR_CLR_BLOCK		0x00000340UL
#define DMA_REG_INTR_CLR_SRC			0x00000348UL
#define DMA_REG_INTR_CLR_DST			0x00000350UL
#define DMA_REG_INTR_CLR_ERR			0x00000358UL

#define DMA_REG_INTR_STAT					0x00000360UL

#define DMA_REG_SRC_SW_REQ				0x00000368UL
#define DMA_REG_DST_SW_REQ				0x00000370UL
#define DMA_REG_SRC_SW_SGLREQ		0x00000378UL
#define DMA_REG_DST_SW_SGLREQ		0x00000380UL
#define DMA_REG_LST_SRC_SW_REQ		0x00000388UL
#define DMA_REG_LST_DST_SW_REQ		0x00000390UL

#define DMA_CH_REG_SAR_OFS					0x00000000UL
#define DMA_CH_REG_DAR_OFS					0x00000008UL
#define DMA_CH_REG_LLP_OFS					0x00000010UL
#define DMA_CH_REG_CTL_OFS					0x00000018UL
#define DMA_CH_REG_SSTAT_OFS				0x00000020UL
#define DMA_CH_REG_DSTAT_OFS				0x00000028UL
#define DMA_CH_REG_SSTATAR_OFS		0x00000030UL
#define DMA_CH_REG_DSTATAR_OFS		0x00000038UL
#define DMA_CH_REG_CFG_OFS					0x00000040UL
#define DMA_CH_REG_SGR_OFS					0x00000048UL
#define DMA_CH_REG_DSR_OFS					0x00000050UL

#define DMA_CH_REG_GAP	0x58
#define DMA_MAX_CTL_NB 2
#define DMA_MAX_CH_NB 4

#define DMA_IT_STATUS_TFR		0x00000001UL
#define DMA_IT_STATUS_BLOCK	0x00000002UL
#define DMA_IT_STATUS_SRCT	0x00000004UL
#define DMA_IT_STATUS_DSTT	0x00000008UL
#define DMA_IT_STATUS_ERR		0x00000010UL
#define DMA_IT_STATUS_ALL		0x0000001FUL

#define DMA_CH_CTL_INT_EN				0x00000001UL
#define DMA_CH_CTL_DST_TR_WIDTH	0x0000000EUL
#define DMA_CH_CTL_SRC_TR_WIDTH	0x00000070UL
#define DMA_CH_CTL_DINC					0x00000180UL
#define DMA_CH_CTL_SINC					0x00000600UL
#define DMA_CH_CTL_DEST_MSIZE		0x00003800UL
#define DMA_CH_CTL_SRC_MSIZE		0x0001C000UL
#define DMA_CH_CTL_TT_FC					0x00700000UL
#define DMA_CH_CTL_DMS					0x01800000UL
#define DMA_CH_CTL_SMS					0x06000000UL
#define DMA_CH_CTL_LLP_DST_EN		0x08000000UL
#define DMA_CH_CTL_LLP_SRC_EN		0x10000000UL
#define DMA_CH_CTL_BLOCK_TS			0x0000FFFFUL

#define DMA_CH_CFG_PRIOR			0x000000E0UL
#define DMA_CH_CFG_SUSP				0x00000100UL
#define DMA_CH_CFG_FIFO_EMPTY	0x00000200UL
#define DMA_CH_CFG_HS_SEL_DST	0x00000400UL
#define DMA_CH_CFG_HS_SEL_SRC	0x00000800UL
#define DMA_CH_CFG_LOCK_CH_L	0x00003000UL
#define DMA_CH_CFG_LOCK_B_L		0x0000C000UL
#define DMA_CH_CFG_LOCK_CH		0x00010000UL
#define DMA_CH_CFG_LOCK_B				0x00020000UL
#define DMA_CH_CFG_DST_HS_POL		0x00040000UL
#define DMA_CH_CFG_SRC_HS_POL		0x00080000UL
#define DMA_CH_CFG_RELOAD_SRC	0x40000000UL
#define DMA_CH_CFG_RELOAD_DST		0x80000000UL
#define DMA_CH_CFG_FCMODE		0x00000001UL
#define DMA_CH_CFG_FIFO_MODE	0x00000002UL
#define DMA_CH_CFG_DS_UPD_EN	0x00000020UL
#define DMA_CH_CFG_SS_UPD_EN	0x00000040UL
#define DMA_CH_CFG_SRC_PER		0x00000780UL
#define DMA_CH_CFG_DEST_PER		0x00007800UL

/*
 * Enumeration
 ****************************************************************************************
 */

enum dma_id {
	DMA0_ID,
	DMA1_ID,
};

enum dma_error_code {
	DMA_ERR_OK = 0,
	DMA_ERR_BAD_STATE = -1,
	DMA_ERR_INVALID_PARA = -2,
	DMA_ERR_TRAN = -3,
	DMA_ERR_BLOCK = -4,
} ;

enum dma0_periph_id {
	DMA_ID_MSPI0_TX,
	DMA_ID_MSPI1_TX,
	DMA_ID_SSPI1_TX,
	DMA_ID_SSPI0_TX,
	DMA_ID_I2S_MASTER_TX,
	DMA_ID_I2S_SLAVE_TX,
	DMA_ID_I2C0_TX,
	DMA_ID_I2C1_TX,
	DMA_ID_UART0_TX,
	DMA_ID_UART1_TX,
	DMA_ID_AUD_ENC_TX,
};

enum dma1_periph_id {
	DMA_ID_MSPI0_RX,
	DMA_ID_MSPI1_RX,
	DMA_ID_SSPI1_RX,
	DMA_ID_SSPI0_RX,
	DMA_ID_I2S_MASTER_RX,
	DMA_ID_I2S_SLAVE_RX,
	DMA_ID_I2C0_RX,
	DMA_ID_I2C1_RX,
	DMA_ID_UART0_RX,
	DMA_ID_UART1_RX,
	DMA_ID_AUD_DEC_RX,
};

enum dma_tr_width {
	DMA_CTL_TR_WIDTH_8BITS = 0,
 	DMA_CTL_TR_WIDTH_16BITS,
	DMA_CTL_TR_WIDTH_32BITS,
	DMA_CTL_TR_WIDTH_64BITS,
 	DMA_CTL_TR_WIDTH_128BITS,
	DMA_CTL_TR_WIDTH_256BITS,
};

enum dma_tr_msize {
	DMA_CTL_TR_MSIZE_1 = 0,
 	DMA_CTL_TR_MSIZE_4,
 	DMA_CTL_TR_MSIZE_8,
 	DMA_CTL_TR_MSIZE_16,
 	DMA_CTL_TR_MSIZE_32,
 	DMA_CTL_TR_MSIZE_64,
};

enum dma_addr_chg {
	DMA_ADDR_INC = 0,
	DMA_ADDR_DEC = 1,
	DMA_ADDR_SAME = 2,
};

enum dma_ttype {
	DMA_TT_MEM_TO_MEM_FC_DMAC = 0,
	DMA_TT_MEM_TO_PERF_FC_DMAC,
	DMA_TT_PERF_TO_MEM_FC_DMAC,
	DMA_TT_PERF_TO_PERF_FC_DMAC,
	DMA_TT_PERF_TO_MEM_FC_PERF,
	DMA_TT_PERF_TO_PERF_FC_SRC_FC_PERF,
	DMA_TT_MEM_TO_PERF_FC_PERF,
	DMA_TT_PERF_TO_PERF_FC_DST_PERF,
};

enum dma_ahb_master {
	DMA_AHB_MASTER_MEM,
	DMA_AHB_MASTER_PERIPH,
};

enum dma_pcm_error_code {
	DMA_PCM_ERR_OK,
	DMA_PCM_ERR_BUSY,
	DMA_PCM_ERR_INVALID_PARA,
	DMA_PCM_ERR_DMA_BUSY,
	DMA_PCM_ERR_DMA_TRAN,

};

/*
 * Data Structure
 ****************************************************************************************
 */
/// DMA block descriptor structure
typedef struct {
	uint32_t sar;
	uint32_t dar;
	uint32_t llp;
	union {
		struct {
			uint32_t int_en:1;
			uint32_t dst_tr_width:3;
			uint32_t src_tr_width:3;
			uint32_t dinc:2;
			uint32_t sinc:2;
			uint32_t dest_mszie:3;
			uint32_t src_mszie:3;
			uint32_t src_gather_en:1;
			uint32_t dst_scatter_en:1;
			uint32_t reserve1:1;
			uint32_t tt_fc:3;
			uint32_t dms:2;
			uint32_t sms:2;
			uint32_t llp_dst_en:1;
			uint32_t llp_src_en:1;
			uint32_t reserve2:2;
		} u; 
		uint32_t word;
	} ctl_l;
	uint32_t ctl_h;
	uint32_t sstat;
	uint32_t dstat;
} dma_bd_t;

/*
 * Inline Functions
 ****************************************************************************************
 */
static __inline void dma_enable(uint32_t base)
{
	WR_WORD((base + DMA_REG_CFG_OFS), 1);	
}

static __inline void dma_disable(uint32_t base)
{
	WR_WORD((base + DMA_REG_CFG_OFS), 0);	
}

static __inline uint32_t dma_get_ch_enable(uint32_t base)
{
	return RD_WORD(base + DMA_REG_CH_EN_OFS);
}

static __inline void dma_ch_enable(uint32_t base, int chn)
{
	uint32_t reg;

	reg = (1<<chn) | (1<<(chn+8));

	WR_WORD((base + DMA_REG_CH_EN_OFS), reg);
}

static __inline void dma_ch_disable(uint32_t base, uint32_t ch_base, int chn)
{
	if (RD_WORD(base + DMA_REG_CH_EN_OFS) & (1 << chn)) {
		// force turn off dma (write 0)
		WR_WORD((base + DMA_REG_CH_EN_OFS), (1<<(chn+8)));
		while ((RD_WORD(base + DMA_REG_CH_EN_OFS) & (1 << chn)));
	}
}

static __inline uint32_t dma_intr_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_STAT);
}

static __inline uint32_t dma_intr_raw_tfr_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_RAW_TFR);
}

static __inline uint32_t dma_intr_tfr_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_STAT_TFR);
}

static __inline void dma_intr_tfr_clear(uint32_t base)
{
	WR_WORD((base + DMA_REG_INTR_CLR_TFR), 0xFF);
}

static __inline int dma_intr_ch_raw_tfr_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_RAW_TFR) >> chn) & 1);
}

static __inline int dma_intr_ch_tfr_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_STAT_TFR) >> chn) & 1);
}

static __inline void dma_intr_ch_tfr_clear(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_INTR_CLR_TFR), (1 << chn));
}

static __inline uint32_t dma_intr_raw_block_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_RAW_BLOCK);
}

static __inline uint32_t dma_intr_block_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_STAT_BLOCK);
}

static __inline void dma_intr_block_clear(uint32_t base)
{
	WR_WORD((base + DMA_REG_INTR_CLR_BLOCK), 0xFF);
}

static __inline int dma_intr_ch_raw_block_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_RAW_BLOCK) >> chn) & 1);
}

static __inline int dma_intr_ch_block_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_STAT_BLOCK) >> chn) & 1);
}

static __inline void dma_intr_ch_block_clear(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_INTR_CLR_BLOCK), (1 << chn));
}


static __inline uint32_t dma_intr_raw_src_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_RAW_SRC);
}

static __inline uint32_t dma_intr_src_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_STAT_SRC);
}

static __inline void dma_intr_src_clear(uint32_t base)
{
	WR_WORD((base + DMA_REG_INTR_CLR_SRC), 0xFF);
}

static __inline int dma_intr_ch_raw_src_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_RAW_SRC) >> chn) & 1);
}

static __inline int dma_intr_ch_src_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_STAT_SRC) >> chn) & 1);
}

static __inline void dma_intr_ch_src_clear(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_INTR_CLR_SRC), (1 << chn));
}

static __inline uint32_t dma_intr_raw_dst_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_RAW_DST);
}

static __inline uint32_t dma_intr_dst_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_STAT_DST);
}

static __inline void dma_intr_dst_clear(uint32_t base)
{
	WR_WORD((base + DMA_REG_INTR_CLR_DST), 0xFF);
}

static __inline int dma_intr_ch_raw_dst_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_RAW_DST) >> chn) & 1);
}

static __inline int dma_intr_ch_dst_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_STAT_DST) >> chn) & 1);
}

static __inline void dma_intr_ch_dst_clear(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_INTR_CLR_DST), (1 << chn));
}

static __inline uint32_t dma_intr_raw_err_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_RAW_ERR);
}

static __inline uint32_t dma_intr_err_status(uint32_t base)
{
	return RD_WORD(base + DMA_REG_INTR_STAT_ERR);
}

static __inline void dma_intr_err_clear(uint32_t base)
{
	WR_WORD((base + DMA_REG_INTR_CLR_ERR), 0xFF);
}

static __inline int dma_intr_ch_raw_err_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_RAW_ERR) >> chn) & 1);
}

static __inline int dma_intr_ch_err_status(uint32_t base, int chn)
{
	return ((RD_WORD(base + DMA_REG_INTR_STAT_ERR) >> chn) & 1);
}

static __inline void dma_intr_ch_err_clear(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_INTR_CLR_ERR), (1 << chn));
}

static __inline void dma_intr_raw_clear_all(uint32_t base)
{
	WR_WORD(base + DMA_REG_INTR_CLR_TFR, 0xFF);
	WR_WORD(base + DMA_REG_INTR_CLR_BLOCK, 0xFF);
	WR_WORD(base + DMA_REG_INTR_CLR_SRC, 0xFF);
	WR_WORD(base + DMA_REG_INTR_CLR_DST, 0xFF);
	WR_WORD(base + DMA_REG_INTR_CLR_ERR, 0xFF);

	return;
}

static __inline void dma_intr_clr(uint32_t base, int chn, uint32_t status)
{
	if (status & DMA_IT_STATUS_TFR) {
		WR_WORD((base + DMA_REG_INTR_CLR_TFR), (1 << chn)); 		
	}

	if (status & DMA_IT_STATUS_BLOCK) {
		WR_WORD((base + DMA_REG_INTR_CLR_BLOCK), (1 << chn)); 		
	}

	if (status & DMA_IT_STATUS_SRCT) {
		WR_WORD((base + DMA_REG_INTR_CLR_SRC), (1 << chn)); 		
	}

	if (status & DMA_IT_STATUS_DSTT) {
		WR_WORD((base + DMA_REG_INTR_CLR_DST), (1 << chn)); 		
	}

	if (status & DMA_IT_STATUS_ERR) {
		WR_WORD((base + DMA_REG_INTR_CLR_ERR), (1 << chn)); 		
	}
}

static __inline void dma_intr_mask(uint32_t base, int chn, uint32_t mask)
{

	if (mask & DMA_IT_STATUS_TFR) {
		WR_WORD((base + DMA_REG_INTR_MASK_TFR), (1<<(chn+8))); 		
	}

	if (mask & DMA_IT_STATUS_BLOCK) {
		WR_WORD((base + DMA_REG_INTR_MASK_BLOCK), (1<<(chn+8))); 		
	}

	if (mask & DMA_IT_STATUS_SRCT) {
		WR_WORD((base + DMA_REG_INTR_MASK_SRC), (1<<(chn+8))); 		
	}

	if (mask & DMA_IT_STATUS_DSTT) {
		WR_WORD((base + DMA_REG_INTR_MASK_DST), (1<<(chn+8))); 		
	}

	if (mask & DMA_IT_STATUS_ERR) {
		WR_WORD((base + DMA_REG_INTR_MASK_ERR), (1<<(chn+8))); 		
	}
}

static __inline void dma_intr_unmask(uint32_t base, int chn, uint32_t mask)
{

	if (mask & DMA_IT_STATUS_TFR) {
		WR_WORD((base + DMA_REG_INTR_MASK_TFR), ((1<<chn) | (1<<(chn+8)))); 		
	}

	if (mask & DMA_IT_STATUS_BLOCK) {
		WR_WORD((base + DMA_REG_INTR_MASK_BLOCK), ((1<<chn) | (1<<(chn+8)))); 		
	}

	if (mask & DMA_IT_STATUS_SRCT) {
		WR_WORD((base + DMA_REG_INTR_MASK_SRC), ((1<<chn) | (1<<(chn+8)))); 		
	}

	if (mask & DMA_IT_STATUS_DSTT) {
		WR_WORD((base + DMA_REG_INTR_MASK_DST), ((1<<chn) | (1<<(chn+8)))); 		
	}

	if (mask & DMA_IT_STATUS_ERR) {
		WR_WORD((base + DMA_REG_INTR_MASK_ERR), ((1<<chn) | (1<<(chn+8)))); 		
	}
}

static __inline void dma_sw_src_req(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_SRC_SW_REQ), ((1<<chn)|(1<<(8+chn))));
}

static __inline void dma_sw_dst_req(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_DST_SW_REQ), ((1<<chn)|(1<<(8+chn))));
}

static __inline void dma_sw_src_sreq(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_SRC_SW_SGLREQ), ((1<<chn)|(1<<(8+chn))));
}

static __inline void dma_sw_dst_sreq(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_DST_SW_SGLREQ), ((1<<chn)|(1<<(8+chn))));
}

static __inline void dma_sw_src_lreq(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_LST_SRC_SW_REQ), ((1<<chn)|(1<<(8+chn))));
}

static __inline void dma_sw_dst_lreq(uint32_t base, int chn)
{
	WR_WORD((base + DMA_REG_LST_DST_SW_REQ), ((1<<chn)|(1<<(8+chn))));
}

static __inline void dma_ch_set_sar(uint32_t ch_base, uint32_t addr)
{
	WR_WORD(ch_base + DMA_CH_REG_SAR_OFS, addr);
}

static __inline void dma_ch_set_dar(uint32_t ch_base, uint32_t addr)
{
	WR_WORD(ch_base + DMA_CH_REG_DAR_OFS, addr);
}

static __inline void dma_ch_intr_enable(uint32_t ch_base)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg |= DMA_CH_CTL_INT_EN;

	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_intr_disable(uint32_t ch_base)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_INT_EN;
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_dst_width(uint32_t ch_base, int data_width)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_DST_TR_WIDTH;
	reg |= (data_width & 0x7) << 1;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_src_width(uint32_t ch_base, int data_width)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_SRC_TR_WIDTH;
	reg |= (data_width & 0x7) << 4;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_dst_inc(uint32_t ch_base, int dinc)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_DINC;
	reg |= (dinc & 0x3) << 7;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_src_inc(uint32_t ch_base, int sinc)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_SINC;
	reg |= (sinc & 0x3) << 9;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_dst_msize(uint32_t ch_base, int msize)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_DEST_MSIZE;
	reg |= (msize & 0x7) << 11;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_src_msize(uint32_t ch_base, int msize)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_SRC_MSIZE;
	reg |= (msize & 0x7) << 14;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_tran_type_fc(uint32_t ch_base, int tt_fc)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_TT_FC;
	reg |= (tt_fc & 0x7) << 20;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_dst_ahb_master(uint32_t ch_base, int dms)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_DMS;
	reg |= (dms & 0x3) << 23;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_src_ahb_master(uint32_t ch_base, int sms)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	reg &= ~DMA_CH_CTL_SMS;
	reg |= (sms & 0x3) << 25;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_llp_dst_en(uint32_t ch_base, int en)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	if (en)
		reg |= DMA_CH_CTL_LLP_DST_EN;
	else
		reg &= ~DMA_CH_CTL_LLP_DST_EN;

	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_llp_src_en(uint32_t ch_base, int en)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS);
	if (en)
		reg |= DMA_CH_CTL_LLP_SRC_EN;
	else
		reg &= ~DMA_CH_CTL_LLP_SRC_EN;

	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS, reg);
}

static __inline void dma_ch_tran_block_size(uint32_t ch_base, int block_ts)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS + 4);
	reg &= ~DMA_CH_CTL_BLOCK_TS;
	reg |= block_ts;  
	WR_WORD(ch_base + DMA_CH_REG_CTL_OFS + 4, reg);
}

static __inline uint32_t dma_ch_get_tran_block_size(uint32_t ch_base)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CTL_OFS + 4);
	reg &= DMA_CH_CTL_BLOCK_TS;
	return reg;
}

static __inline void dma_ch_set_prio(uint32_t ch_base, int priority)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);
	reg &= ~DMA_CH_CFG_PRIOR;
	reg |= (priority & 0x7) << 5;
	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
}

static __inline int dma_ch_get_prio(uint32_t ch_base)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);
	reg >>= 5;
	reg &= 0x7;

	return (int)reg;	
}

static __inline int dma_ch_fifo_empty(uint32_t ch_base)
{
	return (((RD_WORD(ch_base + DMA_CH_REG_CFG_OFS) & DMA_CH_CFG_FIFO_EMPTY) ? 1 : 0));
}

static __inline void dma_ch_suspend(uint32_t ch_base)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);

	reg |= DMA_CH_CFG_SUSP;

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
	
	while (!dma_ch_fifo_empty(ch_base));
}

static __inline void dma_ch_hs_dest(uint32_t ch_base, int hw)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);

	if (hw) {
		reg &= ~DMA_CH_CFG_HS_SEL_DST;
	} else {
		reg |= DMA_CH_CFG_HS_SEL_DST;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
}

static __inline void dma_ch_hs_src(uint32_t ch_base, int hw)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);

	if (hw) {
		reg &= ~DMA_CH_CFG_HS_SEL_SRC;
	} else {
		reg |= DMA_CH_CFG_HS_SEL_SRC;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
}

static __inline void dma_ch_hs_pol_dest(uint32_t ch_base, int active_high)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);

	if (active_high) {
		reg &= ~DMA_CH_CFG_DST_HS_POL;
	} else {
		reg |= DMA_CH_CFG_DST_HS_POL;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
}

static __inline void dma_ch_hs_pol_src(uint32_t ch_base, int active_high)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);

	if (active_high) {
		reg &= ~DMA_CH_CFG_SRC_HS_POL;
	} else {
		reg |= DMA_CH_CFG_SRC_HS_POL;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
}

static __inline void dma_ch_sar_reload(uint32_t ch_base, int reload)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);

	if (reload) {
		reg |= DMA_CH_CFG_RELOAD_SRC;
	} else {
		reg &= ~DMA_CH_CFG_RELOAD_SRC;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
}

static __inline void dma_ch_dest_reload(uint32_t ch_base, int reload)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS);

	if (reload) {
		reg |= DMA_CH_CFG_RELOAD_DST;
	} else {
		reg &= ~DMA_CH_CFG_RELOAD_DST;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS, reg);
}

static __inline void dma_ch_fc(uint32_t ch_base, int pre_fetch)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4);

	if (pre_fetch) {
		reg &= ~DMA_CH_CFG_FCMODE;
	} else {
		reg |= DMA_CH_CFG_FCMODE;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4, reg);
}

static __inline void dma_ch_fifo(uint32_t ch_base, int single)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4);

	if (single) {
		reg &= ~DMA_CH_CFG_FIFO_MODE;
	} else {
		reg |=~DMA_CH_CFG_FIFO_MODE;
	}

	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4, reg);
}

static __inline void dma_ch_src_periph_id(uint32_t ch_base, int id)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4);

	reg &= ~DMA_CH_CFG_SRC_PER;
	reg |= (id << 7);
	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4, reg);
}

static __inline void dma_ch_dest_periph_id(uint32_t ch_base, int id)
{
	uint32_t reg = RD_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4);

	reg &= ~DMA_CH_CFG_DEST_PER;
	reg |= (id << 11);
	WR_WORD(ch_base + DMA_CH_REG_CFG_OFS + 4, reg);
}

static __inline void dma_ch_llp(uint32_t ch_base, uint32_t addr)
{
	WR_WORD(ch_base + DMA_CH_REG_LLP_OFS, addr);
}

static __inline uint32_t dma_ch_get_llp(uint32_t ch_base)
{
	return (RD_WORD(ch_base + DMA_CH_REG_LLP_OFS) & 0xFFFFFFFC);
}


/*
 * Inline Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Open the DMA driver
 *
 * @param[in] id					The DMAI ID, @see enum dma_id.   
 * @param[in] periph_id		The peripheral ID, @see enum dma0_periph_id and @see dma1_periph_id.   
 * @param[in] sar					The source address of the DMA trandfer.
 * @param[in] dar					The destination address of the DMA trandfer.
 * @param[in] size				The total transfer size.
 * @param[in] sdw				The source data width, @see enum dma_tr_width.
 * @param[in] ddw				The destination data width, @see enum dma_tr_width.
 * @param[in] sai					The source address changes, @see enum dma_addr_chg.
 * @param[in] dai					The destination address changes, @see enum dma_addr_chg.
 * @param[in] sbz					The source burst size, @see enum dma_tr_msize.
 * @param[in] dbz					The destination burst size, @see enum dma_tr_msize.
 * @param[in] sahb				The source AHB master, @see enum dma_ahb_master.
 * @param[in] dahb				The destination AHB master, @see enum dma_ahb_master.
 * @param[in] ttype				The DMA transfer type, @see enum dma_ttype.
 *
 * @return Handle to the DMA driver, NULL means open failed. 
 ****************************************************************************************
 */

//void *hal_dma_open(int id, int periph_id, uint32_t sar, uint32_t dar, int size, int sdw, int ddw, int sai, int dai, int sbz, int dbz, int sahb, int dahb, int ttype);
void *hal_dma_open(int id, int periph_id, int sai, int dai, int sahb, int dahb, int ttype, int prio);

/**
 ****************************************************************************************
 * @brief Open a Software Control DMA driver 
 *
 * @param[in] id					The DMAI ID, @see enum dma_id.   
 * @param[in] sar					The source address of the DMA trandfer.
 * @param[in] dar					The destination address of the DMA trandfer.
 * @param[in] size				The total transfer size.
 * @param[in] sdw				The source data width, @see enum dma_tr_width.
 * @param[in] ddw				The destination data width, @see enum dma_tr_width.
 * @param[in] sai					The source address changes, @see enum dma_addr_chg.
 * @param[in] dai					The destination address changes, @see enum dma_addr_chg.
 * @param[in] sbz					The source burst size, @see enum dma_tr_msize.
 * @param[in] dbz					The destination burst size, @see enum dma_tr_msize.
 * @param[in] sahb				The source AHB master, @see enum dma_ahb_master.
 * @param[in] dahb				The destination AHB master, @see enum dma_ahb_master.
 * @param[in] ttype				The DMA transfer type, @see enum dma_ttype.
 *
 * @return Handle to the DMA driver, NULL means open failed. 
 ****************************************************************************************
 */
void *hal_dma_soft_open(int id, uint32_t sar, uint32_t dar, int size, int sdw, int ddw, int sai, int dai, int sbz, int dbz, int sahb, int dahb, int ttype);

/**
 ****************************************************************************************
 * @brief Close the DMA driver
 *
 * @param[in] hdl		The handle from the previous "open" function.   
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */

void hal_dma_close(void *hdl);

/**
 ****************************************************************************************
 * @brief (Software Control) DMA  channel enable
 *
 * @param[in] hdl				The handle from the previous "open" function.   
 * @param[in] *arg			The pointer to the caller's argument.
 * @param[in] *callback	The call back function for DMA complete.
 *
 * @return DMA_ERR_OK if successful, otherwise DMA failed. @see enum dma_error_code. 
 ****************************************************************************************
 */

int hal_dma_ch_enable(void *hdl, void *arg, void (*callback)(int id, void *arg, uint32_t status));
int hal_dma_soft_ch_enable(void *hdl, void *arg, void (*callback)(int id, void *arg, uint32_t status));

/**
 ****************************************************************************************
 * @brief DMA channel disable
 *
 * @param[in] hdl				The handle from the previous "open" function.   
 *
 * @return DMA_ERR_OK if successful, otherwise DMA failed. @see enum dma_error_code. 
 ****************************************************************************************
 */

int hal_dma_ch_disable(void *hdl);

/**
 ****************************************************************************************
 * @brief DMA change source or destination buffer address
 * @Note: This function is provided to quickly switch buffer without re-program all the DMA register
 *
 * @param[in] hdl					The handle from the previous "open" function.   
 * @param[in] sa_da				Flag to indicate which buffer address to change, 1: Source address, 0: Destination address   
 * @param[in] buffer_addr		New buffer address.   
 *
 * @return DMA_ERR_OK if successful, otherwise DMA failed. @see enum dma_error_code. 
 ****************************************************************************************
 */

int hal_dma_switch_buffer(void *hdl, int sa_da, uint32_t buffer_addr);

/**
 ****************************************************************************************
 * @brief DMA controlled by software to transfer data from or to peripheral
 *
 * @param[in] hdl					The handle from the previous "open" function.   
 *
 * @return DMA_ERR_OK if successful, otherwise DMA failed. @see enum dma_error_code. 
 ****************************************************************************************
 */
int hal_dma_src_req(void *hdl);
int hal_dma_dst_req(void *hdl);

/**
 ****************************************************************************************
 * @brief Get DMA transfer length
 *
 * @param[in] hdl					The handle from the previous "open" function.   
 *
 * @return the length of DMA transfer bytes 
 ****************************************************************************************
 */
uint32_t hal_dma_get_tran_len(void *hdl);


/**
 ****************************************************************************************
 * @brief Add DMA each block descriptor for block chaining
 * @Note: Call this function before start DMA block chaining
 *
 * @param[in] ba					Block address. This should be system memory address with 4 bytes alignment   
 * @param[in] next_ba			Next block address.    
 * @param[in] dar					The destination address of the DMA trandfer.
 * @param[in] sar					The source address of the DMA trandfer.
 * @param[in] dtw				The destination transfer data width, @see enum dma_tr_width.
 * @param[in] stw				The source transfer data width, @see enum dma_tr_width.
 * @param[in] dai					The destination address changes, @see enum dma_addr_chg.
 * @param[in] sai					The source address changes, @see enum dma_addr_chg.
 * @param[in] dbz					The destination burst size, @see enum dma_tr_msize.
 * @param[in] sbz					The source burst size, @see enum dma_tr_msize.
 * @param[in] dms				The destination AHB master, @see enum dma_ahb_master.
 * @param[in] sms				The source AHB master, @see enum dma_ahb_master.
 * @param[in] tt_fc\				The DMA transfer type and flow control, @see enum dma_ttype.
 * @param[in] size				The total transfer size.
 *
 * @return the length of DMA transfer bytes 
 ****************************************************************************************
 */
int hal_dma_add_mb_item(uint32_t ba, uint32_t next_ba, uint32_t dar, uint32_t sar,  int dtw, int stw, int dai, int sai, int dbz, int sbz, int dms, int sms, int tt_fc, int size);

/**
 ****************************************************************************************
 * @brief DMA block chaining open
 *
 * @param[in] id						The DMAI ID, @see enum dma_id.   
 * @param[in] bd_addr				FIrst block descriptor base address.    
 * @param[in] bda_nb				Number of block descriptor    
 * @param[in] src_periph_id		The peripheral ID, @see enum dma0_periph_id and @see dma1_periph_id.   
 * @param[in] dst_periph_id		The peripheral ID, @see enum dma0_periph_id and @see dma1_periph_id.   
 *
 * @return the length of DMA transfer bytes 
 ****************************************************************************************
 */
void *hal_dma_mb_open(int id, uint32_t bd_addr, int bda_nb, int src_periph_id, int dst_periph_id);


/**
 ****************************************************************************************
 * @brief DMA link list driver open
 *
 * @param[in] hdl					The handle from the previous "open" function.   
 * @param[in] arg					Arguement pass to call back.   
 * @param[in] callback			Call back after each block finish   
 *
 * @return DMA_ERR_OK if successful, otherwise DMA failed. @see enum dma_error_code. 
 ****************************************************************************************
 */
int hal_dma_mb_ch_enable(void *hdl, void *arg, void (*callback)(int id, void *arg, uint32_t status));
int hal_dma_mb_ch_enable_no_int(void *hdl);


/**
 ****************************************************************************************
 * @brief DMA link list driver open
 *
 * @param[in] hdl					The handle from the previous "open" function.   
 * @param[in] baddr				Block address to stop.   
 *
 * @return DMA_ERR_OK if successful, otherwise DMA failed. @see enum dma_error_code. 
 ****************************************************************************************
 */
int hal_dma_mb_ch_disable(void *hdl, uint32_t baddr);
int hal_dma_mb_ch_disable_no_int(void *hdl);


/**
 ****************************************************************************************
 * @brief DMA Audio block's PCM data to memory 
 * @Note: This function is not responsible for setting up Audio Block's PCM output.
 *
 * @param[in] buffer0			Ping buffer    
 * @param[in] buffer1			Pong buffer    
 * @param[in] buffer_len 		Ping/Pong buffer size in 4 bytes unit	
 * @param[in] arg					Pointer to the user's argument to pass to DMA ping/pong transfer done call back function 
 * @param[in] callback			Pointer to the user's call back function for the DMA ping/pong transfer done.
 *
 * @return DMA_PCM_ERR_OK if successful, otherwise DMA failed @see enum dma_pcm_error_code. 
 ****************************************************************************************
 */

int hal_dma_pcm_en(void *buffer0, void *buffer1, uint16_t buffer_len, void *arg, void (*callback)(void * arg, int id, uint32_t status));
int hal_dma_pcm_dis(void);

int hal_dma_set_sar(void *hdl, uint32_t sar);
int hal_dma_set_dar(void *hdl, uint32_t dar);
int hal_dma_set_tran_block_size(void *hdl, uint32_t size);

int hal_dma_ch_enable_no_int(void *hdl);
int hal_dma_ch_disable_no_int(void *hdl);
int hal_dma_poll_tran_done(void *hdl, int max_poll_nb);

int hal_dma_set_dw(void *hdl, int sdw, int ddw);
int hal_dma_set_bz(void *hdl, int sbz, int dbz);



/// @} HAL_DMA

#endif	// HAL_DMA_H
