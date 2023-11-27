/**
 ****************************************************************************************
 *
 * @file in_ble_prf.h
 *
 * @brief Header file - Profile Types
 *
 * Copyright (C) Inplay 2018-2021
 *
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_PRF_H
#define IN_BLE_PRF_H
#include "in_ble_att.h"
/**
 ****************************************************************************************
 * @addtogroup PRF_TYPES
 * @ingroup IN_PRF
 * @brief Definitions of shared profiles types
 *
 * @{
 ****************************************************************************************
 */

/*
 * DEFINES
 ****************************************************************************************
 */

/*
 * Macros
 ****************************************************************************************
 */


/*
 * Enumerations
 ****************************************************************************************
 */

/// Possible values for setting client configuration characteristics
enum ble_cli_conf
{
    /// Stop notification/indication
    CLI_STOP_NTFIND = 0x0000,
    /// Start notification
    CLI_START_NTF,
    /// Start indication
    CLI_START_IND,
};

/// Possible values for setting server configuration characteristics
enum ble_srv_conf
{
    /// Stop Broadcast
    SRV_STOP_BCST = 0x0000,
    /// Start Broadcast
    SRV_START_BCST,
};

/// Connection type
enum ble_con_type
{
    ///Discovery type connection
    CON_DISCOVERY = 0x00,
    /// Normal type connection
    CON_NORMAL    = 0x01,
};

enum ble_svc_type
{
	PRIMARY_SERVICE = 0x00,
	SECONDARY_SERVICE = 0x01
};

/// Notification config
enum ble_ntf_cfg
{
    /// Stop notification/indication
    BLE_PRF_STOP_NTFIND = 0x0000,
    /// Start notification
    BLE_PRF_CLI_START_NTF,
    /// Start indication
    BLE_PRF_CLI_START_IND,
};

/*
 * Structures
 ****************************************************************************************
 */

/// Inform that profile task has been added.
typedef struct 
{
    /// Profile task identifier
    uint16_t prf_task_id;
    /// Profile task number allocated
    uint16_t prf_task_nb;
    /// Service start handle
    /// Only applies for services - Ignored by collectors
    uint16_t start_hdl;
} ble_prf_added_t;

/**
 * Characteristic Presentation Format Descriptor structure
 * Packed size is PRF_CHAR_PRES_FMT_SIZE
 */
/// characteristic presentation information
typedef struct 
{
    /// Unit (The Unit is a UUID), @see enum in_ble_common_uuid
    uint16_t unit;
    /// Description
    uint16_t description;
    /// Format, @see enum in_ble_pres_fmt
    uint8_t format;
    /// Exponent
    uint8_t exponent;
    /// Name space, 1- SIG assigned
    uint8_t name_space;
} ble_char_pres_fmt_t;

/**
 * date and time structure
 * size = 7 bytes
 */
/// Time profile information
typedef struct 
{
    /// year time element
    uint16_t year;
    /// month time element
    uint8_t month;
    /// day time element
    uint8_t day;
    /// hour time element
    uint8_t hour;
    /// minute time element
    uint8_t min;
    /// second time element
    uint8_t sec;
} ble_date_time_t;

/**
 *  SFLOAT: Short Floating Point Type
 *
 *        +----------+----------+---------+
 *        | Exponent | Mantissa |  Total  |
 * +------+----------+----------+---------+
 * | size |  4 bits  | 12 bits  | 16 bits |
 * +------+----------+----------+---------+
 */
typedef uint16_t sfloat;

/// Attribute information
typedef struct 
{
    /// Attribute Handle
    uint16_t handle;
    /// Attribute length
    uint16_t length;
    /// Status of request
    uint8_t  status;
    /// Attribute value
    uint8_t value[];
} ble_att_info_t;

/// service handles
typedef struct 
{
    /// start handle
    uint16_t shdl;
    /// end handle
    uint16_t ehdl;
} ble_svc_t;

/// service handles
typedef struct 
{
    /// attribute handle
    uint16_t handle;
    /// included service start handle
    uint16_t start_hdl;
    /// included service  end handle
    uint16_t end_hdl;
    /// UUID length
    uint8_t uuid_len;
    /// UUID
    uint8_t uuid[BLE_UUID_128_LEN];
} ble_incl_svc_t;

/// characteristic info
typedef struct 
{
    /// Characteristic handle
    uint16_t char_hdl;
    /// Value handle
    uint16_t val_hdl;
    /// Characteristic properties
    uint8_t prop;
    /// End of characteristic offset
    uint8_t char_ehdl_off;
} ble_char_inf_t;

/// characteristic description
typedef struct 
{
    /// Descriptor handle
    uint16_t desc_hdl;
} ble_char_desc_inf_t;

/// @} PRF_TYPES

#endif
