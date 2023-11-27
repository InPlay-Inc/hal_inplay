/**
 ****************************************************************************************
 *
 * @file in_ble_conf.h
 *
 * @brief BLE stack configuration parameters  
 *
 * Copyright (C) Inplay Technologies Inc. 2022-2025
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_CONF_H
#define IN_BLE_CONF_H

/*
 * Structures
 ****************************************************************************************
 */

typedef struct 
{
	/// Device BD address
	uint8_t bd_addr[6];

	/// Duration of sleep and wake-up algorithm in microsecond (software time).
	///		- 0: default (200 us)
	uint16_t sleep_algo_dur;
	/// Low power clock drift in ppm: 
	///		-	0: default (500 ppm)
	uint16_t local_drift;
	/// Time for stabilization of the crystal following a sleep-timer expiry (in slow clock cycles)
	uint16_t twosc;
	/// Time for radio to be ready (in slow clock cycles)
	uint16_t twrm;
	/// Time for stabilization of the crystal following an external wake up (in slow clock cycles)
	uint16_t twext;
	/// Enable LE coded phy 500 kbps
	char le_coded_phy_500;
	/// Enable BLE deep sleep feature
	char sleep_enable;
	/// SW overhead time
	uint16_t deep_sleep_comp_time;
	/// wake up externally
	char ble_ext_wakeup_enable;

	/// Public key is valid
	char public_key_valid;
	char ble_osc_int_en;
	char ipmac_en;
	/// Public key
	uint8_t public_key[64];

	/// Private key is valid
	char private_key_valid;
	uint8_t pad4[3];
	/// Private key
	uint8_t private_key[32];

	/// Maximum number of activities 
	char ble_activity_max;
	/// Maximum number of connection 
	char ble_connection_max;
	/// RX descriptor number
	char ble_rx_desc_nb;
	/// RX data buffer number
	char ble_rx_data_buf_nb;

	/// TX descriptor total number
	char ble_tx_desc_nb;
	/// TX descriptor number per connection
	char ble_tx_desc_per_con_nb;
	/// TX descriptor number per activity
	char ble_tx_desc_per_act_nb;
	/// TX ACL data buffer number
	char ble_tx_acl_buf_nb;

	/// TX LLCP data buffer number
	char ble_tx_llcp_buf_nb;
	/// TX advertising data buffer number
	char ble_tx_adv_buf_nb;
	/// Maximum white list number
	char ble_whitelist_max;
	/// Maximum RAL list number
	char ble_resol_addr_list_max;

	/// Maximum duplicated filter number
	char ble_duplicate_filter_max;
	/// Maximum BLE task number
	char ble_task_max;
	/// Oberver role 
	char ble_observer;
	/// Central role
	char ble_central;

	/// Peripheral role
	char ble_peripheral;
	/// Broadcaster role
	char ble_broadcaster;
	/// Attributed server enable
	char ble_atts;
	/// Attributed client enable
	char ble_attc;

	/// L2CC enable
	char ble_l2cc;
	/// Secure manager enable
	char ble_smpc;
	/// LECB enable
	char ble_lecb;
	/// Security enable
	char secure_connection;

	/// Channel asses
	char ble_ch_assess_rssi_interf_thr;
	char ble_ch_map_update_period;	// in second
	char ble_ch_assess_count_max;
	char ble_ch_assess_count_min;

	char ble_ch_assess_count_thr_bad;
	/// advertising without random back off
	char ble_adv_no_delay;
	/// Maximum TX power
	char ble_dev_tx_max_power;
	/// TX power by activity enable
	char ble_dev_cs_tx_pwr_en;

	/// Maximum advertsing fragment size
	uint8_t ble_adv_frag_size_tx;
	/// Maximum advertising fragment number
	uint8_t ble_adv_frag_nb_tx;
	/// SW time (in slot unit) for programing event
	uint8_t lld_prog_delay;	
	/// Instants delay before updating new procedure 
	uint8_t llc_proc_switch_instant_delay;

	/// Maximum HCI packets number can run simultaneously
	char hci_nb_cmd_pkts;
	/// Maximum profiles number
	char max_prf_nb;
	/// Application task number
	char app_main_task;
	/// SW defined radio enable
	char sdr_en;
	char sdr_tx_desc_nb;
	/// Advertising data TX buffers size
	uint16_t ble_adv_buf_sz;	
	char ble_ignore_timestamp;

	/// Maximum duration without receiving a packet before considering a channel quality unknown  (in slots) (2 secs)
	uint16_t ble_ch_assess_valid_to;
	/// Maximum duration without receiving a packet before reintroducing a channel to the map (in slots) (20 secs)
	uint16_t ble_ch_reassess_to;

	/// Normal Rx window size (in us)
	uint16_t ble_normal_win_size;
	/// Normal Rx window size for coded phy (in us)
	// In Long Range, the symbol for the Access Address is 8 times longer than the symbol for 1Mbps.
	uint16_t ble_phy_coded_normal_win_size;

	/// Prefetch time (in us)
	uint16_t ble_prefetch_time_us;
	/// Prefetch Abort time (in us)
	/// (note 1: the prefetch abort time must be greater than prefetch time)
	/// (note 2: use less than IFS to ensure that two activities can be separated by an IFS time)
	uint16_t ble_prefetchabort_time_us;

	/// Margin for event time reservation (in half-us)
	uint16_t ble_reservation_time_margin_hus;
	/// Event start programming time margin (in slots)
	uint16_t sch_arb_evt_start_prog_margin;

	/// Ble max sleep time (0: forever)
	uint32_t ble_max_slp_time;
	/// trace config
	uint32_t ble_trace_cfg;	
} in_ble_conf_t;


#endif	/// IN_BLE_CONF_H
