/**
 ****************************************************************************************
 *
 * @file in_ble_gatt.h
 *
 * @brief BLE GATT 
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_GATT_H
#define IN_BLE_GATT_H

/**
 ****************************************************************************************
 * @defgroup IN_BLE_GATT BLE GATT  
 * @ingroup BLE
 * @brief  BLE GATT
 * @{
 ****************************************************************************************
 */

#include <stdint.h>
#include "in_ble_att.h"

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

/// Service Discovery Attribute type
/*@TRACE*/
enum ble_gatt_sdp_att_type
{
    /// No Attribute Information
    IN_BLE_GATT_SDP_NONE,
    /// Included Service Information
    IN_BLE_GATT_SDP_INC_SVC,
    /// Characteristic Declaration
    IN_BLE_GATT_SDP_ATT_CHAR,
    /// Attribute Value
    IN_BLE_GATT_SDP_ATT_VAL,
    /// Attribute Descriptor
    IN_BLE_GATT_SDP_ATT_DESC,
};

/// Gatt SDP type
enum ble_gatt_sdp_type
{
	/// Search specific service
	GATT_SDP_DISC_SVC, 
	/// Search for all services
    GATT_SDP_DISC_SVC_ALL, 
	/// Cancel Service Discovery Procedure
    GATT_SDP_DISC_CANCEL 
};

/// Gatt discovery type
enum ble_gatt_disc_type
{
    /// Discover all services
    GATT_DISC_ALL_SVC,
    /// Discover services by UUID
    GATT_DISC_BY_UUID_SVC,
    /// Discover included services
    GATT_DISC_INCLUDED_SVC,
    /// Discover all characteristics
    GATT_DISC_ALL_CHAR,
    /// Discover characteristic by UUID
    GATT_DISC_BY_UUID_CHAR,
    /// Discover characteristic descriptor
    GATT_DISC_DESC_CHAR,
};

/// Gatt read type
enum ble_gatt_read_type
{
    /// Read attribute
    GATT_READ,
    /// Read long attribute
    GATT_READ_LONG,
    /// Read attribute by UUID
    GATT_READ_BY_UUID,
    /// Read multiple attribute
    GATT_READ_MULTIPLE,
};

/// Gatt write type
enum ble_gatt_write_type
{
   /// Write attribute
    GATT_WRITE,
    /// Write no response
    GATT_WRITE_NO_RESPONSE,
    /// Write signed
    GATT_WRITE_SIGNED,
    /// Execute write
    GATT_EXEC_WRITE,
};

/*
 * Structures
 ****************************************************************************************
 */

/// Service Discovery Procedure (SDP)
typedef struct 
{
    /// Search start handle
    uint16_t start_hdl;
    /// Search end handle
    uint16_t end_hdl;
    /// Service UUID Length
    uint8_t  uuid_len;
    /// Service UUID
    uint8_t  uuid[];
} ble_gatt_sdp_t;

/// Attributes Discovery Structure
typedef struct 
{
    /// start handle 
    uint16_t start_hdl;
    /// end handle range
    uint16_t end_hdl;
    /// UUID length
    uint8_t  uuid_len;
    /// UUID, LSB first, Only for UUID discovery
    uint8_t  uuid[];
} ble_gatt_disc_t;

/// Simple Read (GATT_READ or GATT_READ_LONG)
typedef struct 
{
    /// attribute handle
    uint16_t handle;
    /// start offset in data payload (0 
    uint16_t offset;
    /// Length of data to read (0 = read all)
    uint16_t length;
} ble_gatt_read_simple_t;

/// Read by UUID: search UUID and read it's characteristic value (GATT_READ_BY_UUID)
/// Note: it doesn't perform an automatic read long.
typedef struct 
{
    /// Start handle
    uint16_t start_hdl;
    /// End handle
    uint16_t end_hdl;
    /// Size of UUID
    uint8_t uuid_len;
    /// UUID value
    uint8_t uuid[];
} ble_gatt_read_by_uuid_t;

/// Read Multiple short characteristic (GATT_READ_MULTIPLE)
typedef struct 
{
    /// attribute handle
    uint16_t handle;
    /// Known Handle length (shall be != 0)
    uint16_t len;
} ble_gatt_read_multiple_t;

/// request union according to read type
typedef union 
{
    /// Simple Read (GATT_READ or GATT_READ_LONG)
    ble_gatt_read_simple_t simple;
    /// Read by UUID (GATT_READ_BY_UUID)
    ble_gatt_read_by_uuid_t by_uuid;
    /// Read Multiple short characteristic (GATT_READ_MULTIPLE)
    ble_gatt_read_multiple_t multiple[1];
} ble_gatt_read_t;

/// Read command (Simple, Long, Multiple, or by UUID)
typedef struct 
{
    /// number of read (only used for multiple read)
    uint8_t nb;
    /// request union according to read type
    ble_gatt_read_t req;
} ble_gatt_read_req_t;

/// Write peer attribute value
typedef struct 
{
    /// Perform automatic execution
    /// (if false, an ATT Prepare Write will be used this shall be use for reliable write)
    bool auto_execute;
    /// Attribute handle
    uint16_t handle;
    /// Write offset
    uint16_t offset;
    /// Write length
    uint16_t length;
    /// Value to write
    uint8_t value[];
} ble_gatt_write_t;


/// Attribute Description
typedef struct 
{
    /// Attribute UUID (LSB First) 
    uint8_t uuid[BLE_UUID_128_LEN];

     /// Attribute Properties, @see enum in_ble_att_char_prop and @see enum in_ble_att_perm_prop
    uint16_t prop;


    /// Maximum length of the attribute
    ///
    /// Note:
    /// For Included Services and Characteristic Declarations, this field contains targeted
    /// handle.
    ///
    /// For Characteristic Extended Properties, this field contains 2 byte value
    /// 
    /// Not used Client Characteristic Configuration and Server Characteristic Configuration,
    /// this field is not used.
    ///
    uint16_t max_len;

	/// Attribute extended properties, @see enum in_ble_att_ext_prop 
    uint16_t ext_prop;
} ble_gatt_att_desc_t;

/// Service description
typedef struct 
{
    /// Attribute Start Handle (0 = dynamically allocated)
    uint16_t start_hdl;

	/// Service properties, @see in_ble_att_svc_prop
    uint8_t prop;

    /// Service  UUID 
    uint8_t uuid[BLE_UUID_128_LEN];

    /// Number of attributes
    uint8_t nb_att;

     /// List of attribute description present in service.
    ble_gatt_att_desc_t atts[];

} ble_gatt_svc_desc_t;

/// attribute value
typedef struct 
{
	/// Handle of the attribute 
    uint16_t handle;	
	/// Attribute value length  
    uint16_t length;	
	/// Attribute value 
    uint8_t value[];	
} ble_att_val_t;

/// attribute permission
typedef struct 
{
	/// Handle of the attribute 
	uint16_t handle;		
	/// Attribute permission, @see enum att_perm_mask
	uint16_t perm;			
	/// Extended Attribute permission, @see att_value_perm_mask	
	uint16_t ext_perm;	
} ble_att_perm_t;


/*
 * Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Exchange MTU request
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[out] p_mtu				Pointer to the server's max MTU size
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_exc_mtu(void *hdl, int conidx, uint16_t *p_mtu, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Service Discovery Procedure
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[in] sdp_type				Service Discovery Type, @see enum in_ble_gatt_sdp_type
 * @param[in] p_sdp					Pointer to service discovery paramters
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_sdp(void *hdl, int conidx, int sdp_type, ble_gatt_sdp_t *p_sdp, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Attributes Discovery
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[in] disc_type			Attribute discovery type, @see enum in_ble_gatt_disc_type
 * @param[in] p_disc					Pointer to attribute discovery paramters
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_discovery(void *hdl, int conidx, int disc_type, ble_gatt_disc_t *p_disc, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Read Attribute 
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[in] read_type			Attribute read type, @see enum in_ble_gatt_read_type
 * @param[in] p_req				Pointer to attribute read paramters
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_read(void *hdl, int conidx, int read_type, ble_gatt_read_req_t *p_req, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Write Attribute 
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[in] wrt_type				Attribute write type, @see enum in_ble_gatt_write_type
 * @param[in] p_write				Pointer to attribute write paramters
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_write(void *hdl, int conidx, int wrt_type, ble_gatt_write_t *p_write, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Execute Write command for queue writes 
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[in] execute				True: execute, false: cancel
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_excute_write(void *hdl, int conidx, bool execute, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Registration to peer device events (Indication/Notification) 
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[in] reg						True: regiter, false: unregister
 * @param[in] start_hdl			Peer attribute start handle
 * @param[in] end_hdl				Peer attribute end handle
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_register_ind_ntf_event(void *hdl, int conidx, bool reg, uint32_t start_hdl, uint32_t end_hdl, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Confirm receive Indication 
 * @note This can only issue by the Client.
 *
 * @param[in] conidx				Connection index  
 * @param[in] handle				Peer attribute handle
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_indication_cfm(void *hdl, int conidx, uint16_t handle);

/**
 ****************************************************************************************
 * @brief Send indication 
 * @note This can only issue by the Server.
 *
 * @param[in] conidx				Connection index  
 * @param[in] handle				Inidcation attribute handle
 * @param[in] length				Inidcation attribute value length
 * @param[in] value					Inidcation attribute value
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_send_ind(void *hdl, int conidx, uint32_t handle, uint32_t length, uint8_t *value, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Send notification 
 * @note This can only issue by the Server.
 *
 * @param[in] conidx				Connection index  
 * @param[in] handle				Notification attribute handle
 * @param[in] length				Notification attribute value length
 * @param[in] value					Notification attribute value
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_send_ntf(void *hdl, int conidx, uint32_t handle, uint32_t length, uint8_t *value, comp_cb callback);
int in_ble_gatt_send_ntf_direct(void *hdl, int conidx, uint32_t handle, uint32_t length, uint8_t *value);

/**
 ****************************************************************************************
 * @brief Inform Service changed 
 * @note This can only issue by the Server.
 *
 * @param[in] conidx				Connection index  
 * @param[in] svc_shdl				Service start handle
 * @param[in] svc_ehdl				Service end handle
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_send_svc_changed(void *hdl, int conidx, uint32_t svc_shdl, uint32_t svc_ehdl, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Add a new Service  
 * @note This can only issue by the Server.
 *
 * @param[in] p_svc					Pointer to service data structure  
 * @param[out] p_hdl				Service handle
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_add_svc(void *hdl, ble_gatt_svc_desc_t *p_svc, uint16_t *p_hdl, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Retrieve service attribute permission  
 * @note This can only issue by the Server.
 *
 * @param[in] start_hdl			Service attribute handle  
 * @param[out] p_perm				Service attribute permission, @see enum in_ble_att_svc_perm_mask 
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_get_svc_perm(void *hdl, uint16_t start_hdl, uint8_t *p_perm, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Set service attribute permission  
 * @note This can only issue by the Server.
 *
 * @param[in] start_hdl			Service attribute handle  
 * @param[in] perm					Service attribute permission, @see enum in_ble_att_svc_perm_mask 
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_set_svc_perm(void *hdl, uint16_t start_hdl, uint8_t perm, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Retrieve attribute permission  
 * @note This can only issue by the Server.
 *
 * @param[in] handle				Attribute handle  
 * @param[out] p_perm				Pointer to return attribute permission 
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_get_att_perm(void *hdl, uint16_t handle, ble_att_perm_t *p_perm, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Set attribute permission  
 * @note This can only issue by the Server.
 *
 * @param[in] handle				Attribute handle  
 * @param[in] perm					Attribute permission, @see enum in_ble_att_perm_mask 
 * @param[in] ext_perm			Attribute extended permission, @see enum in_ble_att_value_perm_mask
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_set_att_perm(void *hdl, uint16_t handle, uint16_t perm, uint16_t ext_perm, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Retrieve attribute value  
 * @note This can only issue by the Server.
 *
 * @param[in] handle				Attribute handle  
 * @param[out] p_att_val			Pointer to return attribute value
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_get_att_value(void *hdl, uint16_t handle, ble_att_val_t *p_att_val, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Set attribute value  
 * @note This can only issue by the Server.
 *
 * @param[in] handle				Attribute handle  
 * @param[in] length				Attribute value length
 * @param[in] value					Pointer to the attribute value
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_set_att_value(void *hdl, uint16_t handle, uint16_t length, uint8_t *value, comp_cb callback);

/**
 ****************************************************************************************
 * @brief Confirm attribute prepare write reqeust  
 * @note This can only issue by the Server.
 *
 * @param[in] conidx				Connection index  
 * @param[in] handle				Attribute handle  
 * @param[in] length				Write length
 * @param[in] status				Write status
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_att_info_req_cfm(void *hdl, int conidx, uint16_t handle, uint16_t length, uint8_t status);

/**
 ****************************************************************************************
 * @brief Confirm attribute write reqeust  
 * @note This can only issue by the Server.
 *
 * @param[in] conidx				Connection index  
 * @param[in] handle				Attribute handle  
 * @param[in] status				Write status
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_write_req_cfm(void *hdl, uint8_t conidx, uint16_t handle, uint8_t status);

/**
 ****************************************************************************************
 * @brief Confirm attribute read reqeust  
 * @note This can only issue by the Server.
 *
 * @param[in] conidx				Connection index  
 * @param[in] handle				Attribute handle  
 * @param[in] status				Attribute Read status
 * @param[in] length				Attribute Read value length
 * @param[in] value					Attribute Read value
 *
 * @return IN_BLE_ERR_NO_ERROR if successful, otherwise failed. @see enum in_ble_err_t 
 ****************************************************************************************
 */
int in_ble_gatt_read_req_cfm(void *hdl, uint8_t conidx, uint16_t handle, uint8_t status, uint16_t length, uint8_t *value);

/// @} IN_BLE_GATT

#endif	/* IN_BLE_GATT_H */

