/**
 ****************************************************************************************
 *
 * @file in_ble_api.h
 *
 * @brief BLE APIs header file
 *
 * Copyright (C) Inplay Technologies Inc. 2017-2018
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_API_H
#define IN_BLE_API_H

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

typedef void (*comp_cb)(int idx, int status, void *p_para);

#include "./ble/in_ble_conf.h"
#include "./ble/in_ble_plt.h"

#include "./ble/in_ble_evt.h"
#include "./ble/in_ble_error.h"
#include "./ble/in_ble_att.h"
#include "./ble/in_ble_gap.h"
#include "./ble/in_ble_gap_evt.h"
#include "./ble/in_ble_gatt.h"
#include "./ble/in_ble_gatt_evt.h"
#include "./ble/in_ble_init.h"
#include "./ble/in_ble_l2cc.h"
#include "./ble/in_ble_l2cc_evt.h"
#include "./ble/in_ble_prf.h"
#include "./ble/in_ble_sdr.h"

#endif	/* IN_BLE_API_H */
