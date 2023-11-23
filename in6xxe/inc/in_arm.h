/**
 ****************************************************************************************
 *
 * @file in_arm.h
 *
 * @brief Inplay CPU configuration
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */

#ifndef IN_ARM_H
#define IN_ARM_H

/* --------  Configuration of the Cortex-M4 Processor and Core Peripherals  ------- */
#define __CM4_REV                 		0x0001U   	/* Core revision r0p1 */
#define __MPU_PRESENT             	1         		/* MPU present */
#define __VTOR_PRESENT            	1         		/* VTOR present */
#define __NVIC_PRIO_BITS          	3         		/* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    	0         		/* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             	1         		/* FPU present */


#include "in_irq.h"
#include "core_cm4.h"                       				/* Processor and core peripherals */
#include "mpu_armv7.h"                       				

#endif
