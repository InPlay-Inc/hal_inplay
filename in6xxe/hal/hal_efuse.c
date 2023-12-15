#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file hal_efuse.c
 *
 * @brief Platform Efuse functions  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

/*
 ****************************************************************************************
 * INCLUDES
 ****************************************************************************************
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "in_arm.h"
#include "in_mmap.h"
#include "in_irq.h"
#include "in_debug.h"

#include "./hal/hal_clk.h"
#include "./hal/hal_efuse.h"

#if !CFG_NO_OS
#include "cmsis_os.h"
#endif	// !CFG_NO_OS

#if CFG_EFUSE_EN
/*
 ****************************************************************************************
 * IMPLEMENTATION
 ****************************************************************************************
 */

typedef struct {
	char used;
	char pad[3];
	
#if !CFG_NO_OS
	osMutexId mutex;
#endif	// !CFG_NO_OS

} efuse_dev_t;

static efuse_dev_t efuse_dev;

#if !CFG_NO_OS
osMutexDef(efuse_mutex);
#endif	// !CFG_NO_OS

int hal_efuse_open(void) 
{
	efuse_dev_t* pd = &efuse_dev;

 	if(pd->used)
 		return EFUSE_ERR_EFUSE_BUSY;

#if !CFG_NO_OS
	pd->mutex = osMutexCreate(osMutex(efuse_mutex));
	if (!pd->mutex) {
		return EFUSE_ERR_OS;
	}
#endif	// !CFG_NO_OS

	hal_clk_efuse_en(1);

	pd->used = 1;

	return EFUSE_ERR_OK;
}

int hal_efuse_close(void) 
{
	efuse_dev_t* pd = &efuse_dev;

 	if(!pd->used)
 		return EFUSE_ERR_NO_OPEN;

	pd->used = 0;

#if !CFG_NO_OS
	osMutexWait(pd->mutex, osWaitForever);
	osMutexRelease(pd->mutex);

	if (pd->mutex) {
		osMutexDelete(pd->mutex);
		pd->mutex = NULL;
	}	
#endif	// !CFG_NO_OS

	/// don't turn off clock, otherwise HW can't read efuse
	//hal_clk_efuse_en(0);
	
	return EFUSE_ERR_OK;
}

int hal_efuse_read_word(int word_num, uint32_t* out)
{
	efuse_dev_t* pd = &efuse_dev;

 	if(!pd->used)
 		return EFUSE_ERR_NO_OPEN;

	uint32_t addr = word_num * 2;

#if !CFG_NO_OS
	osMutexWait(pd->mutex, osWaitForever);
#endif	// !CFG_NO_OS

	efuse_enable();
	efuse_read_bit_start(addr, EFUSE_READ_WORD);
	while (!efuse_intr_read_done());			
	uint32_t data = efuse_read_value();
	efuse_intr_read_done_clr();							
	efuse_read_bit_end();
	efuse_disable();

#if !CFG_NO_OS
	osMutexRelease(pd->mutex);
#endif	// !CFG_NO_OS

	*out = data;

	return EFUSE_ERR_OK;
}

int hal_efuse_write_word(int word_num, uint32_t data)
{
	efuse_dev_t* pd = &efuse_dev;

 	if(!pd->used)
 		return EFUSE_ERR_NO_OPEN;

	uint32_t word;
	int result = hal_efuse_read_word(word_num, &word);
	if(result != EFUSE_ERR_OK)
		return result;

	int addr = word_num * 32;

#if !CFG_NO_OS
	osMutexWait(pd->mutex, osWaitForever);
#endif	// !CFG_NO_OS

	efuse_prog_enable();
	for (int i = 0; i < 32; i++) {
		if (!(((word)>>i) & 1)) {		// already been written
			if (((data>>i) & 1)) {
				efuse_prog_bit_start(addr);
				while (!efuse_intr_prog_done());			
				efuse_intr_prog_done_clr();							
				efuse_prog_bit_end();			
			}
		}
		addr += 1;	 
	}
	efuse_prog_disable();

#if !CFG_NO_OS
	osMutexRelease(pd->mutex);
#endif	// !CFG_NO_OS

	return EFUSE_ERR_OK;
}

#endif	// CFG_EFUSE_EN

void hal_efuse_get_uuid(uint32_t* out) {

	out[1] = efuse_init_rd_val_w1();
	out[2] = efuse_init_rd_val_w2();
	out[3] = efuse_init_rd_val_w3();
}

