#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file hal_wdt.c
 *
 * @brief Watch Dog Timer implementation file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "in_arm.h"
#include "in_mmap.h"
#include "in_irq.h"
#include "in_debug.h"

#include "./hal/hal_clk.h"
#include "./hal/hal_power.h"
#include "./hal/hal_wdt.h"
#include "./hal/hal_gpio.h"

#if 1 //CFG_WDT_EN

#define AON_WDT_CLK_SRC_INTERNAL_RC 0
#define AON_WDT_CLK_SRC_RTC         1

/*
 * Structure
 ****************************************************************************************
 */
typedef struct {
    void *arg;
    void (*callback)(void *arg);
    uint8_t wakeup_en;
    volatile uint8_t clr_wakeup_event;
    uint8_t used;
} aon_wdt_t;

static aon_wdt_t g_aon_wdt = {0};
const static gio_aon_grp_t gpio_aon_pins[] = {
    {GPIO_SLP_GRP_0_PORT_0, GPIO_SLP_GRP_0_PORT_0_PIN_0},
    {GPIO_SLP_GRP_0_PORT_0, GPIO_SLP_GRP_0_PORT_0_PIN_4},
    {GPIO_SLP_GRP_0_PORT_0, GPIO_SLP_GRP_0_PORT_0_PIN_8},
    {GPIO_SLP_GRP_0_PORT_1, GPIO_SLP_GRP_0_PORT_1_PIN_2},
    {GPIO_SLP_GRP_0_PORT_1, GPIO_SLP_GRP_0_PORT_1_PIN_6},
    {GPIO_SLP_GRP_0_PORT_3, GPIO_SLP_GRP_0_PORT_3_PIN_5},
    {GPIO_SLP_GRP_0_PORT_4, GPIO_SLP_GRP_0_PORT_4_PIN_1}
};

/*
 * ISR
 ****************************************************************************************
 */
 __irq void WDT_Handler(void) __attribute__((section("ISR")));
__irq void WDT_Handler(void)
{
    aon_wdt_t *pd = &g_aon_wdt;
    uint32_t status = aon_wdt_int_status();
    uint32_t mask = aon_wdt_int_mask_status();
    aon_wdt_int_clear(status);
    status &= ~mask;
    if (status & WDT_INT_AON)
    {
        if (pd->clr_wakeup_event)
        {
            // clear AON WDT wakeup event
            aon_wdt_touch();
            pd->clr_wakeup_event = 0;
        }
        if (pd->callback)
        {
            pd->callback(pd->arg);
        }
    }
}

/*
 * APIs
 ****************************************************************************************
 */

int hal_aon_wdt_start(wdt_cfg_param_t *cfg, void (*callback)(void *arg),  void *arg)
{
    aon_wdt_t *pd = &g_aon_wdt;
    int res = WDT_ERR_OK;
    float   rtc;
    uint32_t tick;
    uint8_t rst_delay_clk_cycles = 0x0f;
    uint8_t rst_out_dft_level = 1;
    
    // Clock source, rc or rtc?
#if !CFG_FPGA
    aon_wdt_clk_src(AON_WDT_CLK_SRC_INTERNAL_RC);
#endif

    // clk enable
    aon_wdt_clk_en(1);

    // wake up
    if (cfg->wakeup_en)
        aon_wdt_wup(1);
    else
        aon_wdt_wup(0);
    pd->wakeup_en = cfg->wakeup_en;
    
    // reset
    if (WDT_RESET_CHIP == cfg->reset_mode)
    {
        aon_wdt_reset_pd0(rst_delay_clk_cycles, cfg->rst_out_pin_pol);
    }
    else if (WDT_RESET_ARM == cfg->reset_mode)
    {
        aon_wdt_reset_pd1(rst_delay_clk_cycles, cfg->rst_out_pin_pol);
    }
    else
    {
        aon_wdt_reset_chip_disable();
    }
   
    if (cfg->rst_out_pin < WDT_RESET_O_PIN_NONE)
    {
        const gio_aon_grp_t *io = &gpio_aon_pins[cfg->rst_out_pin];
        if (cfg->rst_out_pin_pol)
        {
            rst_out_dft_level = 0;
            res = hal_gpio_sleep_output_grp_0(1, io->port, io->pin, 6);
        }
        else
        {
            res = hal_gpio_sleep_output_grp_0(1, io->port, io->pin, 7);
        }
        hal_gpio_pin_mux(io->port, io->pin, GPIO_MUX_0, 0);
        hal_gpio_pad_oe_ie(io->port, io->pin, 1, 0);
        hal_gpio_output(io->port, io->pin, rst_out_dft_level, 1);
        gpio_pad_latch(io->port, io->pin, 1);
    }
    
    /// init value
#if CFG_FPGA
    rtc = 32768;
#else
    rtc = hal_clk_32k_get();
#endif
    tick = (uint32_t)(cfg->timeout_ms * (rtc/1000.f)); 
    //RC drift
    tick = (tick * 6) / 5;
    aon_wdt_init_val(tick);

    // interrupt
    pd->arg = arg;
    pd->callback = callback;
    if (callback || cfg->wakeup_en)
    {
        aon_wdt_int_clk(1);
        aon_wdt_int_mask_clear(WDT_INT_AON);
        __NVIC_ClearPendingIRQ(WDT_IRQn);
        //NVIC_SetPriority(WDT_IRQn, pd->prio);
        __NVIC_EnableIRQ(WDT_IRQn);
    }

    aon_wdt_en();
    pd->used = 1;
    return res;
}

void hal_aon_wdt_stop(void) 
{
	__NVIC_DisableIRQ(WDT_IRQn);
	aon_wdt_int_clk(0);
	aon_wdt_dis();
	aon_wdt_clk_en(0);
    g_aon_wdt.used = 0;
}

void hal_aon_wdt_touch(void)
{
    aon_wdt_touch();    
}

#if CFG_PM_EN
void hal_aon_wdt_resume(void) __attribute__((section("RAM_PM")));
void hal_aon_wdt_resume(void)
{
	aon_wdt_t *pd = &g_aon_wdt;
	if (!pd->used)
		return;

	if (pd->callback || pd->wakeup_en)
    {       
		//NVIC_SetPriority(WDT_IRQn, pd->prio);
		aon_wdt_int_mask_clear(WDT_INT_AON);
	    NVIC_EnableIRQ(WDT_IRQn);
        uint32_t status = aon_wdt_int_status();
        if (status & WDT_INT_AON)
        {
            pd->clr_wakeup_event = 1;
        }   
	}
}
#endif	// CFG_PM_EN

#endif //CFG_WDT_EN

