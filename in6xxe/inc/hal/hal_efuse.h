/**
 ****************************************************************************************
 *
 * @file hal_efuse.h
 *
 * @brief eFuse Profile
 *
 * Copyright (C) Inplay Technologies Inc. 2022-2025
 *
 ****************************************************************************************
 */
 
#ifndef HAL_EFUSE_H
#define HAL_EFUSE_H

/**
 ****************************************************************************************
 * @defgroup HAL_EFUSE eFuse Profile  
 * @ingroup HAL
 * @brief  HAL eFuse
 * @{
 ****************************************************************************************
 */

#include <stdint.h>
#include "in_mmap.h"

/*
 ****************************************************************************************
 * Efuse Define Structures
 ****************************************************************************************
 */

typedef union {
	struct {
		uint32_t efuse_lock:1;
		uint32_t flash_present:1;
		uint32_t pn_0:1;
		uint32_t pn_1:1;
		uint32_t pn_2:1;
		uint32_t pn_3:1;
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
	uint32_t w0; 	
} efuse_w0_t;

typedef union {
	struct {
		uint32_t dbv:5;
		uint32_t dbv_present:1;
		uint32_t drf:4;
		uint32_t drf_present:1;
		uint32_t tx_cal:12;
		uint32_t tx_cal_present:1;
		uint32_t bod:7;
		uint32_t bod_present:1;
	} u;
	uint32_t w3;		// word 3
} efuse_w3_t;

typedef union {
	struct {
		uint32_t pn_4:1;
		uint32_t pn_5:1;
		uint32_t sw_0:1;
		uint32_t sw_1:1;
		uint32_t sw_2:1;
		uint32_t sw_3:1;
		uint32_t sw_4:1;
		uint32_t sw_5:1;
		uint32_t reserved:8;
		uint32_t vtemp_offset:16;
	} u;
	uint32_t w4; 	
} efuse_w4_t;

typedef union {
	struct {
		uint32_t vbat_v0:16;
		uint32_t vbat_v1:16;
	} u;
	uint32_t w5;		// word 5
} efuse_w5_t;

typedef union {
	struct {
		uint32_t adc_v0:16;
		uint32_t adc_v1:16;
	} u;
	uint32_t w6;		// word 6
} efuse_w6_t;

typedef union {
	struct {
		uint32_t efuse_lock:1;
		uint32_t dbg_disable:1;
		uint32_t flash_encrypt:1;
		uint32_t flash_secure_boot:1;
		uint32_t ecc_length:1;
		uint32_t dft_if_en:1;
		uint32_t dft_if:3;
		uint32_t ram_secure_boot:1;
		uint32_t host_auth:1;
		uint32_t spi_init_speed:2;
		uint32_t secure_boot_w_uuid:1;
		uint32_t xo_dly:2;
		uint32_t cpll_en:1;
		uint32_t aon_wdt_dis:1;
		uint32_t aon_wdt_win:1;
		uint32_t aon_wdt_rst:2;
		uint32_t bod_en:1;
		uint32_t bod_thrd:3;
		uint32_t bod_sel:1;
		uint32_t bod_reset:1;
		uint32_t flash_exception:2;
		uint32_t reset_option:1;
	} u;
	uint32_t word; 	
	uint32_t w7; 	
} efuse_w7_t;

/*
 ****************************************************************************************
 * Enum
 ****************************************************************************************
 */					

/// eFuse status result
typedef enum {
	/// No error. Good. 
	EFUSE_ERR_OK = 0,
	/// Error. driver is not open, call hal_efuse_open
	EFUSE_ERR_NO_OPEN = -1,
	/// Error. Os apis failed
	EFUSE_ERR_OS = -2,
	/// Error, already been used
	EFUSE_ERR_EFUSE_BUSY = -3,
} efuse_result_status;


/*
 ****************************************************************************************
 * Inline Functions
 ****************************************************************************************
 */					

static __inline int efuse_intr_read_done(void)
{
	return ((RD_WORD(EFUSECTRL_REG_INTR_STATUS) &  EFUSECTRL_REG_INTR_STATUS_READ_DONE) ? 1: 0);
}

static __inline int efuse_intr_prog_done(void)
{
	return ((RD_WORD(EFUSECTRL_REG_INTR_STATUS) & EFUSECTRL_REG_INTR_STATUS_PROG_DONE) ? 1 : 0);
}

static __inline void efuse_intr_read_done_clr(void)
{
	WR_WORD(EFUSECTRL_REG_INTR_CLR, EFUSECTRL_REG_INTR_CLR_READ_DONE);
}

static __inline void efuse_intr_prog_done_clr(void)
{
	WR_WORD(EFUSECTRL_REG_INTR_CLR, EFUSECTRL_REG_INTR_CLR_PROG_DONE);
}

static __inline void efuse_enable(void)
{
	WR_WORD(EFUSECTRL_REG_MISC_CTRL, EFUSECTRL_REG_MISC_CTRL_CTL_EFUSE_EN);
}

static __inline void efuse_disable(void)
{
	WR_WORD(EFUSECTRL_REG_MISC_CTRL, 0);
}

static __inline void efuse_prog_enable(void)
{
	WR_WORD(EFUSECTRL_REG_MISC_CTRL, EFUSECTRL_REG_MISC_CTRL_CTL_EFUSE_EN | EFUSECTRL_REG_MISC_CTRL_CTL_EFUSE_PROG_EN);
}

static __inline void efuse_prog_disable(void)
{
	WR_WORD(EFUSECTRL_REG_MISC_CTRL, 0);
}

static __inline void efuse_prog_bit_start(uint32_t bit_adr)
{
	WR_WORD(EFUSECTRL_REG_PROG_CTRL, 
						(EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_REQ | (bit_adr << EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_BIT_ADDR_SHIFT))); 
}

static __inline void efuse_prog_bit_end(void)
{
	WR_WORD(EFUSECTRL_REG_PROG_CTRL, 0);
}

#define EFUSE_READ_HWORD 0
#define EFUSE_READ_WORD 1

static __inline void efuse_read_bit_start(uint32_t addr, int size)
{
	WR_WORD(EFUSECTRL_REG_READ_CTRL, (EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_REQ |  
						((addr & EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_ADDR_MASK) << EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_ADDR_SHIFT) |
							(size ? EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_MODE : 0)));
}

static __inline void efuse_read_bit_end(void)
{
	WR_WORD(EFUSECTRL_REG_READ_CTRL, 0);
}

static __inline uint32_t efuse_read_value(void)
{
	return RD_WORD(EFUSECTRL_REG_READ_VAL);
}

static __inline void efuse_set_prog_ctrl_reg(uint32_t val)
{
	WR_WORD(EFUSECTRL_REG_PROG_CTRL, val);
}

static __inline uint32_t efuse_get_prog_ctrl_reg(void)
{
	return RD_WORD(EFUSECTRL_REG_PROG_CTRL);
}

static uint32_t efuse_read_word(uint8_t addr)
{
	uint32_t data;

	efuse_enable();
	efuse_read_bit_start(addr, EFUSE_READ_WORD);
	while (!efuse_intr_read_done());			
	data = efuse_read_value();
	efuse_intr_read_done_clr();							
	efuse_read_bit_end();
	efuse_disable();

	return data;
}

static __inline uint32_t efuse_init_rd_val_w0(void)
{
	return RD_WORD(EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0);
}

static __inline uint32_t efuse_init_rd_val_w1(void)
{
	return RD_WORD(EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W1);
}

static __inline uint32_t efuse_init_rd_val_w2(void)
{
	return RD_WORD(EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W2);
}

static __inline uint32_t efuse_init_rd_val_w3(void)
{
	return RD_WORD(EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W3);
}

static __inline uint32_t efuse_init_rd_val_w4(void)
{
	return RD_WORD(EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4);
}

static __inline uint32_t efuse_init_rd_val_w5(void)
{
	return RD_WORD(EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5);
}

static __inline uint32_t efuse_init_rd_val_w6(void)
{
	return RD_WORD(EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6);
}

static __inline uint32_t efuse_init_rd_val_w7(void)
{
	return RD_WORD(EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0);
}

static __inline void efuse_tpp(uint32_t tpp)
{
	uint32_t reg = RD_WORD(EFUSECTRL_REG_COUNTER_CTRL_1);
	reg &= ~EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TPP_MASK;
	reg |= (tpp << EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TPP_SHIFT);
	WR_WORD(EFUSECTRL_REG_COUNTER_CTRL_1, reg);
}

static __inline int efuse_load_done(void)
{
	return ((((RD_WORD(EFUSECTRL_REG_MISC_STS) >> EFUSECTRL_REG_MISC_STS_STS_EFUSE_CURR_STATE_SHIFT) & 0xF) == 0xF) ? 1 : 0);
}


/**
 ****************************************************************************************
 * @brief Initialize eFuse driver.
 *
 * @return EFUSE_ERR_OK if eFuse initializes successfully, error otherwise. @see enum efuse_result_status.
 ****************************************************************************************
 */
int hal_efuse_open(void);

/**
 ****************************************************************************************
 * @brief Stop and cleanup eFuse driver.
 *
 * @return EFUSE_ERR_OK if efuse uninitializes successfully, error otherwise. @see enum efuse_result_status.
 ****************************************************************************************
 */
int hal_efuse_close(void);

/**
 ****************************************************************************************
 * @brief Read eFuse word.
 *
 * @param[in] bank_id		eFuse bank ID number to be read.
 * @param[in] word_num		eFuse bank word number to be read.
 * @param[in] out			Pointer to write location of eFuse word.
 *
 * @return EFUSE_ERR_OK if eFuse read word is successful, error otherwise. @see enum efuse_result_status.
 ****************************************************************************************
 */
int hal_efuse_read_word(int word_num, uint32_t* out);

/**
 ****************************************************************************************
 * @brief Write eFuse word.
 *
 * @param[in] bank_id		eFuse bank ID number to be read.
 * @param[in] word_num		eFuse bank word number to be read.
 * @param[in] data			Data to be written to eFuse word.
 *
 * @return EFUSE_ERR_OK if eFuse write word is successful, error otherwise. @see enum efuse_result_status.
 ****************************************************************************************
 */
int hal_efuse_write_word(int word_num, uint32_t data);

/**
 ****************************************************************************************
 * @brief Read HW configuration parameters in efuse from the register
 *	Note: efuse's word 0, by default, will be read by the HW and store in the register, so SW can retrieve it without 
 *				accessing efuse directly.. 
 *
 *
 * @return 32 bits efuse word 0 which user should cast it with "efuse_hw_param_t" to see each bit definition
 ****************************************************************************************
 */
uint32_t hal_efuse_read_hw_param(void) ;

/**
 ****************************************************************************************
 * @brief Read UUID in efuse from the registers
 *	Note: efuse's word 1 - 3, by default, will be read by the HW and store in the register, so SW can retrieve it without 
 *				accessing efuse directly.. 
 *
 * @param[in] uuid[3]		A uuid array with each element 32 bits
 *
 * @return No return
 ****************************************************************************************
 */
void hal_efuse_read_uuid(uint32_t uuid[3]) ;

/**
 ****************************************************************************************
 * @brief Read feature parameters in efuse from the register
 *	Note: efuse's word 4, by default, will be read by the HW and store in the register, so SW can retrieve it without 
 *				accessing efuse directly.. 
 *
 *
 * @return 32 bits efuse word 4 which user should cast it with "efuse_feature_param_t" to see each bit definition
 ****************************************************************************************
 */
uint32_t hal_efuse_read_feature_param(void) ;

/**
 ****************************************************************************************
 * @brief Read vbat parameters in efuse from the register
 *	Note: efuse's word 5, by default, will be read by the HW and store in the register, so SW can retrieve it without 
 *				accessing efuse directly.. 
 *
 *
 * @return 32 bits efuse word 5 which user should cast it with "efuse_vbat_param_t" to see each bit definition
 ****************************************************************************************
 */
uint32_t hal_efuse_read_vbat_param(void) ;

/**
 ****************************************************************************************
 * @brief Read temperature parameters in efuse from the register
 *	Note: efuse's word 6, by default, will be read by the HW and store in the register, so SW can retrieve it without 
 *				accessing efuse directly.. 
 *
 *
 * @return 32 bits efuse word 6 which user should cast it with "efuse_temp_param_t" to see each bit definition
 ****************************************************************************************
 */
uint32_t hal_efuse_read_temp_param(void) ;

/**
 ****************************************************************************************
 * @brief Read user configuration parameters in efuse from the register
 *	Note: efuse's word 7, by default, will be read by the HW and store in the register, so SW can retrieve it without 
 *				accessing efuse directly.. 
 *
 *
 * @return 32 bits efuse word 7 which user should cast it with "efuse_usr_param_t" to see each bit definition
 ****************************************************************************************
 */
uint32_t hal_efuse_read_usr_param(void) ;

/**
 ****************************************************************************************
 * @brief Read public keys from efuse
 *
 * @param[in] x[32]		Ecc's public key in byte unit
 * @param[in] y[32]		Ecc's public key in byte unit
 *
 * @return No return
 ****************************************************************************************
 */
void hal_efuse_read_public_keys(uint8_t x[32], uint8_t y[32]) ;


/// @} HAL_EFUSE


#endif
