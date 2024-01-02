/**
 ****************************************************************************************
 *
 * @file in_compile.h
 *
 * @brief Compiler defines 
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */

#ifndef IN_COMPILE_H
#define IN_COMPILE_H
#if 0
#define INLINE					__inline
#define FORCEINLINE 	__forceinline
#define _IRQ 					__irq
#define RAM_PM __attribute__((section("RAM_PM")))
#define ISR_RO __attribute__((section("ISR")))
#define BLE_RW __attribute__((section("BLE_RW")))
#define BLE_RO __attribute__((section("BLE_RO")))

#define MST_RO __attribute__((section("MST_RO")))
#define SLV_RO __attribute__((section("SLV_RO")))
#else
#define INLINE				
#define FORCEINLINE 	
#define _IRQ 				
#define RAM_PM __attribute__((section("RAM_PM")))
#define ISR_RO __attribute__((section("ISR")))
#define BLE_RW __attribute__((section("BLE_RW")))
#define BLE_RO __attribute__((section("BLE_RO")))
#define BLE_RODATA __attribute__((section("BLE_RODATA")))
#define MST_RO 
#define SLV_RO 

#if defined (__GNUC__)
#define __irq
#define __wfi() __asm volatile("wfi")
#define __nop() __asm volatile("nop")
#define __rev __REV
//#define __weak   __attribute__((weak))
#define __forceinline __attribute__((always_inline))
#endif

#endif

#endif

