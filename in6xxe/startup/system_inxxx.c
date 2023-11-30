/**
 ****************************************************************************************
																																																																																																																																*
 * @file system_inxxx.c
 *
 * @brief ARM system initialization  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @addtogroup HAL
 * @{
 ****************************************************************************************
 */
#include "in_config.h"

#include "stdint.h"
#include "stdio.h"
#include "string.h"

#include "in_arm.h"
#include "./hal/hal_global.h"
#include "./hal/hal_clk.h"
#include "in_rom_if.h"

extern void adi_tuner_start(void);

#if !CFG_SIM
#if !CFG_FPGA
#if CFG_COPY_VTOR_TO_RAM
extern uint32_t __Vectors;
extern uint32_t __Vectors_Size;
static void* in_memcpy(void *dst, void *src, size_t len)
{
	// Don't check alignment here. dst, src and len should be 4 bytes aligned.
	uint32_t * dst32 = (uint32_t *)dst;
	uint32_t * src32 = (uint32_t *)src;
	len = len / 4;
	while(len--) {
		*(dst32++) = *(src32++);
	}
	return dst;
}
#endif
#endif
#endif

/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
void SystemInit (void)
{
#if (__FPU_USED == 1)
	SCB->CPACR |= ((3UL << 10*2) |                 /* set CP10 Full Access */
	               (3UL << 11*2)  );               /* set CP11 Full Access */
#endif

#ifdef UNALIGNED_SUPPORT_DISABLE
	SCB->CCR |= SCB_CCR_UNALIGN_TRP_Msk;
#endif

#if CFG_FPGA
#if !CFG_SIM
	adi_tuner_start();
#endif
#endif

#if CFG_FPGA
	SCB->VTOR = 0;
#else
#if CFG_COPY_VTOR_TO_RAM
	in_memcpy((void *)CFG_VTOR_ADDR, (void *)&__Vectors, (size_t)&__Vectors_Size);
#endif
	SCB->VTOR = CFG_VTOR_ADDR & SCB_VTOR_TBLOFF_Msk ;
#endif

	hal_global_pre_init();

}
/// @} HAL

