/**
 ****************************************************************************************
 *
 * @file in_irq.h
 *
 * @brief Inplay chipset IRQ number
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */
#ifndef IN_IRQ_H
#define IN_IRQ_H

/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */
typedef enum IRQn
{
	/* -------------------  Cortex-M4 Processor Exceptions Numbers  ------------------- */
	NonMaskableInt_IRQn           	= -14,      /*  2 Non Maskable Interrupt */
	HardFault_IRQn                		= -13,      /*  3 HardFault Interrupt */
	MemoryManagement_IRQn      = -12,      /*  4 Memory Management Interrupt */
	BusFault_IRQn                 		= -11,      /*  5 Bus Fault Interrupt */
	UsageFault_IRQn               		= -10,      /*  6 Usage Fault Interrupt */
	SVCall_IRQn                   		=  -5,      /* 11 SV Call Interrupt */
	DebugMonitor_IRQn            	=  -4,      /* 12 Debug Monitor Interrupt */
	PendSV_IRQn                   		=  -2,      /* 14 Pend SV Interrupt */
	SysTick_IRQn                  		=  -1,      /* 15 System Tick Interrupt */

	/* ----------------------  IN602 Specific Interrupt Numbers  --------------------- */
	Dma0_IRQn 								= 0,
	Dma1_IRQn 								= 1,
	Keyboard_IRQn							= 2,
	Hash_IRQn								= 3,
	Aes_IRQn								= 4,
	AHBTrig_IRQn							= 7,
	Tmr0_Add_IRQn							= 8,
	Tmr1_Add_IRQn							= 9,
	Tmr2_Add_IRQn							= 10,
	Tmr3_Add_IRQn							= 11,
	Tmr_Smem_IRQn				 			= 12,
	SSpi1_IRQn								= 13,
	Uart0_IRQn								= 14,
	Uart1_IRQn								= 15,
	MSpi0_IRQn								= 16,
	MSpi1_IRQn								= 17,
	Efuse_IRQn								= 18,
	SSpi0_IRQn								= 19,
	I2c0_IRQn								= 20,
	I2c1_IRQn								= 21,
	MI2s_IRQn								= 22,
	SI2s_IRQn								= 23,
	Ecc_IRQn								= 24,
	Tmr0_IROn 								= 26,
	Tmr1_IROn 								= 27,
	Tmr2_IROn 								= 28,
	Tmr3_IROn 								= 29,
	Tmr4_IRQn								= 30,
	Tmr5_IRQn								= 31,
	Tmr0_Misc_IROn						= 32,
	Tmr1_Misc_IROn						= 33,
	Aon_Tmr_Misc_IRQn					= 34,
	Sadc_IRQn								= 35,
	Calib_IRQn								= 36,
	Pwm_IRQn 								= 37,
	Tmr0_Add_Misc_IROn							= 38,
	Osc_Xo_IRQn							= 41,
	Quad_IRQn								= 42,
	Counter_IRQn							= 43,
	WDT_IRQn								= 44,
	Audio_IRQn								= 45,
	IPMAC_IRQn               			=48,
	Ble_IRQn 									= 49,
	ICache_IRQn							= 50,
	Ble_Dbg_IRQn							= 51,
	Antena_IRQn							= 52,
	TmrSystickMisc_IRQn				= 53,
	TmrSystick_IRQn						= 54,
	SWI_IRQn									= 56,
	Aon_tmr0_IRQn						= 57,
	Aon_tmr1_IRQn						= 58,
	Aon_tmr2_IRQn						= 59,
	Aon_tmr3_IRQn						= 60,
	BOD2_IRQn								= 61,
	BOD_IRQn								= 62,
	XO_IRQn									= 63,
	Spiflash_IRQn							= 65,
	Global_IRQn								= 66,
	Gpio0_IRQn								= 67,
	Gpio1_IRQn								= 68,
	Gpio2_IRQn								= 69,
	Gpio3_IRQn								= 70,
	Gpio4_IRQn								= 71,
} IRQn_Type;

/*
 * ==========================================================================
 * ---------- Interrupt Priorityr Definition --------------------------------
 * ==========================================================================
 */
#define IRQ_PRI_RealTime 0
#define IRQ_PRI_Highest 1
#define IRQ_PRI_High 2
#define IRQ_PRI_AboveNormal 3
#define IRQ_PRI_Normal 4
#define IRQ_PRI_BelowNormal 5
#define IRQ_PRI_Low 6
#define IRQ_PRI_Lowest 7

#endif
