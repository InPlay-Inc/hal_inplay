#ifndef IN_ROM_IF_H
#define IN_ROM_IF_H

#include <stdint.h>
#include "in_mmap.h"

typedef struct _cfg_rom_if {
	char cfg_pm_en;
	char cfg_rtc_en;

	char os_systick;
	uint32_t cfg_lpc_ppm_offset;
} cfg_rom_if_t;

typedef struct _ana_rom_if {
	uint32_t dc_calib_code;
	uint32_t dc_offset;
	int is_root_64m;
	int tx_trig_ctl_pa_gain;
	int adc_offset_32;
	uint8_t tx_power;
} ana_rom_if_t;

typedef struct _clk_rom_if {
	void *lpc;

	void (*hal_clk_gpio_intr)(int port, int on);
	uint32_t (*hal_clk_systick_get)(void);
	void (*hal_clk_calib_32k)(int cycles);
	uint32_t (*hal_clk_d2_get)(void);

} clk_rom_if_t;

typedef struct _gio_rom_if {
	void *gio;

	int (*hal_gpio_pin_mux)(int port, int pin, int mux, int inv);
	int (*hal_gpio_pad_oe_ie)(int port, int pin, int oe, int ie);
	int (*hal_gpio_pad_pd_pu)(int port, int pin, int pd, int pu);
	int (*hal_gpio_output)(int port, int pin, int high, int en);
	int (*hal_gpio_sleep_pad_latch)(int port, int pin, int latch, int manual);
} gio_rom_if_t;

typedef struct _tmr_rom_if {
	void *tmr;
	void *aon_tmr;
	void *aon_tmr_adv;
} tmr_rom_if_t;

typedef struct _adc_rom_if {
	void *adc;

} adc_rom_if_t;

typedef struct {
	void *p_os_running;
	void *p_os_trv;
	void *p_os_clockrate;
	void *p_os_stack_mem;
	void *p_mp_stk;
	void *p_mp_tcb;
	void *p_os_rrobin;
	void *p_os_robin;
	void *p_os_maxtaskrun;
	void *p_os_active_TCB;
	void *p_os_tick_irqn;
	void *p_os_lock;
	void *p_os_psh_flag;
	void *p_pend_flags;
	void *p_os_time;
	void	*p_os_rdy;
	void	*p_os_dly;
	void	*p_os_tsk;
	void	*p_os_idle_TCB;
	void *p_os_fifo;
	void *p_os_timer_head;	
	void *p_osMessageQId_osTimerMessageQ;
	void *p_os_stackinfo;
	void *p_osThreadId_osTimerThread;
	unsigned int (*os_tick_count)(void); 
	void (*os_error) (unsigned int error_code);
	unsigned int (*os_tick_ovf )(void);
	unsigned int (*os_tick_val )(void); 
	void (*rt_stk_check )(void);
	void (*sysThreadError)(int status);

	void *(*hal_mutex_create)(void *mu);
	void (*hal_mutex_wait)(void *hdl, uint32_t time_ms);
	void (*hal_mutex_release)(void *hdl);
	void (*hal_mutex_delete)(void *hdl);

	void *(*hal_semaphore_create)(void *sma);
	void (*hal_semaphore_wait)(void *hdl, uint32_t time_ms);
	void (*hal_semaphore_release)(void *hdl);
	void (*hal_semaphore_delete)(void *hdl);

} os_rom_if_t;

typedef struct _glb_rom_if {
	void *ble;
	void *giq;
	void *swi;
	void *nmi;
	void *osc;
} glb_rom_if_t;


typedef struct {
	cfg_rom_if_t *sys;

	os_rom_if_t *os;

	ana_rom_if_t *ana;
	clk_rom_if_t *clk;
	gio_rom_if_t *gio;
	tmr_rom_if_t *tmr;
	glb_rom_if_t *glb;	
	adc_rom_if_t *adc;
} rom_if_t;


#endif
