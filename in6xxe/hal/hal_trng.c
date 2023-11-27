#include "in_config.h"
/**
 ****************************************************************************************
 *
 * @file hal_TRNG.c
 *
 * @brief True Random Number Generator driver implementation file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "in_arm.h"
#include "in_mmap.h"
#include "in_irq.h"
#include "in_debug.h"
extern void delay_n_us(uint32_t n_us);
static uint8_t trng_gen_byte()
{
#if !CFG_FPGA
	int j;
	uint8_t b;
	uint32_t val,val1,val2;
	b=0;
	for (j=0;j<8;j++)
		{
				delay_n_us(2);
				WR_WORD(0x46A010C0,1);
				WR_WORD(0x46A01050,0);
				delay_n_us(2);
				val=RD_WORD(0x46A010C0);
				val1=RD_WORD(0x46A01054);
				val2=RD_WORD(0x46A01058);
			
				val =(val ^ (val>>9) ^val1^val2);
				b |=(val&1)<<j;
		}
		return b;
#else
		return 0;
#endif
}

static uint8_t trng_get_rand_byte(void) __attribute__((unused));
static uint8_t trng_get_rand_byte(void)
{
		uint8_t b0,b1;
		b0=trng_gen_byte()^0xAA;
		b1=trng_gen_byte();
		return b0^b1;
}
// ptr: mem address for the randnom number
// n: number of bytes 
static void trng_get_random_number(uint8_t *ptr, int n)
{
#if !CFG_FPGA
	//uint32_t val;
	uint32_t k,val_61e4,	val_31ec;
	uint8_t rand_val;
	// force fe clk
	val_61e4=RD_WORD(0x441261E4);
	WR_WORD(0x441261E4,val_61e4 | (1<<23));
	// pll reg control
	val_31ec=RD_WORD(0x46a031ec);
	WR_WORD(0x46a031ec,0);
	// forece RX
	WR_WORD(0x46A04010,0x3ccc033f);
	WR_WORD(0x46A04014,0x30fc0);
	
	delay_n_us(5);
	// forece toggle PLL
	WR_WORD(0x46A04010,0x2ccc033f);
	delay_n_us(50);
	RD_WORD(0x46A03128);
	
	for (k=0;k<n;k++)
	{
		rand_val =trng_gen_byte();
		WR_BYTE(ptr+k,rand_val);
		
	}
	WR_WORD(0x46A04010,0x0);
	WR_WORD(0x46A04014,0x0);
	WR_WORD(0x441261E4,val_61e4);
	WR_WORD(0x46a031ec,val_31ec);
#endif
}

uint32_t hal_trng_gen(void)
{
#if !CFG_FPGA	
	uint32_t ran_num;
	trng_get_random_number((uint8_t *)&ran_num, 4);
	return ran_num;
#else
	return 0;
#endif
}
