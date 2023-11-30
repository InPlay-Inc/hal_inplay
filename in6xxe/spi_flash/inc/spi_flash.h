/**
 ****************************************************************************************
 *
 * @file spi_flash.h
 *
 * @brief SPI flash header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef SPI_FLASH_H
#define SPI_FLASH_H

static __inline void aon_qspi_vddio(int en)
{
	uint32_t reg = RD_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL);
	if (en) {
		reg &= ~AON_PS_REGS_MISC_BYPASS_0_CTRL_QSPI_VDDIO_EN_EN;
		reg |= AON_PS_REGS_MISC_BYPASS_0_CTRL_QSPI_VDDIO_EN_VAL;
	} else {
		reg |= AON_PS_REGS_MISC_BYPASS_0_CTRL_QSPI_VDDIO_EN_EN;
		reg &= ~AON_PS_REGS_MISC_BYPASS_0_CTRL_QSPI_VDDIO_EN_VAL;
	}
	WR_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL, reg);
}

/**
 ****************************************************************************************
 * @defgroup SPI_FLASH Platform SPI flash APIs  
 * @ingroup HAL
 * @brief  SPI_FLASH
 * @{
 ****************************************************************************************
 */


/**
 ****************************************************************************************
 * @brief SPI flash clock configure function
 * @note This function is used to configure the SPI flash controller's pclk.  The SPI flash serial clock is derived
 * from this clock and a divisor.  
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
void spi_flash_clk(void);

/**
 ****************************************************************************************
 * @brief SPI flash pin mux function
 * @note This function is used to configure the SPI flash pins mux. 
 * 
 *
 * @param[in] use_efuse		1: SPI Flash pins configuration are based on the efuse configuration; 
 *											0: SPI Flash pins configuration are based on the configuration file (in_config.h)     
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
void spi_flash_pin_mux(void);

/**
 ****************************************************************************************
 * @brief SPI flash initialization function
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
int spi_flash_init(void);

/**
 ****************************************************************************************
 * @brief SPI flash de-initialization function
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
void spi_flash_deinit(void);

/**
 ****************************************************************************************
 * @brief SPI flash chip erase function
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
int spi_flash_chip_erase(void);

/**
 ****************************************************************************************
 * @brief SPI flash sector erase function
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
#ifndef KEIL_FLASH_LOAD_TOOL
int spi_flash_sector_erase(uint32_t addr, uint32_t size);
#else
int spi_flash_sector_erase(uint32_t addr);
#endif
int spi_flash_xip_erase_sector(uint32_t addr, uint32_t irq_prio);

/**
 ****************************************************************************************
 * @brief SPI flash read function
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
int spi_flash_read(uint32_t addr, uint8_t *data, uint32_t data_len);

/**
 ****************************************************************************************
 * @brief SPI flash program page function
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
int spi_flash_prog_page(uint32_t addr, uint8_t *data, uint32_t data_len);
int spi_flash_xip_prog_page(uint32_t addr, uint8_t *data, uint32_t data_len, uint32_t irq_prio);


/**
 ****************************************************************************************
 * @brief SPI flash verify function
 *
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
uint32_t spi_flash_verify(uint32_t addr, int size, uint8_t *data);


/**
 ****************************************************************************************
 * @brief Enable SPI flash (XIP) Quad Read mode.
 * @note After calling this function, the user should not issue any commands to the SPI flash.  To issue command
 * to the SPI flash, you have to jump to ram and from ram to disable the XIP mode.  
 *              
 * @param[in] speed					The SPI speed for quad read. They can be 32, 16, 8, 4, 2, or 1 Mhz    
 * @param[in] cache_clear		1: clear the flash cache; 0: otherwise.    
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
void spi_flash_xip_enable(uint32_t speed, int cache_clear);


/**
 ****************************************************************************************
 * @brief Disable SPI flash (XIP) Quad Read mode.
 *              
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
void spi_flash_xip_disable(void);


int spi_flash_xip_read(uint32_t addr, uint8_t *data, uint32_t data_len, uint32_t irq_prio);

/**
 ****************************************************************************************
 * @brief Power on external SPI flash.
 *              
 * @param[in] on			1: Power on external SPI Flash; 0: Otherwise    
 *
 * @return This function has no return value. 
 ****************************************************************************************
 */
void spi_flash_power(int on);


/// @} SPI_FLASH

#endif	// SPI_FLASH_H
