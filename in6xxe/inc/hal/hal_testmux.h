/**
 ****************************************************************************************
 *
 * @file hal_testmux.h
 *
 * @brief Advanced Encryption Standard Cryptography Profile
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 ****************************************************************************************
 */

#ifndef HAL_TEST_MUX_H
#define HAL_TEST_MUX_H
#include <stdint.h>
#include "in_mmap.h"

enum testmux_option {
	OPTION_0 = 0,
	OPTION_1,
	OPTION_2,
	OPTION_3,
	OPTION_4,
	OPTION_5,
	OPTION_6,
	OPTION_7,
	OPTION_MAX,
};
enum trx_seq_testmux {
	TX_EN = 10,
	RX_EN = 12,
	MPLL_TX_EN = 31,
	MPLL_EN = 32,
	PA_EN = 38,
	TX_GPIO_A = 45,
	TX_GPIO_B = 46,
};
/**
 ****************************************************************************************
 * @brief Config testmux pin
 *				  
 * @param[in] port			port		
 * @param[in] pin			pin		

 *
 * @return 0: Success,  -1: Fail 
 ****************************************************************************************
 */
int hal_testmux_cfg(uint8_t port, uint8_t pin);


/**
 ****************************************************************************************
 * @brief Set testmux option
 *				  
 * @param[in] testout					testout id
 * @param[in] option					testmux option.
 *
 * @return 0: Success,  -1: Fail 
 ****************************************************************************************
 */
int hal_testmux_option(uint8_t testout, uint8_t option);

/**
 ****************************************************************************************
 * @brief Set shift of one option
 *				  
 * @param[in] option					testmux option.
 * @param[in] op_shift					shift, from 0 to 7.
 * @param[in] sub_option				testmux sub option.
 *
 * @return 0: Success,  -1: Fail 
 ****************************************************************************************
 */
int hal_testmux_shift(uint8_t option, uint8_t op_shift, uint8_t sub_option);

/**
 ****************************************************************************************
 * @brief Set TRX control
 *				  
 * @param[in] ctrl_bit					control bit, from 0 to 11.
 * @param[in] value						Signal index, from 0 to 63.
 *
 * @return 0: Success,  -1: Fail 
 ****************************************************************************************
 */
int hal_testmux_trx_ctrl(uint8_t ctrl_bit, uint32_t value);

/**
 ****************************************************************************************
 * @brief Set IPMAC signal
 *				  
 * @param[in] en					1: enable ipmac signal, 0:disable ipmac signal.
 * @param[in] byte_idx				byte idx, from 0 to 3.
 * @param[in] byte					byte value, from 0 to 7.
 *
 * @return 0: Success,  -1: Fail 
 ****************************************************************************************
 */
int hal_testmux_ipmac(int en, uint8_t byte_idx, uint32_t byte);

/**
 ****************************************************************************************
 * @brief Config external PA
 *				  
 * @param[in] bias_port				PA bias port.
 * @param[in] bias_pin				PA bias pin.
 * @param[in] en_port				PA tx en port
 * @param[in] en_pin				PA tx en pin
 *
 * @return 0: Success,  -1: Fail 
 ****************************************************************************************
 */
int hal_ext_pa_tx_cfg(int bias_port, int bias_pin, int en_port, int en_pin);
#endif

