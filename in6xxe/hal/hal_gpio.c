/**
 ****************************************************************************************
 *
 * @file hal_gpio.c
 *
 * @brief Platform GPIO functions  
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
#include "in_rom_if.h"

#include "./hal/hal_gpio.h"
#include "./hal/hal_clk.h"
//#include "./hal/hal_power.h"

/*
 * Types
 ****************************************************************************************
 */

typedef struct {
	void *arg;
	void (*callback)(void *, int rise, int fall, int wup);
} gio_intr_cb_t;

typedef struct {
	char npin;
	char irq;
	char prio;
	char int_fall_sh;

	char int_wup_sh;
	char edge_det_clk_en;
	char pad[2];

	uint16_t mask;
	uint16_t map;
	
	uint32_t intr_gpio_status_reg;
	uint32_t intr_gpio_mask_status_reg;
	uint32_t intr_gpio_clear_reg;
	uint32_t intr_gpio_mask_set_reg;
	uint32_t intr_gpio_mask_clear_reg;

	uint32_t intr_gpio_mask_sav;

	gio_intr_cb_t *p_cb;
		
} gio_port_t;

typedef struct {
	gio_port_t port[GPIO_PORT_MAX];

	uint32_t pin_mux_gpio_0_reg;
	uint32_t pin_mux_gpio_1_reg;
	uint32_t pin_mux_gpio_01_cont_reg;
	uint32_t pin_mux_gpio_2_reg;
	uint32_t pin_mux_gpio_23_cont_reg;
	uint32_t pin_mux_gpio_4_reg;

	uint32_t gpio_0_out_reg;
	uint32_t gpio_1_out_reg;
	uint32_t gpio_2_out_reg;
	uint32_t gpio_34_out_reg;

	uint32_t pin_mux_gpio_0_oe_ie_reg;
	uint32_t pin_mux_gpio_1_oe_ie_reg;
	uint32_t pin_mux_gpio_2_oe_ie_reg;
	uint32_t pin_mux_gpio_34_oe_ie_reg;

	uint32_t pin_mux_gpio_0_pd_pu_reg;
	uint32_t pin_mux_gpio_1_pd_pu_reg;
	uint32_t pin_mux_gpio_2_pd_pu_reg;
	uint32_t pin_mux_gpio_34_pd_pu_reg;

	uint32_t pin_mux_gpio_pc_01_reg;
	uint32_t pin_mux_gpio_pc_234_reg;

	uint32_t gpio_le_ctrl;
	uint32_t gpio_le_ctrl_2;
	uint32_t gpio_le_ctrl_man;
	uint32_t gpio_le_ctrl_2_man;
	
	uint32_t gpio_maskb_ctrl;
	uint32_t gpio_maskb_ctrl_2;

	uint32_t gpio_wup_mask_ctrl;
	uint32_t gpio_wup_mask_ctrl_2;

	uint32_t gpio_wup_pol_ctrl;
	uint32_t gpio_wup_pol_ctrl_2;

	uint32_t pin_mux_gpio_0_reg_dft;
	uint32_t pin_mux_gpio_1_reg_dft;
	uint32_t pin_mux_gpio_01_cont_reg_dft;
	uint32_t pin_mux_gpio_2_reg_dft;
	uint32_t pin_mux_gpio_23_cont_reg_dft;
	uint32_t pin_mux_gpio_4_reg_dft;

	uint32_t pin_mux_gpio_0_oe_ie_reg_dft;
	uint32_t pin_mux_gpio_1_oe_ie_reg_dft;
	uint32_t pin_mux_gpio_2_oe_ie_reg_dft;
	uint32_t pin_mux_gpio_34_oe_ie_reg_dft;

	uint32_t pin_mux_gpio_0_pd_pu_reg_dft;
	uint32_t pin_mux_gpio_1_pd_pu_reg_dft;
	uint32_t pin_mux_gpio_2_pd_pu_reg_dft;
	uint32_t pin_mux_gpio_34_pd_pu_reg_dft;

	uint32_t pin_mux_gpio_pc_01_reg_dft;
	uint32_t pin_mux_gpio_pc_234_reg_dft;
		
} gio_t;

/*
 * Static Variables
 ****************************************************************************************
 */

static gio_intr_cb_t g_port_0_int_cb[GPIO_PORT_0_NB_PINS];
static gio_intr_cb_t g_port_1_int_cb[GPIO_PORT_1_NB_PINS];
static gio_intr_cb_t g_port_2_int_cb[GPIO_PORT_2_NB_PINS];
static gio_intr_cb_t g_port_3_int_cb[GPIO_PORT_3_NB_PINS];
static gio_intr_cb_t g_port_4_int_cb[GPIO_PORT_4_NB_PINS];

static gio_t g_gio = {
	.port[0] = {
		.npin = GPIO_PORT_0_NB_PINS,
		.irq = Gpio0_IRQn,
		.prio = IRQ_PRI_Lowest,
		.int_fall_sh = GPIO_PORT_0_INT_FALL_EDGE_SHIFT,
		.int_wup_sh = GPIO_PORT_0_WUP_SHIFT,
		.edge_det_clk_en = 0,
		.mask = 0x1FF,
		.map = 0,

		.intr_gpio_status_reg = GLOBAL_REG_INTR_GPIO_0_STATUS,
		.intr_gpio_mask_status_reg = GLOBAL_REG_INTR_GPIO_0_MASK_STATUS,
		.intr_gpio_clear_reg = GLOBAL_REG_INTR_GPIO_0_CLEAR,
		.intr_gpio_mask_set_reg = GLOBAL_REG_INTR_GPIO_0_MASK_SET,
		.intr_gpio_mask_clear_reg = GLOBAL_REG_INTR_GPIO_0_MASK_CLEAR,
		.intr_gpio_mask_sav = 0x7FFFFFF,

		.p_cb = &g_port_0_int_cb[0],
	},

	.port[1] = {
		.npin = GPIO_PORT_1_NB_PINS,
		.irq = Gpio1_IRQn,
		.prio = IRQ_PRI_Lowest,
		.int_fall_sh = GPIO_PORT_1_INT_FALL_EDGE_SHIFT,
		.int_wup_sh = GPIO_PORT_1_WUP_SHIFT,
		.edge_det_clk_en = 0,
		.mask = 0x3FF,
		.map = 0,

		.intr_gpio_status_reg = GLOBAL_REG_INTR_GPIO_1_STATUS,
		.intr_gpio_mask_status_reg = GLOBAL_REG_INTR_GPIO_1_MASK_STATUS,
		.intr_gpio_clear_reg = GLOBAL_REG_INTR_GPIO_1_CLEAR,
		.intr_gpio_mask_set_reg = GLOBAL_REG_INTR_GPIO_1_MASK_SET,
		.intr_gpio_mask_clear_reg = GLOBAL_REG_INTR_GPIO_1_MASK_CLEAR,
		.intr_gpio_mask_sav = 0x7FFFFFF,

		.p_cb = &g_port_1_int_cb[0],
	},

	.port[2] = {
		.npin = GPIO_PORT_2_NB_PINS,
		.irq = Gpio2_IRQn,
		.prio = IRQ_PRI_Lowest,
		.int_fall_sh = GPIO_PORT_2_INT_FALL_EDGE_SHIFT,
		.int_wup_sh = GPIO_PORT_2_WUP_SHIFT,
		.edge_det_clk_en = 0,
		.mask = 0x3FF,
		.map = 0,

		.intr_gpio_status_reg = GLOBAL_REG_INTR_GPIO_2_STATUS,
		.intr_gpio_mask_status_reg = GLOBAL_REG_INTR_GPIO_2_MASK_STATUS,
		.intr_gpio_clear_reg = GLOBAL_REG_INTR_GPIO_2_CLEAR,
		.intr_gpio_mask_set_reg = GLOBAL_REG_INTR_GPIO_2_MASK_SET,
		.intr_gpio_mask_clear_reg = GLOBAL_REG_INTR_GPIO_2_MASK_CLEAR,
		.intr_gpio_mask_sav = 0x7FFFFFF,

		.p_cb = &g_port_2_int_cb[0],
	},

	.port[3] = {
		.npin = GPIO_PORT_3_NB_PINS,
		.irq = Gpio3_IRQn,
		.prio = IRQ_PRI_Lowest,
		.int_fall_sh = GPIO_PORT_3_INT_FALL_EDGE_SHIFT,
		.int_wup_sh = GPIO_PORT_3_WUP_SHIFT,
		.edge_det_clk_en = 0,
		.mask = 0x3F,
		.map = 0,

		.intr_gpio_status_reg = GLOBAL_REG_INTR_GPIO_3_STATUS,
		.intr_gpio_mask_status_reg = GLOBAL_REG_INTR_GPIO_3_MASK_STATUS,
		.intr_gpio_clear_reg = GLOBAL_REG_INTR_GPIO_3_CLEAR,
		.intr_gpio_mask_set_reg = GLOBAL_REG_INTR_GPIO_3_MASK_SET,
		.intr_gpio_mask_clear_reg = GLOBAL_REG_INTR_GPIO_3_MASK_CLEAR,
		.intr_gpio_mask_sav = 0x7FFFFFF,

		.p_cb = &g_port_3_int_cb[0],
	},

	.port[4] = {
		.npin = GPIO_PORT_4_NB_PINS,
		.irq = Gpio4_IRQn,
		.prio = IRQ_PRI_Lowest,
		.int_fall_sh = GPIO_PORT_4_INT_FALL_EDGE_SHIFT,
		.int_wup_sh = GPIO_PORT_4_WUP_SHIFT,
		.edge_det_clk_en = 0,
		.mask = 0xF,
		.map = 0,

		.intr_gpio_status_reg = GLOBAL_REG_INTR_GPIO_4_STATUS,
		.intr_gpio_mask_status_reg = GLOBAL_REG_INTR_GPIO_4_MASK_STATUS,
		.intr_gpio_clear_reg = GLOBAL_REG_INTR_GPIO_4_CLEAR,
		.intr_gpio_mask_set_reg = GLOBAL_REG_INTR_GPIO_4_MASK_SET,
		.intr_gpio_mask_clear_reg = GLOBAL_REG_INTR_GPIO_4_MASK_CLEAR,
		.intr_gpio_mask_sav = 0x7FFFFFF,

		.p_cb = &g_port_4_int_cb[0],
	},

	.pin_mux_gpio_0_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_0_DEFAULT,
	.pin_mux_gpio_1_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_1_DEFAULT,
	.pin_mux_gpio_01_cont_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_01_CONT_DEFAULT,
	.pin_mux_gpio_2_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_2_DEFAULT,
	.pin_mux_gpio_23_cont_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_23_CONT_DEFAULT,
	.pin_mux_gpio_4_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_4_DEFAULT,

	.pin_mux_gpio_0_oe_ie_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE_DEFAULT,
	.pin_mux_gpio_1_oe_ie_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE_DEFAULT,
	.pin_mux_gpio_2_oe_ie_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE_DEFAULT,
	.pin_mux_gpio_34_oe_ie_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE_DEFAULT,

	.pin_mux_gpio_0_pd_pu_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU_DEFAULT,
	.pin_mux_gpio_1_pd_pu_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU_DEFAULT,
	.pin_mux_gpio_2_pd_pu_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU_DEFAULT,
	.pin_mux_gpio_34_pd_pu_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU_DEFAULT,

	.pin_mux_gpio_pc_01_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_PC_01_DEFAULT,
	.pin_mux_gpio_pc_234_reg_dft = GLOBAL_REG_PIN_MUX_GPIO_PC_234_DEFAULT,
};

static gio_rom_if_t g_gio_if = {
	(void *)&g_gio,

	hal_gpio_pin_mux,
	hal_gpio_pad_oe_ie,
	hal_gpio_pad_pd_pu,
	hal_gpio_output,
	hal_gpio_sleep_pad_latch,

};

/*
 * ISR
 ****************************************************************************************
 */

void gpio_isr_handler(int port)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;
	gio_port_t *p_port = &gio->port[port];
	uint32_t status = RD_WORD(p_port->intr_gpio_status_reg);
	uint32_t mask = RD_WORD(p_port->intr_gpio_mask_status_reg);
	
	WR_WORD(p_port->intr_gpio_clear_reg, status);

	status &= ~mask;

	uint32_t rise_status = status & p_port->mask;
	uint32_t fall_status = (status >> p_port->int_fall_sh) & p_port->mask;
	uint32_t wup_status = (status >> p_port->int_wup_sh) & p_port->mask;

	for (uint32_t i = 0; i < p_port->npin; i++) {
		if ((p_port->map >> i) & 1) {
			int rise = 0;
			int fall = 0;
			int wup = 0;
		
			if ((rise_status >> i) & 1) {
				rise = 1;
			}

			if ((fall_status >> i) & 1) {
				fall = 1;
			}

			if ((wup_status >> i) & 1) {
				wup = 1;
			}
 
			if (p_port->p_cb[i].callback) {
				p_port->p_cb[i].callback(p_port->p_cb[i].arg, rise, fall, wup);
			}
		}
	}
}



/*
 * APIs
 ****************************************************************************************
 */
void hal_gpio_init(void)
{
	////rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	/// pin mux
	gio->pin_mux_gpio_0_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0);
	gio->pin_mux_gpio_01_cont_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_01_CONT);
	gio->pin_mux_gpio_1_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1);
	gio->pin_mux_gpio_2_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2);
	gio->pin_mux_gpio_23_cont_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_23_CONT);
	gio->pin_mux_gpio_4_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_4);

	/// oe/ie
	gio->pin_mux_gpio_0_oe_ie_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE);
	gio->pin_mux_gpio_1_oe_ie_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE);
	gio->pin_mux_gpio_2_oe_ie_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE);
	gio->pin_mux_gpio_34_oe_ie_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE);

	/// pu/pd
	gio->pin_mux_gpio_0_pd_pu_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU);
	gio->pin_mux_gpio_1_pd_pu_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU);
	gio->pin_mux_gpio_2_pd_pu_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU);
	gio->pin_mux_gpio_34_pd_pu_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU);

	/// pc
	gio->pin_mux_gpio_pc_01_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_01);
	gio->pin_mux_gpio_pc_234_reg = RD_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234);

}

void hal_gpio_pin_cfg(uint32_t pin_cfg)
{
	int pin = pin_cfg & 0xF;
	int port = (pin_cfg >> GPIO_CFG_PORT_SHIFT) & 0xF;
	int mux = (pin_cfg >> GPIO_CFG_MUX_SHIFT) & 0xF;
	int oe = (pin_cfg >> GPIO_CFG_OE_IE_SHIFT) & 0x1;
	int ie = (pin_cfg >> (GPIO_CFG_OE_IE_SHIFT+1)) & 0x1;
	int pd = (pin_cfg >> GPIO_CFG_PD_PU_SHIFT) & 0x1;
	int pu = (pin_cfg >> (GPIO_CFG_PD_PU_SHIFT+1)) & 0x1;
	int inv = (pin_cfg >> GPIO_CFG_INV_SHIFT) & 0x1;
	hal_gpio_pin_mux(port, pin, mux, inv);
	hal_gpio_pad_oe_ie(port, pin, oe, ie); 
	hal_gpio_pad_pd_pu(port, pin, pd, pu); 
	hal_gpio_pad_pc(port, pin, 1);

	return;
}

void hal_gpio_pin_dft(uint32_t pin_cfg)
{
	int pin = pin_cfg & 0xF;
	int port = (pin_cfg >> GPIO_CFG_PORT_SHIFT) & 0xF;

	hal_gpio_pin_mux(port, pin, 0, 0);
	hal_gpio_pad_oe_ie(port, pin, 0, 1); 
	hal_gpio_pad_pd_pu(port, pin, 0, 1); 
	//hal_gpio_output(port, pin, 0, 0);
	//hal_gpio_aon_wup(port, pin, 0, 0);
	//hal_gpio_aon_latch(port, pin, 0);
	return;
}

int hal_gpio_pin_mux(int port, int pin, int mux, int inv)
{
	////rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;

 	uint32_t addr;
	uint32_t *p_reg;

	if (port == 0) {
		if (pin < 8) {
			addr = GLOBAL_REG_PIN_MUX_GPIO_0;
			p_reg = &gio->pin_mux_gpio_0_reg;
		} else {
			pin -= 8;
			addr = GLOBAL_REG_PIN_MUX_GPIO_01_CONT;
			p_reg = &gio->pin_mux_gpio_01_cont_reg;
		}
	}

	if (port == 1) {
		if (pin < 8) {
			addr = GLOBAL_REG_PIN_MUX_GPIO_1;
			p_reg = &gio->pin_mux_gpio_1_reg;
		} else {
			pin -= 8;
			pin += 1;//fix pin18 rx no interrupt of uart1
			addr = GLOBAL_REG_PIN_MUX_GPIO_01_CONT;
			p_reg = &gio->pin_mux_gpio_01_cont_reg;
		}	
	}
	
	if (port == 2) {
		if (pin < 8) {
			addr = GLOBAL_REG_PIN_MUX_GPIO_2;
			p_reg = &gio->pin_mux_gpio_2_reg;
		} else {
			pin -= 8;
			addr = GLOBAL_REG_PIN_MUX_GPIO_23_CONT;
			p_reg = &gio->pin_mux_gpio_23_cont_reg;
		}	
	}

	if (port == 3) {
		pin += 2;
		addr = GLOBAL_REG_PIN_MUX_GPIO_23_CONT;
		p_reg = &gio->pin_mux_gpio_23_cont_reg;
	}

	if (port == 4) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_4;
		p_reg = &gio->pin_mux_gpio_4_reg;
	}

	*p_reg = RD_WORD(addr);
	*p_reg &= ~(0x7 << (pin*4));
	*p_reg |= ((mux & 0x7) << (pin*4));
	if (inv)
		*p_reg |= (1 << (pin*4 + 3));
	else
		*p_reg &= ~(1 << (pin*4 + 3));
	WR_WORD(addr, *p_reg);

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_output(int port, int pin, int high, int en)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;

 	uint32_t addr, addr1;
	uint32_t *p_reg;

	if (port == 0) {
		addr = GLOBAL_REG_GPIO_0_OUTPUT_SET;
		addr1 = GLOBAL_REG_GPIO_0_OUTPUT_CLEAR;
		p_reg = &gio->gpio_0_out_reg;
	}

	if (port == 1) {
		addr = GLOBAL_REG_GPIO_1_OUTPUT_SET;
		addr1 = GLOBAL_REG_GPIO_1_OUTPUT_CLEAR;
		p_reg = &gio->gpio_1_out_reg;
	}

	if (port == 2) {
		addr = GLOBAL_REG_GPIO_2_OUTPUT_SET;
		addr1 = GLOBAL_REG_GPIO_2_OUTPUT_CLEAR;
		p_reg = &gio->gpio_2_out_reg;
	}

	if (port == 3) {
		addr = GLOBAL_REG_GPIO_34_OUTPUT_SET;
		addr1 = GLOBAL_REG_GPIO_34_OUTPUT_CLEAR;
		p_reg = &gio->gpio_34_out_reg;
	}

	if (port == 4) {
		pin += 8;
		addr = GLOBAL_REG_GPIO_34_OUTPUT_SET;
		addr1 = GLOBAL_REG_GPIO_34_OUTPUT_CLEAR;
		p_reg = &gio->gpio_34_out_reg;
	}

	if (en) {
		if (high) {
			WR_WORD(addr, (1 << pin));
			*p_reg |= (1 << pin);
		} else {
			WR_WORD(addr1, (1 << pin));
			*p_reg &= ~(1 << pin);
		}
		WR_WORD(addr, (1 << (pin + 16)));
		*p_reg |= (1 << (pin + 16));
	} else {
		WR_WORD(addr1, (1 << (pin + 16)));
		*p_reg &= ~(1 << (pin + 16));
	}

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_output_status(int port, int pin)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return 0;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return 0;

 	uint32_t addr;

	if (port == 0) {
		addr = GLOBAL_REG_GPIO_0_IO_STATUS;
	}

	if (port == 1) {
		addr = GLOBAL_REG_GPIO_1_IO_STATUS;
	}

	if (port == 2) {
		addr = GLOBAL_REG_GPIO_2_IO_STATUS;
	}

	if (port == 3) {
		addr = GLOBAL_REG_GPIO_34_IO_STATUS;
	}

	if (port == 4) {
		pin += 8;
		addr = GLOBAL_REG_GPIO_34_IO_STATUS;
	}

	uint32_t reg = RD_WORD(addr);
	return ((reg >> (pin + 16)) & 1);
}

int hal_gpio_input_status(int port, int pin)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return 0;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return 0;

 	uint32_t addr;

	if (port == 0) {
		addr = GLOBAL_REG_GPIO_0_IO_STATUS;
	}

	if (port == 1) {
		addr = GLOBAL_REG_GPIO_1_IO_STATUS;
	}

	if (port == 2) {
		addr = GLOBAL_REG_GPIO_2_IO_STATUS;
	}

	if (port == 3) {
		addr = GLOBAL_REG_GPIO_34_IO_STATUS;
	}

	if (port == 4) {
		pin += 8;
		addr = GLOBAL_REG_GPIO_34_IO_STATUS;
	}

	uint32_t reg = RD_WORD(addr);
	return ((reg >> pin) & 1);
}

int hal_gpio_pad_oe_ie(int port, int pin, int oe, int ie)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;

 	uint32_t addr;
	uint32_t *p_reg;

	if (port == 0) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE;
		p_reg = &gio->pin_mux_gpio_0_oe_ie_reg;
	}

	if (port == 1) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE;
		p_reg = &gio->pin_mux_gpio_1_oe_ie_reg;
	}

	if (port == 2) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE;
		p_reg = &gio->pin_mux_gpio_2_oe_ie_reg;
	}

	if (port == 3) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE;
		p_reg = &gio->pin_mux_gpio_34_oe_ie_reg;
	}

	if (port == 4) {
		pin += 8;
		addr = GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE;
		p_reg = &gio->pin_mux_gpio_34_oe_ie_reg;
	}

	*p_reg = RD_WORD(addr);
	if (oe) {
		*p_reg |= (1 << pin);
	} else {
		*p_reg &= ~(1 << pin);
	}

	if (ie) {
		*p_reg |= (1 << (pin + 16));
	} else {
		*p_reg &= ~(1 << (pin + 16));
	}

	WR_WORD(addr, *p_reg);
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_pad_pd_pu(int port, int pin, int pd, int pu)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;

 	uint32_t addr;
	uint32_t *p_reg;

	if (port == 0) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU;
		p_reg = &gio->pin_mux_gpio_0_pd_pu_reg;
	}

	if (port == 1) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU;
		p_reg = &gio->pin_mux_gpio_1_pd_pu_reg;
	}

	if (port == 2) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU;
		p_reg = &gio->pin_mux_gpio_2_pd_pu_reg;
	}

	if (port == 3) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU;
		p_reg = &gio->pin_mux_gpio_34_pd_pu_reg;
	}

	if (port == 4) {
		pin += 8;
		addr = GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU;
		p_reg = &gio->pin_mux_gpio_34_pd_pu_reg;
	}

	*p_reg = RD_WORD(addr);
	if (pd) {
		*p_reg |= (1 << pin);
	} else {
		*p_reg &= ~(1 << pin);
	}

	if (pu) {
		*p_reg |= (1 << (pin + 16));
	} else {
		*p_reg &= ~(1 << (pin + 16));
	}

	WR_WORD(addr, *p_reg);
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_pad_pc(int port, int pin, int en)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;

 	uint32_t addr;
	uint32_t *p_reg;

	if (port == 0 || port == 1) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_PC_01;
		p_reg = &gio->pin_mux_gpio_pc_01_reg; 
		if (port == 1) {
			pin += 16;
		}
	}

	if (port == 2 || port == 3 || port == 4) {
		addr = GLOBAL_REG_PIN_MUX_GPIO_PC_234;
		p_reg = &gio->pin_mux_gpio_pc_234_reg; 
		if (port == 3)
			pin += 12;
		if (port == 4)
			pin += 20;
	}

	*p_reg = RD_WORD(addr);
	if (en) {
		*p_reg |= (1 << pin);
	} else {
		*p_reg &= ~(1 << pin);
	}
	WR_WORD(addr, *p_reg);
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_pad_latch(int port, int pin, int latch, int manual)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;
		gio_port_t *p_port = &gio->port[port];

		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t *p_reg;
		uint32_t *p_man;

		if (port == 0 || port == 1 || port == 2) {
			p_reg = &gio->gpio_le_ctrl; 
			p_man = &gio->gpio_le_ctrl_man; 
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			p_reg = &gio->gpio_le_ctrl_2; 
			p_man = &gio->gpio_le_ctrl_2_man; 
			if (port == 4) {
				pin += 6;
			}
		}

		/// latch before sleep
		if (latch)
			*p_reg |= (1 << pin);
		else
			*p_reg &= ~(1 << pin);

		/// manual clear latch	
		if (manual) {
			*p_man |= (1 << pin);
		} else {
			*p_man &= ~(1 << pin);
		}
	}

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_pad_mask(int port, int pin, int mask)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t *p_reg;
		if (port == 0 || port == 1 || port == 2) {
			p_reg = &gio->gpio_maskb_ctrl; 
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			p_reg = &gio->gpio_maskb_ctrl_2; 
			if (port == 4) {
				pin += 6;
			}
		}

		/// latch before sleep
		if (mask)
			*p_reg &= ~(1 << pin);
		else
			*p_reg |= (1 << pin);
	}
		
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_wup_mask(int port, int pin, int mask)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t addr;
		uint32_t *p_reg;

		if (port == 0 || port == 1 || port == 2) {
			addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL;
			p_reg = &gio->gpio_wup_mask_ctrl;
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			addr = GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2;
			p_reg = &gio->gpio_wup_mask_ctrl_2;
			if (port == 4) {
				pin += 6;
			}
		}

		*p_reg = RD_WORD(addr);
		if (mask)
			*p_reg |= (1 << pin);
		else
			*p_reg &= ~(1 << pin);	/// unmask
		WR_WORD(addr, *p_reg);
	
	}

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_wup_polarity(int port, int pin, int pol)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t addr;
		uint32_t *p_reg;

		if (port == 0 || port == 1 || port == 2) {
			addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL;
			p_reg = &gio->gpio_wup_pol_ctrl;
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			addr = GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2;
			p_reg = &gio->gpio_wup_pol_ctrl_2;
			if (port == 4) {
				pin += 6;
			}
		}

		*p_reg = RD_WORD(addr);
		if (pol)
			*p_reg &= ~(1 << pin);
		else
			*p_reg |= (1 << pin);	
		WR_WORD(addr, *p_reg);

	}	

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_wup_edge(int port, int pin, int rise, int fall)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t addr, addr1;
		if (port == 0 || port == 1 || port == 2) {
			addr = AON_REG_GPIO_EDGE_RISING_EN;
			addr1 = AON_REG_GPIO_EDGE_FALLING_EN;
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			addr = AON_REG_GPIO_EDGE_RISING_EN_2;
			addr1 = AON_REG_GPIO_EDGE_FALLING_EN_2;
			if (port == 4) {
				pin += 6;
			}
		}

		uint32_t reg = RD_WORD(addr);
		if (rise) {
			reg |= (1 << pin);
		} else {
			reg &= ~(1 << pin);
		}
		WR_WORD(addr, reg);

		reg = RD_WORD(addr1);
		if (fall) {
			reg |= (1 << pin);
		} else {
			reg &= ~(1 << pin);
		}
		WR_WORD(addr1, reg);

		// turn on edge detect clock
		if (!gio->port[port].edge_det_clk_en) {
			gpio_aon_edge_det_clk(1, port);
			gio->port[port].edge_det_clk_en = 1;
		}	
	
	}

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_wup_edge_clear_manual(int port, int pin)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t addr;
		if (port == 0 || port == 1 || port == 2) {
			addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR;
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			addr = GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2;
			if (port == 4) {
				pin += 6;
			}
		}

		WR_WORD(addr, (1 << pin));

	}

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_wup_edge_clear_auto(int port, int pin, int en)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {
		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t addr;
		if (port == 0 || port == 1) {
			addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP;
			if (port == 1) {
				pin += 9;
			}
		}
		if (port == 2) {
			if (pin == 9) {
				addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2;
				pin = 0;
			} else {
				addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP;
				pin += 19;
			}
		}
		if (port == 3 || port == 4) {
			addr = AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2;
			if (port == 4) {
				pin += 7;
			}
			if (port == 3) {
				pin += 1;
			}
		}

		uint32_t reg = RD_WORD(addr);
		if (en) {
			reg |= (1 << pin);
		} else {
			reg &= ~(1 << pin);
		}
		WR_WORD(addr, reg);

	}

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_wup_edge_detect(int port, int pin, int en)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t addr;
		if (port == 0 || port == 1 || port == 2) {
			addr = AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY;
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			addr = AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2;
			if (port == 4) {
				pin += 6;
			}
		}

		uint32_t reg = RD_WORD(addr);
		if (en) {
			reg |= (1 << pin);
		} else {
			reg &= ~(1 << pin);
		}
		WR_WORD(addr, reg);

	}
	
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_wup_edge_latch(int port, int pin, int en)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (1) {

		if ((port >= GPIO_PORT_MAX) || (port < 0))
			return GPIO_ERR_INVALID_PARAM;

		gio_port_t *p_port = &gio->port[port];
		if ((pin < 0) || (pin >= p_port->npin))
			return GPIO_ERR_INVALID_PARAM;

		uint32_t addr;
		if (port == 0 || port == 1 || port == 2) {
			addr = AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP;
			if (port == 1) {
				pin += 9;
			}
			if (port == 2) {
				pin += 19;
			}
		}

		if (port == 3 || port == 4) {
			addr = AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2;
			if (port == 4) {
				pin += 6;
			}
		}

		uint32_t reg = RD_WORD(addr);
		if (en) {
			reg |= (1 << pin);
		} else {
			reg &= ~(1 << pin);
		}

		WR_WORD(addr, reg);
	}

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_output_grp_0(int en, int port, int pin, int mux)
{
	// group 0
	gio_aon_grp_t gio_aon_grp_0[] = {	{GPIO_SLP_GRP_0_PORT_0, GPIO_SLP_GRP_0_PORT_0_PIN_0},
														{GPIO_SLP_GRP_0_PORT_0, GPIO_SLP_GRP_0_PORT_0_PIN_4},
														{GPIO_SLP_GRP_0_PORT_0, GPIO_SLP_GRP_0_PORT_0_PIN_8},
														{GPIO_SLP_GRP_0_PORT_1, GPIO_SLP_GRP_0_PORT_1_PIN_2},
														{GPIO_SLP_GRP_0_PORT_1, GPIO_SLP_GRP_0_PORT_1_PIN_6},
														{GPIO_SLP_GRP_0_PORT_3, GPIO_SLP_GRP_0_PORT_3_PIN_5},
														{GPIO_SLP_GRP_0_PORT_4, GPIO_SLP_GRP_0_PORT_4_PIN_1},
													};
	int found = 0;
	for (uint32_t i = 0; i < sizeof(gio_aon_grp_0)/sizeof(gio_aon_grp_t); i++) {
		if ((gio_aon_grp_0[i].port == port) && (gio_aon_grp_0[i].pin == pin)) {
			found = 1;
			break;
		}
	}

	if (!found)
		return GPIO_ERR_INVALID_PARAM;

	if (port == GPIO_PORT_0) {
		gpio_aon_port_0_output_sel(pin, mux);
		gpio_aon_port_0_sel(pin, en);
	} else if (port == GPIO_PORT_1) {
		gpio_aon_port_1_output_sel(pin, mux);
		gpio_aon_port_1_sel(pin, en);
	} else if (port == GPIO_PORT_3) {
		gpio_aon_port_3_output_sel(pin, mux);
		gpio_aon_port_3_sel(pin, en);
	} else {
		gpio_aon_port_4_output_sel(pin, mux);
		gpio_aon_port_4_sel(pin, en);
	}
	
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_output_grp_1(int en, int port, int pin, int mux)
{
	// group 1
	gio_aon_grp_t gio_aon_grp_1[] = {	{GPIO_SLP_GRP_1_PORT_0, GPIO_SLP_GRP_1_PORT_0_PIN_1},
														{GPIO_SLP_GRP_1_PORT_0, GPIO_SLP_GRP_1_PORT_0_PIN_5},
														{GPIO_SLP_GRP_1_PORT_1, GPIO_SLP_GRP_1_PORT_1_PIN_3},
														{GPIO_SLP_GRP_1_PORT_1, GPIO_SLP_GRP_1_PORT_1_PIN_7},
														{GPIO_SLP_GRP_1_PORT_3, GPIO_SLP_GRP_1_PORT_3_PIN_2},
														{GPIO_SLP_GRP_1_PORT_4, GPIO_SLP_GRP_1_PORT_4_PIN_2},
													};
	int found = 0;
	for (uint32_t i = 0; i < sizeof(gio_aon_grp_1)/sizeof(gio_aon_grp_t); i++) {
		if ((gio_aon_grp_1[i].port == port) && (gio_aon_grp_1[i].pin == pin)) {
			found = 1;
			break;
		}
	}

	if (!found)
		return GPIO_ERR_INVALID_PARAM;

	if (port == GPIO_PORT_0) {
		gpio_aon_port_0_output_sel(pin, mux);
		gpio_aon_port_0_sel(pin, en);
	} else if (port == GPIO_PORT_1) {
		gpio_aon_port_1_output_sel(pin, mux);
		gpio_aon_port_1_sel(pin, en);
	} else if (port == GPIO_PORT_3) {
		gpio_aon_port_3_output_sel(pin, mux);
		gpio_aon_port_3_sel(pin, en);
	} else {
		gpio_aon_port_4_output_sel(pin, mux);
		gpio_aon_port_4_sel(pin, en);
	}
	
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_output_grp_2(int en, int port, int pin, int mux)
{
	// group 2
	gio_aon_grp_t gio_aon_grp_2[] = {	{GPIO_SLP_GRP_2_PORT_0, GPIO_SLP_GRP_2_PORT_0_PIN_2},
														{GPIO_SLP_GRP_2_PORT_0, GPIO_SLP_GRP_2_PORT_0_PIN_6},
														{GPIO_SLP_GRP_2_PORT_1, GPIO_SLP_GRP_2_PORT_1_PIN_0},
														{GPIO_SLP_GRP_2_PORT_1, GPIO_SLP_GRP_2_PORT_1_PIN_4},
														{GPIO_SLP_GRP_2_PORT_1, GPIO_SLP_GRP_2_PORT_1_PIN_8},
														{GPIO_SLP_GRP_2_PORT_3, GPIO_SLP_GRP_2_PORT_3_PIN_3},
														{GPIO_SLP_GRP_2_PORT_4, GPIO_SLP_GRP_2_PORT_4_PIN_3},
													};
	int found = 0;
	for (uint32_t i = 0; i < sizeof(gio_aon_grp_2)/sizeof(gio_aon_grp_t); i++) {
		if ((gio_aon_grp_2[i].port == port) && (gio_aon_grp_2[i].pin == pin)) {
			found = 1;
			break;
		}
	}

	if (!found)
		return GPIO_ERR_INVALID_PARAM;

	if (port == GPIO_PORT_0) {
		gpio_aon_port_0_output_sel(pin, mux);
		gpio_aon_port_0_sel(pin, en);
	} else if (port == GPIO_PORT_1) {
		gpio_aon_port_1_output_sel(pin, mux);
		gpio_aon_port_1_sel(pin, en);
	} else if (port == GPIO_PORT_3) {
		gpio_aon_port_3_output_sel(pin, mux);
		gpio_aon_port_3_sel(pin, en);
	} else {
		gpio_aon_port_4_output_sel(pin, mux);
		gpio_aon_port_4_sel(pin, en);
	}
	
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_sleep_output_grp_3(int en, int port, int pin, int mux)
{
	// group 2
	gio_aon_grp_t gio_aon_grp_3[] = {	{GPIO_SLP_GRP_3_PORT_0, GPIO_SLP_GRP_3_PORT_0_PIN_3},
														{GPIO_SLP_GRP_3_PORT_0, GPIO_SLP_GRP_3_PORT_0_PIN_7},
														{GPIO_SLP_GRP_3_PORT_1, GPIO_SLP_GRP_3_PORT_1_PIN_1},
														{GPIO_SLP_GRP_3_PORT_1, GPIO_SLP_GRP_3_PORT_1_PIN_5},
														{GPIO_SLP_GRP_3_PORT_1, GPIO_SLP_GRP_3_PORT_1_PIN_9},
														{GPIO_SLP_GRP_3_PORT_3, GPIO_SLP_GRP_3_PORT_3_PIN_4},
														{GPIO_SLP_GRP_3_PORT_4, GPIO_SLP_GRP_3_PORT_4_PIN_0},
													};
	int found = 0;
	for (uint32_t i = 0; i < sizeof(gio_aon_grp_3)/sizeof(gio_aon_grp_t); i++) {
		if ((gio_aon_grp_3[i].port == port) && (gio_aon_grp_3[i].pin == pin)) {
			found = 1;
			break;
		}
	}

	if (!found)
		return GPIO_ERR_INVALID_PARAM;

	if (port == GPIO_PORT_0) {
		gpio_aon_port_0_output_sel(pin, mux);
		gpio_aon_port_0_sel(pin, en);
	} else if (port == GPIO_PORT_1) {
		gpio_aon_port_1_output_sel(pin, mux);
		gpio_aon_port_1_sel(pin, en);
	} else if (port == GPIO_PORT_3) {
		gpio_aon_port_3_output_sel(pin, mux);
		gpio_aon_port_3_sel(pin, en);
	} else {
		gpio_aon_port_4_output_sel(pin, mux);
		gpio_aon_port_4_sel(pin, en);
	}
	
	return GPIO_ERR_NO_ERROR;
}

void hal_gpio_reset_chip(int idx, int en, int port, int pin, int fall, int deb)
{
	if (idx > 2)
		return;

	if (en) {
		int sidx;

		if (port == 0)
			sidx = pin;

		if (port == 1)
			sidx = 9 + pin;

		if (port == 2)
			sidx = 19 + pin;

		if (port == 3)
			sidx = 29 + pin;

		if (port == 4)
			sidx = 35 + pin;

		gpio_aon_edge_reset_pd1(idx, sidx, fall, deb);
		gpio_aon_edge_reset_pd1_enable(idx);
		gpio_aon_edge_reset_pd1_clk(1);		
	} else {
		gpio_aon_edge_reset_pd1_disable(idx);
	}

}

void hal_gpio_reset_arm(int en, int port, int pin, int fall, int deb, int sys_rst)
{
	if (en) {
		int sidx;

		if (port == 0)
			sidx = pin;

		if (port == 1)
			sidx = 9 + pin;

		if (port == 2)
			sidx = 19 + pin;

		if (port == 3)
			sidx = 29 + pin;

		if (port == 4)
			sidx = 35 + pin;

		gpio_aon_edge_reset_cm4(sidx, fall, deb, sys_rst);
		gpio_aon_edge_reset_cm4_enable();
	} else {
		gpio_aon_edge_reset_cm4_disable();
	}
}

int hal_gpio_ext_int_prio(int port, int prio)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	if ((prio > IRQ_PRI_Lowest) || (prio < IRQ_PRI_RealTime))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	p_port->prio = prio;
	NVIC_SetPriority((IRQn_Type)p_port->irq, prio);

	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_ext_int_reg(int port, int pin, void *arg, void (*callback)(void *, int, int, int))
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;

	p_port->p_cb[pin].arg = arg;
	p_port->p_cb[pin].callback = callback;

	if (p_port->map == 0) {
		// enable clock 
		//pif->clk->hal_clk_gpio_intr(port, 1);  //review
		NVIC_ClearPendingIRQ((IRQn_Type)p_port->irq);
		NVIC_SetPriority((IRQn_Type)p_port->irq, p_port->prio);
		NVIC_EnableIRQ((IRQn_Type)p_port->irq);
		p_port->map |= (1 << pin);
		//p_port->prio = prio;
	} else {
		/// already enable
		p_port->map |= (1 << pin);
	}	
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_ext_int_unreg(int port, int pin)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;

	p_port->map &= ~(1 << pin);
	if (p_port->map == 0) {
		// disable clock 
		//pif->clk->hal_clk_gpio_intr(port, 0);  //review
		NVIC_DisableIRQ((IRQn_Type)p_port->irq);
		p_port->prio = IRQ_PRI_Lowest;
	}

	p_port->p_cb[pin].arg = NULL;
	p_port->p_cb[pin].callback = NULL;
	return GPIO_ERR_NO_ERROR;
}

int hal_gpio_ext_int_mask(int port, int pin, int rise, int fall, int wup)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;	

	uint32_t reg; 

	if (rise) {
		reg = (1 << pin);
		p_port->intr_gpio_mask_sav |= (1 << pin);
	} 

	if (fall) {
		reg |= (1 << (p_port->int_fall_sh+ pin));
		p_port->intr_gpio_mask_sav |= (1 << (p_port->int_fall_sh + pin));
	} 

	if (wup) {
		reg |= (1 << (p_port->int_wup_sh+ pin));
		p_port->intr_gpio_mask_sav |= (1 << (p_port->int_wup_sh + pin));
	}

	WR_WORD(p_port->intr_gpio_mask_set_reg, reg);

	return GPIO_ERR_NO_ERROR;

}

int hal_gpio_ext_int_unmask(int port, int pin, int rise, int fall, int wup)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if ((port >= GPIO_PORT_MAX) || (port < 0))
		return GPIO_ERR_INVALID_PARAM;

	gio_port_t *p_port = &gio->port[port];
	if ((pin < 0) || (pin >= p_port->npin))
		return GPIO_ERR_INVALID_PARAM;	

	uint32_t reg; 

	if (rise) {
		reg = (1 << pin);
		p_port->intr_gpio_mask_sav &= ~(1 << pin);
	} 

	if (fall) {
		reg |= (1 << (p_port->int_fall_sh+ pin));
		p_port->intr_gpio_mask_sav &= ~(1 << (p_port->int_fall_sh + pin));
	} 

	if (wup) {
		reg |= (1 << (p_port->int_wup_sh + pin));
		p_port->intr_gpio_mask_sav &= ~(1 << (p_port->int_wup_sh + pin));
	} 

	WR_WORD(p_port->intr_gpio_mask_clear_reg, reg);

	return GPIO_ERR_NO_ERROR;

}

void hal_gpio_mux_out_cm4_halt(int port, int pin)
{
	hal_gpio_pin_mux(port, pin, 7, 0);
	hal_gpio_pad_oe_ie(port, pin, 1, 0);
	hal_gpio_pad_pd_pu(port, pin, 0, 0);

	uint32_t reg = RD_WORD(0x441262ac);	
	reg |= 0x4;
	WR_WORD(0x441262ac, reg);

	reg = RD_WORD(0x441262b4);
	reg |= 0x17;
	WR_WORD(0x441262b4, reg);	
}


void hal_gpio_suspend(void)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	if (gio->gpio_le_ctrl != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL, gio->gpio_le_ctrl);
	}

	if (gio->gpio_le_ctrl_2 != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL_2, gio->gpio_le_ctrl_2);
	}

	if (gio->gpio_maskb_ctrl != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL, gio->gpio_maskb_ctrl);
	}

	if (gio->gpio_maskb_ctrl_2 != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL_2, gio->gpio_maskb_ctrl_2);
	}
}


void hal_gpio_resume(void)
{
	//rom_if_t *pif = &g_gio_if;
	gio_t *gio = &g_gio;

	/// resume pin mux
	if (gio->pin_mux_gpio_0_reg != gio->pin_mux_gpio_0_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_0, gio->pin_mux_gpio_0_reg);
	}

	if (gio->pin_mux_gpio_1_reg != gio->pin_mux_gpio_1_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_1, gio->pin_mux_gpio_1_reg);
	}

	if (gio->pin_mux_gpio_01_cont_reg != gio->pin_mux_gpio_01_cont_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_01_CONT, gio->pin_mux_gpio_01_cont_reg);
	}

	if (gio->pin_mux_gpio_2_reg != gio->pin_mux_gpio_2_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_2, gio->pin_mux_gpio_2_reg);
	}

	if (gio->pin_mux_gpio_23_cont_reg != gio->pin_mux_gpio_23_cont_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_23_CONT, gio->pin_mux_gpio_23_cont_reg);
	}

	if (gio->pin_mux_gpio_4_reg != gio->pin_mux_gpio_4_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_4, gio->pin_mux_gpio_4_reg);
	}

	if (gio->gpio_0_out_reg != 0) {
		WR_WORD(GLOBAL_REG_GPIO_0_OUTPUT_SET, gio->gpio_0_out_reg);
	}

	if (gio->gpio_1_out_reg != 0) {
		WR_WORD(GLOBAL_REG_GPIO_1_OUTPUT_SET, gio->gpio_1_out_reg);
	}

	if (gio->gpio_2_out_reg != 0) {
		WR_WORD(GLOBAL_REG_GPIO_2_OUTPUT_SET, gio->gpio_2_out_reg);
	}

	if (gio->gpio_34_out_reg != 0) {
		WR_WORD(GLOBAL_REG_GPIO_34_OUTPUT_SET, gio->gpio_34_out_reg);
	}

	if (gio->pin_mux_gpio_0_oe_ie_reg != gio->pin_mux_gpio_0_oe_ie_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_OE_IE, gio->pin_mux_gpio_0_oe_ie_reg);
	}

	if (gio->pin_mux_gpio_1_oe_ie_reg != gio->pin_mux_gpio_1_oe_ie_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_OE_IE, gio->pin_mux_gpio_1_oe_ie_reg);
	}

	if (gio->pin_mux_gpio_2_oe_ie_reg != gio->pin_mux_gpio_2_oe_ie_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_OE_IE, gio->pin_mux_gpio_2_oe_ie_reg);
	}

	if (gio->pin_mux_gpio_34_oe_ie_reg != gio->pin_mux_gpio_34_oe_ie_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_OE_IE, gio->pin_mux_gpio_34_oe_ie_reg);
	}

	if (gio->pin_mux_gpio_0_pd_pu_reg != gio->pin_mux_gpio_0_pd_pu_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_0_PD_PU, gio->pin_mux_gpio_0_pd_pu_reg);
	}

	if (gio->pin_mux_gpio_1_pd_pu_reg != gio->pin_mux_gpio_1_pd_pu_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_1_PD_PU, gio->pin_mux_gpio_1_pd_pu_reg);
	}

	if (gio->pin_mux_gpio_2_pd_pu_reg != gio->pin_mux_gpio_2_pd_pu_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_2_PD_PU, gio->pin_mux_gpio_2_pd_pu_reg);
	}

	if (gio->pin_mux_gpio_34_pd_pu_reg != gio->pin_mux_gpio_34_pd_pu_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_34_PD_PU, gio->pin_mux_gpio_34_pd_pu_reg);
	}

	if (gio->pin_mux_gpio_pc_01_reg != gio->pin_mux_gpio_pc_01_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_01, gio->pin_mux_gpio_pc_01_reg);
	}

	if (gio->pin_mux_gpio_pc_234_reg != gio->pin_mux_gpio_pc_234_reg_dft) {
		WR_WORD(GLOBAL_REG_PIN_MUX_GPIO_PC_234, gio->pin_mux_gpio_pc_234_reg);
	}

	if (gio->gpio_wup_mask_ctrl != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL, gio->gpio_wup_mask_ctrl);
	}

	if (gio->gpio_wup_mask_ctrl_2 != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2, gio->gpio_wup_mask_ctrl_2);
	}

	if (gio->gpio_wup_pol_ctrl != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL, gio->gpio_wup_pol_ctrl);
	}

	if (gio->gpio_wup_pol_ctrl_2 != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2, gio->gpio_wup_pol_ctrl_2);
	}

	// resume interrupt
	for (uint32_t i = 0; i < GPIO_PORT_MAX; i++) {
		if (gio->port[i].map != 0) {
			/// clear mask
			WR_WORD(gio->port[i].intr_gpio_mask_clear_reg, ~(gio->port[i].intr_gpio_mask_sav));

			// set priority
			NVIC_SetPriority((IRQn_Type)gio->port[i].irq, gio->port[i].prio);
	
			// enable interrupt
			NVIC_EnableIRQ((IRQn_Type)gio->port[i].irq);
		}
	}

	// unlatch input/output pins
	if (gio->gpio_le_ctrl != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL, gio->gpio_le_ctrl_man);
	}

	if (gio->gpio_le_ctrl_2 != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_LE_CTRL_2, gio->gpio_le_ctrl_2_man);
	}

	if (gio->gpio_maskb_ctrl != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL, 0);
	}

	if (gio->gpio_maskb_ctrl_2 != 0) {
		WR_WORD(GLOBAL2_REG_GPIO_MASKB_CTRL_2, 0);
	}

}


