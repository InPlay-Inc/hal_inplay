#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file hal_smem.c
 *
 * @brief Share memory driver implementation file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "in_arm.h"
#include "in_mmap.h"
#include "in_irq.h"
#include "in_debug.h"
#include "in_compile.h"
#include "./hal/hal_clk.h"
#include "./hal/hal_power.h"
#include "./hal/hal_smem.h"
#include "./hal/hal_global.h"
void hal_smem_init(void)
{
	uint32_t size, offset;

	hal_clk_smem_mux(CFG_SMEM_CLK_MUX);
	hal_clk_sm_en(1);

	smem_enable();

	/// BLE shared memory
	size = CFG_SMEM_BLE & 0xFFFF;
	offset = (CFG_SMEM_BLE>>16) & 0xFFFF;
	if (size) {
		smem_ble_en(1, offset);		
	} else {
		//smem_ble_en(0, 0);		
	}
	/// IPMAC shared memory
	size = CFG_SMEM_IPMAC & 0xFFFF;
	offset = (CFG_SMEM_IPMAC>>16) & 0xFFFF;
	if (size) {
		smem_ipmac_en(1, offset);		
	} else {
		//smem_ipmac_en(0, 0);		
	}
	size = (CFG_SMEM_BLE & 0xFFFF) + (CFG_SMEM_IPMAC & 0xFFFF) + (CFG_SMEM_SADC & 0xFFFF) + (CFG_SMEM_AHB_TRIG & 0xFFFF);
	offset = (CFG_SMEM_BLE>>16) & 0xFFFF;
	if (size) {
		smem_ble1_en(1, offset);		
	} else {
		//smem_ble1_en(0, 0);		
	}

	/// Antena control Rx data shared memory
	size = CFG_SMEM_ANT_RX_DATA & 0xFFFF;
	offset = (CFG_SMEM_ANT_RX_DATA>>16) & 0xFFFF;
	if (size) {
		smem_antena_rx_en(1, offset);		
	} else {
		//smem_antena_rx_en(0, 0);		
	}

	/// Audio Rx channel shared memory
	size = CFG_SMEM_AUDIO_RX & 0xFFFF;
	offset = (CFG_SMEM_AUDIO_RX>>16) & 0xFFFF;
	if (size) {
		smem_audio_rx_en(1, offset);		
	} else {
		//smem_audio_rx_en(0, 0);		
	}

	/// Audio Tx channel shared memory
	size = CFG_SMEM_AUDIO_TX & 0xFFFF;
	offset = (CFG_SMEM_AUDIO_TX>>16) & 0xFFFF;
	if (size) {
		smem_audio_tx_en(1, offset);		
	} else {
		//smem_audio_tx_en(0, 0);		
	}

	/// Sensor ADC data storage shared memory
	size = CFG_SMEM_SADC & 0xFFFF;
	offset = (CFG_SMEM_SADC>>16) & 0xFFFF;
	if (size) {
		smem_sadc_en(1, offset);	
		
	} else {
		//smem_sadc_en(0, 0);		
	}

	/// AHB trigger command storage shared memory
	size = CFG_SMEM_AHB_TRIG & 0xFFFF;
	offset = (CFG_SMEM_AHB_TRIG>>16) & 0xFFFF;
	if (size) {
		smem_ahb_trig_en(1, offset);		
	} else {
		//smem_ahb_trig_en(0, 0);		
	}

	/// Timer emit shared memory
	size = CFG_SMEM_TMR_EMIT & 0xFFFF;
	offset = (CFG_SMEM_TMR_EMIT>>16) & 0xFFFF;
	if (size) {
		smem_tmr_emit_en(1, offset);		
	} else {
		//smem_tmr_emit_en(0, 0);		
	}

	/// Timer capture shared memory
	size = CFG_SMEM_TMR_CAP & 0xFFFF;
	offset = (CFG_SMEM_TMR_CAP>>16) & 0xFFFF;
	if (size) {
		smem_tmr_cap_en(1, offset);		
	} else {
		//smem_tmr_cap_en(0, 0);		
	}

}

void hal_smem_retn(uint32_t offset, uint32_t size)
{
	uint32_t retn;

	if (offset < (4 * 1024)) {
		retn = PM_RETN_EM_4K_A; 	
		if (size >= (4*1024))
			retn |= PM_RETN_EM_4K_B;
		if (size >= (8*1024))
			retn |= PM_RETN_EM_8K_A;
		if (size >= (16*1024))
			retn |= PM_RETN_EM_8K_B;
		if (size >= (24*1024))
			retn |= PM_RETN_EM_16K;
	} else if ((offset >= (4 * 1024)) && (offset < (8 * 1024))) {
		retn = PM_RETN_EM_4K_B; 	
		if (size >= (4*1024))
			retn |= PM_RETN_EM_8K_A;
		if (size >= (12*1024))
			retn |= PM_RETN_EM_8K_B;
		if (size >= (20*1024))
			retn |= PM_RETN_EM_16K;
	} else if ((offset >= (8 * 1024)) && (offset < (16 * 1024))) {
		retn = PM_RETN_EM_8K_A; 	
		if (size >= (8*1024))
			retn |= PM_RETN_EM_8K_B;
		if (size >= (16*1024))
			retn |= PM_RETN_EM_16K;
	} else if ((offset >= (16 * 1024)) && (offset < (24 * 1024))) {
		retn = PM_RETN_EM_8K_B; 	
		if (size >= (8*1024))
			retn |= PM_RETN_EM_16K;
	} else if ((offset >= (24 * 1024)) && (offset < (40 * 1024))) {
		retn = PM_RETN_EM_16K;
	}

	aon_em_reten(retn);
}

uint32_t hal_smem_buf_start_addr(void)
{
    return SMEM_APB_BASE + CFG_SMEM_USED_SIZE;
}
uint32_t hal_smem_buf_end_addr(void)
{
    return SMEM_APB_BASE+0xA000;
}

#if CFG_PM_EN

static int first_time = 1;
static uint32_t smem_misc_reg = 0; 
static uint32_t smem_ctrl0_reg = 0; 
static uint32_t smem_ctrl4_reg = 0;
static uint32_t smem_ctrl2_reg = 0;
static uint32_t smem_ctrl3_reg = 0;
static uint32_t smem_ctrl5_reg = 0;
static uint32_t smem_ctrl6_reg = 0;


void RAM_PM hal_smem_pm_suspend(void)
{
	if (first_time) {
		first_time = 0;
		smem_misc_reg = RD_WORD(SHAREDMEM_REG_MISC_CTRL);
		smem_ctrl0_reg = RD_WORD(SHAREDMEM_REG_CLNT0_CTRL0);
		smem_ctrl4_reg = RD_WORD(SHAREDMEM_REG_CLNT4_CTRL0);
		smem_ctrl2_reg = RD_WORD(SHAREDMEM_REG_CLNT2_CTRL0);
		smem_ctrl3_reg = RD_WORD(SHAREDMEM_REG_CLNT3_CTRL0);
		smem_ctrl5_reg = RD_WORD(SHAREDMEM_REG_CLNT5_CTRL0);
		smem_ctrl6_reg = RD_WORD(SHAREDMEM_REG_CLNT6_CTRL0);
	}
}


void RAM_PM hal_smem_pm_resume(void)
{
	if (smem_misc_reg != SHAREDMEM_REG_MISC_CTRL_DEFAULT)
		WR_WORD(SHAREDMEM_REG_MISC_CTRL, smem_misc_reg);
	if (smem_ctrl0_reg != SHAREDMEM_REG_CLNT0_CTRL0_DEFAULT)
		WR_WORD(SHAREDMEM_REG_CLNT0_CTRL0, smem_ctrl0_reg);
	if (smem_ctrl4_reg != SHAREDMEM_REG_CLNT4_CTRL0_DEFAULT)
		WR_WORD(SHAREDMEM_REG_CLNT4_CTRL0, smem_ctrl4_reg);
	if (smem_ctrl2_reg != SHAREDMEM_REG_CLNT2_CTRL0_DEFAULT)
		WR_WORD(SHAREDMEM_REG_CLNT2_CTRL0, smem_ctrl2_reg);
	if (smem_ctrl3_reg != SHAREDMEM_REG_CLNT3_CTRL0_DEFAULT)
		WR_WORD(SHAREDMEM_REG_CLNT3_CTRL0, smem_ctrl3_reg);
	if (smem_ctrl5_reg != SHAREDMEM_REG_CLNT5_CTRL0_DEFAULT)
		WR_WORD(SHAREDMEM_REG_CLNT5_CTRL0, smem_ctrl5_reg);
	if (smem_ctrl6_reg != SHAREDMEM_REG_CLNT6_CTRL0_DEFAULT)
		WR_WORD(SHAREDMEM_REG_CLNT6_CTRL0, smem_ctrl6_reg);
}

#endif
