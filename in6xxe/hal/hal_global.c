#if !(CFG_BUILD_ROM)
#include "in_config.h"
#endif	// !CFG_BUILD_ROM */ 

/**
 ****************************************************************************************
 *
 * @file hal_global.c
 *
 * @brief Platform global functions  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#include "in_mmap.h"
#include "in_arm.h"
#include "in_debug.h"
#include "in_ana.h"
#include "in_rom_if.h"
#include "in_compile.h"

//#include "../bootloader/inc/boot_share.h"

#include "./hal/hal_clk.h"
#include "./hal/hal_power.h"
#include "./hal/hal_smem.h"
#include "./hal/hal_uart.h"
#include "./hal/hal_smem.h"
#include "./hal/hal_gpio.h"
#include "./hal/hal_global.h"
#include "./hal/hal_trng.h"
#include "./hal/hal_wdt.h"
#include "./hal/hal_timer.h"
#include "./hal/hal_testmux.h"
#include "zephyr/irq.h"

#if !(CFG_BUILD_ROM)
#if !CFG_NO_OS
#include "cmsis_os.h"
#endif	// !CFG_NO_OS
#endif	// !CFG_BUILD_ROM */ 

/*
 * Debug
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
int dbg_en = CFG_DBG_EN;
int dbg_flag = CFG_DBG_FLAG;
#if CFG_DBG_IF_RTT_VIEW
int dbg_if = DBG_IF_RTT_VIEW;
#elif CFG_DBG_IF_UART
int dbg_if = DBG_IF_UART;
#else
int dbg_if = DBG_IF_NONE;
#endif

static void *uart_hdl = NULL;

void * hal_sys_uart_hdl(void) {
	return uart_hdl;
}
#if CFG_DBG_EN
#if CFG_DBG_IF_UART

int SER_PutChar(int c)
{
	if (uart_hdl) {
		hal_uart_putc(uart_hdl, c);	
	}

	return 1;	
}
int SER_GetChar(uint8_t *p)
{
        if (uart_hdl){
                hal_uart_rcvd_poll(uart_hdl, p, 1);
        }
        return 1;
}
#endif		// CFG_DBG_IF_UART

#if 0
void HardFault_Handler_C(unsigned long * svc_args, unsigned int lr_value) __attribute__((section("ISR")));
 
// HardFault handler wrapper in assembly language.
// It extracts the location of stack frame and passes it to the handler written
// in C as a pointer. We also extract the LR value as second parameter.
__asm void HardFault_Handler(void) __attribute__((section("ISR")));
__asm void HardFault_Handler(void)
{
	TST    LR, #4
	ITE    EQ
	MRSEQ  R0, MSP
	MRSNE  R0, PSP
	MOV    R1, LR
	B      __cpp(HardFault_Handler_C)
}	
 
// HardFault handler in C, with stack frame location and LR value extracted
// from the assembly wrapper as input parameters
void HardFault_Handler_C(unsigned long * hardfault_args, unsigned int lr_value) __attribute__((section("ISR")));
void HardFault_Handler_C(unsigned long * hardfault_args, unsigned int lr_value)
{
	unsigned long stacked_r0;
	unsigned long stacked_r1;
	unsigned long stacked_r2;
	unsigned long stacked_r3;
	unsigned long stacked_r12;
	unsigned long stacked_lr;
	unsigned long stacked_pc;
	unsigned long stacked_psr;
	unsigned long cfsr;
	unsigned long bus_fault_address;
	unsigned long memmanage_fault_address;

	bus_fault_address       = SCB->BFAR;
	memmanage_fault_address = SCB->MMFAR;
	cfsr                    = SCB->CFSR;
 
	stacked_r0  = ((unsigned long) hardfault_args[0]);
	stacked_r1  = ((unsigned long) hardfault_args[1]);
	stacked_r2  = ((unsigned long) hardfault_args[2]);
	stacked_r3  = ((unsigned long) hardfault_args[3]);
	stacked_r12 = ((unsigned long) hardfault_args[4]);
	stacked_lr  = ((unsigned long) hardfault_args[5]);
	stacked_pc  = ((unsigned long) hardfault_args[6]);
	stacked_psr = ((unsigned long) hardfault_args[7]);

	PRINTD (DBG_ERR, "[HardFault]\n");
	PRINTD (DBG_ERR, "- Stack frame:\n"); 
	PRINTD (DBG_ERR, " R0  = %x\n", stacked_r0);
	PRINTD (DBG_ERR, " R1  = %x\n", stacked_r1);
	PRINTD (DBG_ERR, " R2  = %x\n", stacked_r2);
	PRINTD (DBG_ERR, " R3  = %x\n", stacked_r3);
	PRINTD (DBG_ERR, " R12 = %x\n", stacked_r12);
	PRINTD (DBG_ERR, " LR  = %x\n", stacked_lr);
	PRINTD (DBG_ERR, " PC  = %x\n", stacked_pc);
	PRINTD (DBG_ERR, " PSR = %x\n", stacked_psr);
	PRINTD (DBG_ERR, "- FSR/FAR:\n");  
	PRINTD (DBG_ERR, " CFSR = %x\n", cfsr);
	PRINTD (DBG_ERR, " HFSR = %x\n", SCB->HFSR);
	PRINTD (DBG_ERR, " DFSR = %x\n", SCB->DFSR);
	PRINTD (DBG_ERR, " AFSR = %x\n", SCB->AFSR);
	if (cfsr & 0x0080) PRINTD (DBG_ERR, " MMFAR = %x\n", memmanage_fault_address);
	if (cfsr & 0x8000) PRINTD (DBG_ERR, " BFAR = %x\n", bus_fault_address);
	PRINTD (DBG_ERR, "- Misc\n"); 
	PRINTD (DBG_ERR, " LR/EXC_RETURN= %x\n", lr_value);

	while(1); // endless loop
}
#endif
#else
int SER_PutChar(int c) {
	return 1;
}
int SER_GetChar(uint8_t *p) {
	return 1;
}
#endif	// CFG_DBG_EN
#endif	// !CFG_BUILD_ROM */ 

/***************************************************************************************
 *
 * Ble ISR
 *
 ***************************************************************************************/

/*
 * Data Structure
 ****************************************************************************************
 */
typedef struct {
	void *arg;
	void (*callback)(void *arg);
} ble_isr_t;

/*
 * Global
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
static ble_isr_t g_ble_isr;
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * Isr
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
__irq void BLE_Core_Handler(const void *arg) __attribute__((section("ISR")));
#endif	// !CFG_BUILD_ROM */ 
__irq void BLE_Core_Handler(const void *arg)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	ble_isr_t *pb = (ble_isr_t *)pif->glb->ble;

	if (pb->callback) {
		pb->callback(pb->arg);
	}
}
/*
 * APIs
 ****************************************************************************************
 */
void hal_ble_isr_register(void *arg, void (*callback)(void *))
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	ble_isr_t *pb = (ble_isr_t *)pif->glb->ble;
	
    //irq_connect_dynamic(Ble_IRQn, IRQ_PRI_High, BLE_Core_Handler, NULL, 0);
	uint32_t pri_mask = disable_irq();
	pb->callback = callback;
	pb->arg = arg;
	__set_PRIMASK(pri_mask);
}

void hal_ble_isr_deregister(void)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	ble_isr_t *pb = (ble_isr_t *)pif->glb->ble;

	uint32_t pri_mask = disable_irq();
	pb->callback = NULL;
	pb->arg = NULL;
	__set_PRIMASK(pri_mask);
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

/***************************************************************************************
 *
 * Global ISR
 *
 ***************************************************************************************/

/*
 * Data Structure
 ****************************************************************************************
 */
typedef struct {
	void *arg;
	void (*callback)(void *arg);
} global_isr_t;

typedef struct {
	uint32_t irq_map;
	int prio;
	global_isr_t isr[GLB_IRQ_MAX];
} global_isr_ctl_t;

/*
 * Global
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
static global_isr_ctl_t g_isr_ctl;
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * Isr
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
__irq void Global_Irq_Handler(void) __attribute__((section("ISR")));
#endif	// !CFG_BUILD_ROM */ 
__irq void Global_Irq_Handler(void)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	global_isr_ctl_t *piq = (global_isr_ctl_t *)pif->glb->giq;
	uint32_t status = glb_int_status();
	glb_int_clear(status);
	
	uint32_t mask = glb_int_mask_status();
	status &= ~mask;
	for (uint32_t i = 0; i < GLB_IRQ_MAX; i++) {
		if ((status >> i) & 1) {
			if (piq->isr[i].callback) {
				piq->isr[i].callback(piq->isr[i].arg);
			}
		}
	}
}

/*
 * APIs
 ****************************************************************************************
 */
void hal_glb_isr_register(int irq_id, int prio, void *arg, void (*callback)(void *))
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	global_isr_ctl_t *piq = (global_isr_ctl_t *)pif->glb->giq;

	if (irq_id >= GLB_IRQ_MAX)
		return;

	uint32_t pri_mask = disable_irq();

	piq->isr[irq_id].arg = arg;
	piq->isr[irq_id].callback = callback;

	// unmask it
	glb_int_unmask((1 << irq_id));

	if (piq->irq_map == 0) {
		NVIC_ClearPendingIRQ(Global_IRQn);		
		NVIC_EnableIRQ(Global_IRQn);
		NVIC_SetPriority(Global_IRQn, prio);	
		piq->prio = prio;	
	} else {
		if (prio < piq->prio) {
			/// set to higher priority
			NVIC_SetPriority(Global_IRQn, prio);
			piq->prio = prio;	
		}
	}

	piq->irq_map |= (1 << irq_id);

	__set_PRIMASK(pri_mask);

	return;
}

void hal_glb_isr_deregister(int irq_id)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	global_isr_ctl_t *piq = (global_isr_ctl_t *)pif->glb->giq;

	if (irq_id >= GLB_IRQ_MAX)
		return;

	uint32_t pri_mask = disable_irq();
	if (piq->irq_map & (1 << irq_id)) {
		/// mask it 
		glb_int_mask((1 << irq_id));

		piq->isr[irq_id].arg = NULL;
		piq->isr[irq_id].callback = NULL;
		piq->irq_map &= ~(1 << irq_id);
		if (piq->irq_map == 0) {
			NVIC_DisableIRQ(Global_IRQn);
		}
	}
	__set_PRIMASK(pri_mask);

	return;
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

/***************************************************************************************
 *
 * Software Interrupt
 *
 ***************************************************************************************/

/*
 * Data Structure
 ****************************************************************************************
 */
#define SWI_NB 4

typedef struct {
	void *arg;
	void (*callback)(void *arg);
} swi_t;

typedef struct {
	uint32_t used_map;
	int prio;	
	swi_t swi[SWI_NB];
} swi_ctl_t;

/*
 * Global
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
static swi_ctl_t g_swi = {0};
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * Isr
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
__irq void SWI_Handler(void *arg) __attribute__((section("ISR")));
#endif	// !CFG_BUILD_ROM */ 
__irq void SWI_Handler(void *arg)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	swi_ctl_t *pd = (swi_ctl_t *)pif->glb->swi;

	uint32_t status = swi_status();
	swi_clear(status);

	uint32_t mask = swi_mask_status();
	status &= ~mask;
	for (uint32_t i = 0; i < SWI_NB; i++) {
		if ((status >> i) & 1) {
			if (pd->swi[i].callback) {
				pd->swi[i].callback(pd->swi[i].arg);
			}
		}	
	}	
}

/*
 * APIs
 ****************************************************************************************
 */
int hal_swi_int_prio(int prio)
{
	if ((prio > IRQ_PRI_Lowest) || (prio < IRQ_PRI_RealTime))
		return -1;

	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	swi_ctl_t *pd = (swi_ctl_t *)pif->glb->swi;
	pd->prio = prio;
	NVIC_SetPriority(SWI_IRQn, pd->prio);	
	return 0;
}

int hal_swi_register(void *arg, void (*callback)(void *))
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	swi_ctl_t *pd = (swi_ctl_t *)pif->glb->swi;
	uint32_t i;	

	for (i = 0; i < SWI_NB; i++) {
		if (!((pd->used_map >> i) & 1)) {
			uint32_t pri_mask = disable_irq();

			pd->swi[i].arg = arg;
			pd->swi[i].callback = callback;
			if (!pd->used_map) {
				clk_sw_intr_en(1);
				NVIC_ClearPendingIRQ(SWI_IRQn);		
				NVIC_SetPriority(SWI_IRQn, pd->prio);	
				NVIC_EnableIRQ(SWI_IRQn);
				//pd->prio = prio;
			} 
			swi_unmask((1 << i));
			pd->used_map |= (1 << i);
			__set_PRIMASK(pri_mask);
			return i;
		}
	}

	return -1;
}

void hal_swi_deregister(int index)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	swi_ctl_t *pd = (swi_ctl_t *)&pif->glb->swi;
	
	if (index >= SWI_NB || index < 0)
		return;

	if (pd->used_map & (1 << index)) {
		uint32_t pri_mask = disable_irq();
		pd->swi[index].arg = NULL;
		pd->swi[index].callback = NULL;
		pd->used_map &= ~(1 << index);
		swi_mask((1 << index));
		if (pd->used_map == 0) {
			clk_sw_intr_en(0);
			NVIC_DisableIRQ(SWI_IRQn);
		}
		__set_PRIMASK(pri_mask);
	}
}

void hal_swi_set(int index)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	swi_ctl_t *pd = (swi_ctl_t *)pif->glb->swi;
	
	if (index >= SWI_NB || index < 0)
		return;

	if (pd->used_map & (1 << index)) {
		swi_set(index);
	}
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

/***************************************************************************************
 *
 * NMI Interrupt
 *
 ***************************************************************************************/
/*
 * Data Structure
 ****************************************************************************************
 */
typedef struct {
	void *arg;
	void (*callback)(void *arg);
} nmi_t;

typedef struct {
	uint32_t irq_map;
	nmi_t nmi[NMI_IRQ_MAX];
} nmi_ctl_t;

/*
 * Global
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
static nmi_ctl_t g_nmi = {0};
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * Isr
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
__irq void NMI_Handler(void) __attribute__((section("ISR")));
#endif	// !CFG_BUILD_ROM */ 
__irq void NMI_Handler(void)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	nmi_ctl_t *pd = (nmi_ctl_t *)pif->glb->nmi;
	uint32_t status = nmi_int_status();
	uint32_t mask = nmi_int_mask_status();
	nmi_int_clear(status);

	status &= ~mask;
	for (uint32_t i = 0; i < NMI_IRQ_MAX; i++) {
		if ((status >> i) & 1) {
			if (pd->nmi[i].callback) {
				pd->nmi[i].callback(pd->nmi[i].arg);
			}
		}	
	}	
}

/*
 * APIs
 ****************************************************************************************
 */
void hal_nmi_register(int irq_id, void *arg, void (*callback)(void *))
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	nmi_ctl_t *pd = (nmi_ctl_t *)pif->glb->nmi;

	if (irq_id >= NMI_IRQ_MAX)
		return;

	uint32_t pri_mask = disable_irq();
	pd->nmi[irq_id].arg = arg;
	pd->nmi[irq_id].callback = callback;
	if (pd->irq_map == 0) {
		clk_nmi_intr_en(1);
	}
	pd->irq_map |= (1 << irq_id);
	nmi_int_unmask((1 << irq_id));
	__set_PRIMASK(pri_mask);

	return;
}

void hal_nmi_deregister(int irq_id)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	nmi_ctl_t *pd = (nmi_ctl_t *)pif->glb->nmi;

	if (irq_id >= NMI_IRQ_MAX)
		return;

	uint32_t pri_mask = disable_irq();
	pd->nmi[irq_id].arg = NULL;
	pd->nmi[irq_id].callback = NULL;
	nmi_int_mask((1 << irq_id));
	pd->irq_map &= ~(1 << irq_id);
	if (pd->irq_map == 0) {
		clk_nmi_intr_en(0);
	}
	__set_PRIMASK(pri_mask);

}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

/***************************************************************************************
 *
 * Ble Osc, CPLL, and XO Interrupt
 *
 ***************************************************************************************/

/*
 * Data Structure
 ****************************************************************************************
 */
typedef struct {
	void *arg;
	void (*callback)(void *arg);
} osc_xo_isr_t;

typedef struct {
	uint32_t irq_map;
	int prio;
	osc_xo_isr_t isr[OSC_XO_IRQ_MAX];
} osc_xo_isr_ctl_t;

/*
 * Global Variable 
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
static osc_xo_isr_ctl_t g_osc_xo_isr_ctl;
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * Isr
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
__irq void Osc_Xo_Handler(void) __attribute__((section("ISR")));
#endif	// !CFG_BUILD_ROM */ 
__irq void Osc_Xo_Handler(void)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	osc_xo_isr_ctl_t *pd = (osc_xo_isr_ctl_t *)pif->glb->osc;

	uint32_t status = osc_xo_int_status();
	osc_xo_int_clear(status);

	uint32_t mask = osc_xo_int_mask_status();
	status &= ~mask;
	for (uint32_t i = 0; i < OSC_XO_IRQ_MAX; i++) {
		if ((status >> i) & 1) {
			if (pd->isr[i].callback) {
				pd->isr[i].callback(pd->isr[i].arg);
			}
		}
	}
}

/*
 * APIs
 ****************************************************************************************
 */
void hal_osc_xo_isr_register(int irq_id, int prio, void *arg, void (*callback)(void *))
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	osc_xo_isr_ctl_t *pd = (osc_xo_isr_ctl_t *)pif->glb->osc;

	if (irq_id >= OSC_XO_IRQ_MAX)
		return;

	uint32_t pri_mask = disable_irq();
	pd->isr[irq_id].arg = arg;
	pd->isr[irq_id].callback = callback;

	// unmask it
	osc_xo_int_unmask((1 << irq_id));

	if (pd->irq_map == 0) {
		clk_osc_xo_intr_clk_en();
		NVIC_ClearPendingIRQ(Osc_Xo_IRQn);		
		NVIC_SetPriority(Osc_Xo_IRQn, prio);	
		NVIC_EnableIRQ(Osc_Xo_IRQn);
		pd->prio = prio;
	} else {
		if (prio < pd->prio) {
			NVIC_SetPriority(Osc_Xo_IRQn, prio);	
			pd->prio = prio;
		}
	}
	pd->irq_map |= (1 << irq_id);
	__set_PRIMASK(pri_mask);

	return;
}

void hal_osc_xo_isr_deregister(int irq_id)
{
	rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
	osc_xo_isr_ctl_t *pd = (osc_xo_isr_ctl_t *)pif->glb->osc;

	if (irq_id >= OSC_XO_IRQ_MAX)
		return;

	uint32_t pri_mask = disable_irq();

	if (pd->irq_map & (1 << irq_id)) {
		// mask it 
		osc_xo_int_mask((1 << irq_id));

		pd->isr[irq_id].arg = NULL;
		pd->isr[irq_id].callback = NULL;
		pd->irq_map &= ~(1 << irq_id);
		if (pd->irq_map == 0) {
			NVIC_DisableIRQ(Osc_Xo_IRQn);
			clk_osc_xo_intr_clk_dis();
		}
	}
	__set_PRIMASK(pri_mask);

	return;
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

/*
 * Isr
 ****************************************************************************************
 */

/*
 * Initialization APIs
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
extern rom_if_t g_rom_if;

void hal_global_pre_init(void)
{
	//
	// Note: This function is called before the C library scatter load, so don't
	//			initialize any global veriable here.  It will get overwritten later by the 
	//			scatter load.  
	//
 
#if CFG_PM_EN
#if CFG_FPGA
	WR_WORD(AON_PS_REGS_ON_DELAY_0_CTRL, 0x24);
	WR_WORD(AON_PS_REGS_ON_DELAY_1_CTRL, 0x14020018);	
	WR_WORD(AON_PS_REGS_XO_EN_DELAY_CTRL, 0x707);
	WR_WORD(AON_PS_REGS_AUTO_AMP_CTRL_EN_DELAY_CTRL, 0x707);
	WR_WORD(AON_PS_REGS_AUTO_AMP_CTRL_RB_DELAY_CTRL, 0x707);
	WR_WORD(AON_PS_REGS_QSPI_VDDIO_EN_DELAY_CTRL,0);
	xo_stage_delay(0x14,0x4); // -3 to compensate the xo_en before switch to stage 1
#else
	WR_WORD(AON_PS_REGS_QSPI_VDDIO_EN_DELAY_CTRL,0x0205);
#endif
#endif

	// disable AON WDT 
#if CFG_BOOT_DISABLE_WDT
	hal_aon_wdt_stop();
#endif



	/// **** OS ****
#if !CFG_NO_OS
#if (!OS_SYSTICK) 
	/// **** OS ****
	/// inplay systick
	clk_systick_mux(CFG_SYSTICK_CLK_MUX);
	clk_systick_en();
#endif
#endif	// !CFG_NO_OS

	//
	// Some rom functions need to use the ram, so we put all the 
	// ram address that will be used by rom into one data structure and store this
	// data structure pointer in the AON_CPU_SPARE0 register. 
	//   
	//
	WR_WORD(AON_REG_SPARE_CTRL_REG0, (uint32_t)&g_rom_if); 
}

void hal_global_post_init(void)
{
#if !CFG_FPGA
#if !CFG_SIM
	/// TODO
	hw_ana_init(VBAT_3_3V, CFG_ROOT_CLK_XO_64M, DRF_DELTA_FOR_DCDC);// only for 3.3V
#endif
#endif

	// share memory 
	hal_smem_init();

	/// **** RTC ****
	/// Note: There is a 1 second wait before RTC settle down.
#if !CFG_SIM
	hal_clk_32k(CFG_RTC_EN);
#endif

	/// Disable BLE external wakeup (Software will wake it up)
	aon_ble_ext_wup(0);

	/// Assign data ram access priority
	data_ram_access_prio(DATA_RAM_ACCESS_PRIO_3, DATA_RAM_ACCESS_PRIO_2, DATA_RAM_ACCESS_PRIO_1);

#if CFG_DBG_EN
#if CFG_DBG_IF_UART	
	uart_init_t init = {0};
	init.baud_rate = CFG_DBG_IF_UART_BAUD;
	init.data_len = 8;
	init.stop_bit = UART_STOP_1BIT;
	init.no_intr = !CFG_DBG_IF_UART_IRQ;
	init.prio = IRQ_PRI_Normal;
	uart_hdl = hal_uart_open(CFG_DBG_IF_UART_PORT, &init);
#endif	// CFG_DBG_IF_UART
#endif	// CFG_DBG_EN

#if CFG_PM_EN
	uint32_t dm_retn = 0, em_retn = 0;
	if (CFG_PM_RETN_4K_A)
		dm_retn |= PM_RETN_DM_4K_A;
	if (CFG_PM_RETN_4K_B)
		dm_retn |= PM_RETN_DM_4K_B;
	if (CFG_PM_RETN_8K)
		dm_retn |= PM_RETN_DM_8K;
	if (CFG_PM_RETN_16K)
		dm_retn |= PM_RETN_DM_16K;
	if (CFG_PM_RETN_32K_A)
		dm_retn |= PM_RETN_DM_32K_A;
	if (CFG_PM_RETN_32K_B)
		dm_retn |= PM_RETN_DM_32K_B;
	if (CFG_PM_RETN_32K_C)
		dm_retn |= PM_RETN_DM_32K_C;

	if (CFG_PM_SMEM_RETN_4K_A)
		em_retn |= PM_RETN_EM_4K_A;
	if (CFG_PM_SMEM_RETN_4K_B)
		em_retn |= PM_RETN_EM_4K_B;
	if (CFG_PM_SMEM_RETN_8K_A)
		em_retn |= PM_RETN_EM_8K_A;
	if (CFG_PM_SMEM_RETN_8K_B)
		em_retn |= PM_RETN_EM_8K_B;
	if (CFG_PM_SMEM_RETN_16K)
		em_retn |= PM_RETN_EM_16K;

	int res;
	res = hal_pm_init(CFG_PM_WUP_SLP_TMR, CFG_PM_WUP_BLE, CFG_PM_WUP_BROWN_OUT, CFG_PM_WUP_MIX_SIGNAL, CFG_PM_TRIG_MEM_RETN, dm_retn, em_retn);
	if (res != PM_ERR_NO_ERROR) {
		PRINTD(DBG_ERR, "[Init]: Failed PM initialization...%d\r\n", res);
		while(1);	// Halt it here...
	}
#endif

	// Start global timer
	if (!CFG_RTC_EN) {
		RTC_timer_start();
	}

#if !CFG_FPGA
#if !CFG_SIM
	// Random number seed
    srand(hal_trng_gen());
#endif
#endif

	g_swi.prio = IRQ_PRI_Normal;
	// Initialize GPIO values
	hal_gpio_init();
}


void hal_global_close_sys_uart(void)
{
#if CFG_DBG_EN
#if CFG_DBG_IF_UART
    if (uart_hdl) {
        hal_uart_close(uart_hdl);
        uart_hdl = NULL;
    }
#endif
#endif
}
#endif	// !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
void hal_global_pd1_reset(void)
{
	/// clear warm boot flag
	aon_set_pc(0);		
	/// reset PD1
	///		This will clear peripheral, but not always on domain registers 
	aon_reset_pd1();

}

void hal_global_pd0_reset(void)
{
	/// This will clear whole chip...
	aon_reset_pd0();
	// never return...
}

void hal_global_sys_reset(void) 
{
	// Disable all interrupt
	__set_PRIMASK(1);
	__set_FAULTMASK(0);

	// Switch RTC back to RC
	clk_32k_rc();
	for (int i = 0; i < (60*100); i++) {
		__nop();
	}
	hal_global_pd0_reset();
}
#endif	// CFG_BUILD_ROM || !CFG_HAL_ROM  

#if !CFG_FPGA
/// TODO	
#if 1
/*
 * BOD Global
 ****************************************************************************************
 */

typedef struct {
	void *arg;
	void (*callback)(void *arg);

#if CFG_PM_EN
	struct pm_module pmd;
#endif	

} bod_isr_t;

static bod_isr_t g_bod = {0};
static bod_isr_t g_bod2 = {0};
static uint16_t s_bod_thrd_mv[5] = {1600, 1650, 1700, 1750, 1800};

extern int get_bod_offset_from_efuse_uint_mv(uint8_t bod_sel);

extern void prog_bod_threshold(uint8_t bod_sel, uint8_t bod_code);

extern void prog_bod_en(uint8_t bod_sel, uint8_t en);
/*
 * BOD ISR
 ****************************************************************************************
 */
__irq void BOD_Handler(void)
{
	prog_bod_en(0, 0);
	if (g_bod.callback) {
		g_bod.callback(g_bod.arg);
	}
	prog_bod_en(0, 1);
}

__irq void BOD2_Handler(void)
{
	prog_bod_en(1, 0);
	if (g_bod2.callback) {
		g_bod2.callback(g_bod2.arg);
	}
	prog_bod_en(1, 1);
}
/*
 * BOD PM
 ****************************************************************************************
 */
#if CFG_PM_EN
static int bod_pm_state(void *arg, uint32_t *sleep_duration) __attribute__((section("RAM_PM")));
static int bod_pm_state(void *arg, uint32_t *sleep_duration)
{
	*sleep_duration = PM_MAX_SLEEP_TIME;
	return PM_DEEP_SLEEP;
}

static void bod_pm_down(void *arg, uint32_t sleep_duration) __attribute__((section("RAM_PM")));
static void bod_pm_down(void *arg, uint32_t sleep_duration)
{
	return;
}

static void bod_pm_up(void *arg) __attribute__((section("RAM_PM")));
static void bod_pm_up(void *arg)
{
	// enable interrupt
	NVIC_SetPriority(BOD_IRQn, IRQ_PRI_High);	
	NVIC_EnableIRQ(BOD_IRQn);
}
#endif	// CFG_PM_EN

/*
 * BOD APIs
 ****************************************************************************************
 */
static uint8_t to_find_bod_code_with_desired_level(int desired_offset_from_1p7_unit_mv,uint8_t bod2_sel)
{
	int k, actual_offset_level[4], efuse_offset, min_abs_diff, diff;
	uint8_t min_code;

	efuse_offset = get_bod_offset_from_efuse_uint_mv(bod2_sel); // bod cal efuse has 
	// first bod: 1.6, 165, 1.7 and 1.75: so offset from 1p7 is -100, -50, 0 and 50 (unit mv)
	// first bod: 1.65, 17, 1.75 and 1.8: so offset from 1p7 is -50, 0, 50 and 100 (unit mv)
	if (bod2_sel) {
		for (k=0;k<4;k++)
			actual_offset_level[k]=efuse_offset + 50*(k -1); 
	} else {
		for (k=0;k<4;k++)
			actual_offset_level[k]=efuse_offset + 50*(k -2); 
	}
	
	// find the closest offset and its corresponding code
	min_abs_diff=100000;
	min_code=0;
	for (k=0;k<4;k++) {
		diff =actual_offset_level[k]-desired_offset_from_1p7_unit_mv;
		diff =(diff>=0)?diff:-diff;
		if (diff<=min_abs_diff)
		{
			min_abs_diff=diff;
			min_code=k;
		}
	}
		
	return min_code;
}

static uint8_t to_find_bod_code_from_efuse_readout(int bod_thrd_mv, uint8_t bod2_sel)
{
	
	int desired_offset_from_1p7_unit_mv;
	desired_offset_from_1p7_unit_mv = bod_thrd_mv - 1700;
	
	return to_find_bod_code_with_desired_level(desired_offset_from_1p7_unit_mv, bod2_sel);
}

int hal_bod_enable(int bod_id, int bod_thrd_mv, void *arg, void (*callback)(void *arg))
{
	int bod_res = 0;

	bod_res = hal_bod_set_thrd(bod_id, bod_thrd_mv);
	if (!bod_res) return 0;

	if (BOD_ID0 == bod_id) {
		g_bod.arg = arg;
		g_bod.callback = callback;
		// 0: 1.60V
		// 1: 1.65V
		// 2: 1.70V
		// 3: 1.75V
		NVIC_ClearPendingIRQ(BOD_IRQn);
		NVIC_SetPriority(BOD_IRQn, IRQ_PRI_High);	
		NVIC_EnableIRQ(BOD_IRQn);
	} else {
		g_bod2.arg = arg;
		g_bod2.callback = callback;
		// 0: 1.65V
		// 1: 1.70V
		// 2: 1.75V
		// 3: 1.80V
		NVIC_ClearPendingIRQ(BOD2_IRQn);
		NVIC_SetPriority(BOD2_IRQn, IRQ_PRI_High);	
		NVIC_EnableIRQ(BOD2_IRQn);
	}
	return bod_res;
}

void hal_bod_disable(int bod_id)
{
	if (bod_id < BOD_ID_MAX) {
		prog_bod_en(bod_id, 0);
	}
}

int hal_bod_set_thrd(int bod_id, int bod_thrd_mv)
{
	uint8_t code;

	if (bod_id >= BOD_ID_MAX) {
		return 0 ;
	}
	
	if ((bod_thrd_mv > 1850) || (bod_thrd_mv < 1575)) return 0;

	if (BOD_ID0 == bod_id) {
		if (bod_thrd_mv > 1775) {
			return 0;
		}
		code = to_find_bod_code_from_efuse_readout(bod_thrd_mv, 0);
		prog_bod_threshold(0, code);
		prog_bod_en(0, 1);
	} else {
		if (bod_thrd_mv < 1625) {
			return 0;
		}
		code = to_find_bod_code_from_efuse_readout(bod_thrd_mv, 1);
		prog_bod_threshold(1, code);
		prog_bod_en(1, 1);
		code += 1;
	}
	return s_bod_thrd_mv[code];
}

int hal_bod_reset_chip(int idx, int en, int bod2, int fall, int deb)
{
	if (en) {
		int sidx;

		if (bod2)
			sidx = 40;
		else
			sidx = 39;

		gpio_aon_edge_reset_pd1(idx, sidx, fall, deb);
		gpio_aon_edge_reset_pd1_enable(idx);
		gpio_aon_edge_reset_pd1_clk(1);		
	} else {
		gpio_aon_edge_reset_pd1_disable(idx);
	}
	return 0;
}

int hal_bod_reset_arm(int en, int bod2, int fall, int deb, int sys_rst)
{
	if (en) {
		int sidx;

		if (bod2)
			sidx = 40;
		else
			sidx = 29;

		gpio_aon_edge_reset_cm4(sidx, fall, deb, sys_rst);
		gpio_aon_edge_reset_cm4_enable();
	} else {
		gpio_aon_edge_reset_cm4_disable();
	}
	return 0;
}


#endif
#endif	// !CFG_FPGA

/*
 * PM system wide HW saving and restoring
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
#if CFG_PM_EN
#if !CFG_NO_OS
#if (OS_SYSTICK == 0)
static uint32_t systick_clk_ratio;
static uint32_t systick_clk_ctl;
#else
static uint32_t systick_val;
static uint32_t syspri2_val;
static uint32_t syspri3_val;
#endif

#if CFG_OS_ROM
static uint32_t os_ram_ptr;
#endif
#endif	// !CFG_NO_OS

#if !CFG_FPGA
extern void boot_clk_save(void);
#endif

void hal_global_suspend(void) __attribute__((section("RAM_PM")));
void hal_global_suspend(void)
{
#if !CFG_FPGA
	boot_clk_save();
#endif

#if !CFG_NO_OS
	/// save the Systick Reload Value 
#if (OS_SYSTICK == 0)
	/// systick sleep 
	tmr_systick_sleep();
	systick_clk_ratio = tmr_systick_clk_ratio_get();; 
	systick_clk_ctl = clk_systick_get();
#else
	systick_val =  SysTick->LOAD;
	syspri2_val = RD_WORD(0xE000ED1C);
	syspri3_val = RD_WORD(0xE000ED20);
#endif
#endif	// !CFG_NO_OS

#if !CFG_FPGA
	/// RF suspend
	hw_ana_suspend();
#endif

	/// SMEM save
	hal_smem_pm_suspend();

}

void hal_global_resume(void) __attribute__((section("RAM_PM")));
void hal_global_resume(void)
{
#if CFG_FPGA
	// Set floating point
	SCB->CPACR |= ((3UL << 10*2) |     /* set CP10 Full Access */
	               (3UL << 11*2)  );               /* set CP11 Full Access */
#endif

	/// SMEM restore
	hal_smem_pm_resume();
	///hal_smem_init();

#if !CFG_NO_OS
#if (OS_SYSTICK == 0)
    clk_tmr_pclk_en();
	clk_systick_set(systick_clk_ctl);
	tmr_systick_enable(((uint32_t)(((double)OS_CLOCK*(double)OS_TICK)/1E6)-1));
	tmr_systick_clk_ratio_set(systick_clk_ratio);
	/// systick recover 
	tmr_systick_wup();
#else
	SysTick->LOAD = systick_val;
	WR_WORD(0xE000ED1C, syspri2_val);
	WR_WORD(0xE000ED20, syspri3_val);
#endif
#endif	// !CFG_NO_OS

#if !CFG_FPGA
	/// RF resume
	hw_ana_resume();
#endif

#if CFG_WDT_EN
    hal_aon_wdt_resume();
#endif

	/// Global interrupt resume 
	if (g_isr_ctl.irq_map != 0) {
		/// unmask it
		glb_int_unmask(g_isr_ctl.irq_map);
		NVIC_SetPriority(Global_IRQn, g_isr_ctl.prio);	
		NVIC_EnableIRQ(Global_IRQn);
	}

	// SWI resume
	if (g_swi.used_map != 0) {
		// unmask it
		swi_unmask(g_swi.used_map);
		NVIC_SetPriority(SWI_IRQn, g_swi.prio);	
		NVIC_EnableIRQ(SWI_IRQn);
	}

	// Osc_Xo interrupt resume 
	if (g_osc_xo_isr_ctl.irq_map != 0) {
		// unmask it
		osc_xo_int_unmask(g_osc_xo_isr_ctl.irq_map);
		NVIC_SetPriority(Osc_Xo_IRQn, g_osc_xo_isr_ctl.prio );	
		NVIC_EnableIRQ(Osc_Xo_IRQn);
	}

	// Nmi interrupt resume
	if (g_nmi.irq_map != 0) {
		nmi_int_unmask(g_nmi.irq_map);
	}

}
#endif	// CFG_PM_EN
#endif	// !CFG_BUILD_ROM */ 

#if !(CFG_BUILD_ROM)
/*
 * RTC Timer global
 ****************************************************************************************
 */
typedef struct {
	int ready;
	uint32_t count;
} RTC_timer_t;

static RTC_timer_t g_rtc = {0};

/*
 * RTC Timer APIs
 ****************************************************************************************
 */
int RTC_timer_start(void)
{
	RTC_timer_t *pd = (RTC_timer_t *)&g_rtc;

	if (pd->ready)
		return 1;

	/// Note: This is a 64 bits count down timer.   
	int res = hal_aon_timer_open(AON_TMR3_ID, 0, 0, 0, NULL, NULL);
	if (res != TMR_ERR_OK)
		return 0;
	res = hal_aon_timer_start(AON_TMR3_ID, SLP_TMR_MAX_64);
	if (res != TMR_ERR_OK)
		return 0;

	pd->ready = 1;

	return 1;
}

void RTC_timer_stop(void)
{
	RTC_timer_t *pd = (RTC_timer_t *)&g_rtc;

	if (!pd->ready)
		return;

	hal_aon_timer_stop(AON_TMR3_ID);
	hal_aon_timer_close(AON_TMR3_ID);
	pd->ready = 0;
}

uint64_t RTC_timer_get_tick(void)
{
	RTC_timer_t *pd = (RTC_timer_t *)&g_rtc;
	uint64_t tick;

	if (!pd->ready)
		return 0;

	tick = hal_aon_timer_get_tick(AON_TMR3_ID);

	return tick;
}

uint64_t RTC_timer_get_time(void)
{
	RTC_timer_t *pd = (RTC_timer_t *)&g_rtc;
	uint64_t time_us;

	if (!pd->ready)
		return 0;

	time_us = hal_aon_timer_get_time(AON_TMR3_ID);

	return time_us;
}

uint64_t RTC_timer_diff(uint64_t s_tick, uint64_t e_tick)
{
	RTC_timer_t *pd = (RTC_timer_t *)&g_rtc;
	float tick_in_us = (1000000.f)/hal_clk_32k_get();

	if (!pd->ready)
		return 0;

	return (uint64_t)((e_tick - s_tick)*tick_in_us);
}

uint32_t RAM_PM RTC_timer_get_tick_low(void) 
{
	RTC_timer_t *pd = (RTC_timer_t *)&g_rtc;
	uint32_t tick = 0;

	if (!pd->ready)
		return tick;

	tick = (uint32_t)hal_aon_timer_get_tick(AON_TMR3_ID);

	return tick;
}

uint32_t RAM_PM RTC_timer_diff_low(uint32_t s_tick, uint32_t e_tick)
{
	RTC_timer_t *pd = (RTC_timer_t *)&g_rtc;
	float tick_in_us = (1000000.f)/hal_clk_32k_get();
	uint32_t diff = 0;

	if (!pd->ready)
		return 0;

	if (e_tick >= s_tick) {
		diff = (uint32_t)((e_tick - s_tick)*tick_in_us);
	} else {
		diff = (uint32_t)((e_tick + (0xFFFFFFFF - s_tick))*tick_in_us);
	}

	return diff;
}
#pragma push
#pragma O0 
void RAM_PM delay_us(uint32_t us)
{
	if (clk_root_get() == 64000000)
		us *= 2;

	uint32_t mux = clk_d2_mux_get();
	if (mux & 2) 
		us >>= 2;		
	else if (mux & 1)
		us >>= 1;

	us >>= 1;	//Need div 2 here

	if (us == 0)
		us = 1;

	for (uint32_t k = 0; k < (us * 6); k++)
		__nop() ;
}
#pragma pop

#endif	// !CFG_BUILD_ROM */ 

#if !(CFG_BUILD_ROM)
/***************************************************************************************
 *
 * ROM Interface
 *
 ***************************************************************************************/
extern ana_rom_if_t g_ana_if;
extern clk_rom_if_t g_clk_if;
extern gio_rom_if_t g_gio_if;
extern os_rom_if_t g_os_if;
extern tmr_rom_if_t g_tmr_if;
extern adc_rom_if_t g_adc_if;
cfg_rom_if_t g_cfg_if = {
	.cfg_pm_en = CFG_PM_EN,
	.cfg_rtc_en = CFG_RTC_EN,
	.os_systick = OS_SYSTICK,
	.cfg_lpc_ppm_offset = CFG_LPC_PPM_OFFSET,
};

glb_rom_if_t g_glb_if = {
	(void *)&g_ble_isr,
	(void *)&g_isr_ctl,
	(void *)&g_swi,
	(void *)&g_nmi,
	(void *)&g_osc_xo_isr_ctl,
};

rom_if_t g_rom_if = {
	&g_cfg_if,
#if CFG_NO_OS
	NULL,
#else
	&g_os_if,
#endif
#if CFG_FPGA
	NULL,
#else
	&g_ana_if,
#endif
	&g_clk_if,
	&g_gio_if,
	&g_tmr_if,
	&g_glb_if,
#if CFG_SADC_EN
	&g_adc_if,
#else
	NULL,
#endif
};
#endif	// !CFG_BUILD_ROM */ 

