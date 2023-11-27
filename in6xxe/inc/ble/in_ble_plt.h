/**
 ****************************************************************************************
 *
 * @file in_ble_plt.h
 *
 * @brief BLE Platform support functions
 *
 * Copyright (C) Inplay Technologies Inc. 2022-2025
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_PLT_H
#define IN_BLE_PLT_H

#include "stdint.h"

typedef struct _plt_isr_fun {
	uint32_t (*ble_rand)(void);
	uint32_t (*ble_slow_clk)(void);

	uint32_t (*ble_irq_mask)(void);
	void (*ble_irq_unmask)(uint32_t primask);
	void (*ble_irq_enable)(void);

	void (*ble_mutex_wait)(void *hdl, uint32_t time_ms);
	void (*ble_mutex_release)(void *hdl);

	void *(*ble_semaphore_create)(void);
	void (*ble_semaphore_delete)(void *hdl);
	void (*ble_semaphore_wait)(void *hdl, uint32_t time_ms);
	void (*ble_semaphore_release)(void *hdl);

	void (*ble_event_signal)(void); 
	void (*ble_stack_signal)(void); 

	void (*ble_assert_error)(const char *file, int line);
	void (*ble_assert_param)(const char *file, int line, int param0, int param1);
	void (*ble_assert_warn)(const char *file, int line, int param0, int param1);

	int (*ble_trace_uart_write)(void *hdl, uint8_t *buffer, uint16_t buffer_len, void *arg, void (*callback)(void *, int, int ));
	int (*ble_trace_uart_read)(void *hdl, uint8_t *buffer, uint16_t buffer_len, void *arg, void(*callback)(void *, int, int));

	void (*ble_adv_ignore_timestamp)(int en);

} plt_isr_fun_t;

typedef struct _plt_fun {
	int (*ble_ecc_pub_key_async_start)(const uint8_t *secret_key);
	int (*ble_ecc_ecdh_key_async_start)(const uint8_t *secret_key, const uint8_t* pub_x, const uint8_t* pub_y);
	int (*ble_ecc_check_finish)(void);
	int (*ble_ecc_key_async_end)(uint8_t *key_x, uint8_t *key_y);
	int (*ble_ecc_valid_point)(uint8_t *Px, uint8_t *Py);

	void (*ble_clock_init)(void);
	uint32_t (*ble_get_em_size)(void);

	void (*ble_irq_disable)(void);
	int (*ble_stack_task_init)(void *arg);
	int (*ble_event_task_init)(void);
	void *(*ble_mutex_create)(void);
	void (*ble_mutex_delete)(void *hdl);

	void *(*ble_hci_init)(void *arg);
	void (*ble_hci_deinit)(void *hdl);
	void (*ble_hci_write)(void *hdl, uint8_t *buffer, uint16_t buffer_len, void (*callback)(void *arg, uint8_t status), void *arg);
	void (*ble_hci_read)(void *hdl, uint8_t *buffer, uint16_t buffer_len, void(*callback)(void *arg, uint8_t status), void *arg);
	void (*ble_hci_flow_on)(void *hdl);
	void (*ble_hci_flow_off)(void *hdl);

	void *(*ble_trace_uart_init)(void);
	void (*ble_trace_uart_deinit)(void *hdl);

	void (*ble_power_register)(void *arg, int (*pow_state)(void *arg, uint32_t *duration), void (*pow_down)(void *arg, uint32_t duration), void (*pow_up)(void * arg));

	void (*osc_irq_enable)(void);
	void (*osc_irq_disable)(void);

} plt_fun_t;

extern plt_isr_fun_t g_plt_isr_fun;
extern plt_fun_t g_plt_fun;
extern void ble_isr_cb(void* arg);

typedef struct {
    void (*stk_sig)(void);
} ble_stack_cb_t;

void ble_stack_cb_set(ble_stack_cb_t *cb);

#endif	/* IN_BLE_PLT_H */
