/**
 ****************************************************************************************
 *
 * @file hal_gpio.h
 *
 * @brief HAL GPIO  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */
#ifndef HAL_GPIO_H
#define HAL_GPIO_H

/**
 ****************************************************************************************
 * @defgroup HAL_GPIO Platform gpio configuration  
 * @ingroup HAL
 * @brief  HAL_GPIO
 * @{
 ****************************************************************************************
 */
#include <stdint.h>
#include "in_mmap.h"
#include "in_compile.h"

/*
 * Defines
 ****************************************************************************************
 */

#define GPIO_CFG_PIN_SHIFT 0
#define GPIO_CFG_PIN_MASK 0xF
#define GPIO_CFG_PORT_SHIFT 4
#define GPIO_CFG_PORT_MASK 0xF
#define GPIO_CFG_MUX_SHIFT 8
#define GPIO_CFG_MUX_MASK 0xF
#define GPIO_CFG_OE_IE_SHIFT 12
#define GPIO_CFG_OE_IE_MASK 0xF
#define GPIO_CFG_PD_PU_SHIFT 16
#define GPIO_CFG_PD_PU_MASK 0xF
#define GPIO_CFG_INV_SHIFT 20
#define GPIO_CFG_INV_MASK 0x1
#define GPIO_CFG_KEYBOARD_MUX_SHIFT 24
#define GPIO_CFG_KEYBOARD_MUX_MASK 0x3

#define QSPI_CFG_PIN_SHIFT 0
#define QSPI_CFG_PIN_MASK 0xF
#define QSPI_CFG_MUX_SHIFT 4
#define QSPI_CFG_MUX_MASK 0xF
#define QSPI_CFG_OE_IE_SHIFT 8
#define QSPI_CFG_OE_IE_MASK 0xF
#define QSPI_CFG_PD_PU_SHIFT 12
#define QSPI_CFG_PD_PU_MASK 0xF

#define GPIO_PORT_0_INT_RISE_EDGE_SHIFT 0
#define GPIO_PORT_0_INT_FALL_EDGE_SHIFT 9
#define GPIO_PORT_0_WUP_SHIFT 18
#define GPIO_PORT_0_INT_RISE_EDGE_MASK 0x1FF
#define GPIO_PORT_0_INT_FALL_EDGE_MASK (0x1FF << 9)
#define GPIO_PORT_0_WUP_MASK (0x1FF << 18)
#define GPIO_PORT_1_INT_RISE_EDGE_SHIFT 0
#define GPIO_PORT_1_INT_FALL_EDGE_SHIFT 10
#define GPIO_PORT_1_WUP_SHIFT 20
#define GPIO_PORT_1_INT_RISE_EDGE_MASK 0x3FF
#define GPIO_PORT_1_INT_FALL_EDGE_MASK (0x3FF << 10)
#define GPIO_PORT_1_WUP_MASK (0x3FF << 20)
#define GPIO_PORT_2_INT_RISE_EDGE_SHIFT 0
#define GPIO_PORT_2_INT_FALL_EDGE_SHIFT 10
#define GPIO_PORT_2_WUP_SHIFT 20
#define GPIO_PORT_2_INT_RISE_EDGE_MASK 0x3FF
#define GPIO_PORT_2_INT_FALL_EDGE_MASK (0x3FF << 10)
#define GPIO_PORT_2_WUP_MASK (0x3FF << 20)
#define GPIO_PORT_3_INT_RISE_EDGE_SHIFT 0
#define GPIO_PORT_3_INT_FALL_EDGE_SHIFT 6
#define GPIO_PORT_3_WUP_SHIFT 12
#define GPIO_PORT_3_INT_RISE_EDGE_MASK 0x3F
#define GPIO_PORT_3_INT_FALL_EDGE_MASK (0x3F << 6)
#define GPIO_PORT_3_WUP_MASK (0x3F << 12)
#define GPIO_PORT_4_INT_RISE_EDGE_SHIFT 0
#define GPIO_PORT_4_INT_FALL_EDGE_SHIFT 4
#define GPIO_PORT_4_WUP_SHIFT 8
#define GPIO_PORT_4_INT_RISE_EDGE_MASK 0xF
#define GPIO_PORT_4_INT_FALL_EDGE_MASK (0xF << 4)
#define GPIO_PORT_4_WUP_MASK (0xF << 8)

#define GPIO_PORT_0_NB_PINS	9
#define GPIO_PORT_1_NB_PINS	10
#define GPIO_PORT_2_NB_PINS	9
#define GPIO_PORT_3_NB_PINS	6
#define GPIO_PORT_4_NB_PINS	4
#define GPIO_NB_PINS	(GPIO_PORT_0_NB_PINS+GPIO_PORT_1_NB_PINS+GPIO_PORT_2_NB_PINS+GPIO_PORT_3_NB_PINS+GPIO_PORT_4_NB_PINS)

/*
 * Enumerations
 ****************************************************************************************
 */
enum gpio_port {
	GPIO_PORT_0,
	GPIO_PORT_1,
	GPIO_PORT_2,
	GPIO_PORT_3,
	GPIO_PORT_4,
	GPIO_PORT_MAX,
};

enum gpio_pin {
	GPIO_PIN_0,
	GPIO_PIN_1,
	GPIO_PIN_2,
	GPIO_PIN_3,
	GPIO_PIN_4,
	GPIO_PIN_5,
	GPIO_PIN_6,
	GPIO_PIN_7,
	GPIO_PIN_8,
	GPIO_PIN_9,
	GPIO_PIN_MAX,
};

enum gpio_mux {
	GPIO_MUX_0,
	GPIO_MUX_1,
	GPIO_MUX_2,
	GPIO_MUX_3,
	GPIO_MUX_4,
	GPIO_MUX_5,
	GPIO_MUX_6,
	GPIO_MUX_7,
	GPIO_MUX_MAX,
};

enum qspi_pin {
	QSPI_PIN_0,
	QSPI_PIN_1,
	QSPI_PIN_2,
	QSPI_PIN_3,
	QSPI_PIN_4,
	QSPI_PIN_5,
};

enum qspi_mux {
	QSPI_MUX_0,
	QSPI_MUX_1,
	QSPI_MUX_2,
	QSPI_MUX_3,
	QSPI_MUX_4,
	QSPI_MUX_5,
};

enum gpio_slp_grp_0_port {
	GPIO_SLP_GRP_0_PORT_0 = 0,
	GPIO_SLP_GRP_0_PORT_1 = 1,
	GPIO_SLP_GRP_0_PORT_3 = 3,
	GPIO_SLP_GRP_0_PORT_4 = 4,
};

enum gpio_slp_grp_0_port_0_pins {
	GPIO_SLP_GRP_0_PORT_0_PIN_0 = 0,
	GPIO_SLP_GRP_0_PORT_0_PIN_4 = 4,
	GPIO_SLP_GRP_0_PORT_0_PIN_8 = 8,
};

enum gpio_slp_grp_0_port_1_pins {
	GPIO_SLP_GRP_0_PORT_1_PIN_2 = 2,
	GPIO_SLP_GRP_0_PORT_1_PIN_6 = 6,
};

enum gpio_slp_grp_0_port_3_pins {
	GPIO_SLP_GRP_0_PORT_3_PIN_5 = 5,
};

enum gpio_slp_grp_0_port_4_pins {
	GPIO_SLP_GRP_0_PORT_4_PIN_1 = 1,
};

enum gpio_slp_grp_1_port {
	GPIO_SLP_GRP_1_PORT_0 = 0,
	GPIO_SLP_GRP_1_PORT_1 = 1,
	GPIO_SLP_GRP_1_PORT_3 = 3,
	GPIO_SLP_GRP_1_PORT_4 = 4,
};

enum gpio_slp_grp_1_port_0_pins {
	GPIO_SLP_GRP_1_PORT_0_PIN_1 = 1,
	GPIO_SLP_GRP_1_PORT_0_PIN_5 = 5,
};

enum gpio_slp_grp_1_port_1_pins {
	GPIO_SLP_GRP_1_PORT_1_PIN_3 = 3,
	GPIO_SLP_GRP_1_PORT_1_PIN_7 = 7,
};

enum gpio_slp_grp_1_port_3_pins {
	GPIO_SLP_GRP_1_PORT_3_PIN_2 = 2,
};

enum gpio_slp_grp_1_port_4_pins {
	GPIO_SLP_GRP_1_PORT_4_PIN_2 = 2,
};

enum gpio_slp_grp_2_port {
	GPIO_SLP_GRP_2_PORT_0 = 0,
	GPIO_SLP_GRP_2_PORT_1 = 1,
	GPIO_SLP_GRP_2_PORT_3 = 3,
	GPIO_SLP_GRP_2_PORT_4 = 4,
};

enum gpio_slp_grp_2_port_0_pins {
	GPIO_SLP_GRP_2_PORT_0_PIN_2 = 2,
	GPIO_SLP_GRP_2_PORT_0_PIN_6 = 6,
};

enum gpio_slp_grp_2_port_1_pins {
	GPIO_SLP_GRP_2_PORT_1_PIN_0 = 0,
	GPIO_SLP_GRP_2_PORT_1_PIN_4 = 4,
	GPIO_SLP_GRP_2_PORT_1_PIN_8 = 8,
};

enum gpio_slp_grp_2_port_3_pins {
	GPIO_SLP_GRP_2_PORT_3_PIN_3 = 3,
};

enum gpio_slp_grp_2_port_4_pins {
	GPIO_SLP_GRP_2_PORT_4_PIN_3 = 3,
};

enum gpio_slp_grp_3_port {
	GPIO_SLP_GRP_3_PORT_0 = 0,
	GPIO_SLP_GRP_3_PORT_1 = 1,
	GPIO_SLP_GRP_3_PORT_3 = 3,
	GPIO_SLP_GRP_3_PORT_4 = 4,
};

enum gpio_slp_grp_3_port_0_pins {
	GPIO_SLP_GRP_3_PORT_0_PIN_3 = 3,
	GPIO_SLP_GRP_3_PORT_0_PIN_7 = 7,
};

enum gpio_slp_grp_3_port_1_pins {
	GPIO_SLP_GRP_3_PORT_1_PIN_1 = 1,
	GPIO_SLP_GRP_3_PORT_1_PIN_5 = 5,
	GPIO_SLP_GRP_3_PORT_1_PIN_9 = 9,
};

enum gpio_slp_grp_3_port_3_pins {
	GPIO_SLP_GRP_3_PORT_3_PIN_4 = 4,
};

enum gpio_slp_grp_3_port_4_pins {
	GPIO_SLP_GRP_3_PORT_4_PIN_0 = 0,
};

enum gpio_slp_grp_0_pin_mux {
	GPIO_SLP_GRP_0_MUX_NONE = 0,
	GPIO_SLP_GRP_0_MUX_AON_CLK = 1,
	GPIO_SLP_GRP_0_MUX_PD1_WDT_RESET_PD0 = 2,
	GPIO_SLP_GRP_0_MUX_SQ_WAVE = 3,
	GPIO_SLP_GRP_0_MUX_PD1_WDT_RESET_PD1 = 4,
	GPIO_SLP_GRP_0_MUX_DCDC_EN = 5,
	GPIO_SLP_GRP_0_MUX_WDT_RESET_PD0 = 6,
	GPIO_SLP_GRP_0_MUX_WDT_RESET_PD0_INV = 7,
};

enum gpio_slp_grp_1_pin_mux {
	GPIO_SLP_GRP_1_MUX_NONE = 0,
	GPIO_SLP_GRP_1_MUX_PD1_RESET = 1,
	GPIO_SLP_GRP_1_MUX_PD1_RESET_INV = 2,
	GPIO_SLP_GRP_1_MUX_FLASH_POW = 3,
	GPIO_SLP_GRP_1_MUX_OSC_EN = 4,
	GPIO_SLP_GRP_1_MUX_SQ_WAVE = 5,
	GPIO_SLP_GRP_1_MUX_WUP_REQ = 6,
	GPIO_SLP_GRP_1_MUX_BLE_CLK_ON = 7,
};

enum gpio_slp_grp_2_pin_mux {
	GPIO_SLP_GRP_2_MUX_NONE = 0,
	GPIO_SLP_GRP_2_MUX_SLP_REQ = 1,
	GPIO_SLP_GRP_2_MUX_RTC_CLK = 2,
	GPIO_SLP_GRP_2_MUX_RC_CLK = 3,
	GPIO_SLP_GRP_2_MUX_AON_TIMER_0_TMO = 4,
	GPIO_SLP_GRP_2_MUX_AON_TIMER_1_TMO = 5,
	GPIO_SLP_GRP_2_MUX_AON_TIMER_2_TMO = 6,
	GPIO_SLP_GRP_2_MUX_AON_TIMER_3_TMO = 7,
};

enum gpio_slp_grp_3_pin_mux {
	GPIO_SLP_GRP_3_MUX_NONE = 0,
	GPIO_SLP_GRP_3_MUX_EM_16K_EN = 1,
	GPIO_SLP_GRP_3_MUX_EM_16K_RETN = 2,
	GPIO_SLP_GRP_3_MUX_DM_32K_A_EN = 3,
	GPIO_SLP_GRP_3_MUX_DM_32K_RETN = 4,
	GPIO_SLP_GRP_3_MUX_DM_32K_B_EN = 5,
	GPIO_SLP_GRP_3_MUX_DM_32K_B_RETN = 6,
	GPIO_SLP_GRP_3_MUX_SENSOR_POW = 7,
};

enum gpio_err {
	GPIO_ERR_NO_ERROR = 0,
	GPIO_ERR_INVALID_PARAM = -1,
};

/*
 * Type Defines
 ****************************************************************************************
 */
typedef struct {
	uint8_t port;
	uint8_t pin;
} gio_aon_grp_t;

/*
 * Inline Functions
 ****************************************************************************************
 */

static INLINE void gpio_port_0_pin_mux(int pin, int mux, int inv)
{
	uint32_t addr;

	if (pin >= 8) {
		pin -= 8;
		addr = GLOBAL_REG_PIN_MUX_GPIO_01_CONT;
	} else {
		addr = GLOBAL_REG_PIN_MUX_GPIO_0;
	}

	uint32_t reg = RD_WORD(addr);

	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	if (inv)
		reg |= (1 << ((pin << 2) + 3));
	else
		reg &= ~(1 << ((pin << 2) + 3));

	WR_WORD(addr, reg);
}

static INLINE void gpio_port_1_pin_mux(int pin, int mux, int inv)
{
	uint32_t addr;

	if (pin >= 8) {
		pin -= 8;
		pin += 1;
		addr = GLOBAL_REG_PIN_MUX_GPIO_01_CONT;
	} else {
		addr = GLOBAL_REG_PIN_MUX_GPIO_1;
	}

	uint32_t reg = RD_WORD(addr);

	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	if (inv)
		reg |= (1 << ((pin << 2) + 3));
	else
		reg &= ~(1 << ((pin << 2) + 3));


	WR_WORD(addr, reg);
}


static INLINE void gpio_port_2_pin_mux(int pin, int mux, int inv)
{
	uint32_t addr;

	if (pin >= 8) {
		pin -= 8;
		addr = GLOBAL_REG_PIN_MUX_GPIO_23_CONT;
	} else {
		addr = GLOBAL_REG_PIN_MUX_GPIO_2;
	}

	uint32_t reg = RD_WORD(addr);

	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	if (inv)
		reg |= (1 << ((pin << 2) + 3));
	else
		reg &= ~(1 << ((pin << 2) + 3));


	WR_WORD(addr, reg);
}

static INLINE void gpio_port_3_pin_mux(int pin, int mux, int inv)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_23_CONT);

	pin += 1;
	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	if (inv)
		reg |= (1 << ((pin << 2) + 3));
	else
		reg &= ~(1 << ((pin << 2) + 3));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_23_CONT, reg);
}

static INLINE void gpio_port_4_pin_mux(int pin, int mux, int inv)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_4);

	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	if (inv)
		reg |= (1 << ((pin << 2) + 3));
	else
		reg &= ~(1 << ((pin << 2) + 3));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_4, reg);
}

static INLINE uint32_t gpio_port_0_pin_mux_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0));
}

static INLINE uint32_t gpio_port_0_pin_mux_cont_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_01_CONT) & 0xF);
}

static INLINE uint32_t gpio_port_1_pin_mux_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1));
}

static INLINE uint32_t gpio_port_1_pin_mux_cont_get(void)
{
	return ((RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_01_CONT) >> 4));
}

static INLINE uint32_t gpio_port_2_pin_mux_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2));
}

static INLINE uint32_t gpio_port_2_pin_mux_cont_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_23_CONT) & 0xF);
}

static INLINE uint32_t gpio_port_3_pin_mux_get(void)
{
	return ((RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_23_CONT) >> 4));
}

static INLINE uint32_t gpio_port_4_pin_mux_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_4));
}

static INLINE void gpio_port_0_output_enable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_0_OUTPUT_SET, (1 << (GLOBAL_REG_GPIO_0_OUTPUT_SET_CTL_GPIO_0_OUTPUT_EN_SET_SHIFT + pin)));
}

static INLINE void gpio_port_0_output_disable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_0_OUTPUT_CLEAR, (1 << (GLOBAL_REG_GPIO_0_OUTPUT_CLEAR_CTL_GPIO_0_OUTPUT_EN_CLEAR_SHIFT + pin)));

}

static INLINE void gpio_port_0_output(int pin, int high)
{
	if (high) {
		WR_WORD(GLOBAL_REG_GPIO_0_OUTPUT_SET, (1 << pin));
	} else {
		WR_WORD(GLOBAL_REG_GPIO_0_OUTPUT_CLEAR, (1 << pin));
	}
}

static INLINE int gpio_port_0_output_status(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_0_IO_STATUS) >> (GLOBAL_REG_GPIO_0_IO_STATUS_STS_GPIO_0_CURR_OUTPUT_SHIFT + pin)) & 1);
}

static INLINE void gpio_port_1_output_enable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_1_OUTPUT_SET, (1 << (GLOBAL_REG_GPIO_1_OUTPUT_SET_CTL_GPIO_1_OUTPUT_EN_SET_SHIFT + pin)));
}

static INLINE void gpio_port_1_output_disable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_1_OUTPUT_CLEAR, (1 << (GLOBAL_REG_GPIO_1_OUTPUT_CLEAR_CTL_GPIO_1_OUTPUT_EN_CLEAR_SHIFT + pin)));

}

static INLINE void gpio_port_1_output(int pin, int high)
{
	if (high) {
		WR_WORD(GLOBAL_REG_GPIO_1_OUTPUT_SET, (1 << pin));
	} else {
		WR_WORD(GLOBAL_REG_GPIO_1_OUTPUT_CLEAR, (1 << pin));
	}
}

static INLINE int gpio_port_1_output_status(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_1_IO_STATUS) >> (GLOBAL_REG_GPIO_1_IO_STATUS_STS_GPIO_1_CURR_OUTPUT_SHIFT + pin)) & 1);
}

static INLINE void gpio_port_2_output_enable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_2_OUTPUT_SET, (1 << (GLOBAL_REG_GPIO_2_OUTPUT_SET_CTL_GPIO_2_OUTPUT_EN_SET_SHIFT + pin)));
}

static INLINE void gpio_port_2_output_disable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_2_OUTPUT_CLEAR, (1 << (GLOBAL_REG_GPIO_2_OUTPUT_CLEAR_CTL_GPIO_2_OUTPUT_EN_CLEAR_SHIFT + pin)));

}

static INLINE void gpio_port_2_output(int pin, int high)
{
	if (high) {
		WR_WORD(GLOBAL_REG_GPIO_2_OUTPUT_SET, (1 << pin));
	} else {
		WR_WORD(GLOBAL_REG_GPIO_2_OUTPUT_CLEAR, (1 << pin));
	}
}

static INLINE int gpio_port_2_output_status(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_2_IO_STATUS) >> (GLOBAL_REG_GPIO_2_IO_STATUS_STS_GPIO_2_CURR_OUTPUT_SHIFT + pin)) & 1);
}

static INLINE void gpio_port_3_output_enable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_SET, (1 << (GLOBAL_REG_GPIO_34_OUTPUT_SET_CTL_GPIO_3_OUTPUT_EN_SET_SHIFT + pin)));
}

static INLINE void gpio_port_3_output_disable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_CLEAR, (1 << (GLOBAL_REG_GPIO_34_OUTPUT_CLEAR_CTL_GPIO_3_OUTPUT_EN_CLEAR_SHIFT + pin)));
}

static INLINE void gpio_port_3_output(int pin, int high)
{
	if (high) {
		WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_SET, (1 << pin));
	} else {
		WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_CLEAR, (1 << pin));
	}
}

static INLINE int gpio_port_3_output_status(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_34_IO_STATUS) >> (GLOBAL_REG_GPIO_34_IO_STATUS_STS_GPIO_3_CURR_OUTPUT_SHIFT + pin)) & 1);
}

static INLINE void gpio_port_4_output_enable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_SET, (1 << (GLOBAL_REG_GPIO_34_OUTPUT_SET_CTL_GPIO_4_OUTPUT_EN_SET_SHIFT + pin)));
}

static INLINE void gpio_port_4_output_disable(int pin)
{
	WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_CLEAR, (1 << (GLOBAL_REG_GPIO_34_OUTPUT_CLEAR_CTL_GPIO_4_OUTPUT_EN_CLEAR_SHIFT + pin)));
}

static INLINE void gpio_port_4_output(int pin, int high)
{
	if (high) {
		WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_SET, (1 << (pin + GLOBAL_REG_GPIO_34_OUTPUT_SET_CTL_GPIO_4_OUTPUT_SET_SHIFT)));
	} else {
		WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_CLEAR, (1 << (pin + GLOBAL_REG_GPIO_34_OUTPUT_CLEAR_CTL_GPIO_4_OUTPUT_CLEAR_SHIFT)));
	}
}

static INLINE int gpio_port_4_output_status(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_34_IO_STATUS) >> (GLOBAL_REG_GPIO_34_IO_STATUS_STS_GPIO_4_CURR_OUTPUT_SHIFT + pin)) & 1);
}

static INLINE int gpio_port_0_input(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_0_IO_STATUS) >> pin) & 1);
}

static INLINE int gpio_port_1_input(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_1_IO_STATUS) >> pin) & 1);
}

static INLINE int gpio_port_2_input(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_2_IO_STATUS) >> pin) & 1);
}

static INLINE int gpio_port_3_input(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_34_IO_STATUS) >> pin) & 1);
}

static INLINE int gpio_port_4_input(int pin)
{
	return ((RD_WORD(GLOBAL_REG_GPIO_34_IO_STATUS) >> (pin + GLOBAL_REG_GPIO_34_IO_STATUS_STS_GPIO_4_INPUT_SHIFT)) & 1);
}

static INLINE void gpio_port_0_pad_oe_ie(int pin, int oe, int ie)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE);

	if (oe)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
	
	if (ie)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE_CTL_GPIO_TO_PAD_IE_0_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE_CTL_GPIO_TO_PAD_IE_0_SHIFT));
 
	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE, reg);
}

static INLINE uint32_t gpio_port_0_pad_oe_ie_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE));
}

static INLINE void gpio_port_1_pad_oe_ie(int pin, int oe, int ie)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE);

	if (oe)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
	
	if (ie)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE_CTL_GPIO_TO_PAD_IE_1_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE_CTL_GPIO_TO_PAD_IE_1_SHIFT));
 
	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE, reg);

}

static INLINE uint32_t gpio_port_1_pad_oe_ie_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE));
}

static INLINE void gpio_port_2_pad_oe_ie(int pin, int oe, int ie)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE);

	if (oe)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
	
	if (ie)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE_CTL_GPIO_TO_PAD_IE_2_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE_CTL_GPIO_TO_PAD_IE_2_SHIFT));
 
	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE, reg);

}

static INLINE uint32_t gpio_port_2_pad_oe_ie_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE));
}

static INLINE void gpio_port_3_pad_oe_ie(int pin, int oe, int ie)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE);

	if (oe)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
	
	if (ie)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE_CTL_GPIO_TO_PAD_IE_3_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE_CTL_GPIO_TO_PAD_IE_3_SHIFT));
 
	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE, reg);

}

static INLINE void gpio_port_4_pad_oe_ie(int pin, int oe, int ie)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE);

	if (oe)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE_CTL_GPIO_TO_PAD_OE_4_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE_CTL_GPIO_TO_PAD_OE_4_SHIFT));
	
	if (ie)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE_CTL_GPIO_TO_PAD_IE_4_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE_CTL_GPIO_TO_PAD_IE_4_SHIFT));
 
	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE, reg);
}

static INLINE uint32_t gpio_port_34_pad_oe_ie_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE));
}

static INLINE void gpio_port_0_pad_pd_pu(int pin, int pd, int pu)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU);
	if (pd)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);

	if (pu) 
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU_CTL_GPIO_TO_PAD_PU_0_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU_CTL_GPIO_TO_PAD_PU_0_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU, reg);
}

static INLINE uint32_t gpio_port_0_pad_pd_pu_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU));
}

static INLINE void gpio_port_1_pad_pd_pu(int pin, int pd, int pu)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU);
	if (pd)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);

	if (pu) 
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU_CTL_GPIO_TO_PAD_PU_1_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU_CTL_GPIO_TO_PAD_PU_1_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU, reg);
}

static INLINE uint32_t gpio_port_1_pad_pd_pu_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU));
}

static INLINE void gpio_port_2_pad_pd_pu(int pin, int pd, int pu)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU);
	if (pd)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);

	if (pu) 
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU_CTL_GPIO_TO_PAD_PU_2_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU_CTL_GPIO_TO_PAD_PU_2_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU, reg);
}

static INLINE uint32_t gpio_port_2_pad_pd_pu_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU));
}

static INLINE void gpio_port_3_pad_pd_pu(int pin, int pd, int pu)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU);
	if (pd)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);

	if (pu) 
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU_CTL_GPIO_TO_PAD_PU_3_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU_CTL_GPIO_TO_PAD_PU_3_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU, reg);
}

static INLINE void gpio_port_4_pad_pd_pu(int pin, int pd, int pu)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU);
	if (pd)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU_CTL_GPIO_TO_PAD_PD_4_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU_CTL_GPIO_TO_PAD_PD_4_SHIFT));

	if (pu) 
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU_CTL_GPIO_TO_PAD_PU_4_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU_CTL_GPIO_TO_PAD_PU_4_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU, reg);
}

static INLINE uint32_t gpio_port_34_pad_pd_pu_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU));
}

static INLINE void gpio_port_0_pad_pc(int pin, int on)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_01);

	pin &= GLOBAL_REG_PIN_MUX_GPIO_PC_01_CTL_GPIO_TO_PAD_PC_0_MASK;
	if (on)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_01, reg);
}

static INLINE void gpio_port_1_pad_pc(int pin, int on)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_01);

	pin &= GLOBAL_REG_PIN_MUX_GPIO_PC_01_CTL_GPIO_TO_PAD_PC_1_MASK;
	if (on)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_PC_01_CTL_GPIO_TO_PAD_PC_1_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_PC_01_CTL_GPIO_TO_PAD_PC_1_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_01, reg);
}

static INLINE uint32_t gpio_port_01_pad_pc_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_01));
}

static INLINE void gpio_port_2_pad_pc(int pin, int on)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234);

	pin &= GLOBAL_REG_PIN_MUX_GPIO_PC_234_CTL_GPIO_TO_PAD_PC_2_MASK;
	if (on)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234, reg);
}

static INLINE void gpio_port_3_pad_pc(int pin, int on)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234);

	pin &= GLOBAL_REG_PIN_MUX_GPIO_PC_234_CTL_GPIO_TO_PAD_PC_3_MASK;
	if (on)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_PC_234_CTL_GPIO_TO_PAD_PC_3_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_PC_234_CTL_GPIO_TO_PAD_PC_3_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234, reg);
}

static INLINE void gpio_port_4_pad_pc(int pin, int on)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234);

	pin &= GLOBAL_REG_PIN_MUX_GPIO_PC_234_CTL_GPIO_TO_PAD_PC_4_MASK;
	if (on)
		reg |= (1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_PC_234_CTL_GPIO_TO_PAD_PC_4_SHIFT));
	else
		reg &= ~(1 << (pin + GLOBAL_REG_PIN_MUX_GPIO_PC_234_CTL_GPIO_TO_PAD_PC_4_SHIFT));

	WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234, reg);
}

static INLINE uint32_t gpio_port_23_pad_pc_get(void)
{
	return (RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234));
}

static INLINE void gpio_qspi_pin_pad_pc(uint8_t pc_mask)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_QSPI_PC);
	
	reg &= ~GLOBAL_REG_QSPI_PC_CTL_QSPI_PC;
	reg |= (pc_mask & GLOBAL_REG_QSPI_PC_CTL_QSPI_PC_MASK) << GLOBAL_REG_QSPI_PC_CTL_QSPI_PC_SHIFT;

	WR_WORD(GLOBAL_REG_QSPI_PC, reg);
}

static INLINE void gpio_qspi_pin_pad_pc_set(uint32_t reg)
{
	WR_WORD(GLOBAL_REG_QSPI_PC, reg);
}

static INLINE uint32_t gpio_qspi_pin_pad_pc_get(void)
{
	return 	RD_WORD(GLOBAL_REG_QSPI_PC);
}

static INLINE void gpio_qspi_pin_mux(uint8_t mux0, uint8_t mux2, uint8_t mux3, uint8_t mux4, uint8_t mux5)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_PIN_MUX_QSPI);

	// pin 0
	reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_0_SEL;
	reg |= (mux0 & GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_0_SEL_MASK) << GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_0_SEL_SHIFT;
	if (mux0 & 0x80)
		reg |= GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_0_INV;
	else
		reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_0_INV;
	// pin 1 - clock pin, always mux 1 
	reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_1_SEL;
	reg |= (1 & GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_1_SEL_MASK) << GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_1_SEL_SHIFT;
	// pin 2
	reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_2_SEL;
	reg |= (mux2 & GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_2_SEL_MASK) << GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_2_SEL_SHIFT;
	if (mux2 & 0x80)
		reg |= GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_2_INV;
	else
		reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_2_INV;
	// pin 3
	reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_3_SEL;
	reg |= (mux3 & GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_3_SEL_MASK) << GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_3_SEL_SHIFT;
	if (mux3 & 0x80)
		reg |= GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_3_INV;
	else
		reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_3_INV;
	// pin 4
	reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_4_SEL;
	reg |= (mux4 & GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_4_SEL_MASK) << GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_4_SEL_SHIFT;
	if (mux4 & 0x80)
		reg |= GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_4_INV;
	else
		reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_4_INV;
	// pin 5
	reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_5_SEL;
	reg |= (mux5 & GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_5_SEL_MASK) << GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_5_SEL_SHIFT;
	if (mux5 & 0x80)
		reg |= GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_5_INV;
	else
		reg &= ~GLOBAL_REG_PIN_MUX_QSPI_CTL_PIN_MUX_QSPI_5_INV;

	// QSPI pin mux based on the above 
	reg |= GLOBAL_REG_PIN_MUX_QSPI_CTL_QSPI_EFUSE0REG1;


	WR_WORD(GLOBAL_REG_PIN_MUX_QSPI, reg);
}

static INLINE void gpio_qspi_pin_mux_set(uint32_t reg)
{
	WR_WORD(GLOBAL_REG_PIN_MUX_QSPI, reg);
}

static INLINE uint32_t gpio_qspi_pin_mux_get(void)
{
	return RD_WORD(GLOBAL_REG_PIN_MUX_QSPI);
}

static INLINE void gpio_qspi_pin_pad_ie_oe_pu_pd(uint8_t oe_mask, uint8_t ie_mask, uint8_t pu_mask, uint8_t pd_mask)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_QSPI_OE_IE_PU_PD);

	// oe
	reg &= ~GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_OE;
	reg |= (oe_mask & GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_OE_MASK) << GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_OE_SHIFT;
	// ie
	reg &= ~GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_IE;
	reg |= (ie_mask & GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_IE_MASK) << GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_IE_SHIFT;
	// pu
	reg &= ~GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_PU;
	reg |= (pu_mask & GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_PU_MASK) << GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_PU_SHIFT;
	// pd
	reg &= ~GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_PD;
	reg |= (pd_mask & GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_PD_MASK) << GLOBAL_REG_QSPI_OE_IE_PU_PD_CTL_QSPI_PD_SHIFT;

	WR_WORD(GLOBAL_REG_QSPI_OE_IE_PU_PD, reg);
}

static INLINE void gpio_qspi_pin_pad_ie_oe_pu_pd_set(uint32_t reg)
{
	WR_WORD(GLOBAL_REG_QSPI_OE_IE_PU_PD, reg);
}

static INLINE uint32_t gpio_qspi_pin_pad_ie_oe_pu_pd_get(void)
{
	return (RD_WORD(GLOBAL_REG_QSPI_OE_IE_PU_PD));
}

static INLINE uint32_t gpio_port_0_int_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_0_STATUS));
}

static INLINE void gpio_port_0_int_clear(uint32_t pin)
{
	uint32_t reg = (1 << pin) | (1 <<  (pin + GPIO_PORT_0_INT_FALL_EDGE_SHIFT)) | (1 << (pin + GPIO_PORT_0_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_CLEAR, reg);
}

static INLINE void gpio_port_0_int_clear_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_CLEAR, GLOBAL_REG_INTR_GPIO_0_CLEAR_IRQ);
}

static INLINE uint32_t gpio_port_0_int_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_STATUS));
}

static INLINE void gpio_port_0_int_mask_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_SET, GLOBAL_REG_INTR_GPIO_0_MASK_SET_IRQ);
}

static INLINE void gpio_port_0_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_SET, mask);
}

static INLINE void gpio_port_0_int_mask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_0_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_SET, reg);
}

static INLINE void gpio_port_0_int_mask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_0_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_SET, reg);
}

static INLINE void gpio_port_0_int_mask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_0_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_SET, reg);
}

static INLINE void gpio_port_0_int_unmask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_CLEAR, mask);
}

static INLINE void gpio_port_0_int_unmask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_0_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_CLEAR, reg);
}

static INLINE void gpio_port_0_int_unmask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_0_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_CLEAR, reg);
}

static INLINE void gpio_port_0_int_unmask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_0_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_0_MASK_CLEAR, reg);
}

static INLINE uint32_t gpio_port_1_int_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_1_STATUS));
}

static INLINE void gpio_port_1_int_clear(uint32_t pin)
{
	uint32_t reg = (1 << pin) | (1 <<  (pin + GPIO_PORT_1_INT_FALL_EDGE_SHIFT)) | (1 << (pin + GPIO_PORT_1_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_CLEAR, reg);
}

static INLINE void gpio_port_1_int_clear_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_CLEAR, GLOBAL_REG_INTR_GPIO_1_CLEAR_IRQ);
}

static INLINE uint32_t gpio_port_1_int_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_STATUS));
}

static INLINE void gpio_port_1_int_mask_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_SET, GLOBAL_REG_INTR_GPIO_1_MASK_SET_IRQ);
}

static INLINE void gpio_port_1_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_SET, mask);
}

static INLINE void gpio_port_1_int_mask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_1_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_SET, reg);
}

static INLINE void gpio_port_1_int_mask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_1_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_SET, reg);
}

static INLINE void gpio_port_1_int_mask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_1_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_SET, reg);
}

static INLINE void gpio_port_1_int_unmask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_CLEAR, mask);
}

static INLINE void gpio_port_1_int_unmask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_1_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_CLEAR, reg);
}

static INLINE void gpio_port_1_int_unmask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_1_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_CLEAR, reg);
}

static INLINE void gpio_port_1_int_unmask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_1_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_1_MASK_CLEAR, reg);
}

static INLINE uint32_t gpio_port_2_int_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_2_STATUS));
}

static INLINE void gpio_port_2_int_clear(uint32_t pin)
{
	uint32_t reg = (1 << pin) | (1 <<  (pin + GPIO_PORT_2_INT_FALL_EDGE_SHIFT)) | (1 << (pin + GPIO_PORT_2_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_CLEAR, reg);
}

static INLINE void gpio_port_2_int_clear_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_CLEAR, GLOBAL_REG_INTR_GPIO_2_CLEAR_IRQ);
}

static INLINE uint32_t gpio_port_2_int_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_STATUS));
}

static INLINE void gpio_port_2_int_mask_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_SET, GLOBAL_REG_INTR_GPIO_2_MASK_SET_IRQ);
}

static INLINE void gpio_port_2_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_SET, mask);
}

static INLINE void gpio_port_2_int_mask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_2_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_SET, reg);
}

static INLINE void gpio_port_2_int_mask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_2_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_SET, reg);
}

static INLINE void gpio_port_2_int_mask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_2_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_SET, reg);
}

static INLINE void gpio_port_2_int_unmask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_CLEAR, mask);
}

static INLINE void gpio_port_2_int_unmask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_2_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_CLEAR, reg);
}

static INLINE void gpio_port_2_int_unmask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_2_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_CLEAR, reg);
}

static INLINE void gpio_port_2_int_unmask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_2_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_2_MASK_CLEAR, reg);
}

static INLINE uint32_t gpio_port_3_int_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_3_STATUS));
}

static INLINE void gpio_port_3_int_clear(uint32_t pin)
{
	uint32_t reg = (1 << pin) | (1 <<  (pin + GPIO_PORT_3_INT_FALL_EDGE_SHIFT)) | (1 << (pin + GPIO_PORT_3_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_CLEAR, reg);
}

static INLINE void gpio_port_3_int_clear_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_CLEAR, GLOBAL_REG_INTR_GPIO_3_CLEAR_IRQ);
}

static INLINE uint32_t gpio_port_3_int_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_STATUS));
}

static INLINE void gpio_port_3_int_mask_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_SET, GLOBAL_REG_INTR_GPIO_3_MASK_SET_IRQ);
}

static INLINE void gpio_port_3_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_SET, mask);
}

static INLINE void gpio_port_3_int_mask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_3_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_SET, reg);
}

static INLINE void gpio_port_3_int_mask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_3_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_SET, reg);
}

static INLINE void gpio_port_3_int_mask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_3_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_SET, reg);
}

static INLINE void gpio_port_3_int_unmask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_CLEAR, mask);
}

static INLINE void gpio_port_3_int_unmask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_3_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_CLEAR, reg);
}

static INLINE void gpio_port_3_int_unmask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_3_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_CLEAR, reg);
}

static INLINE void gpio_port_3_int_unmask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_3_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_3_MASK_CLEAR, reg);
}

static INLINE uint32_t gpio_port_4_int_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_4_STATUS));
}

static INLINE void gpio_port_4_int_clear(uint32_t pin)
{
	uint32_t reg = (1 << pin) | (1 <<  (pin + GPIO_PORT_4_INT_FALL_EDGE_SHIFT)) | (1 << (pin + GPIO_PORT_4_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_CLEAR, reg);
}

static INLINE void gpio_port_4_int_clear_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_CLEAR, GLOBAL_REG_INTR_GPIO_4_CLEAR_IRQ);
}

static INLINE uint32_t gpio_port_4_int_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_STATUS));
}

static INLINE void gpio_port_4_int_mask_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_SET, GLOBAL_REG_INTR_GPIO_4_MASK_SET_IRQ);
}

static INLINE void gpio_port_4_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_SET, mask);
}

static INLINE void gpio_port_4_int_mask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_4_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_SET, reg);
}

static INLINE void gpio_port_4_int_mask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_4_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_SET, reg);
}

static INLINE void gpio_port_4_int_mask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_4_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_SET, reg);
}

static INLINE void gpio_port_4_int_unmask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_CLEAR, mask);
}

static INLINE void gpio_port_4_int_unmask_rise(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_4_INT_RISE_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_CLEAR, reg);
}

static INLINE void gpio_port_4_int_unmask_fall(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_4_INT_FALL_EDGE_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_CLEAR, reg);
}

static INLINE void gpio_port_4_int_unmask_wup(int pin)
{
	uint32_t reg = (1 << (pin + GPIO_PORT_4_WUP_SHIFT));
	WR_WORD(GLOBAL_REG_INTR_GPIO_4_MASK_CLEAR, reg);
}

#define INTR_GPIO_STATUS_OFFSET 0x0
#define INTR_GPIO_MASK_STATUS_OFFSET 0x4
#define INTR_GPIO_CLEAR_OFFSET 0x8
#define INTR_GPIO_SET_OFFSET 0xC
#define INTR_GPIO_MASK_SET_OFFSET 0x10
#define INTR_GPIO_MASK_CLEAR_OFFSET 0x14

static INLINE uint32_t gpio_int_status(uint32_t addr)
{
	return RD_WORD((addr + INTR_GPIO_STATUS_OFFSET));
}

static INLINE uint32_t gpio_int_mask_status(uint32_t addr)
{
	return RD_WORD((addr + INTR_GPIO_MASK_STATUS_OFFSET));
}

static INLINE void gpio_int_clear_all(uint32_t addr, uint32_t status)
{
	WR_WORD((addr + INTR_GPIO_CLEAR_OFFSET), status);
}

static INLINE void gpio_int_clear(uint32_t addr, uint32_t npin, uint32_t pin)
{
	WR_WORD((addr + INTR_GPIO_CLEAR_OFFSET), ((1 << pin)|(1 << (npin + pin))));
}

static INLINE void gpio_int_mask_all(uint32_t addr, uint32_t mask)
{
	WR_WORD((addr + INTR_GPIO_MASK_SET_OFFSET), mask);
}

static INLINE void gpio_int_mask(uint32_t addr, uint32_t pin)
{
	WR_WORD((addr + INTR_GPIO_MASK_SET_OFFSET), (1 << pin));
}

static INLINE void gpio_int_unmask(uint32_t addr, uint32_t pin)
{
	WR_WORD((addr + INTR_GPIO_MASK_CLEAR_OFFSET), (1 << pin));
}

static INLINE void gpio_int_unmask_all(uint32_t addr, uint32_t unmask)
{
	WR_WORD((addr + INTR_GPIO_MASK_CLEAR_OFFSET), unmask);
}

static INLINE void gpio_port_0_pad_latch(int pin, int latch)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_LE_CTRL);

	if (latch)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_0_LE_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_0_LE_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL, reg);
}

static INLINE void gpio_port_1_pad_latch(int pin, int latch)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_LE_CTRL);

	if (latch)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_1_LE_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_1_LE_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL, reg);
}

static INLINE void gpio_port_2_pad_latch(int pin, int latch)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_LE_CTRL);

	if (latch)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_2_LE_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_2_LE_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL, reg);
}

static INLINE void gpio_port_3_pad_latch(int pin, int latch)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_LE_CTRL_2);

	if (latch)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_3_LE_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_3_LE_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL_2, reg);
}

static INLINE void gpio_port_4_pad_latch(int pin, int latch)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_LE_CTRL_2);

	if (latch)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_4_LE_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_4_LE_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL_2, reg);
}

static INLINE void gpio_pad_latch(int port, int pin, int latch)
{
	uint32_t addr;
	uint32_t reg;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_LE_CTRL;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_LE_CTRL;
		shift = GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_1_LE_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_LE_CTRL;
		shift = GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_2_LE_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_LE_CTRL_2;
		shift = GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_3_LE_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_LE_CTRL_2;
		shift = GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_4_LE_SHIFT;
	}

	reg = RD_WORD(addr);
	if (latch) {
		reg |= (1 << (shift + pin));
	} else {
		reg &= ~(1 << (shift + pin));
	}
	WR_WORD(addr, reg);
}

static INLINE int gpio_pad_latch_status(int port, int pin)
{
	uint32_t addr;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_LE_STS;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_LE_STS;
		shift = GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_1_LE_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_LE_STS;
		shift = GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_2_LE_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_LE_STS_2;
		shift = GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_3_LE_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_LE_STS_2;
		shift = GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_4_LE_SHIFT;
	}

	return ((RD_WORD(addr) >> (shift + pin)) & 1);
}

static INLINE void gpio_port_0_pad_maskb(int pin, int en)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL);

	if (en)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_0_MASKB_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_0_MASKB_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL, reg);
}

static INLINE void gpio_port_1_pad_maskb(int pin, int en)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL);

	if (en)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_1_MASKB_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_1_MASKB_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL, reg);
}

static INLINE void gpio_port_2_pad_maskb(int pin, int en)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL);

	if (en)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_2_MASKB_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_2_MASKB_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL, reg);
}

static INLINE void gpio_port_3_pad_maskb(int pin, int en)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL_2);

	if (en)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_3_MASKB_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_3_MASKB_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL, reg);
}

static INLINE void gpio_port_4_pad_maskb(int pin, int en)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL_2);

	if (en)
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_4_MASKB_SHIFT)); 
	else
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_4_MASKB_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL, reg);
}

static INLINE void gpio_pad_maskb(int port, int pin, int en)
{
	uint32_t addr;
	uint32_t reg;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_MASKB_CTRL;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_MASKB_CTRL;
		shift = GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_1_MASKB_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_MASKB_CTRL;
		shift = GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_2_MASKB_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_MASKB_CTRL_2;
		shift = GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_3_MASKB_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_MASKB_CTRL_2;
		shift = GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_4_MASKB_SHIFT;
	}

	reg = RD_WORD(addr);
	if (en) {
		reg |= (1 << (shift + pin));
	} else {
		reg &= ~(1 << (shift + pin));
	}
	WR_WORD(addr, reg);
}

static INLINE int gpio_pad_maskb_status(int port, int pin)
{
	uint32_t addr;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_MASKB_STS;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_MASKB_STS;
		shift = GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_1_MASKB_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_MASKB_STS;
		shift = GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_2_MASKB_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_MASKB_STS_2;
		shift = GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_3_MASKB_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_MASKB_STS_2;
		shift = GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_4_MASKB_SHIFT;
	}

	return ((RD_WORD(addr) >> (pin + shift)) & 1);
}

static INLINE void gpio_port_0_wup_mask(int pin, int mask)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL);

	if (mask)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_0_WAKEUP_MASK_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_0_WAKEUP_MASK_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL, reg);
}

static INLINE void gpio_port_1_wup_mask(int pin, int mask)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL);

	if (mask)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_1_WAKEUP_MASK_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_1_WAKEUP_MASK_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL, reg);
}

static INLINE void gpio_port_2_wup_mask(int pin, int mask)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL);

	if (mask)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_2_WAKEUP_MASK_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_2_WAKEUP_MASK_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL, reg);
}

static INLINE void gpio_port_3_wup_mask(int pin, int mask)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2);

	if (mask)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_3_WAKEUP_MASK_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_3_WAKEUP_MASK_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2, reg);
}

static INLINE void gpio_port_4_wup_mask(int pin, int mask)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2);

	if (mask)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_4_WAKEUP_MASK_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_4_WAKEUP_MASK_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2, reg);
}

static INLINE void gpio_wup_mask(int port, int pin, int mask)
{
	uint32_t addr;
	uint32_t reg;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_1_WAKEUP_MASK_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_2_WAKEUP_MASK_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_3_WAKEUP_MASK_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_4_WAKEUP_MASK_SHIFT;
	}

	reg = RD_WORD(addr);
	if (mask) {
		reg &= ~(1 << (shift + pin));
	} else {
		reg |= (1 << (shift + pin));
	}
	WR_WORD(addr, reg);
}

static INLINE int gpio_wup_mask_status(int port, int pin)
{
	uint32_t addr;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_1_WAKEUP_MASK_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_2_WAKEUP_MASK_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_3_WAKEUP_MASK_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_4_WAKEUP_MASK_SHIFT;
	}

	return ((RD_WORD(addr) >> (shift + pin)) & 1);
}

static INLINE void gpio_port_0_wup_pol(int pin, int polarity)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL);

	if (polarity)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_0_WAKEUP_POLARITY_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_0_WAKEUP_POLARITY_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL, reg);
}

static INLINE void gpio_port_1_wup_pol(int pin, int polarity)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL);

	if (polarity)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_1_WAKEUP_POLARITY_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_1_WAKEUP_POLARITY_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL, reg);
}

static INLINE void gpio_port_2_wup_pol(int pin, int polarity)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL);

	if (polarity)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_2_WAKEUP_POLARITY_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_2_WAKEUP_POLARITY_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL, reg);
}

static INLINE void gpio_port_3_wup_pol(int pin, int polarity)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2);

	if (polarity)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_3_WAKEUP_POLARITY_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_3_WAKEUP_POLARITY_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2, reg);
}

static INLINE void gpio_port_4_wup_pol(int pin, int polarity)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2);

	if (polarity)
		reg &= ~(1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_4_WAKEUP_POLARITY_SHIFT)); 
	else
		reg |= (1 << (pin + GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_4_WAKEUP_POLARITY_SHIFT)); 
		
	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2, reg);
}

static INLINE void gpio_wup_polarity(int port, int pin, int polarity)
{
	uint32_t addr;
	uint32_t reg;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_1_WAKEUP_POLARITY_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_2_WAKEUP_POLARITY_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_3_WAKEUP_POLARITY_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_4_WAKEUP_POLARITY_SHIFT;
	}

	reg = RD_WORD(addr);
	if (polarity) {
		reg &= ~(1 << (shift + pin));
	} else {
		reg |= (1 << (shift + pin));
	}
	WR_WORD(addr, reg);
}

static INLINE int gpio_wup_polarity_status(int port, int pin)
{
	uint32_t addr;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_1_WAKEUP_POLARITY_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_2_WAKEUP_POLARITY_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_3_WAKEUP_POLARITY_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2;
		shift = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_4_WAKEUP_POLARITY_SHIFT;
	}

	return ((RD_WORD(addr) >> (shift + pin)) & 1);
}


static INLINE void gpio_edge_clear(int port, int pin)
{
	uint32_t addr;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_1_EDGE_MANUAL_CLR_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_2_EDGE_MANUAL_CLR_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_3_EDGE_MANUAL_CLR_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_4_EDGE_MANUAL_CLR_SHIFT;
	}

	WR_WORD(addr, (1 << (pin + shift)));
}

static INLINE int gpio_edge_clear_status(int port, int pin)
{
	uint32_t addr;
	uint32_t shift = 0;

	if (port == GPIO_PORT_0) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS;
	} else if (port == GPIO_PORT_1) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_1_EDGE_MANUAL_CLR_SHIFT;
	} else if (port == GPIO_PORT_2) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_2_EDGE_MANUAL_CLR_SHIFT;
	} else if (port == GPIO_PORT_3) {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_3_EDGE_MANUAL_CLR_SHIFT;
	} else {
		addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2;
		shift = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_4_EDGE_MANUAL_CLR_SHIFT;
	}

	return ((RD_WORD(addr) >> (shift + pin)) & 1);
}

static INLINE void gpio_aon_edge_rise(int port, int pin, int en)
{
	uint32_t addr;
	uint32_t shift = 0;
	uint32_t reg;

	if (port == GPIO_PORT_0) {
		addr = AON_REG_GPIO_EDGE_RISING_EN;
	} else if (port == GPIO_PORT_1) {
		addr = AON_REG_GPIO_EDGE_RISING_EN;
		shift = 9;
	} else if (port == GPIO_PORT_2) {
		addr = AON_REG_GPIO_EDGE_RISING_EN;
		shift = 19;
	} else if (port == GPIO_PORT_3) {
		addr = AON_REG_GPIO_EDGE_RISING_EN_2;
		shift = 0;
	} else {
		addr = AON_REG_GPIO_EDGE_RISING_EN_2;
		shift = 6;
	}

	reg = RD_WORD(addr);
	if (en)
		reg |= 1 << (pin + shift);
	else
		reg &= ~(1 << (pin + shift));
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_edge_fall(int port, int pin, int en)
{
	uint32_t addr;
	uint32_t shift = 0;
	uint32_t reg;

	if (port == GPIO_PORT_0) {
		addr = AON_REG_GPIO_EDGE_FALLING_EN;
	} else if (port == GPIO_PORT_1) {
		addr = AON_REG_GPIO_EDGE_FALLING_EN;
		shift = 9;
	} else if (port == GPIO_PORT_2) {
		addr = AON_REG_GPIO_EDGE_FALLING_EN;
		shift = 19;
	} else if (port == GPIO_PORT_3) {
		addr = AON_REG_GPIO_EDGE_FALLING_EN_2;
		shift = 0;
	} else {
		addr = AON_REG_GPIO_EDGE_FALLING_EN_2;
		shift = 6;
	}

	reg = RD_WORD(addr);
	if (en)
		reg |= 1 << (pin + shift);
	else
		reg &= ~(1 << (pin + shift));
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_edge_clear_on_sleep(int port, int pin, int en)
{
	uint32_t addr;
	uint32_t shift = 0;
	uint32_t reg;

	if (port == GPIO_PORT_0) {
		addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP;
	} else if (port == GPIO_PORT_1) {
		addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP;
		shift = 9;
	} else if (port == GPIO_PORT_2) {
		addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP;
		shift = 19;
	} else if (port == GPIO_PORT_3) {
		addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2;
		shift = 0;
	} else {
		addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2;
		shift = 6;
	}

	reg = RD_WORD(addr);
	if (en)
		reg |= 1 << (pin + shift);
	else
		reg &= ~(1 << (pin + shift));
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_edge_detect_in_sleep(int port, int pin, int en)
{
	uint32_t addr;
	uint32_t shift = 0;
	uint32_t reg;

	if (port == GPIO_PORT_0) {
		addr = AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY;
	} else if (port == GPIO_PORT_1) {
		addr = AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY;
		shift = 9;
	} else if (port == GPIO_PORT_2) {
		addr = AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY;
		shift = 19;
	} else if (port == GPIO_PORT_3) {
		addr = AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2;
		shift = 0;
	} else {
		addr = AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2;
		shift = 6;
	}

	reg = RD_WORD(addr);
	if (en)
		reg |= 1 << (pin + shift);
	else
		reg &= ~(1 << (pin + shift));
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_port_0_sel(uint32_t pin, int en)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_01_AON_SEL);
	if (en)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
		
	WR_WORD(AON_REG_GPIO_01_AON_SEL, reg);
}

static INLINE void gpio_aon_port_1_sel(uint32_t pin, int en)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_01_AON_SEL);
	if (en)
		reg |= (1 << (pin + 16));
	else
		reg &= ~(1 << (pin + 16));
		
	WR_WORD(AON_REG_GPIO_01_AON_SEL, reg);
}

static INLINE void gpio_aon_port_3_sel(uint32_t pin, int en)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_3_AON_SEL);
	if (en)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
		
	WR_WORD(AON_REG_GPIO_3_AON_SEL, reg);
}

static INLINE void gpio_aon_port_4_sel(uint32_t pin, int en)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_3_AON_SEL);
	if (en)
		reg |= (1 << (pin + 8));
	else
		reg &= ~(1 << (pin + 8));
		
	WR_WORD(AON_REG_GPIO_3_AON_SEL, reg);
}

static INLINE void gpio_aon_port_0_output_sel(uint32_t pin, int mux)
{
	uint32_t addr = AON_REG_GPIO_01_AON_OUTPUT_SEL;
	uint32_t reg;

	if (pin >= 8) { 
		pin -= 8;
		addr = AON_REG_GPIO_01_AON_OUTPUT_SEL_2;
	}

	reg = RD_WORD(addr);
	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_port_1_output_sel(uint32_t pin, int mux)
{
	uint32_t addr = AON_REG_GPIO_01_AON_OUTPUT_SEL_2;
	uint32_t reg;

	if (pin >= 7) { 
		pin -= 7;
		addr = AON_REG_GPIO_13_AON_OUTPUT_SEL;
	} else {
		pin += 1;
	}

	reg = RD_WORD(addr);
	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_port_3_output_sel(uint32_t pin, int mux)
{
	uint32_t addr = AON_REG_GPIO_13_AON_OUTPUT_SEL;
	uint32_t reg;

	if (pin >= 5) { 
		pin -= 5;
		addr = AON_REG_GPIO_3_AON_OUTPUT_SEL;
	} else {
		pin += 3;
	}

	reg = RD_WORD(addr);
	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_port_4_output_sel(uint32_t pin, int mux)
{
	uint32_t addr = AON_REG_GPIO_3_AON_OUTPUT_SEL;
	uint32_t reg;

	pin += 1;
	reg = RD_WORD(addr);
	reg &= ~(0x7 << (pin << 2));
	reg |= ((mux & 0x7) << (pin << 2));
	WR_WORD(addr, reg);
}


static INLINE void gpio_aon_wup_polarity(int port, int pin, int pol)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL);
	int shift;

	if (port == 0) {
		shift = 0 + pin;
	} else if (port == 1) {
		shift = 6 + pin;
	} else if (port == 2) {
		shift = 15 + pin;
	} else {
		shift = 24 + pin;
	} 

	// input ^ polarity = wake up
	//	1 ^ 1 = 0
	//	1 ^ 0 = 1
	//	0 ^ 1 = 1
	//	0 ^ 0 = 0
	if (pol) {
		reg &= ~(1 << shift);
	} else {
		reg |= (1 << shift);
	}

	WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL, reg);
}

static INLINE void gpio_aon_edge_reset_pd1_clk(int en)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0);
	if (en) {
		reg |= AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_CLK_EN;
	} else {
		reg &= ~AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_CLK_EN;
	}
	WR_WORD(AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0, reg);
}

static INLINE void gpio_aon_edge_reset_pd1_enable(int idx)
{
	uint32_t addr = AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0 + idx*4; 
	uint32_t reg = RD_WORD(addr);
	reg |= AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_EN_0;
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_edge_reset_pd1_disable(int idx)
{
	uint32_t addr = AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0 + idx*4; 
	uint32_t reg = RD_WORD(addr);
	reg &= ~AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_EN_0;
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_edge_reset_pd1(int idx, int sidx, int fall, int deb)
{
	uint32_t addr = AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0 + idx*4; 
	uint32_t reg = RD_WORD(addr);

	reg &= ~AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_0;
	reg |= (sidx & AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_0_MASK) << AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_0_SHIFT;
	if (fall) 
		reg |= AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_EDGE_SEL_0;
	reg &= ~AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_0;
	reg |= (deb & AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_0_MASK) << AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_0_SHIFT;
	WR_WORD(addr, reg);
}

static INLINE void gpio_aon_edge_reset_cm4_enable(void)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_EDGE_FOR_CM4_RST);
	reg |= AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_EN;
	WR_WORD(AON_REG_GPIO_EDGE_FOR_CM4_RST, reg);
}

static INLINE void gpio_aon_edge_reset_cm4_disable(void)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_EDGE_FOR_CM4_RST);
	reg &= ~AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_EN;
	WR_WORD(AON_REG_GPIO_EDGE_FOR_CM4_RST, reg);
}

static INLINE void gpio_aon_edge_reset_cm4(int sidx, int fall, int deb, int sys_rst)
{
	uint32_t reg = RD_WORD(AON_REG_GPIO_EDGE_FOR_CM4_RST);
	reg &= ~AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_SEL;
	reg |= (sidx & AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_SEL_MASK) << AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_SEL_SHIFT;
	if (fall) 
		reg |= AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_EDGE_SEL;
	reg |= (deb & AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_DEB_LMT_MASK) << AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_DEB_LMT_SHIFT;
	if (sys_rst) 
		reg |= AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_FUNC_SEL;
	WR_WORD(AON_REG_GPIO_EDGE_FOR_CM4_RST, reg);
}

static INLINE void gpio_aon_edge_det_clk(int en, int port)
{
	uint32_t reg = RD_WORD(AON_REG_AON_TIMER_CLK_CTRL);

	if (en) {
		if (port == GPIO_PORT_0) {
			reg |= AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_0_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_0_EDGE_DETECT_DEB_CLK_EN;
		} else if (port == GPIO_PORT_1) {
			reg |= AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_1_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_1_EDGE_DETECT_DEB_CLK_EN;
		} else if (port == GPIO_PORT_2) {
			reg |= AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_2_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_2_EDGE_DETECT_DEB_CLK_EN;
		} else if (port == GPIO_PORT_3) {
			reg |= AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_3_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_3_EDGE_DETECT_DEB_CLK_EN;
		} else {
			reg |= AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_4_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_4_EDGE_DETECT_DEB_CLK_EN;
		}
	} else {
		if (port == GPIO_PORT_0) {
			reg &= ~(AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_0_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_0_EDGE_DETECT_DEB_CLK_EN);
		} else if (port == GPIO_PORT_1) {
			reg &= ~(AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_1_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_1_EDGE_DETECT_DEB_CLK_EN);
		} else if (port == GPIO_PORT_2) {
			reg &= ~(AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_2_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_2_EDGE_DETECT_DEB_CLK_EN);
		} else if (port == GPIO_PORT_3) {
			reg &= ~(AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_3_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_3_EDGE_DETECT_DEB_CLK_EN);
		} else {
			reg &= ~(AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_4_EDGE_DETECT_CLK_EN|AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_4_EDGE_DETECT_DEB_CLK_EN);
		}
	}
	WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, reg);
}

static INLINE void gpio_qspi_pad_latch(int latch_mask)
{
	uint32_t reg = RD_WORD(AON_REG_QSPI_LE_MASKB);

	reg &= ~(AON_REG_QSPI_LE_MASKB_CTL_QSPI_LE);
	reg |= (latch_mask&AON_REG_QSPI_LE_MASKB_CTL_QSPI_LE_MASK)<<AON_REG_QSPI_LE_MASKB_CTL_QSPI_LE_SHIFT; 

		
	WR_WORD(AON_REG_QSPI_LE_MASKB, reg);
}

/*
 * Exported Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Initialize GPIO port values
 *
 *
 *
 * @return This function has no return. 
 ****************************************************************************************
 */
void hal_gpio_init(void);

/**
 ****************************************************************************************
 * @brief Config GPIO from the user's configuration settings .
 *
 * @param[in] pin_cfg				Pin configuration from the configuration tool.  
 *
 *
 * @return This function has no return. 
 ****************************************************************************************
 */
void hal_gpio_pin_cfg(uint32_t pin_cfg);

/**
 ****************************************************************************************
 * @brief Restore GPIO pin to its default state.
 *
 * @param[in] pin_cfg				Pin information.  
 *
 *
 * @return This function has no return. 
 ****************************************************************************************
 */
void hal_gpio_pin_dft(uint32_t pin_cfg);

/**
 ****************************************************************************************
 * @brief Config GPIO pin mux.
 *
 * @param[in] port					Port number, @see enum gpio_port.  
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] mux					Mux number, @see enum gpio_mux.
 * @param[in] inv						Invert pin, 1: inverted, 0: otherwise.
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_pin_mux(int port, int pin, int mux, int inv);

/**
 ****************************************************************************************
 * @brief Config GPIO to output.
 *
 * @param[in] port					Port number, @see enum gpio_port.  
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] high					1: HIGH output, 0: otherwise.
 * @param[in] en						1: Enable output, 0: otherwise.
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_output(int port, int pin, int high, int en);


/**
 ****************************************************************************************
 * @brief GPIO output status.
 *	@Note: The status is only valid if the output is enabled.
 *
 * @param[in] port					Port number, @see enum gpio_port.  
 * @param[in] pin						Pin number, @see enum gpio_pin.
 *
 * @return 1 when GPIO is high,  0 when GPIO is low or has error. 
 ****************************************************************************************
 */
int hal_gpio_output_status(int port, int pin);

/**
 ****************************************************************************************
 * @brief Get GPIO input value.
 *
 * @param[in] port					Port number, @see enum gpio_port.  
 * @param[in] pin						Pin number, @see enum gpio_pin.
 *
 *
 * @return 1 when GPIO is high,  0 when GPIO is low or has error. 
 ****************************************************************************************
 */
int hal_gpio_input_status(int port, int pin);

/**
 ****************************************************************************************
 * @brief Config GPIO PAD as output or input.
 *
 * @param[in] port					Port number, @see enum gpio_port.  
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] oe						1: Ouput enable, 0: otherwise.
 * @param[in] ie						1: Input enable, 0: otherwise.
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_pad_oe_ie(int port, int pin, int oe, int ie);

/**
 ****************************************************************************************
 * @brief Config GPIO PAD as pull up or pull down.
 * @note If neither pull up or down, then the pin is floating
 *
 * @param[in] port					Port number, @see enum gpio_port.  
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] pd						1: Pull down, 0: otherwise.
 * @param[in] pu						1: Pull up, 0: otherwise.
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_pad_pd_pu(int port, int pin, int pd, int pu);

/**
 ****************************************************************************************
 * @brief Config GPIO PAD drive strength.
 * @note There are two drive strength. Pick the one that is suitable.
 *
 * @param[in] port					Port number, @see enum gpio_port.  
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] on						1: Change it, 0: otherwise.
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_pad_pc(int port, int pin, int on);

/**
 ****************************************************************************************
 * @brief Enable GPIO pad during deep sleep.
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] latch					1: latch, 0: otherwise
 * @param[in] manual				1: latch clear by user, 0: auto clear after wake up
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_pad_latch(int port, int pin, int latch, int manual);

/**
 ****************************************************************************************
 * @brief Enable GPIO pad input during deep sleep.
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] mask					1: mask input, 0: otherwise
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_pad_mask(int port, int pin, int mask);


/**
 ****************************************************************************************
 * @brief Config GPIO pin as wake up pin during deep sleep.
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] mask					1: mask, 0: unmask
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_wup_mask(int port, int pin, int mask);


/**
 ****************************************************************************************
 * @brief Change wake up GPIO pin polarity
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] pol						1: Pin level high as wake up, 0: otherwise.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_wup_polarity(int port, int pin, int pol);

/**
 ****************************************************************************************
 * @brief Wake up GPIO edge selection
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] rise					1: Rising edge, 0: otherwise.
 * @param[in] fall						1: Falling edge, 0: otherwise.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_wup_edge(int port, int pin, int rise, int fall);


/**
 ****************************************************************************************
 * @brief Manually clear wake up GPIO edge
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_wup_edge_clear_manual(int port, int pin);

/**
 ****************************************************************************************
 * @brief Clear the wake up GPIO edge automatically
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] en						1: Enable, 0: otherwise.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_wup_edge_clear_auto(int port, int pin, int en);

/**
 ****************************************************************************************
 * @brief Detect the wake up GPIO edge
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] en						1: Enable, 0: otherwise.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_wup_edge_detect(int port, int pin, int en);

/**
 ****************************************************************************************
 * @brief Latch the wake up GPIO edge
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] en						1: Enable, 0: otherwise.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_sleep_wup_edge_latch(int port, int pin, int en);

/**
 ****************************************************************************************
 * @brief Register external GPIO pin as interrupt
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] prio					GPIO interrupt priority, @see in_irq.h.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_ext_int_prio(int port, int prio);
/**
 ****************************************************************************************
 * @brief Register external GPIO pin as interrupt
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] arg						User provided interrupt callback parameter
 * @param[in] callback				User provided interrupt callback function
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_ext_int_reg(int port, int pin, void *arg, void (*callback)(void *, int, int, int));

/**
 ****************************************************************************************
 * @brief Unregister external GPIO pin as interrupt
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_ext_int_unreg(int port, int pin);

/**
 ****************************************************************************************
 * @brief Mask GPIO pin interrupt.
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] rise					1: rising edge; 0: otherwise
 * @param[in] fall						1: falling edge; 0: otherwise
 * @param[in] wup					1: wake up; 0: otherwise
 *
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_ext_int_mask(int port, int pin, int rise, int fall, int wup);

/**
 ****************************************************************************************
 * @brief Unmask GPIO pin interrupt.
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin						Pin number, @see enum gpio_pin.
 * @param[in] rise					1: rising edge; 0: otherwise
 * @param[in] fall						1: falling edge; 0: otherwise
 * @param[in] wup					1: wake up; 0: otherwise
 *
 * @return @see enum gpio_err for the possible return code. 
 ****************************************************************************************
 */
int hal_gpio_ext_int_unmask(int port, int pin, int rise, int fall, int wup);

/**
 ****************************************************************************************
 * @brief GPIO pin configuration store before power down.
 *
 *
 * @return This function has no return. 
 ****************************************************************************************
 */
void hal_gpio_suspend(void);

/**
 ****************************************************************************************
 * @brief GPIO pin configuration restore after power up.
 *
 *
 * @return This function has no return. 
 ****************************************************************************************
 */
void hal_gpio_resume(void);

/**
 ****************************************************************************************
 * @brief Clear GPIO external interrupt.
 *
 * @param[in] port					Port number, @see enum gpio_port.
 * @param[in] pin					Pin number, @see enum gpio_pin.
 *
 * @return This function has no return. 
 ****************************************************************************************
 */
void hal_gpio_ext_int_clear(int port, int pin);

/**
 ****************************************************************************************
 * @brief Output always on domain (AON) signals thru GPIO mux.
 * @Note:  The mux are divided into 4 group (see enum gpio_slp_grp_X_pin_mux) and different pins are assoicated 
 *				 with each group.
 *
 * @param[in] en					1: output enable, 0: otherwise
 * @param[in] port				Port number, @see enum gpio_slp_grp_X_port
 * @param[in] pin					Pin number, @see enum gpio_slp_grp_X_port_X_pins
 * @param[in] mux				Pin mux, @see enum gpio_slp_grp_X_pin_mux
 *
 * @return GPIO_ERR_NO_ERROR if successful, otherwise failed. @see enum gpio_err. 
 ****************************************************************************************
 */
int hal_gpio_sleep_output_grp_0(int en, int port, int pin, int mux);
int hal_gpio_sleep_output_grp_1(int en, int port, int pin, int mux);
int hal_gpio_sleep_output_grp_2(int en, int port, int pin, int mux);
int hal_gpio_sleep_output_grp_3(int en, int port, int pin, int mux);

/**
 ****************************************************************************************
 * @brief Reset chip's PD1 domain by exteranl GPIO rise/fall edge.
 * @Note:  This can reset cpu and peripherals but not always on domain (AON) HW.  
 *
 * @param[in] idx					From 0~2; At most 3 gpio pin can be used to reset the chip. 
 * @param[in] en					1: Enable, 0: otherwise
 * @param[in] port				Port number
 * @param[in] pin					Pin number
 * @param[in] fall					1: falling edge, 0: otherwise
 * @param[in] deb				Debounce limit; from 0 ~255.
 *
 * @return This function has no return  
 ****************************************************************************************
 */
void hal_gpio_reset_chip(int idx, int en, int port, int pin, int fall, int deb);

/**
 ****************************************************************************************
 * @brief Reset ARM CPU by exteranl GPIO rise/fall edge.
 * @Note:  This can reset only cpu but not other HW.  
 *
 * @param[in] en					1: Enable, 0: otherwise
 * @param[in] port				Port number
 * @param[in] pin					Pin number
 * @param[in] fall					1: falling edge, 0: otherwise
 * @param[in] deb				Debounce limit; from 0 ~255.
 * @param[in] sys_rst			1: Arm's Debug core is not reset, 0: otherwise.
 *
 * @return This function has no return  
 ****************************************************************************************
 */
void hal_gpio_reset_arm(int en, int port, int pin, int fall, int deb, int sys_rst);


/// @} HAL_GPIO
#endif // HAL_GPIO_H

