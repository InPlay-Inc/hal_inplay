/**
 ****************************************************************************************
 *
 * @file in_ana.h
 *
 * @brief Analog + RF APIs   
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */
#ifndef IN_ANA_H
#define IN_ANA_H
#define DRF_DELTA_FOR_DCDC ((0x01<<12)| (0<<8) | (0x01<<4) | (0x01<<0))  // DRF for RX, TX, Idle, Reset.
enum ana_vbat_t {
	VBAT_3_3V = 0,
	VBAT_1_8V,
};
/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Initialize HW analog calibrated values.  Has to be called before normal operation 
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_init(int vbat, int root_64m, uint32_t drf_dc_delta);

/**
 ****************************************************************************************
 * @brief Initialize RF transceiver.  Has to be called before TX/RX
 *
 * @param[in] cold				1: Indicate this is a cold boot; 0: Indicate this is a warm boot.   
 * @param[in] tx_power		PA gain for all the channels, Apply in cold boot.    
 * @param[in] txp_on_cs		1: Enable baseband CS control PA gain. 0: Fix PA gain from above.    
 * 
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_rf_init(int cold, uint8_t tx_power, int txp_on_cs);

/**
 ****************************************************************************************
 * @brief Initialize HW analog sleep/wakeup settings.  Called before switch to RTC.
 *
 * @param[in] rtc_en			1: RTC is used; 0: RTC is not used   
 * @param[in] rtc_cap			Calibrated RTC capacitor value. Valid only for RTC    
 * 
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_slp_cfg(int rtc_en, uint8_t rtc_cap);

/**
 ****************************************************************************************
 * @brief Set accurate timing. Only for RC. 
 *
 * @param[in] acc_timing			1: Need accurate timing. Default is 1;
 *									2: No need accurate timing.
 * 
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_acc_timing(int acc_timing);

/**
 ****************************************************************************************
 * @brief HW analog set TX power
 * @Note: Measure from the reference board (DK board), the gain code for:
 *					1. 3dbm is 0x7f,
 *					2. 0dbm is 0x19. 
 *
 * @param[in] gain_code		PA gain code from 0x00 to 0x7F.   
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_set_tx_power(uint8_t gain_code);

/**
 ****************************************************************************************
 * @brief HW analog settings before sleep.
 *
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_suspend(void);

/**
 ****************************************************************************************
 * @brief HW analog settings after sleep.
 *
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_resume(void);

/**
 ****************************************************************************************
 * @brief Retrieve ADC offset.
 *
 *				  
 * @return This function return the accumulated ADC offset for 32 samples.
 ****************************************************************************************
 */
int hw_ana_adc_offset(void);

/**
 ****************************************************************************************
 * @brief Calculate VBAT voltage
 *
 * @param[in] vbat_samples		32 ADC VBAT samples   
 *				  
 * @return This function return VBAT voltage in mV.
 ****************************************************************************************
 */
int hw_ana_calc_vbat(int vbat_samples);

/**
 ****************************************************************************************
 * @brief Config BOD
 *
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_bod_cfg(void);

/**
 ****************************************************************************************
 * @brief Enable BOD
 *
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_bod_enable(void);

/**
 ****************************************************************************************
 * @brief Disable BOD
 *
 * @return This function has no return value
 ****************************************************************************************
 */

void hw_ana_bod_disable(void);

/**
 ****************************************************************************************
 * @brief Set BOD thershold
 *
 * @param[in] threshold		BOD threshold, @see enum bod_thrd for possible value
 *
 * @return This function has no return value
 ****************************************************************************************
 */
void hw_ana_bod_thrd(int threshold);


void hw_ana_rc_32k_calib(void);

/**
 ****************************************************************************************
 * @brief HW debug GPIO funtions
 *
 *				  
 * @return This function has no return value
 ****************************************************************************************
 */
void GPIO_3_2_TRX(void);
void GPIO_3_5_output_pinmux(void);
void GPIO_3_5_output_1(void);
void GPIO_3_5_output_0(void);
void GPIO_2_8_output_pinmux(void);
void GPIO_2_8_output_1(void);
void GPIO_2_8_output_0(void);
void GPIO_3_4_output_pinmux(void);
void GPIO_3_4_output_1(void);
void GPIO_3_4_output_0(void);
void GPIO_4_1_output_pinmux(void);
void GPIO_4_1_output_1(void);
void GPIO_4_1_output_0(void);
void GPIO_4_0_osc(void);
void GPIO_4_1_dcdc(void);
void GPIO_3_3_wakeup_pin_high(void);
void GPIO_1_3_latch(void);
void GPIO_2_8_latch(void);
void GPIO_3_2_latch(void);
void GPIO_3_4_latch(void);
void GPIO_3_5_latch(void);
void GPIO_1_3_unlatch(void);
void GPIO_2_8_unlatch(void);
void GPIO_3_2_unlatch(void);
void GPIO_3_4_unlatch(void);
void GPIO_3_5_unlatch(void);


#endif	// IN_ANA_H
