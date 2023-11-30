/**
 ****************************************************************************************
 *
 * @file boot_share.h
 *
 * @brief Inplay common share header with bootloader
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */
#ifndef BOOT_SHARE_H
#define BOOT_SHARE_H

#include <stdint.h>

/*
 * Secondary bootloader (boot ram) entry function type define:
 *		@Parameter[in]: command code, see @enum entry_reason 
 *		@Parameter{in,out]: data structure for the commands
 *		
 ****************************************************************************************
 */

typedef void (*boot_ram_entry_t)(int, void *);

/*
 * Enum
 ****************************************************************************************
 */

enum entry_reason {
	SPI_FLASH_CB = 1,
	COLD_BOOT,
	WARM_BOOT,
};

#endif
