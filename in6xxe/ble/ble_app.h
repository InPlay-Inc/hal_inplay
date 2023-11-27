/**
 ****************************************************************************************
 *
 * @file ble_app.h
 *
 * @brief BLE APPs header file
 *
 * Copyright (C) Inplay Technologies Inc. 2017-2018
 *
 ****************************************************************************************
 */

#ifndef BLE_APP_H
#define BLE_APP_H
#include <stdint.h>

/**
 ****************************************************************************************
 * @brief Start the BLE base on the configuration data
 *
 * @param[in] cbf				Pointer to App call back functions structure  
 *
 * @return INB_ERR_NO_ERROR if successful, otherwise failed. @see enum inb_err_t 
 ****************************************************************************************
 */
void *ble_stack_init(uint8_t *bd_addr);

/**
 * VHCI related APIs
 */
typedef void (*in_ble_vhci_rx_cb_t)(uint8_t type, uint8_t *data, uint16_t len);
int in_ble_vhci_host_send(void *hdl, uint8_t *data, uint16_t len);
void in_ble_vhci_host_register_callback(in_ble_vhci_rx_cb_t vhci_cb);

#endif	// BLE_APP_H
