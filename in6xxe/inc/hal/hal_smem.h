/**
 ****************************************************************************************
 *
 * @file hal_spi.h
 *
 * @brief SPI driver header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_SMEM_H
#define HAL_SMEM_H

/**
 ****************************************************************************************
 * @defgroup HAL_SMEM Share memory device driver  
 * @ingroup HAL
 * @brief  HAL_SMEM
 * @{
 ****************************************************************************************
 */

#include "in_mmap.h"

#define SMEM_SIZE 0xA000

/*
 * Inline Functions
 ****************************************************************************************
 */
static __inline void smem_enable(void)
{
	WR_WORD(SHAREDMEM_REG_MISC_CTRL, (SHAREDMEM_REG_MISC_CTRL_CTL_ENABLE|SHAREDMEM_REG_MISC_CTRL_CTL_RDATA_VALID_IF_DISABLE));
}

static __inline void smem_ble_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT0_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT0_CTRL0, reg);
}

static __inline void smem_ble1_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT4_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT4_CTRL0, reg);
}

static __inline void smem_antena_rx_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT1_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT1_CTRL0, reg);
}

static __inline void smem_audio_rx_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT2_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT2_CTRL0, reg);
}

static __inline void smem_audio_tx_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT3_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT3_CTRL0, reg);
}

static __inline void smem_sadc_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT5_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT5_CTRL0, reg);

}

static __inline void smem_ahb_trig_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT6_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT6_CTRL0, reg);

}

static __inline void smem_ipmac_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT7_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT7_CTRL0, reg);

}

static __inline void smem_tmr_emit_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT8_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT8_CTRL0, reg);

}

static __inline void smem_tmr_cap_en(int en, uint32_t offset)
{
	uint32_t reg = 0;

	if (en) {
		reg = 1;
		offset >>= 2;	// WORD address (4 bytes)
		reg |= (offset << SHAREDMEM_REG_CLNT9_CTRL0_ADDR_OFFSET0_SHIFT);
	} 
	
	WR_WORD(SHAREDMEM_REG_CLNT9_CTRL0, reg);

}
/*
 * Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Globally enable HW shared memory 
 * @note Shared memory is used by the following HW modules:
 *					1. BLE
 *					2. Antena control Rx data
 *					3. Audio Rx
 *					4. Audio Tx
 *					5. HWACC
 *					6. Sensor ADC
 *					7. AHB trigger
 *				The API is based on Inplay configuration tool generated configuration parameters for the shared memory. 
 *				  
 *
 * @return void. This function has no return value. 
 ****************************************************************************************
 */
void hal_smem_init(void);

/**
 ****************************************************************************************
 * @brief Enable/Disable shared memory retention 
 *
 * @param[in] en					1: enable retention, 0: otherwise   
 * @param[in] offset			The retention starting offset in the shared memory   
 * @param[in] size				The retention size
 *
 * @return void. This function has no return value. 
 ****************************************************************************************
 */
void hal_smem_retn(uint32_t offset, uint32_t size);

/**
 ****************************************************************************************
 * @brief Get smem start address for data buffer 
 *
 *
 * @return start address. 
 ****************************************************************************************
 */
uint32_t hal_smem_buf_start_addr(void);

/**
 ****************************************************************************************
 * @brief Get smem end address for data buffer 
 *
 *
 * @return end address. 
 ****************************************************************************************
 */
uint32_t hal_smem_buf_end_addr(void);

/**
 ****************************************************************************************
 * @brief  PM save SMEM HW configuration registers 
 *
 *
 * @return No return
 ****************************************************************************************
 */
void hal_smem_pm_suspend(void);

/**
 ****************************************************************************************
 * @brief  PM restore SMEM HW configuration registers 
 *
 *
 * @return No return 
 ****************************************************************************************
 */
void hal_smem_pm_resume(void);


/// @} HAL_SMEM

#endif	// HAL_SMEM_H 
