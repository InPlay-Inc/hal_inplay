#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file hal_spi_flash.c
 *
 * @brief Platform run time write to SPI flash functions  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include <stdint.h>
#include <string.h>
#include "in_arm.h"
#include "in_mmap.h"
#include "hal/hal_clk.h"
#include "hal/hal_flash.h"
#include "spi_flash.h"

#define SPI_FLASH_ERASE_SECTOR_TIME 500
#define SPI_FLASH_PROG_PAGE_TIME 6
#if CFG_BRAM_RAM_APP_EN
static char flash_init = 0;
static char flash_xip_en = 0;
void hal_spi_flash_suspend(void) __attribute__((section("RAM_PM")));
void hal_spi_flash_suspend(void)
{
	flash_init = 0;
	flash_xip_en = 0;
}
static void spi_flash_resume(int en_xip)
{
	if (flash_init == 0) {

#if CFG_LOW_POWER		
	clk_spiflash_en(1);
	clk_qspi_mux(CFG_QSPI_CLK_MUX);	
#endif
		clk_force_spiflash_ctl_clk();
		spi_flash_pin_mux();
		flash_init = 1;
	}
	if ((flash_xip_en == 0) && en_xip) {
		spi_flash_xip_enable(CFG_QSPI_SPEED, 1);
		delay_us(1);
		flash_xip_en = 1;
	} else if ((flash_xip_en == 1) && (en_xip == 0)) {
		spi_flash_xip_disable();
		flash_xip_en = 0;
	}

}
#endif
int hal_spi_flash_sector_erase(uint32_t addr, uint32_t sector_nb)
{
	int res = FLASH_ERR_OK; 

	if (addr + (SPI_FLASH_SECTOR_SIZE * sector_nb) > SPI_FLASH_SIZE) 
		return FLASH_ERR_INVALID_PARAM;
#if CFG_BRAM_RAM_APP_EN
	spi_flash_resume(0);
#endif
	uint32_t primask;
	/// interrupt mask
	primask = disable_irq();
#if CFG_BRAM_RAM_APP_EN

	res = spi_flash_sector_erase(addr, sector_nb*SPI_FLASH_SECTOR_SIZE);
	if (res) {
		res = 0;
	} else {
		res = -1;
	}
#else
	for (uint32_t i = 0; i < sector_nb; i++) {
		res = spi_flash_xip_erase_sector(addr, IRQ_PRI_High);
		if (res)
			break;
		addr += SPI_FLASH_SECTOR_SIZE;
	}
#endif
	/// interrupt unmask
	__set_PRIMASK(primask);
	return res;
}

int hal_spi_flash_prog_page(uint32_t addr, uint8_t *data, uint32_t data_len)
{
	int res = 0;
	if (!data) 
		return FLASH_ERR_INVALID_PARAM;

	if ((addr + data_len) > SPI_FLASH_SIZE) 
		return FLASH_ERR_INVALID_PARAM;

	if (!data) 
		return FLASH_ERR_INVALID_PARAM;
#if CFG_BRAM_RAM_APP_EN
	spi_flash_resume(0);
#endif
	uint32_t primask;
	/// interrupt mask
	primask = disable_irq();
#if CFG_BRAM_RAM_APP_EN
	res = spi_flash_prog_page(addr, data, data_len);
	if (res) {
		res = 0;
	} else {
		res = -1;
	}
	return res;
#else
	res = spi_flash_xip_prog_page(addr, data, data_len, IRQ_PRI_High);
#endif
		/// interrupt unmask
	__set_PRIMASK(primask);
	return res;
}

int hal_spi_flash_verify(uint32_t addr, uint8_t *data, uint32_t size)
{
	int res = FLASH_ERR_OK;

	if ((data == NULL) || (size <= 0) || ((addr + size) > SPI_FLASH_SIZE))
		return FLASH_ERR_INVALID_PARAM;
#if CFG_BRAM_RAM_APP_EN
	spi_flash_resume(1);
#endif
	addr += SPI_FLASH_BASE_ADDR;

	res = memcmp((uint8_t *)addr, data, size);

	return (res == 0) ? FLASH_ERR_OK : FLASH_ERR_VERIFY_FAIL;
}

int hal_spi_flash_read(uint32_t addr, uint8_t *data, uint32_t size)
{
    if (!data || (size == 0) || ((addr + size) > SPI_FLASH_SIZE)) {
        return FLASH_ERR_INVALID_PARAM;
    }
#if CFG_BRAM_RAM_APP_EN
	spi_flash_resume(1);
#endif
	addr += SPI_FLASH_BASE_ADDR;

	for (uint32_t i = 0; i < size; i++) {
		*data = RD_BYTE(addr);
		data++;
		addr++;
	}
    //memcpy(data, (uint8_t *)addr, size);

    return FLASH_ERR_OK;
}

int hal_spi_flash_read_page(uint32_t addr, uint8_t *data, uint32_t size)
{
	int res;
    if (!data || (size == 0) || ((addr + size) > SPI_FLASH_SIZE)) {
        return FLASH_ERR_INVALID_PARAM;
    }
    if (size > SPI_FLASH_PAGE_SIZE) {
    	return FLASH_ERR_INVALID_PARAM;
    }

	if (size%4) {
		return FLASH_ERR_INVALID_PARAM;
    }

    if (!data) 
    	return FLASH_ERR_INVALID_PARAM;
#if CFG_BRAM_RAM_APP_EN
	spi_flash_resume(0);
#endif
	uint32_t primask;
	/// interrupt mask
	primask = disable_irq();
#if CFG_BRAM_RAM_APP_EN
	res = spi_flash_read(addr, data, size);
	if (res) {
		res = 0;
	} else {
		res = -1;
	}
	return res;
#else
    res = spi_flash_xip_read(addr, data, size,IRQ_PRI_High);
#endif
	/// interrupt unmask
	__set_PRIMASK(primask);
	return res;
}
