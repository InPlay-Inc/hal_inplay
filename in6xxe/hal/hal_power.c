#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file hal_power.c
 *
 * @brief Power management implementation file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#if !CFG_NO_OS
#include "cmsis_os.h"
#endif	// !CFG_NO_OS

#include "in_arm.h"
#include "in_config.h"
#include "in_debug.h"
#include "in_irq.h"
#include "in_ana.h"

#include "./hal/hal_clk.h"
#include "./hal/hal_power.h"
#include "./hal/hal_timer.h"
#include "./hal/hal_uart.h"
#include "./hal/hal_global.h"
#include "./hal/hal_gpio.h"
#include "./hal/hal_flash.h"
#if CFG_PM_EN
/*
 * Structure
 ****************************************************************************************
 */

typedef struct {
	struct pm_module *head;
	struct pm_module *last;
	int count;
} module_t;

typedef struct {
	char slp_wup;
	char ble_wup;
	char mix_wup;
	char bo_wup;
#if !CFG_NO_OS
	char pd1_reinit;
	char pad[3];
#endif
	uint32_t os_time_comp_us;
	uint32_t deep_sleep_comp_time_us;
	
#if !CFG_NO_OS
	uint32_t mu[4];
	osMutexId h_mu;
#endif	// !CFG_NO_OS

	struct pm_module *ble_mod;
	module_t mod;
} pm_drv_t;

static pm_drv_t g_pm = {0};
int first_susp_rsum = 1;		// it has to be global for embedded assembly to access


/*
 * PD0 Timer Functions
 ****************************************************************************************
 */
#if !CFG_NO_OS
static void pd0_tmr_init(void)
{
	// PD0 timer
	aon_tmr2_clk_en();
	aon_tmr_wup_en(AON_TMR2_ID);
	aon_tmr2_irq_clr();
	aon_tmr_int_mask_set(AON_TMR2_ID);
}

static void pd0_tmr_start(uint32_t usec) __attribute__((section("RAM_PM")));
static void pd0_tmr_start(uint32_t usec)
{
	float lpc = (float)hal_clk_32k_get();
	uint32_t init_count = (uint32_t)(usec * (lpc/1000000.f));

	// is timer disable?
	if (!aon_tmr2_dis_sts()) {
		aon_tmr2_dis();
		delay_us(150);
	}

	// write the tick count
	aon_tmr2_init_tick(init_count);

	// enable
	aon_tmr2_en();
	delay_us(150);
}

static void pd0_tmr_stop(void) __attribute__((section("RAM_PM")));
static void pd0_tmr_stop(void)
{
	aon_tmr2_dis();
	aon_tmr2_irq_clr();
}
#endif
/*
 * PD1 Timer Functions (WFI)
 ****************************************************************************************
 */
__irq void TMR4_Handler(void) __attribute__((section("ISR")));
__irq void TMR4_Handler(void)
{
	tmr_int_clear(TMR4_ID);
}

void pd1_tmr_init(void)
{
	// PD1 timer
	hal_clk_tmr_mux(TMR4_ID, CFG_TIM4_CLK_MUX);
	hal_clk_tmr_en(TMR4_ID, 1);
	tmr_all_enable();
}

static void pd1_tmr_start(uint32_t usec) __attribute__((section("RAM_PM")));
static void pd1_tmr_start(uint32_t usec)
{
	uint32_t tick;

	tmr4_disable();
	tick = usec * (hal_clk_tmr_get(TMR4_ID)/1000000);
	tmr4_init_tick(tick);
	tmr_int_clear(TMR4_ID);
	// TODO: add some delay here
	NVIC_ClearPendingIRQ(Tmr4_IRQn);
	NVIC_EnableIRQ(Tmr4_IRQn);
	tmr4_enable();
}
void pd1_tmr_periodic_start(uint32_t usec) __attribute__((section("RAM_PM")));
void pd1_tmr_periodic_start(uint32_t usec)
{
	uint32_t tick;

	tmr4_disable();
	tick = usec * (hal_clk_tmr_get(TMR4_ID)/1000000);
	tmr4_init_tick(tick);
	tmr_int_clear(TMR4_ID);
	tmr_reload_en(TMR4_ID);
	// TODO: add some delay here
	NVIC_ClearPendingIRQ(Tmr4_IRQn);
	NVIC_EnableIRQ(Tmr4_IRQn);
	tmr4_enable();
}
void pd1_tmr_stop(void) __attribute__((section("RAM_PM")));
void pd1_tmr_stop(void)
{
	tmr4_disable();
	NVIC_DisableIRQ(Tmr4_IRQn);
}


/*
 * Shut down and Resume Functions
 ****************************************************************************************
 */
#if defined(__CC_ARMC)
__asm void shutdown_and_resume(void) __attribute__((section("RAM_PM")));
__asm void shutdown_and_resume(void)
{
	push	{r0-r12, lr}	; store general register	
	mrs r0, primask	; store special register
	mrs r1, basepri
	mrs r2, faultmask
	mrs r3, control
	mrs r4, msp
	mrs r5, psp
	push {r0-r5}
	ldr r0, =__cpp(&first_susp_rsum)
	ldr r1, [r0]
	tst r1, #0x1
	beq sleep
	mov r1, #0
	str r1, [r0]
	mov  r0, #0x01CC	; SP
	movt r0, #0x4411
	str   sp, [r0, #0]
	mov  r0, #0x01D0	; PC
	movt r0, #0x4411
	ldr r1, =resume
	orr r1, r1, #0x80000000		
	str   r1, [r0, #0]
sleep
	ldr r0, = 0x441262c0
	mov r1, #0x1
	str r1, [r0, #0]				; Sleep
	ldr r1, [r0, #0]	
	ldr r0, = 0x44126200
	mov r1, #0x9800
	movt r1, #0x1e01
	str r1, [r0, #0]				; Sleep
	ldr r1, [r0, #0]	
forever
	wfi
	b forever
resume
;	bkpt #0x3
	pop {r0-r5}
	msr psp, r5
	msr msp, r4
	msr control, r3
	msr faultmask, r2
	msr basepri, r1
	msr primask, r0
	pop {r0-r12, lr}	
	bx lr
	nop
}
#elif defined(__GNUC__)
void RAM_PM shutdown_and_resume(void)
{
    __asm volatile
    (
		"push	{r0-r12, lr}\n"	//store general register	
		"mrs r0, primask\n"     //store special register
		"mrs r1, basepri\n"
		"mrs r2, faultmask\n"
		"mrs r3, control\n"
		"mrs r4, msp\n"
		"mrs r5, psp\n"
		"push {r0-r5}\n"
		"ldr r0, =first_susp_rsum\n"
		"ldr r1, [r0]\n"
		"tst r1, #0x1\n"
		"beq sleep\n"
		"mov r1, #0\n"
		"str r1, [r0]\n"
		"mov  r0, #0x01CC\n"	//SP
		"movt r0, #0x4411\n"
		"str   sp, [r0, #0]\n"
		"mov  r0, #0x01D0\n"	 //PC
		"movt r0, #0x4411\n"
		"ldr r1, =resume\n"
		"orr r1, r1, #0x80000000\n"
		"str   r1, [r0, #0]\n"
"sleep:\n"
		"ldr r0, = 0x441262c0\n"
		"mov r1, #0x1\n"
		"str r1, [r0, #0]\n"   //Sleep
		"ldr r1, [r0, #0]\n"	
		"ldr r0, = 0x44126200\n"
		"mov r1, #0x9800\n"
		"movt r1, #0x1e01\n"
		"str r1, [r0, #0]\n"   //Sleep
		"ldr r1, [r0, #0]\n"
"forever:\n"
		"wfi\n"
		"b forever\n"
"resume:\n"
//bkpt #0x3
		"pop {r0-r5}\n"
		"msr psp, r5\n"
		"msr msp, r4\n"
		"msr control, r3\n"
		"msr faultmask, r2\n"
		"msr basepri, r1\n"
		"msr primask, r0\n"
		"pop {r0-r12, lr}\n"
		"bx lr\n"
		"nop\n"
    );
}
#else
    #error unsupported compiler
#endif
/*
 * APIs
 ****************************************************************************************
 */

int hal_pm_init(int slp_wup, int ble_wup, int bod_wup, int mix_wup, int trig_retn, uint32_t dm_retn, uint32_t em_retn)
{
	pm_drv_t *pd = &g_pm;

#if !CFG_NO_OS
	/// mutex protect PM modules list
	osMutexDef_t def;
	def.mutex = pd->mu;
	pd->h_mu = osMutexCreate(&def);
	if (!pd->h_mu) {
		return PM_ERR_OS_ERROR;
	}
#endif	// !CFG_NO_OS

	/// sleep timer can wake up the chip
	if (slp_wup) {
		aon_slp_tmr_wup_enable();
		pd->slp_wup = 1;
#if !CFG_NO_OS
		/// need a sleep timer
		pd0_tmr_init();
#endif
	} else {
		aon_slp_tmr_wup_disable();
		pd->slp_wup = 0;
	}

	/// ble can wake up the chip
	if (ble_wup) {
		aon_ble_wup_enable();
		pd->ble_wup = 1;
	} else {
		aon_ble_wup_disable();
		pd->ble_wup = 0;
	}

	/// brown out can wake up the chip
	if (bod_wup) {
		aon_brown_out_wup_enable();
		pd->bo_wup = 1;
	} else {
		aon_brown_out_wup_disable();
		pd->bo_wup = 0;
	}
		
	/// mixed signal IO can wake up the chip
	if (mix_wup) {
		aon_mixed_signal_wup_enable();
		pd->mix_wup = 1;
	} else {
		aon_mixed_signal_wup_disable();
		pd->mix_wup = 0;
	}

	/// DM retention
	aon_dm_reten(dm_retn);

	/// EM retention
	aon_em_reten(em_retn);

	/// trigger memory retention
	if (trig_retn)
		aon_trig_mem_retn(1);
	else
		aon_trig_mem_retn(0);

	/// enable arm wake up interrupt controller
	arm_wic(1);

	/// mask all gpio pins that can wake up system 
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL, 0xFFFFFFFF);
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2, 0xFFFFFFFF);

	/// enable deep sleep
	aon_deep_sleep_enable(1);

#if !CFG_NO_OS
	/// initialize timer 4 for WFI
	pd1_tmr_init();
#endif

	return PM_ERR_NO_ERROR;
}

int hal_pm_reg_mod(struct pm_module *module)
{
	pm_drv_t *pd = &g_pm;
	module_t *mm = &pd->mod;

	if (!module)
		return PM_ERR_INVALID_PARAM;

#if !CFG_NO_OS
	osMutexWait(pd->h_mu, osWaitForever);
#endif	// !CFG_NO_OS
	
	if (mm->head == NULL) {
		mm->head = module;
 		mm->last = module;
		module->prev = NULL;
		module->next = NULL;
	} else {
		mm->last->next = module;
		module->prev = mm->last;
		module->next = NULL;
		mm->last = module;
 	}
	mm->count += 1;

#if !CFG_NO_OS
	osMutexRelease(pd->h_mu);
#endif	// !CFG_NO_OS

	return PM_ERR_NO_ERROR;
}

int hal_pm_unreg_mod(struct pm_module *module)
{
	pm_drv_t *pd = &g_pm;
	module_t *mm = &pd->mod;

	if (!module)
		return PM_ERR_INVALID_PARAM;

#if !CFG_NO_OS
	osMutexWait(pd->h_mu, osWaitForever);
#endif	// !CFG_NO_OS

	if (module == mm->head) {
		mm->head = module->next;
		if (mm->head)
			mm->head->prev = NULL;
	} 

	if (module == mm->last) {
		mm->last = module->prev;
		if (mm->last)
			mm->last->next = NULL;
	}

	if ((module != mm->head) && (module != mm->last)) {
		if (module->next)
			module->next->prev = module->prev;
		if (module->prev)
			module->prev->next = module->next;
	}

#if !CFG_NO_OS
	osMutexRelease(pd->h_mu);
#endif	// !CFG_NO_OS
  
	return PM_ERR_NO_ERROR;
}

uint32_t hal_pm_get_wup_src(void)
{
	return pm_wakeup_source();
}

uint32_t hal_pm_suspend_and_resume(uint32_t os_sleep_tick) __attribute__((section("RAM_PM")));
uint32_t hal_pm_suspend_and_resume(uint32_t os_sleep_tick)
{
	pm_drv_t *pd = &g_pm;
	module_t *p_mod = &pd->mod;
	int sleep_state = PM_DEEP_SLEEP;
	uint32_t sleep_time_us, final_sleep_tick_ms,final_sleep_tick_us;
	uint32_t s_tick, e_tick, time_elapse;

	uint32_t pri_mask = disable_irq();

	s_tick = RTC_timer_get_tick_low();

	if (os_sleep_tick == 0xFFFF)
		sleep_time_us = PM_MAX_SLEEP_TIME;
	else {
		os_sleep_tick *= (OS_TICK/1000);
		sleep_time_us = (os_sleep_tick * 1000);
	}

	/// OS in idle state and scheduler is stop 
	/// loop thru all the register modules 
	struct pm_module *next = p_mod->head;
	while (next) {
		int state;
		if (next->power_state) {
			uint32_t duration;
			state = next->power_state(next->arg, &duration);
			if (state == PM_ACTIVE) {			
				sleep_state = PM_ACTIVE;
				break;
			} else if (state == PM_SLEEP) {	
				sleep_state = PM_SLEEP;
				if (duration != PM_MAX_SLEEP_TIME) {
					if (duration < sleep_time_us)
						sleep_time_us = duration;
				}
			} else {
				if (sleep_state == PM_DEEP_SLEEP) {
					if (duration != PM_MAX_SLEEP_TIME) {
						if (duration < sleep_time_us)
							sleep_time_us = duration;
					}
				}
			}
		}
		next = next->next;
	}

	if (sleep_state == PM_DEEP_SLEEP) {
		/// If RTC enable, make sure we already wait more than 1 second before going into deep sleep
		if (!hal_clk_32k_ready()) {
			sleep_state = PM_SLEEP;
		} 

		/// If platform timer is been used, then we shouldn't go into deep sleep
		if (hal_timer_busy()) {
			sleep_state = PM_SLEEP;
		}

		if (sleep_time_us <=  (CFG_PM_DEEP_SLEEP_THRD * 1000)) {
			sleep_state = PM_SLEEP;
		}
	}

	/// If active, no sleep
	if (sleep_state == PM_ACTIVE) {	
		///  go to end
	} 

	/// If sleep, issue WFI to turn off ARM
	if (sleep_state == PM_SLEEP) {  
#if !CFG_NO_OS
		if (pd->pd1_reinit) {
			pd1_tmr_init();
			pd->pd1_reinit = 0;
		}

		if (sleep_time_us == PM_MAX_SLEEP_TIME) {
			pd1_tmr_start(sleep_time_us);
			__wfi();
			pd1_tmr_stop();
		} else {
			e_tick = RTC_timer_get_tick_low();
			time_elapse = RTC_timer_diff_low(s_tick, e_tick);
			if (sleep_time_us > time_elapse) {
				pd1_tmr_start(sleep_time_us - time_elapse);
				__wfi();
				pd1_tmr_stop();  

			} 
		}
#else
		// no os, so we can just fall into WFI
		__wfi();
#endif 
	} 

	/// If deep sleep, shut off chip 
	if (sleep_state == PM_DEEP_SLEEP) 
	{
		/// call each module shut down routine 
		next = p_mod->head;
		while (next) {
			if (next->power_down) {
				next->power_down(next->arg, sleep_time_us);
			}
			next = next->next;
		}
		#if CFG_BRAM_RAM_APP_EN && CFG_LOW_POWER
		hal_spi_flash_suspend();
		#endif
		/// Save global registers and etc...
		hal_gpio_suspend();
		hal_global_suspend();


		e_tick = RTC_timer_get_tick_low();
		time_elapse = RTC_timer_diff_low(s_tick, e_tick);
		if (sleep_time_us <= time_elapse) 
			goto resume; 

		sleep_time_us -= time_elapse;

		/// shut down and resume
#if !CFG_NO_OS
		if (pd->slp_wup) {
			pd0_tmr_start(sleep_time_us);
		}
#endif

//gpio_port_4_pin_mux(1, 0, 0);
//gpio_port_4_pad_oe_ie(1, 1, 0);
//gpio_port_4_pad_pd_pu(1, 0, 0);
//gpio_port_4_output_enable(1);
//gpio_port_4_output(1, 0);
//gpio_port_4_pad_latch(1, 1);

		// disable RC bypass
		if (!CFG_ROOT_CLK_RC_32M)
			clk_rc_bypass_dis();


		shutdown_and_resume();

//gpio_port_4_pin_mux(1, 0, 0);
//gpio_port_4_pad_oe_ie(1, 1, 0);
//gpio_port_4_pad_pd_pu(1, 0, 0);
//gpio_port_4_output_enable(1);
//gpio_port_4_pad_latch(1, 0);
//gpio_port_4_output(1, 1);
//gpio_port_4_pin_mux(0, 0, 0);
//gpio_port_4_pad_oe_ie(0, 0, 1);
//gpio_port_4_pad_pd_pu(0, 0, 0);
//if (gpio_port_4_input(0) == 0) {
//static int g_debug = 1;
//while (g_debug);
//}

#if !CFG_NO_OS
		if (pd->slp_wup) {
			pd0_tmr_stop(); 
		}
#endif

resume:

#if !CFG_NO_OS
		pd->pd1_reinit = 1;
#endif

		/// resume start...
		/// restoer global egisters and etc... */
		hal_global_resume();				
		hal_gpio_resume();
		hal_aon_timer_resume();
		// enable RC bypass
		if (!CFG_ROOT_CLK_RC_32M)
			clk_rc_bypass_en();



		/// Call each module resume routine 
		next = p_mod->head;
		while (next) {
			if (next->power_up) {
				next->power_up(next->arg);
			}
			next = next->next;
		}				

		/// Calibrate LPC
		if (CFG_LPC_CALIB) {
			hal_clk_calib_32k(5);
		}
	}

#if !CFG_NO_OS
#if (OS_SYSTICK == 0)
	final_sleep_tick_ms = 0; //os_resume will calculte sleep time with inplay systick
#else
	e_tick = RTC_timer_get_tick_low();
	final_sleep_tick_us = RTC_timer_diff_low(s_tick, e_tick);///1000;	
	final_sleep_tick_ms = final_sleep_tick_us/1000;
	pd->os_time_comp_us += final_sleep_tick_us - (final_sleep_tick_ms * 1000);

	while (pd->os_time_comp_us >= 1000) {
		final_sleep_tick_ms += 1;
		pd->os_time_comp_us -= 1000;
	}
#endif
#else
	e_tick = RTC_timer_get_tick_low();
	final_sleep_tick_ms = RTC_timer_diff_low(s_tick, e_tick)/1000;	
#endif

	/* unmask interrupt */
	__set_PRIMASK(pri_mask);

	return final_sleep_tick_ms;
}

#endif	// CFG_PM_EN

