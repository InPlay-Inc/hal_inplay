#include "in_config.h"

#if CFG_EXT_SPI_FLASH
/**
 ****************************************************************************************
 *
 * @file boot_cfg.c
 *
 * @brief  Boot + System configuration file
 *
 *		  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "in_mmap.h"

#include "boot_config.h"
#include "boot_share.h"

/*
 *	BOOT configurations
 *
 ****************************************************************************************
 */

const boot_config_t boot_cfg __attribute__((section("INIT")));
const boot_config_t boot_cfg = {
#if CFG_BOOT_CRC_CHECK
	.magic_word = BOOT_CRC_MAGIC_WORD,
#else
	.magic_word = BOOT_MAGIC_WORD,
#endif

	.boot_opt = CFG_BRAM_BOOT_OPT,
	.boot_gio_grp = CFG_BRAM_BOOT_GPIO_PORT,
	.boot_gio_pin = CFG_BRAM_BOOT_GPIO_PIN,
	.boot_gio_level = CFG_BRAM_BOOT_GPIO_LEVEL,
	.boot_wait_time = CFG_BRAM_BOOT_WAIT_TIME,

	.sspi_intr_enable = CFG_BRAM_SSPI_INT_EN,
	.sspi_intr_gio_grp = CFG_BRAM_SSPI_INT_PORT,
	.sspi_intr_gio_pin = CFG_BRAM_SSPI_INT_PIN,
	.sspi_intr_gio_level = CFG_BRAM_SSPI_INT_LEVEL,

	.hpb_flash_addr = CFG_BRAM_RAM_APP_FLASH_ADDR,
	.hpb_ram_addr = CFG_BRAM_RAM_APP_RAM_ADDR,
	.hpb_size = CFG_BRAM_RAM_APP_SIZE,

	.secure_img_addr = CFG_BRAM_SECURE_BOOT_HASH_ADDR,
	.secure_img_size = CFG_BRAM_SECURE_BOOT_HASH_SIZE,
	.secure_signature = {CFG_BRAM_SECURE_BOOT_ECDSA_SIG},

	.jlink_disable_word = 0/*BOOT_JLINK_DISABLE_WORD*/,
};

/*
 *	System configurations
 *
 ****************************************************************************************
 */

// TODO

#endif	//CFG_EXT_SPI_FLASH

