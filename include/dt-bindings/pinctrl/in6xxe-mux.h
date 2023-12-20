/*
 * Copyright (c) 2023 Inplay Inc. 
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DT_BINDINGS_PINCTRL_IN6XXE_AF_H_
#define DT_BINDINGS_PINCTRL_IN6XXE_AF_H_

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

#define IN6XXE_PINMUX(port, pin, mux, oe, ie) \
	(((port & GPIO_CFG_PORT_MASK) << GPIO_CFG_PORT_SHIFT) | \
	 ((pin & GPIO_CFG_PIN_MASK) << GPIO_CFG_PIN_SHIFT) | \
	 ((mux & GPIO_CFG_MUX_MASK) << GPIO_CFG_MUX_SHIFT) | \
	 ((oe & 1) << GPIO_CFG_OE_IE_SHIFT) | \
	 ((ie & 1) << (GPIO_CFG_OE_IE_SHIFT + 1)))

#define IN6XXE_GET_MUX(pinmux) \
	(((pinmux) >> GPIO_CFG_MUX_SHIFT) & GPIO_CFG_MUX_MASK)
#define IN6XXE_GET_PORT(pinmux) \
	(((pinmux) >> GPIO_CFG_PORT_SHIFT) & GPIO_CFG_PORT_MASK)
#define IN6XXE_GET_PIN(pinmux) \
	(((pinmux) >> GPIO_CFG_PIN_SHIFT) & GPIO_CFG_PIN_MASK

#endif
