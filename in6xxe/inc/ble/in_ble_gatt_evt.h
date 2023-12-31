/**
 ****************************************************************************************
 *
 * @file in_ble_gatt_evt.h
 *
 * @brief BLE GATT events
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_GATT_EVT_H
#define IN_BLE_GATT_EVT_H

#include "./ble/in_ble_evt.h"

/**
 ****************************************************************************************
 * @addgroup IN_BLE_GATT BLE Gatt events  
 * @ingroup BLE
 * @brief  BLE Gatt stack events
 * @{
 ****************************************************************************************
 */

/*
 * Enumerations
 ****************************************************************************************
 */

/// Events defines for GATT
enum ble_gatt_evt{
	/// GATT MTU exchange indicator	
	GATT_EVT_MTU_XCHG_IND = GATT_EVT_CODE +1,
	
	/// GATT service found indication	
	GATT_EVT_DISC_SVC,

	/// GATT include service found indication	
	GATT_EVT_DISC_INCL_SVC,

	/// GATT Characteristic found indication	
	GATT_EVT_DISC_CHAR,

	/// GATT Characteristic Descriptor found indication	
	GATT_EVT_DISC_CHAR_DESC,

	/// GATT notify indication	
	GATT_EVT_NTF,

	/// GATT indication	
	GATT_EVT_IND,

	/// GATT CCC changed indication  
	GATT_EVT_CCC_CHG_IND,

	/// GATT read request indication  
	GATT_EVT_RD_REQ,

	/// GATT write request indication  
	GATT_EVT_WRT_REQ,

	/// GATT request attribute info  
	GATT_EVT_ATT_INFO_REQ,

	/// GATT SDP Service indication
	GATT_EVT_SDP_SVC,

	/// GATT Read Response indication
	GATT_EVT_RD_RSP_IND,
};

/// Discover Service indication Structure
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// exchange mtu value
    uint16_t mtu;
} ble_evt_mtu_xchg_ind_t;


/// Discover Service indication Structure
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// start handle
    uint16_t start_hdl;
    /// end handle
    uint16_t end_hdl;
    /// UUID length
    uint8_t  uuid_len;
    /// service UUID
    uint8_t  uuid[];
} ble_evt_disc_svc_ind_t;

/// Discover Service Include indication Structure
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// element handle
    uint16_t attr_hdl;
    /// start handle
    uint16_t start_hdl;
    /// end handle
    uint16_t end_hdl;
    /// UUID length
    uint8_t uuid_len;
    /// included service UUID
    uint8_t uuid[];
} ble_evt_disc_svc_incl_ind_t;

/// Discovery All Characteristic indication Structure
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// database element handle
    uint16_t attr_hdl;
    /// pointer attribute handle to UUID
    uint16_t pointer_hdl;
    /// properties
    uint8_t prop;
    /// UUID length
    uint8_t uuid_len;
    /// characteristic UUID
    uint8_t uuid[];
} ble_evt_disc_char_ind_t;

/// Discovery Characteristic Descriptor indication Structure
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// database element handle
    uint16_t attr_hdl;
    /// UUID length
    uint8_t uuid_len;
    /// Descriptor UUID
    uint8_t uuid[];
} ble_evt_disc_char_desc_ind_t;

/// Peer device triggers notification
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// Data length
    uint16_t length;
    /// Attribute handle
    uint16_t handle;
    /// Event Value
    uint8_t value[];
} ble_evt_ntf_ind_t;

/// Peer device triggers an indication
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// Data length
    uint16_t length;
    /// Attribute handle
    uint16_t handle;
    /// Event Value
    uint8_t value[];
} ble_evt_ind_ind_t;

/// Client Characteristic Configuration descriptor written by peer device indication
typedef struct 
{
	/// Connection index
	uint8_t conidx;
	/// Current value of the Client Characteristic Configuration descriptor for the Service
	/// Changed characteristic
	uint16_t ind_cfg;
} ble_evt_ccc_changed_ind_t;


/// Inform that a read request by peer deivce.
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// Handle of the attribute that has to be read
    uint16_t handle;
} ble_evt_read_req_ind_t;

/// Inform that a write request by peer device.
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// Handle of the attribute that has to be written
    uint16_t handle;
    /// offset at which the data has to be written
    uint16_t offset;
    /// Data length to be written
    uint16_t length;
    /// Data to be written in attribute database
    uint8_t  value[];
} ble_evt_write_req_ind_t;

/// Request Attribute info to upper layer - could be trigger during prepare write
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// Handle of the attribute for which info are requested
    uint16_t handle;
} ble_evt_att_info_req_ind_t;

/// Information about attribute characteristic
typedef struct 
{
    /// Attribute Type
    uint8_t att_type;
    /// Attribute handle
    uint8_t attr_hdl;
    /// Value property
    uint8_t prop;
    /// Value Handle
    uint16_t handle;
} sdp_att_char_t;


/// Information about included service
typedef struct 
{
    /// Attribute Type
    uint8_t att_type;
    /// Attribute handle
    uint8_t attr_hdl;
    /// Included service UUID Length
    uint8_t uuid_len;
    /// Included Service UUID
    uint8_t  uuid[BLE_UUID_128_LEN];
    /// Included service Start Handle
    uint16_t start_hdl;
    /// Included service End Handle
    uint16_t end_hdl;
} sdp_include_svc_t;


/// Information about attribute
typedef struct 
{
    /// Attribute Type
    uint8_t  att_type;
    /// Attribute handle
    uint8_t  attr_hdl;
    /// Attribute UUID Length
    uint8_t  uuid_len;
    /// Attribute UUID
    uint8_t  uuid[BLE_UUID_128_LEN];
} sdp_att_t;

/// Attribute information
typedef union 
{
    /// Attribute Type
    uint8_t  att_type;

    /// Information about attribute characteristic
    sdp_att_char_t att_char;
    /// Information about included service
    sdp_include_svc_t inc_svc;
    /// Information about attribute
    sdp_att_t att;
} sdp_att_info_t;


/// Service Discovery indicate that a service has been found.
typedef struct 
{
	/// Connection index
	uint8_t conidx;
    /// Service UUID Length
    uint8_t  uuid_len;
    /// Service UUID
    uint8_t  uuid[BLE_UUID_128_LEN];
    /// Service start handle
    uint16_t start_hdl;
    /// Service end handle
    uint16_t end_hdl;
    /// number of attribute information present in the service
	uint16_t nb_info;
    /// attribute info
    sdp_att_info_t info[];
} ble_evt_sdp_svc_ind_t;


/// Gatt read response indicator
typedef struct
{
	/// Connection index
	uint8_t conidx;
    /// Attribute handle
    uint16_t handle;
    /// Read offset
    uint16_t offset;
    /// Read length
    uint16_t length;
    /// Read value
    uint8_t value[];
} ble_evt_read_rsp_ind_t;

/// @} IN_BLE_GATT

#endif

