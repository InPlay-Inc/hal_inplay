/**
 ****************************************************************************************
 *
 * @file hal_flash.h
 *
 * @brief SPI Flash driver header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */
#ifndef HAL_FLASH_H
#define HAL_FLASH_H

#include <stdint.h>

/**
 ****************************************************************************************
 * @defgroup HAL_SPI_FLASH SPI Flash driver  
 * @ingroup HAL
 * @brief  HAL_SPI_FLASH
 * @{
 ****************************************************************************************
 */
#define SPI_FLASH_PAGE_SIZE		(256)
#define SPI_FLASH_SECTOR_SIZE (4096)
#define SPI_FLASH_BASE_ADDR (0x300000)
#define SPI_FLASH_SIZE (0x80000)
enum flash_error {
	FLASH_ERR_OK,
	FLASH_ERR_ERASE_FAIL,
	FLASH_ERR_VERIFY_FAIL,
	FLASH_ERR_INVALID_PARAM,
	FLASH_ERR_BLE_CONFLICT,
};

/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Erase SPI Flash sector
 * @note Now one sector is 4K bytes. erase_addr should be 4K bytes aligned. This function only erase 4K bytes.
 *          If user want to erase more sector, call this function with new sector address.
 *
 * @param[in] addr   Flash erase address (Starting from 0x0)   
 * @param[in] sector_nb  sector number to erase.
 *	
 * @return  @see enum flash_error for return code.
 ****************************************************************************************
 */
int hal_spi_flash_sector_erase(uint32_t addr, uint32_t sector_nb);

/**
 ****************************************************************************************
 * @brief Programme SPI Flash page
 * @note Now one page is 256 bytes. prog_size should be smaller then 256. This function only programme one page.
 *          If user want to write more page, call this function with new page address.
 *
 * @param[in] addr     Flash programme address (Starting from 0x0).
 * @param[in] data     Programme data buffer.
 * @param[in] data_len     Flash Programme size. This size shoudle be be smaller than sector size (4K).
 *	
 * @return  @see enum flash_error for return code.
 ****************************************************************************************
 */
int hal_spi_flash_prog_page(uint32_t addr, uint8_t *data, uint32_t data_len);

/**
 ****************************************************************************************
 * @brief Verify SPI Flash data
 * @note Read data from addr, and compare data in data buffer. Only work in XIP mode.
 *
 * @param[in] addr          Flash read address (starting from 0x0).
 * @param[in] data          Data buffer.
 * @param[in] size          Data size.
 *
 * @return  @see enum flash_error for return code.
 ****************************************************************************************
 */
int hal_spi_flash_verify(uint32_t addr, uint8_t *data, uint32_t size);

/**
 ****************************************************************************************
 * @brief Flash read function.
 * @note Read data from addr. Read data in XIP mode.
 *
 * @param[in] addr          Flash read address (starting from 0x0).
 * @param[in] data          Data buffer.
 * @param[in] size          Data size.
 *
 * @return  @see enum flash_error for return code.
 ****************************************************************************************
 */
int hal_spi_flash_read(uint32_t addr, uint8_t *data, uint32_t size);

/**
 ****************************************************************************************
 * @brief Flash read function.
 * @note Read data from addr. Read data in non-XIP mode.
 *
 * @param[in] addr          Flash read address (starting from 0x0).
 * @param[in] data          Data buffer.
 * @param[in] size          Data size. Max size is 256 bytes.
 *
 * @return  @see enum flash_error for return code.
 ****************************************************************************************
 */
int hal_spi_flash_read_page(uint32_t addr, uint8_t *data, uint32_t size);

#if CFG_BRAM_RAM_APP_EN
/**
 ****************************************************************************************
 * @brief Flash suspend.
 *
 *
 * @return  none.
 ****************************************************************************************
 */
void hal_spi_flash_suspend(void);
#endif
/// @} HAL_I2C
#endif
