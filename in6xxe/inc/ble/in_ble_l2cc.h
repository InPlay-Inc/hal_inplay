/**
 ****************************************************************************************
 *
 * @file in_ble_l2cc.h
 *
 * @brief BLE L2CAP 
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_L2CC_H
#define IN_BLE_L2CC_H

/**
 ****************************************************************************************
 * @defgroup IN_BLE_L2CC BLE L2CAP  
 * @ingroup BLE
 * @brief  BLE L2CAP
 * @{
 ****************************************************************************************
 */

#include <stdint.h>

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

/*
 * Structures
 ****************************************************************************************
 */

/// LE credit based connection request
typedef struct 
{
    /// parameter used for internal usage
    uint8_t  pkt_id;
    /// LE Protocol/Service Multiplexer
    uint16_t le_psm;
    /// Local Channel identifier (0: automatically allocate a free channel)
    uint16_t local_cid;
    /// Credit allocated for the LE Credit Based Connection
    /// Shall be at least: floor(((SDU + 2) + (MPS - 1)) / MPS) + 1
    /// To be sure that 1 SDU can be fully received without requesting credits to application
    uint16_t local_credit;
    /// Maximum SDU size - Shall not exceed device MTU
    uint16_t local_mtu;
    /// Maximum Packet size - Shall not exceed device MPS
    uint16_t local_mps;
} ble_lecb_connect_t;

/// LE credit based connection indication
typedef struct 
{
    /// Status
    uint8_t  status;
    /// LE Protocol/Service Multiplexer
    uint16_t le_psm;
    /// Local Channel identifier
    uint16_t local_cid;
    ///  Destination Credit for the LE Credit Based Connection
    uint16_t peer_credit;
    /// Maximum SDU size
    uint16_t peer_mtu;
    /// Maximum Packet size
    uint16_t peer_mps;
} ble_lecb_connect_ind_t;

/// LE credit based connection request confirmation
typedef struct 
{
    /// Peer Channel identifier
    uint16_t peer_cid;
    /// True to accept the incoming connection, False else
    bool accept;
    /// Local Channel identifier (0: automatically allocate a free channel)
    uint16_t local_cid;
    /// Credit allocated for the LE Credit Based Connection
    /// Shall be at least: floor(((SDU + 2) + (MPS - 1)) / MPS) + 1
    /// To be sure that 1 SDU can be fully received without requesting credits to application
    uint16_t local_credit;
    /// Maximum SDU size - Shall not exceed device MTU
    uint16_t local_mtu;
    /// Maximum Packet size - Shall not exceed device MPS
    uint16_t local_mps;
} ble_lecb_connect_cfm_t;


/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief LE credit based connection request 
 *	
 * @param[in] conidx				Connection index
 * @param[in] p_conx				Pointer to connect request structure
 * @param[out] p_ind				Pointer to connect indicator
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_lecb_connect(void *hdl, int conidx, ble_lecb_connect_t *p_conx, ble_lecb_connect_ind_t *p_ind, comp_cb callback);

/**
 ****************************************************************************************
 * @brief LE credit based connection request confirmation
 *	
 * @param[in] conidx				Connection index
 * @param[in] p_cfm					Pointer to confirm structure
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_lecb_connect_req_cfm(void *hdl, uint8_t conidx, ble_lecb_connect_cfm_t *p_cfm);

/**
 ****************************************************************************************
 * @brief LE credit based disconnect request
 *	
 * @param[in] conidx				Connection index
 * @param[in] local_cid				Local channel ID
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_lecb_disconnect(void *hdl, int conidx, int local_cid, comp_cb callback);

/**
 ****************************************************************************************
 * @brief LE credit based credit addition
 *	
 * @param[in] conidx				Connection index
 * @param[in] local_cid				Local channel ID
 * @param[in] credit				Credit to add
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_lecb_add_credit(void *hdl, int conidx, int local_cid, int credit, comp_cb callback);

/**
 ****************************************************************************************
 * @brief LE Send data over an LE Credit Based Connection
 *	
 * @param[in] conidx				Connection index
 * @param[in] local_cid				Local channel ID
 * @param[in] data					Send data
 * @param[in] data_length		Send data length
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_lecb_sdu_send(void *hdl, int conidx, int local_cid, uint8_t *data, int data_length, comp_cb callback);


/// @} IN_BLE_L2CC

#endif	/* IN_BLE_GAP_H */

