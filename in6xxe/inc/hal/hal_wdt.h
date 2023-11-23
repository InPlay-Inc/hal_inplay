/**
 ****************************************************************************************
 *
 * @file hal_wdt.h
 *
 * @brief Watch Dog Timer header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_WDT_H
#define HAL_WDT_H

/**
 ****************************************************************************************
 * @defgroup HAL_WDT Watch dog timer driver  
 * @ingroup HAL
 * @brief  HAL_WDT
 * @{
 ****************************************************************************************
 */

#include "in_mmap.h"

/*
 * Defines Regular WDT (no sleep)
 ****************************************************************************************
 */

#define WDT_REG_CR_OFS	0x00000000UL
#define WDT_REG_TOR_OFS	0x00000004UL
#define WDT_REG_CVR_OFS	0x00000008UL
#define WDT_REG_CRR_OFS	0x0000000CUL
#define WDT_REG_ISR_OFS	0x00000010UL
#define WDT_REG_EOI_OFS	0x00000014UL

#define WDT_CR_WDT_EN   0x00000001UL
#define WDT_CR_RMOD		0x00000002UL

#define WDT_TORR_TOP		0x0000000FUL
#define WDT_TORR_TOP_INIT	0x000000F0UL

#define WDT_INT_PD1_TMO	    0x1
#define WDT_INT_PD1_SYS_RST	0x2
#define WDT_INT_AON	        0x4

#define WDT_RST_OUTPUT_PIN_POL_HIGH 1
#define WDT_RST_OUTPUT_PIN_POL_LOW  0

/*
 * Enum
 ****************************************************************************************
 */

enum wdt_error {
	WDT_ERR_OK = 0,
	WDT_ERR_INVALID_PARAM = -1,
} ;
    
typedef enum wdt_reset_mode {
    WDT_RESET_NONE = 0,
	WDT_RESET_ARM,
	WDT_RESET_CHIP
} wdt_reset_mode_t;

typedef enum wdt_reset_output_pin_e {
	WDT_RESET_O_PIN_0_0 = 0,
	WDT_RESET_O_PIN_0_4,
	WDT_RESET_O_PIN_0_8,
	WDT_RESET_O_PIN_1_2,
	WDT_RESET_O_PIN_1_6,
	WDT_RESET_O_PIN_3_5,
	WDT_RESET_O_PIN_4_1,
	WDT_RESET_O_PIN_NONE,
} wdt_rst_o_pin_t;

typedef struct wdt_cfg_param_s
{
    uint32_t timeout_ms;
    wdt_reset_mode_t reset_mode;
    wdt_rst_o_pin_t rst_out_pin;
    uint8_t rst_out_pin_pol;
    uint8_t wakeup_en;
}wdt_cfg_param_t;

/*
 * Inline AON WDT Functions
 ****************************************************************************************
 */

static INLINE void aon_wdt_clk_src(int rtc)
{
	uint32_t reg = RD_WORD(AON_REG_AON_MISC_CTRL);
	
	if (rtc) {
		reg |= AON_REG_AON_MISC_CTRL_CTL_SEL_TIMER_WDT_32K_CLK;
		reg |= AON_REG_AON_MISC_CTRL_CTL_WDT_RST_SWITCH_RC_CLK;
	} else {
		reg &= ~AON_REG_AON_MISC_CTRL_CTL_SEL_TIMER_WDT_32K_CLK;
	}

	WR_WORD(AON_REG_AON_MISC_CTRL, reg);
}

static INLINE void aon_wdt_wup(int en)
{
	uint32_t reg = RD_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL);
	
	if (en) {
		reg |= AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER_WDT_WAKEUP_EN;
	} else {
		reg &= ~AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER_WDT_WAKEUP_EN;
	}

	WR_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL, reg);
}

static INLINE void aon_wdt_clk_en(int en)
{
	uint32_t reg = RD_WORD(AON_REG_AON_TIMER_CLK_CTRL);
	if (en)
		reg |= 	AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER_WDT_CLK_EN;
	else
		reg &= ~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER_WDT_CLK_EN;

	WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, reg);
}


static INLINE void aon_wdt_reload_en(int en)
{
	uint32_t reg = RD_WORD(AON_REG_AON_TIMER_CLK_CTRL);
	if (en)
		reg |= 	AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER_WDT_AUTO_RELOAD_EN;
	else
		reg &= ~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER_WDT_AUTO_RELOAD_EN;

	WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, reg);
}

static INLINE void aon_wdt_reset_pd0(uint8_t clk_cycles, int rst_out_pol)
{
	uint32_t reg = AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_RESET_PD0;
	reg |= ( rst_out_pol > 0) ? AON_REG_AON_TIMER_WDT_CTRL_CTL_WDT_RST_OUTPUT_POLARITY : 0;
	reg |= ((clk_cycles & AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD0_RESET_DLY_MASK) << AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD0_RESET_DLY_SHIFT); 
	WR_WORD(AON_REG_AON_TIMER_WDT_CTRL, reg);
}

static INLINE void aon_wdt_reset_pd1(uint8_t clk_cycles, int rst_out_pol)
{
	uint32_t reg = AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_RESET_PD1;
	reg |= ( rst_out_pol > 0) ? AON_REG_AON_TIMER_WDT_CTRL_CTL_WDT_RST_OUTPUT_POLARITY : 0;
	reg |= ((clk_cycles & AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD1_RESET_DLY_MASK) << AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD1_RESET_DLY_SHIFT); 
	WR_WORD(AON_REG_AON_TIMER_WDT_CTRL, reg);
}

static INLINE void aon_wdt_reset_chip_disable(void)
{
    uint32_t reg = AON_REG_AON_TIMER_WDT_CTRL_DEFAULT;
    reg &= (~(AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_RESET_PD1));
    reg &= (~(AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_RESET_PD0));
    WR_WORD(AON_REG_AON_TIMER_WDT_CTRL, reg);
}

static INLINE void aon_wdt_int_clk(int enable)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (enable) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_WDT_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_WDT_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void aon_wdt(int en)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL);
	if (en)
		reg |= GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_EN;
	else {
		reg &= ~GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_EN;
		reg |= GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_CTRL_SYNC_32K_RST_N;
	}
	WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL, reg);

	if (en) {
		while (!(RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_STS) & GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_EN));
	} else {
		while ((RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_STS) & GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_EN));
	}
}

static INLINE void aon_wdt_en(void)
{
	WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL)|GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_EN));
	int retry = 0;
	while (!(RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_STS) & GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_EN)) {
		retry += 1;
		if (retry > 20) {
			WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL)|GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_EN));
			retry = 0;
		}
	}
}

static INLINE void aon_wdt_dis(void)
{
	WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL, ((RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL)&~GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_EN)|GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_CTRL_SYNC_32K_RST_N));
	int retry = 0;
	while ((RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_STS) & GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_EN)) {
		retry += 1;
		if (retry > 0) {
			WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL, ((RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL)&~GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_EN)));
			retry = 0;
		}
	}
}

static INLINE void aon_wdt_irq_clear(void)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL);
	reg |= 	GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_IRQ_CLR;
	WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL, reg);

	while (!(RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_STS) & GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_IRQ_CLR));
}

static INLINE void aon_wdt_touch(void)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL);
	reg |= GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_TOUCH;
	WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_CTL, reg);

	while (!(RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_STS) & GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_TOUCH));
}

static INLINE void aon_wdt_init_val(uint32_t val)
{
	WR_WORD(GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL, val);
	while (RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_STS) != val);	
}

static INLINE uint32_t aon_wdt_read_tick(void)
{
	WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_WDT_TAKE_SNAPSHOT);
	return (RD_WORD(GLOBAL2_REG_AON_TIMER_WDT_SNAPSHOT_VAL));
}

static INLINE uint32_t aon_wdt_int_status(void)
{
	return (RD_WORD(GLOBAL2_REG_WDT_INTR_STATUS));
}

static INLINE uint32_t aon_wdt_int_mask_status(void)
{
	return (RD_WORD(GLOBAL2_REG_WDT_INTR_MASK_STATUS));
}

static INLINE void aon_wdt_int_clear(uint32_t status)
{
	WR_WORD(GLOBAL2_REG_WDT_INTR_CLEAR, status);
}

static INLINE void aon_wdt_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL2_REG_WDT_INTR_MASK_SET, mask);
}

static INLINE void aon_wdt_int_mask_clear(uint32_t mask)
{
	WR_WORD(GLOBAL2_REG_WDT_INTR_MASK_CLEAR, mask);
}

/*
 * Enumeratios
 ****************************************************************************************
 */

/*
 * Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Enable watch dog timer
 *
 * @param[in] cfg			        Configuration parameters of WDT  
 * @param[in] callback				Call back function when WDT interrupt happens.
 * @param[in] arg					User supply call back parameter.
 *
 * @return Driver error return code, @see enum wdt_error 
 ****************************************************************************************
 */
int hal_aon_wdt_start(wdt_cfg_param_t *cfg, void (*callback)(void *arg), void *arg);


/**
 ****************************************************************************************
 * @brief Reload the watch dog timer counter
 *
 *
 * @return void. This function has no return value. 
 ****************************************************************************************
 */
void hal_aon_wdt_touch(void);

void hal_aon_wdt_stop(void);

/// @} HAL_WDT

#endif		// HAL_WDT_H
