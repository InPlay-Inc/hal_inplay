/**
 ****************************************************************************************
 *
 * @file in_ble_init.h
 *
 * @brief BLE stack initialization functions
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_INIT_H
#define IN_BLE_INIT_H

/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Initialize BLE stack functions
 *
 * Application should first provide a large block of memory to the BLE stack and then call "in_ble_get_mem_usage"
 * to poll each block memory usage. It can then adjust the memory blocks to achieve the best memory usage. 
 *
 * @param[in] p_config				Pointer to the user's configuration data
 * @param[in] p_buffer				Pointer to allocated memory for the BLE stack  
 * @param[in] buffer_size			Allocated memory size  
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
void *in_ble_init(in_ble_conf_t *p_conf, plt_isr_fun_t *plt_i, plt_fun_t *plt, uint32_t sram_base, uint32_t sram_size);


/**
 ****************************************************************************************
 * @brief BLE Call from the BLE isr to service interrupt
 *
 *
 * @return no return 
 ****************************************************************************************
 */
void in_ble_isr(void *hdl);

/**
 ****************************************************************************************
 * @brief Initialize BLE APIs 
 *
 * This is only for the embedded host software. For HCI based application (host on another CPU), there is
 * no need to call this function.
 *
 * @param[in] evt_cb				Call back functions for BLE stack events.  Most of the events are triggered by the
 *												peer devices.
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_api_init(void *hdl, void (*evt_cb)(ble_evt_t *evt));

/**
 ****************************************************************************************
 * @brief Get the memory usage of each block 
 *
 *
 * @return The current memory usage.
 ****************************************************************************************
 */
uint32_t in_ble_get_mem_usage(void *hdl);

/**
 ****************************************************************************************
 * @brief Get the maximum memory usage 
 *
 *
 * @return The maximum memory usage for the time being. 
 ****************************************************************************************
 */
uint32_t in_ble_get_max_mem_usage(void *hdl);

/**
 ****************************************************************************************
 * @brief Check if BLE is busy now or will be busy in the time interval 	specified by the input parameter. 
 *
 * @param[in] interval_ms		Time interval in millisecond. 
 *
 * @return 1: BLE is busy, 0: Otherwise 
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Return current BLE half slot clock 
 *
 *
 * @return Time in half slot unit (312.5us)  
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Return software overhead spend in the sleep and wakeup processing 
 *
 *
 * @return Time in microsecond that software used for the sleep and wake up 
 ****************************************************************************************
 */

void in_ble_stack_handler(void *arg);
void in_ble_event_handler(void *arg);
int in_ble_stack_wake(void *arg);
int in_ble_stack_sleep(void *arg);


/// @} IN_BLE_INI

#endif	/* IN_BLE_PLT_H */

