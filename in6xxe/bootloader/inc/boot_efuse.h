/**
 ****************************************************************************************
 *
 * @file boot_efuse.h
 *
 * @brief Inplay efuse definition for booting
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */

#ifndef BOOT_EFUSE_H
#define BOOT_EFUSE_H

#include <stdint.h>

/******************************************************************************/
/*                                                                            																	*/
/*    Refer to 602E0 Efuse assignment spread sheet                    													*/
/*                                                                            																	*/
/******************************************************************************/

typedef union {
	struct {
		uint32_t efuse_lock:1;
		uint32_t flash_present:1;
		uint32_t pn_cfg_0:4;
		uint32_t sec_key_sel:4;
		uint32_t sec_key_alg:3;
		uint32_t qspi_0_pin_mux:3;
		uint32_t qspi_2_pin_mux:3;
		uint32_t qspi_3_pin_mux:3;
		uint32_t qspi_4_pin_mux:3;
		uint32_t qspi_5_pin_mux:3;
		uint32_t reserved:1;
		uint32_t qspi_tvs:3;
	} u;
	uint32_t word; 	
} efuse_w0_t;

typedef union {
	struct {
		uint32_t pn_cfg_1:2;
	} u;
	uint32_t word; 	
} efuse_w4_t;

typedef union {
	struct {
		uint32_t efuse_lock:1;
		uint32_t dbg_disable:1;
		uint32_t flash_encrypt:1;
		uint32_t flash_secure_boot:1;
		uint32_t reserved1:2;
		uint32_t xo_det_en:1;
		uint32_t compress_point:2;
		uint32_t ram_secure_boot:1;
		uint32_t host_auth:1;
		uint32_t spi_init_speed:2;
		uint32_t secure_boot_w_uuid:1;
		uint32_t xo_dbn:2;
		uint32_t reserved2:1;
		uint32_t aon_wdt_dis:1;
		uint32_t aon_wdt_win:1;
		uint32_t aon_wdt_rst:2;
		uint32_t bod_en:1;
		uint32_t bod_thrd:3;
		uint32_t bod_sel:1;
		uint32_t bod_reset:1;
		uint32_t flash_exception:2;
		uint32_t reset_option:1;
		uint32_t sw_disable_jlink:1;
		uint32_t serial_disable:1;
	} u;
	uint32_t word; 	
} efuse_w7_t;

#endif	// BOOT_EFUSE_H
