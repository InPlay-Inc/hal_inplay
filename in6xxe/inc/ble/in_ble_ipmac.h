/**
 ****************************************************************************************
 *
 * @file in_ble_sdr.h
 *
 * @brief Software Defined Radio  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_SDR_H
#define IN_BLE_SDR_H

#include "in_mmap.h"

/*
 * Enumeration
 ****************************************************************************************
 */







/*
 * Inline 
 ****************************************************************************************
 */



/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief SDR initialization function 
 *	@Note: This function is called by the BLE stack. Application shouldn't call this function.
 *
 * @param[in] pv								Pointer to the ROM function tables
 *
 * @return Possible return @see enum sdr_err. 
 ****************************************************************************************
 */

int ble_ipmac_init(void *pv);

/**
 ****************************************************************************************
 * @brief SDR de-initialization function 
 *	@Note: This function is called by the BLE stack. Application shouldn't call this function.
 *
 * @param[in] pv								Pointer to the ROM function tables
 *
 * @return Possible return @see enum sdr_err. 
 ****************************************************************************************
 */
void ble_ipmac_deinit(void *pv);

#endif

