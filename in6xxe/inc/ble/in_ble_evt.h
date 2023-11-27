/**
 ****************************************************************************************
 *
 * @file in_ble_evt.h
 *
 * @brief BLE stack events
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_EVT_H
#define IN_BLE_EVT_H

/**
 ****************************************************************************************
 * @defgroup IN_BLE_EVT BLE event code  
 * @ingroup BLE
 * @brief  BLE event code
 * @{
 ****************************************************************************************
 */

/// Events defines for Battery Services
enum 
{
	/// GAP event code start with 0x0000
	GAP_EVT_CODE = 0x0100,

	/// GATT event code start with 0x0300
	GATT_EVT_CODE = 0x0200,

	/// L2CAP event code start with 0x0200
	L2CAP_EVT_CODE = 0x0300,

	BAS_EVT_CODE = 0x0400,

	DIS_EVT_CODE = 0x0500,

	HOGP_EVT_CODE = 0x0600,

	ANP_EVT_CODE = 0x0700,

	PASP_EVT_CODE = 0x0800,

	MESH_EVT_CODE = 0x0900,

	EVT_CALLBACK_CODE = 0x1000,

	EVT_BLE_MAX = 0x8000,
};

typedef struct {
	/// ID of the event
	uint16_t evt_id;
	uint16_t pad;
	/// Variable size parameter for this event
	uint8_t param[];
} ble_evt_t;

typedef struct {
	int conidx;
	int status;
	void *response;
	comp_cb callback;
} evt_cb_t;

/// @} IN_BLE_EVT

#endif	/* IN_BLE_EVT_H */

