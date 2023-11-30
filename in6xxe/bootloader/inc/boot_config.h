/**
 ****************************************************************************************
 *
 * @file boot_config.h
 *
 * @brief Inplay bootloader configuration
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */
#ifndef BOOT_CONFIG_H
#define BOOT_CONFIG_H

#include <stdint.h>

#define BOOT_MAGIC_WORD 0xA72E0129
#define BOOT_CRC_MAGIC_WORD 0x531b7635
#define BOOT_JLINK_DISABLE_WORD 0x3F7F923D

enum boot_options{
	BOOT_NO_OPTION = 0,
	BOOT_WAIT,
	BOOT_GPIO,
};

typedef struct {
	int (*sflash_open)(void);
	int (*sflash_erase)(uint32_t addr, uint32_t size);
	int (*sflash_prog)(uint32_t addr, uint8_t *data, uint32_t data_len);
	int (*sflash_read)(uint32_t addr, uint8_t *data, uint32_t data_len);
	int (*sflash_close)(void);
} spi_flash_cb_t;

typedef struct {
	uint32_t   magic_word;

	uint32_t 	bootram_size;
	uint32_t 	bootram_flash_oft;

	uint32_t	boot_opt;
	uint32_t	boot_gio_grp;
	uint32_t	boot_gio_pin;
	uint32_t	boot_gio_level;
	uint32_t	boot_wait_time;

	uint16_t	sspi_intr_enable;
	uint16_t	sspi_intr_gio_grp;

	uint32_t	sspi_intr_gio_pin;
	uint32_t	sspi_intr_gio_level;

	uint32_t 	hpb_flash_addr;
	uint32_t 	hpb_ram_addr;
	uint32_t 	hpb_size;
	
	uint32_t 	secure_img_addr;
	uint32_t 	secure_img_size;
	uint8_t 	secure_signature[64];

	uint32_t 	jlink_disable_word;
	uint32_t 	crc32;
} boot_config_t;

#endif	// BOOT_CONFIG_H
