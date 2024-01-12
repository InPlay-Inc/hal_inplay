#if !(CFG_BUILD_ROM)
#include "in_config.h"
#endif	// !CFG_BUILD_ROM */ 

/**
 ****************************************************************************************
 *
 * @file hal_clk.c
 *
 * @brief Platform clock functions  
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
#include "in_ana.h"
#include "in_rom_if.h"
#include "in_compile.h"
#include "./hal/hal_clk.h"
#include "./hal/hal_gpio.h"
#include "./hal/hal_uart.h"
#include "./hal/hal_spi.h"
#include "./hal/hal_i2c.h"
#include "./hal/hal_i2s.h"
#include "./hal/hal_pwm.h"
#include "./hal/hal_power.h"
#include "./hal/hal_timer.h"
#include "./hal/hal_wdt.h"

/*
 * Global Variables
 ****************************************************************************************
 */

typedef struct {
	int ready;
	uint32_t clk_32k;	
	float clk0;	
} clk_32k_t;

#if !(CFG_BUILD_ROM)
static volatile clk_32k_t g_lpc = {0};
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * Calibration Isr 
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
_IRQ void Calib_Handler(void *arg) __attribute__((section("ISR")));
#endif	// !CFG_BUILD_ROM */ 
_IRQ void Calib_Handler(void *arg)
{
#if !CFG_FPGA
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	clk_32k_t *pd = (clk_32k_t *)pif->clk->lpc;
	uint32_t lpc_ppm_offset_adjusted  = pif->sys->cfg_lpc_ppm_offset;
	uint32_t cal_result;
	float cal_result_f;
	uint32_t corr;

	clk_32k_calib_done_clear();  
	cal_result = clk_32k_calib_get();
	cal_result_f = cal_result - cal_result/1000000.f * lpc_ppm_offset_adjusted;

	if (pd->clk0 == 0)
		pd->clk0 = cal_result_f;
	else 
		pd->clk0 = pd->clk0 * 0.875f + cal_result_f * 0.125f;

	pd->clk_32k = (uint32_t) ((1048576000000.0f / pd->clk0) +0.5f);
	corr = ((uint32_t)(pd->clk0)) >> 4;
	clk_32k_hw_timing_corr(corr);
	
	pd->ready = 1;

	/// inplay systick ratio
	if (pif->sys->os_systick == 0) {
		float clk_systick = pif->clk->hal_clk_systick_get();
		float clk_32k = pd->clk_32k;
		float nb_cycles = clk_systick/clk_32k;
		uint32_t int_part = (uint32_t)nb_cycles;
		uint32_t frac_part = (uint32_t)((nb_cycles - int_part) * (1 << 12) + 0.5f);
		if (frac_part == (1 << 13)) {
			frac_part = 0;
			int_part += 1;
		}
		tmr_systick_clk_ratio(frac_part, int_part);
	}

	// kick start calibration again
	if (!pif->sys->cfg_rtc_en) {
		pif->clk->hal_clk_calib_32k(6);
	} else {
		if (clk_root_get() == 64000000) { 
			clk_xo_to_digi_en(0);
		}
	}
#endif	// !CFG_FPGA
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

/*
 * Timer Interrupt Call Back
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
static void rtc_call_back(void *arg) __attribute__((section("ISR")));
static void rtc_call_back(void *arg)
{
#if !CFG_SIM
#if !CFG_FPGA
#if !CFG_LPC_CALIB
	clk_32k_t *pd = (clk_32k_t *)arg;
#endif

	clk_rtc_cap(CFG_RTC_CAP);

	/// Switch to RTC
	clk_32k_rtc();
	delay_us(100);

#if CFG_LPC_CALIB
	/// Turn on calibration clock
	if (clk_root_get() == 64000000)
		clk_xo_to_digi_en(1);
	/// Enable RTC calibration
	hal_clk_calib_32k(6);
#else
	/// This is a call back from timer (after 1 second) which indicate RTC should be ready.
	pd->ready = 1; 

#if !CFG_NO_OS
	/// inplay systick ratio
#if (OS_SYSTICK == 0)
	float clk_systick = hal_clk_systick_get();
	float clk_32k = pd->clk_32k;
	float nb_cycles = clk_systick/clk_32k;
	uint32_t int_part = (uint32_t)nb_cycles;
	uint32_t frac_part = (uint32_t)((nb_cycles - int_part) * (1 << 12) + 0.5f);
	if (frac_part == (1 << 13)) {
		frac_part = 0;
		int_part += 1;
	}
	tmr_systick_clk_ratio(frac_part, int_part);
#endif
#endif	// !CFG_NO_OS

#endif	// CFG_LPC_CALIB
	hal_timer_stop(TMR2_ID);
	if (CFG_RTC_EN) {
		RTC_timer_start();
	}
#endif	// !CFG_FPGA
#endif	// !CFG_SIM
}
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * APIs
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
uint32_t hal_clk_d0_get(void) __attribute__((section("RAM_PM")));
#endif	// !CFG_BUILD_ROM */ 
uint32_t hal_clk_d0_get(void)
{
#if !CFG_FPGA
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);

	uint32_t clk = hal_clk_d2_get();
	uint32_t mux = clk_d0_mux_get();

	if (clk == 64000000)
		clk = 32000000;
	else if (clk == 8000000)
		clk = 8000000;
	else {
		if (mux == CLK_D0_DIV2)
			clk /= 2;
	}

	return clk;
#else
	return 32000000;
#endif	// !CFG_FPGA

}

uint32_t hal_clk_d1_get(void)
{
#if !CFG_FPGA
	uint32_t clk = clk_root_get();
	uint32_t mux = clk_d1_mux_get();

	if (mux <= CLK_D1_DIV2)
		clk /= 2;
	else if (mux == CLK_D1_DIV4)
		clk /= 4;
	else if (mux == CLK_D1_DIV8)
		clk /= 8;
#else
	uint32_t clk = 16000000;
#endif	// !CFG_FPGA

	return clk;
}

#if !(CFG_BUILD_ROM)
uint32_t hal_clk_d2_get(void) __attribute__((section("RAM_PM")));
#endif	// !CFG_BUILD_ROM */ 
uint32_t RAM_PM hal_clk_d2_get(void)
{
#if !CFG_FPGA
	uint32_t clk = clk_root_get();
	uint32_t mux = clk_d2_mux_get();
	if (mux == CLK_D2_DIV1)
		clk /= 1;
	else if (mux == CLK_D2_DIV2)
		clk /= 2;
	else if (mux <= CLK_D2_DIV4)
		clk /= 4;
#else
	uint32_t clk = 32000000;
#endif	// !CFG_FPGA

	return clk;
}

uint32_t hal_clk_cpu_get(void)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);

	return pif->clk->hal_clk_d2_get();
}

int hal_clk_tmr_mux(int tmr_id, int mux)
{
#if !CFG_FPGA

	if (tmr_id >= TMR_ID_MAX)
		return CLK_ERR_INVALID_PARAM;

	if (mux > CLK_TIM_DIV2) 
		return CLK_ERR_INVALID_PARAM;

	if (tmr_id == TMR0_ID) {
		clk_tmr0_mux(mux);
	} else if (tmr_id == TMR1_ID) {
		clk_tmr1_mux(mux);
	} else if (tmr_id == TMR2_ID) {
		clk_tmr2_mux(mux);
	} else if (tmr_id == TMR3_ID) {
		clk_tmr3_mux(mux);
	} else if (tmr_id == TMR4_ID) {
		clk_tmr4_mux(mux);
	} else if (tmr_id == TMR5_ID) {
		clk_tmr5_mux(mux);
	} else if (tmr_id == TMR6_ID) {
		clk_tmr6_mux(mux);
	} else if (tmr_id == TMR7_ID) {
		clk_tmr7_mux(mux);
	} else if (tmr_id == TMR8_ID) {
		clk_tmr8_mux(mux);
	} else if (tmr_id == TMR9_ID) {
		clk_tmr9_mux(mux);
	}



#endif	// !CFG_FPGA
	
	return CLK_ERR_NO_ERROR;
}

uint32_t hal_clk_tmr_get(int tmr_id) __attribute__((section("RAM_PM")));
uint32_t hal_clk_tmr_get(int tmr_id)
{
#if !CFG_FPGA
	if (tmr_id >= TMR_ID_MAX)
		return 0;

	int mux;
	if (tmr_id == TMR0_ID) {
		mux = clk_tmr0_mux_get();
	} else if (tmr_id == TMR1_ID) {
		mux = clk_tmr1_mux_get();
	} else if (tmr_id == TMR2_ID) {
		mux = clk_tmr2_mux_get();
	} else if (tmr_id == TMR3_ID) {
		mux = clk_tmr3_mux_get();
	} else if (tmr_id == TMR4_ID) {
		mux = clk_tmr4_mux_get();
	} else if (tmr_id == TMR5_ID){
		mux = clk_tmr5_mux_get();
	} else if (tmr_id == TMR6_ID){
		mux = clk_tmr6_mux_get();
	} else if (tmr_id == TMR7_ID){
		mux = clk_tmr7_mux_get();
	} else if (tmr_id == TMR8_ID){
		mux = clk_tmr8_mux_get();
	} else if (tmr_id == TMR9_ID){
		mux = clk_tmr9_mux_get();
	} 

	uint32_t clk = clk_root_get();
	if (mux <= CLK_TIM_DIV4)
		clk /= 4;
	else if (mux == CLK_TIM_DIV8)
		clk /= 8;
	else if (mux == CLK_TIM_DIV2)
		clk /= 2;
#else
	uint32_t clk = 16000000;
#endif	// !CFG_FPGA

	return clk;
}

int hal_clk_smem_mux(int mux)
{
#if !CFG_FPGA
	if (mux > CLK_SMEM_DIV8)
		return CLK_ERR_INVALID_PARAM;

	clk_smem_mux(mux);
#endif	// !CFG_FPGA
	
	return CLK_ERR_NO_ERROR;
}

uint32_t hal_clk_smem_get(void)
{
#if !CFG_FPGA
	uint32_t clk = clk_root_get();
	uint32_t mux = clk_smem_mux_get();

	if (mux <= CLK_SMEM_DIV2)
		clk /= 2;
	else if (mux <= CLK_SMEM_DIV4)
		clk /= 4;
	else if (mux <= CLK_SMEM_DIV8)
		clk /= 8;
#else
	uint32_t clk = 32000000;
#endif	// !CFG_FPGA
	
	return clk;
}

uint32_t hal_clk_qspi_get(void)
{
#if !CFG_FPGA
	uint32_t clk = clk_root_get();
	uint32_t mux = clk_qspi_mux_get();
        if (mux == CLK_QSPI_DIV1)
            clk /= 1;
	else if (mux == CLK_QSPI_DIV2)
		clk /= 2;
	else if (mux <= CLK_QSPI_DIV4)
		clk /= 4;
	else if (mux <= CLK_QSPI_DIV8)
		clk /= 8;
#else
	uint32_t clk = 32000000;
#endif	// !CFG_FPGA

	return clk;
}

int hal_clk_efuse_mux(int mux)
{
#if !CFG_FPGA
	if (mux > CLK_EFUSE_DIV8)
		return CLK_ERR_INVALID_PARAM;
	clk_efuse_mux(mux);
#endif	// !CFG_FPGA
	
	return CLK_ERR_NO_ERROR;
}

uint32_t hal_clk_efuse_get(void)
{
#if !CFG_FPGA
	uint32_t clk = clk_root_get();
	uint32_t mux = clk_efuse_mux_get();

	if (mux == CLK_EFUSE_DIV4)
		clk /= 4;
	else 
		clk /= 8;
#else
	uint32_t clk = 8000000;
#endif	// !CFG_FPGA
	
	return clk;
}

void hal_clk_si2s_set(int ext_clk)
{
#if !CFG_FPGA
	clk_slv_i2s_mux(ext_clk);
#endif	// !CFG_FPGA

}

void hal_clk_mi2s_set(uint32_t bit_clk)
{
#if !CFG_FPGA
	uint32_t clk = clk_root_get();
	uint32_t div = (clk/bit_clk) & 0xFFF;
	clk_mi2s(div);
	clk_mi2s_divider(1);
#endif	// !CFG_FPGA

}

void hal_clk_audio_sdm_mux(int mux)
{
#if !CFG_FPGA
	clk_audio_sdm_mux(mux);
#endif	// !CFG_FPGA
}

void hal_clk_efuse_en(int en)
{
#if !CFG_FPGA
	clk_efuse_en(en);		
#endif	// !CFG_FPGA

}

void hal_clk_uart_en(int id, int on)
{
#if !CFG_FPGA
	if (id == UART0_ID) {
		clk_uart0_en(on);
	} else {
		clk_uart1_en(on);
	}
#endif	// !CFG_FPGA

}

void hal_clk_i2c_en(int id, int on)
{
#if !CFG_FPGA
	if (id == I2C0_ID) {
		clk_i2c0_en(on);
	} else {
		clk_i2c1_en(on);
	}
#endif	// !CFG_FPGA

}

void hal_clk_pwm_en(int on)
{
#if !CFG_FPGA
	clk_pwm_en(on);
#endif	// !CFG_FPGA

}

void hal_clk_wdt_en(int on)
{
#if !CFG_FPGA
	clk_wdt_en(on);
#endif	// !CFG_FPGA

}

void hal_clk_kb_en(int on)
{
#if !CFG_FPGA
	clk_kb_en(on);
#endif	// !CFG_FPGA

}

void hal_clk_ecc_en(int on)
{
	clk_ecc_en(on);
}

void hal_clk_hash_en(int on)
{
#if !CFG_FPGA
	clk_hash_en(on);
#endif	// !CFG_FPGA

}

#if !(CFG_BUILD_ROM)
void hal_clk_aes_en(int on) __attribute__((section("RAM_PM")));
#endif	// !CFG_BUILD_ROM */ 
void hal_clk_aes_en(int on)
{
#if !CFG_FPGA
	clk_aes_en(on);
#endif	// !CFG_FPGA
}

void hal_clk_counter_en(int on)
{
#if !CFG_FPGA
	clk_counter_en(on);
#endif	// !CFG_FPGA
}

void hal_clk_audio_en(int en)
{
#if !CFG_FPGA
	clk_audio_en(en);
#endif	// !CFG_FPGA
}

void hal_clk_audio_enc_en(int en)
{
#if !CFG_FPGA
	clk_audio_enc_en(en);
#endif	// !CFG_FPGA
}

void hal_clk_audio_dec_en(int en)
{
#if !CFG_FPGA
	clk_audio_dec_en(en);
#endif	// !CFG_FPGA
}

void hal_clk_audio_resample_en(int en)
{
#if !CFG_FPGA
	clk_audio_resample(en);
#endif	// !CFG_FPGA
}
void hal_clk_sadc_en(int on)
{
#if !CFG_FPGA
	clk_sadc_en(on);
#endif	// !CFG_FPGA

}

void hal_clk_i2s_en(int id, int on)
{
#if !CFG_FPGA
	if (id == MI2S_ID) {
		clk_mi2s_en(on);
	} else {
		clk_si2s_en(on);
	}
#endif	// !CFG_FPGA

}

void hal_clk_quaddec_en(int on)
{
#if !CFG_FPGA
	clk_quaddec_en(on);
#endif	// !CFG_FPGA

}

void hal_clk_dma_en(int on)
{
#if !CFG_FPGA
	clk_dma_en(on);
#endif	// !CFG_FPGA
}

void hal_clk_ble_en(int on)
{
#if !CFG_FPGA
	clk_ble_en(on);
#endif	// !CFG_FPGA
}

#if !(CFG_BUILD_ROM)
void hal_clk_gpio_intr(int port, int on) __attribute__((section("RAM_PM")));
#endif	// !CFG_BUILD_ROM */ 
void hal_clk_gpio_intr(int port, int on)
{
#if !CFG_FPGA
	if (port == GPIO_PORT_0)
		clk_gpio_0_intr_en(on);
	else if (port == GPIO_PORT_1)
		clk_gpio_1_intr_en(on);
	else if (port == GPIO_PORT_2)
		clk_gpio_2_intr_en(on);
	else if (port == GPIO_PORT_3)
		clk_gpio_3_intr_en(on);
	else 
		clk_gpio_4_intr_en(on);
#endif	// !CFG_FPGA

}

void hal_clk_mspi_en(int on)
{
#if !CFG_FPGA
	clk_mspi_en(on);
#endif	// !CFG_FPGA
}

void hal_clk_sspi_en(int id, int on)
{
#if !CFG_FPGA
	if (id == SSPI0_ID) {
		clk_sspi0_en(on);
	} 

	if (id == SSPI1_ID) {
		clk_sspi1_en(on);
	}
#endif	// !CFG_FPGA
}

void hal_clk_tmr_en(int tmr_id, int en)
{
#if !CFG_FPGA
	clk_tmr_pclk_en();

	if (en) {
		if (tmr_id == TMR0_ID)
			clk_tmr0_en();
		else if (tmr_id == TMR1_ID)
			clk_tmr1_en();
		else if (tmr_id == TMR2_ID)
			clk_tmr2_en();
		else if (tmr_id == TMR3_ID)
			clk_tmr3_en();
		else if (tmr_id == TMR4_ID)
			clk_tmr4_en();
		else if (tmr_id == TMR5_ID)
			clk_tmr5_en();
		else if (tmr_id == TMR6_ID)
			clk_tmr6_en();
		else if (tmr_id == TMR7_ID)
			clk_tmr7_en();
		else if (tmr_id == TMR8_ID)
			clk_tmr8_en();
		else if (tmr_id == TMR9_ID)
			clk_tmr9_en();
	} else {
		if (tmr_id == TMR0_ID)
			clk_tmr0_dis();
		else if (tmr_id == TMR1_ID)
			clk_tmr1_dis();
		else if (tmr_id == TMR2_ID)
			clk_tmr2_dis();
		else if (tmr_id == TMR3_ID)
			clk_tmr3_dis();
		else if (tmr_id == TMR4_ID)
			clk_tmr4_dis();
		else if (tmr_id == TMR5_ID)
			clk_tmr5_dis();
		else if (tmr_id == TMR6_ID)
			clk_tmr6_dis();
		else if (tmr_id == TMR7_ID)
			clk_tmr7_dis();
		else if (tmr_id == TMR8_ID)
			clk_tmr8_dis();
		else if (tmr_id == TMR9_ID)
			clk_tmr9_dis();
	}
#endif
}

void hal_clk_cap_en(int tmr_id, int en)
{
#if !CFG_FPGA
	clk_tmr_pclk_en();

	if (en) {
		if (tmr_id == TMR0_ID)
			clk_tmr0_capture_en();
		else if (tmr_id == TMR1_ID)
			clk_tmr1_capture_en();
		else if (tmr_id == TMR6_ID)
			clk_tmr6_capture_en();
	} else {
		if (tmr_id == TMR0_ID)
			clk_tmr0_capture_dis();
		else if (tmr_id == TMR1_ID)
			clk_tmr1_capture_dis();
		else if (tmr_id == TMR6_ID)
			clk_tmr6_capture_dis();
	}
	return;
#endif
}

void hal_clk_emit_en(int tmr_id, int en)
{
#if !CFG_FPGA
	clk_tmr_pclk_en();

	if (en) {
		if (tmr_id == TMR0_ID)
			clk_tmr0_emit_en();
		else if (tmr_id == TMR1_ID)
			clk_tmr1_emit_en();
		else if (tmr_id == TMR6_ID)
			clk_tmr6_emit_en();
	} else {
		if (tmr_id == TMR0_ID)
			clk_tmr0_emit_dis();
		else if (tmr_id == TMR1_ID)
			clk_tmr1_emit_dis();
		else if (tmr_id == TMR6_ID)
			clk_tmr6_emit_dis();
	}
	return;
#endif
}

void hal_clk_sm_en(int on) __attribute__((section("RAM_PM")));
void hal_clk_sm_en(int on)
{
#if !CFG_FPGA
	clk_sm_en(on);
#endif	// !CFG_FPGA
}

#if !(CFG_BUILD_ROM)
void hal_clk_calib_32k(int cycles) __attribute__((section("ISR")));
#endif	// !CFG_BUILD_ROM */ 
void hal_clk_calib_32k(int cycles)
{
#if CFG_FPGA
	clk_32k_calib(cycles);
	while (!clk_32k_calib_done());
	return;
#else
	/// calibration clock 
	clk_wfi_clean();

	clk_calib_en(1);

	/// Clear status
	clk_32k_calib_done_clear();

	/// Start calibration
	clk_32k_calib(cycles);

	// Enable calibration interrupt
	if (!NVIC_GetEnableIRQ(Calib_IRQn)) {
		NVIC_ClearPendingIRQ(Calib_IRQn);
		NVIC_SetPriority(Calib_IRQn, IRQ_PRI_Normal);	
		NVIC_EnableIRQ(Calib_IRQn);
	}

	return;
#endif	// !CFG_FPGA
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

#if !(CFG_BUILD_ROM)
#if !CFG_FPGA
void hal_clk_32k(int clk_src)
{
	if (clk_src) {		// RTC
		clk_rtc_en();
		/// wait ( < 1 second) for RTC settle
		hal_timer_set_tmo_callback(TMR2_ID,  IRQ_PRI_High, (void *)&g_lpc, rtc_call_back);
		hal_timer_start(TMR2_ID, 0, 0, CFG_D0_CLK); 

		/// Set the RTC calue
		if (CFG_RTC_CLK) {
			g_lpc.clk_32k = CFG_RTC_CLK;
		} else {
			g_lpc.clk_32k = 32768;
		}
	} else {		// RC
		/// Turn on calibration clock
		if (clk_root_get() == 64000000)		// 64mhz
			clk_xo_to_digi_en(1);
		hw_ana_rc_32k_calib();
		/// Calib rc			
		hal_clk_calib_32k(8);
		/// Wait for end of calibration
		while (!g_lpc.ready);
	}
}
#endif
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
#if !(CFG_BUILD_ROM)
int hal_clk_32k_ready(void) __attribute__((section("RAM_PM")));
#endif	// !CFG_BUILD_ROM */ 
int hal_clk_32k_ready(void)
{
#if !CFG_FPGA
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	clk_32k_t *lpc = (clk_32k_t *)pif->clk->lpc;

	return lpc->ready;	
#else
	return 1;
#endif	// !CFG_FPGA

}

#if !(CFG_BUILD_ROM)
uint32_t hal_clk_32k_get(void) __attribute__((section("RAM_PM")));
#endif	// !CFG_BUILD_ROM */ 
uint32_t hal_clk_32k_get(void)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	clk_32k_t *lpc = (clk_32k_t *)pif->clk->lpc;

	return lpc->clk_32k;
}

int hal_clk_systick_mux(int mux)
{
#if !CFG_FPGA
	if (mux > CLK_SYSTICK_DIV16)
		return CLK_ERR_INVALID_PARAM;

	clk_systick_mux(mux);
#endif	// !CFG_FPGA
	return CLK_ERR_NO_ERROR;
}

uint32_t hal_clk_systick_get(void)
{
#if CFG_FPGA
	return 16000000;
#else
	uint32_t clk = clk_root_get();
	uint32_t mux = clk_systick_mux_get();

	if (mux <= CLK_SYSTICK_DIV4)
		clk /= 4;
	else if (mux <= CLK_SYSTICK_DIV8)
		clk /= 8;
	else if (mux <= CLK_SYSTICK_DIV16)
		clk /= 16;
	else 
		clk /= 16;

	return clk;
#endif
}

void hal_clk_systick_en(int en)
{
#if !CFG_FPGA
	if (en)
		clk_systick_en();
	else
		clk_systick_dis();
#endif	// !CFG_FPGA
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

#if !(CFG_BUILD_ROM)
clk_rom_if_t g_clk_if = {
	(void *)&g_lpc,

	hal_clk_gpio_intr,
	hal_clk_systick_get,
	hal_clk_calib_32k,
	hal_clk_d2_get,
};
#endif	// !CFG_BUILD_ROM */ 


#if CFG_FPGA
#if !(CFG_BUILD_ROM)
void delay_n_us(int usec)
{
	uint32_t i;
	for (i = 0; i < (usec * 6); i++);		
}
#endif	// !CFG_BUILD_ROM */ 

static void start_slow_clk_cal(uint32_t nlog2)
{
	WR_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS,0);
	WR_WORD(GLOBAL_REG_CALIBRATION_MISC_CTRL,nlog2 | (1<<4));	
}
static uint8_t check_slow_clk_calib_done_status(void)
{
	return (RD_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS)&GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_DONE)?1:0;
}
static uint32_t read_slow_clk_calib_result(void)
{
	return (RD_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS)) & (GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_INT | GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_FRAC);
}

static void force_on_all_clocks(void)
{
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1,0xffffffff);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2,0xffffffff);
	WR_WORD(GLOBAL_REG_CLKD1_ENABLE_1,0xffffffff);
	WR_WORD(GLOBAL_REG_CLKD2_ENABLE_1,0xffffffff);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_1,0xffffffff);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2,0xffffffff);
}

float sleep_clk_cal_by_pulling(uint32_t nlog2, uint32_t *pint_part, uint32_t *pfrac_part) 
{
	start_slow_clk_cal(nlog2);
	while(check_slow_clk_calib_done_status()==0);
	uint32_t val=read_slow_clk_calib_result();
	float current_32k_speed,cal_res;
	cal_res=val / 32768.0;
	current_32k_speed=32000000/ cal_res;
	float num_of_16MHz_clock_cycles=16e6f/current_32k_speed;
	uint32_t int_part=(uint32_t )num_of_16MHz_clock_cycles;
	uint32_t frac_part=((num_of_16MHz_clock_cycles -int_part) *(1<<12) +0.5f);
	if (frac_part==(1<<13)) {
		frac_part=0;
		int_part ++;
	}
	
	*pint_part=int_part;
	*pfrac_part=frac_part;
	
	return current_32k_speed;
}

float auto_tune_sleep_clk(uint32_t target_speed,float *psleep_clk_src_speed)
{
	uint32_t div0,divh,divl;
	uint32_t tmp0,tmp1;
	float current_speed;
	div0=RD_WORD(FPGA_REG_FPGA_32K_CYCLE_LIMIT)>>16;
	div0 +=RD_WORD(FPGA_REG_FPGA_32K_CYCLE_LIMIT)&0xffff;
	
	
	current_speed=sleep_clk_cal_by_pulling(0x1,&tmp0,&tmp1);
	float sleep_clk_src_speed=current_speed*div0;
	div0 = (current_speed * div0/target_speed+0.5f);
	divh=div0/2;
	divl=div0-divh;
	WR_WORD(FPGA_REG_FPGA_32K_CYCLE_LIMIT,(divh<<16 )|divl);
	*psleep_clk_src_speed=sleep_clk_src_speed;
	
	return current_speed;
}

void hal_clk_32k(int rtc)
{
#define ROOT_CLK_FOR_32K	24000000
#define TARGET_32K_CLK		32768	

	float fdiv = ROOT_CLK_FOR_32K*1.0/TARGET_32K_CLK/2-2;
	uint32_t div1 = (uint32_t)(fdiv + 0.5f);
	uint32_t div2 = (uint32_t)(fdiv - 0.5f);
	WR_WORD(FPGA_REG_FPGA_32K_CYCLE_LIMIT, ((div1-1)<<16)| (div2-1));

	hal_clk_calib_32k(0x1);
	float calib_res = clk_32k_calib_get();
	calib_res /= 32768.0f;
	float calib_speed = 32000000/calib_res;
	//printf("Sleep 32K speed is: Before adjustment %5.2f\n", calib_speed);

	uint32_t div0 = RD_WORD(FPGA_REG_FPGA_32K_CYCLE_LIMIT) >> 16;
	div0 += RD_WORD(FPGA_REG_FPGA_32K_CYCLE_LIMIT) & 0xffff;
	float sleep_clk_src_speed = calib_speed * div0;
	div0 = (calib_speed * div0/TARGET_32K_CLK + 0.5f);
	uint32_t divh = (div0/2);
	uint32_t divl = (div0 - divh);
	WR_WORD(FPGA_REG_FPGA_32K_CYCLE_LIMIT,(divh << 16) | divl);

	hal_clk_calib_32k(0xf);
	calib_res = clk_32k_calib_get();
	calib_res /= 32768.0f;
	calib_speed = 32000000/calib_res;
	
	// g_clk.rtc_clk = (uint32_t)(calib_speed);
	//printf("Sleep 32K speed is: After adjustment %5.2f Hz\t Clock source speed is %1.2e\n", calib_speed, sleep_clk_src_speed);

	/// Systick
	float nb_16mh_cycles = 16000000.f/calib_speed;
	uint32_t int_part = (uint32_t)nb_16mh_cycles;
	uint32_t frac_part = (uint32_t)((nb_16mh_cycles - int_part) * (1 << 12) + 0.5f);
	if (frac_part == (1 << 13)) {
		frac_part = 0;
		int_part += 1;
	}
	tmr_systick_clk_ratio(frac_part, int_part);
}
#endif

