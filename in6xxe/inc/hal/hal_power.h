/**
 ****************************************************************************************
 *
 * @file hal_power.h
 *
 * @brief HAL power management and sleep timers  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_POWER_H
#define HAL_POWER_H

/**
 ****************************************************************************************
 * @defgroup HAL_POWER Platform power management and sleep timer  
 * @ingroup HAL
 * @brief  HAL_POWER
 * @{
 ****************************************************************************************
 */

#include <stdint.h>
#include "in_mmap.h"
#include "in_arm.h"

#include "./hal/hal_global.h"

/*
 * Defines
 ****************************************************************************************
 */
#define PM_MAX_SLEEP_TIME 0xFFFFFFFF

/*
 * Enumerations
 ****************************************************************************************
 */

enum pm_state {
	PM_ACTIVE,
	PM_SLEEP,
	PM_DEEP_SLEEP,
	PM_NOP,
};

enum pm_err {
	PM_ERR_NO_ERROR,
	PM_ERR_INVALID_PARAM = -1,
	PM_ERR_NOT_AVAIL = -2,
	PM_ERR_OS_ERROR = -3,
};

enum em_retn {
	PM_RETN_EM_4K_A = 0x1,
	PM_RETN_EM_4K_B = 0x2,
	PM_RETN_EM_8K_A = 0x4,
	PM_RETN_EM_8K_B = 0x8,
	PM_RETN_EM_16K = 0x10,
	PM_RETN_EM_ALL = 0x1F,
};

enum dm_retn {
	PM_RETN_DM_4K_A = 0x1,
	PM_RETN_DM_4K_B = 0x2,
	PM_RETN_DM_8K = 0x4,
	PM_RETN_DM_16K = 0x8,
	PM_RETN_DM_32K_A = 0x10,
	PM_RETN_DM_32K_B = 0x20,
	PM_RETN_DM_32K_C = 0x40,
	PM_RETN_DM_ALL = 0x7F,
};

enum pm_ws {
	PM_WS_TIMER_0 = 0,
	PM_WS_TIMER_1,
	PM_WS_TIMER_2,
	PM_WS_TIMER_3,
	PM_WS_WDT,
	PM_WS_AON_TIMER2_EMIT0,
	PM_WS_AON_TIMER2_EMIT1,
	PM_WS_AON_SYSTICK_TIMER,
	PM_WS_BOD,
	PM_WS_BOD2,
	PM_WS_BLE,
	PM_WS_GPIO_0_0,
	PM_WS_GPIO_0_1,
	PM_WS_GPIO_0_2,
	PM_WS_GPIO_0_3,
	PM_WS_GPIO_0_4,
	PM_WS_GPIO_0_5,
	PM_WS_GPIO_0_6,
	PM_WS_GPIO_0_7,
	PM_WS_GPIO_0_8,
	PM_WS_GPIO_1_0,
	PM_WS_GPIO_1_1,
	PM_WS_GPIO_1_2,
	PM_WS_GPIO_1_3,
	PM_WS_GPIO_1_4,
	PM_WS_GPIO_1_5,
	PM_WS_GPIO_1_6,
	PM_WS_GPIO_1_7,
	PM_WS_GPIO_1_8,
	PM_WS_GPIO_1_9,
	PM_WS_GPIO_2_0,
	PM_WS_GPIO_2_1,
	PM_WS_GPIO_2_2,
	PM_WS_GPIO_2_3,
	PM_WS_GPIO_2_4,
	PM_WS_GPIO_2_5,
	PM_WS_GPIO_2_6,
	PM_WS_GPIO_2_7,
	PM_WS_GPIO_2_8,
	PM_WS_GPIO_2_9,
	PM_WS_GPIO_3_0,
	PM_WS_GPIO_3_1,
	PM_WS_GPIO_3_2,
	PM_WS_GPIO_3_3,
	PM_WS_GPIO_3_4,
	PM_WS_GPIO_3_5,
	PM_WS_GPIO_4_0,
	PM_WS_GPIO_4_1,
	PM_WS_GPIO_4_2,
	PM_WS_GPIO_4_3,
};

/*
 * Structures
 ****************************************************************************************
 */
struct pm_module  {
	struct pm_module *prev;
	struct pm_module *next;
	void *arg;
	int (*power_state)(void *arg, uint32_t *slp_dur);
	void (*power_down)(void *arg, uint32_t slp_dur);
	void (*power_up)(void *arg);	
};

/*
 * Inline Functions
 ****************************************************************************************
 */
static INLINE void aon_slp_tmr_wup_enable(void)			
{
	WR_WORD(AON_PS_REGS_AON_ST_WAKEUP_CTRL, 1);
}

static INLINE void aon_slp_tmr_wup_disable(void)			
{
	WR_WORD(AON_PS_REGS_AON_ST_WAKEUP_CTRL, 0);
}

static INLINE void aon_ble_wup_enable(void)			
{
	WR_WORD(AON_PS_REGS_BLE_ST_WAKEUP_CTRL, 1);
}

static INLINE void aon_ble_wup_disable(void)			
{
	WR_WORD(AON_PS_REGS_BLE_ST_WAKEUP_CTRL, 0);
}

static INLINE void aon_brown_out_wup_enable(void)			
{
	WR_WORD(AON_PS_REGS_BO_OUT_WAKEUP_CTRL, 1);
}

static INLINE void aon_brown_out_wup_disable(void)			
{
	WR_WORD(AON_PS_REGS_BO_OUT_WAKEUP_CTRL, 0);
}

static INLINE void aon_mixed_signal_wup_enable(void)			
{
	WR_WORD(AON_PS_REGS_MSIO_WAKEUP_CTRL, 1);
}

static INLINE void aon_mixed_signal_wup_disable(void)			
{
	WR_WORD(AON_PS_REGS_MSIO_WAKEUP_CTRL, 0);
}

static INLINE void aon_deep_sleep_enable(int force)			
{
	uint32_t reg = RD_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL);

	if (force) {	// force sleep even there is wak up signal
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_FORCE;
	} else {
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_FORCE;
	}
	reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_PD_DOO_CORE_ENABLE;		/* PD_DOO_CORE Sleep */

	WR_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL, reg);
}

static INLINE void aon_deep_sleep_disable(void)			
{
	uint32_t reg = RD_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL);

	reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_PD_DOO_CORE_ENABLE;		

	WR_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL, reg);
}

static INLINE void aon_dm_reten(uint32_t retn)			
{
	uint32_t reg = RD_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL);

	if (retn & PM_RETN_DM_4K_A)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_4K_A_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_4K_A_RET_ENABLE;

	if (retn & PM_RETN_DM_4K_B)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_4K_B_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_4K_B_RET_ENABLE;

	if (retn & PM_RETN_DM_8K)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_8K_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_8K_RET_ENABLE;

	if (retn & PM_RETN_DM_16K)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_16K_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_16K_RET_ENABLE;

	if (retn & PM_RETN_DM_32K_A)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_32K_A_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_32K_A_RET_ENABLE;

	if (retn & PM_RETN_DM_32K_B)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_32K_B_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_32K_B_RET_ENABLE;

	if (retn & PM_RETN_DM_32K_C)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_32K_C_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_DM_32K_C_RET_ENABLE;

	WR_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL, reg);
}

static INLINE void aon_em_reten(uint32_t retn)			
{
	uint32_t reg = RD_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL);

	if (retn & PM_RETN_EM_4K_A)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_4K_A_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_4K_A_RET_ENABLE;

	if (retn & PM_RETN_EM_4K_B)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_4K_B_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_4K_B_RET_ENABLE;

	if (retn & PM_RETN_EM_8K_A)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_8K_A_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_8K_A_RET_ENABLE;

	if (retn & PM_RETN_EM_8K_B)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_8K_B_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_8K_B_RET_ENABLE;

	if (retn & PM_RETN_EM_16K)
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_16K_A_RET_ENABLE;
	else
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_EM_16K_A_RET_ENABLE;

	WR_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL, reg);
}

static INLINE void aon_trig_mem_retn(int en)			
{
	uint32_t reg = RD_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL);

	if (en) {
		reg |= AON_PS_REGS_PD_DOO_SLEEP_CTRL_TRIG_RET_ENABLE;
	} else {
		reg &= ~AON_PS_REGS_PD_DOO_SLEEP_CTRL_TRIG_RET_ENABLE;
	}

	WR_WORD(AON_PS_REGS_PD_DOO_SLEEP_CTRL, reg);
}

static INLINE uint32_t aon_wup_raw_status(void)
{
	return (RD_WORD(AON_PS_REGS_RAW_WAKEUP_BITS));
}

static INLINE uint32_t aon_wup_service_req(void)
{
	return (RD_WORD(AON_PS_REGS_SERVICED_REQUEST));
}

static INLINE uint32_t aon_wup_active_req(void)
{
	return (RD_WORD(AON_PS_REGS_ACTIVE_REQUEST));
}

static INLINE uint32_t aon_wup_last_req(void)
{
	return (RD_WORD(AON_PS_REGS_LAST_REQUEST));
}

static INLINE uint32_t aon_wup_status_and_clear(void)
{
	uint32_t reg = RD_WORD(AON_PS_REGS_REQUEST_WITH_SOFT_CLR);
	WR_WORD(AON_PS_REGS_REQUEST_WITH_SOFT_CLR, (reg | AON_PS_REGS_REQUEST_WITH_SOFT_CLR_CTL_REQUEST_CLR));
	return reg;
}

static INLINE void aon_ble_ext_wup(int en)
{
	uint32_t reg = RD_WORD(AON_REG_AON_MISC_CTRL);

	if (en) {
		reg |= AON_REG_AON_MISC_CTRL_CTL_BLE_EXT_WAKEUP_ENABLE;
	} else {
		reg &= ~AON_REG_AON_MISC_CTRL_CTL_BLE_EXT_WAKEUP_ENABLE;
	}

	WR_WORD(AON_REG_AON_MISC_CTRL, reg);
}

static INLINE uint32_t pm_wakeup_source(void)
{
	return (RD_WORD(GLOBAL_REG_PD0_WAKEUP_SRC_PD1_RST_INFO) & GLOBAL_REG_PD0_WAKEUP_SRC_PD1_RST_INFO_STS_WAKEUP_SRC_MASK);
}

void pd1_tmr_init(void);
void pd1_tmr_stop(void);
void pd1_tmr_periodic_start(uint32_t usec);
/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief  Power Management initialization function.  
 *
 * @param[in] slp_wup		Sleep timer can wake up system from deep sleep; 1: yes, 0: no.
 * @param[in] ble_wup		BLE can wake up system from deep slee; 1: yes, 0: no.
 * @param[in] bod_wup		Brown out can wake up system from deep slee; 1: yes, 0: no.
 * @param[in] mix_wup		Mixed signal IO can wake up system from deep slee; 1: yes, 0: no.
 * @param[in] trig_retn	Trigger memory retention flag; 1: yes, 0: no
 * @param[in] dm_retn		Data memory retention flag; @see enum dm_retn.
 * @param[in] em_retn		BLE memory retention flag; @see enum em_retn.
 *
 * @return  @see enum pm_err
 ****************************************************************************************
 */
int hal_pm_init(int slp_wup, int ble_wup, int bod_wup, int mix_wup, int trig_retn, uint32_t dm_retn, uint32_t em_retn);

/**
 ****************************************************************************************
 * @brief  Register power module function.  
 *
 * @param[in] module				A pointer to the PM module structure, @see struct pm_module  
 *
 * @return  @see enum pm_err
 ****************************************************************************************
 */
int hal_pm_reg_mod(struct pm_module *module);

/**
 ****************************************************************************************
 * @brief  Unregister power module function.  
 *
 * @param[in] module				A pointer to the PM module structure, @see struct pm_module  
 *
 * @return  @see enum pm_err
 ****************************************************************************************
 */
int hal_pm_unreg_mod(struct pm_module *module);

/**
 ****************************************************************************************
 * @brief  System shutdown and resume function.
 * @note This function is designed to be called by the OS idle routine.  The shut down procedure are as follows:
 *					1. Mask all the interrupts,
 *					1. Call each driver or application's power state function to find the power state and sleep time,
 *					2. If power state is active, then unmask interrupt and return to OS,
 *					3. If power state is sleep, then call arm's WFI to shut down CPU clock. Once any interrupt happens,
 *						WFI will finish and this function will unmask interrupt and return the sleep time to OS,
 *					5. If power state is deep sleep, then save the context and ask HW to remove power,
 *					6. Once HW resume, boot ram will recover clock, XIP, then jump to this function,  This function will
 *						call each driver and application register power up function to resume system and then it will
 *						unmask interrupt and return the deep sleep time to the OS.
 *
 * @param[in] os_sleep				Time in millisecond that Os is idle
 *
 * @return  Final sleep time.
 ****************************************************************************************
 */
uint32_t hal_pm_suspend_and_resume(uint32_t os_sleep);

/**
 ****************************************************************************************
 * @brief  Register BLE power module function.  
 *
 * @param[in] module				A pointer to the PM module structure, @see struct pm_module  
 *
 * @return  @see enum pm_err
 ****************************************************************************************
 */
int hal_pm_reg_ble_mod(struct pm_module *module);

/**
 ****************************************************************************************
 * @brief  Unregister BLE power module function.  
 *
 * @param[in] module				A pointer to the PM module structure, @see struct pm_module  
 *
 * @return  @see enum pm_err
 ****************************************************************************************
 */
int hal_pm_unreg_ble_mod(struct pm_module *module);

/**
 ****************************************************************************************
 * @brief  Read the wake up source.  
 *
 *
 * @return  The source of wake up, @see enum pm_ws
 ****************************************************************************************
 */
uint32_t hal_pm_get_wup_src(void);

/**
 ****************************************************************************************
 * @brief  Enable/Disable mix signal (GPIO PORT 2) wake up.  
 *
 *
 * @return  No Return
 ****************************************************************************************
 */
void hal_pm_mix_sig_wup_enable(void);
void hal_pm_mix_sig_wup_disable(void);


/// @} HAL_POWER

#endif		// HAL_POWER_H 
