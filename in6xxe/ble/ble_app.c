#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file ble_app.c
 *
 * @brief BLE_APP  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "in_debug.h"

#include "ble_defines.h"

#define BLE_APP_INTERNAL

#include "hal/hal_global.h"
#include "in_ble_api.h"
#include "ble_app.h"

/*
 * Defines
 ****************************************************************************************
 */

/*
 * Data Structure
 ****************************************************************************************
 */
typedef struct {
	char ready;
	char pad[3];

	void *hdl_bs;

	char dev_name[249];
	uint16_t dev_appearance;
	
} ble_app_t;

/*
 * BLE Configuration Paramters
 ****************************************************************************************
 *
 */
static in_ble_conf_t g_ble_conf = {
	.sleep_algo_dur = CFG_BLE_PARAM_SLP_ALGO_DUR,
	.local_drift = CFG_BLE_PARAM_LPC_DRIFT,
	.twosc = CFG_BLE_PARAM_OSC_WUP_TIME,
	.twrm = CFG_BLE_PARAM_OSC_WUP_TIME,
	.twext = CFG_BLE_PARAM_OSC_WUP_TIME,
	.le_coded_phy_500 = CFG_BLE_PARAM_CODED_PHY_500_EN,
	.sleep_enable = CFG_BLE_PARAM_SLEEP_EN,
	.deep_sleep_comp_time = 	CFG_PM_DEEP_SLEEP_COMP_TIME,
	.ble_ext_wakeup_enable = 0,

	.public_key_valid = CFG_BLE_PARAM_P256_PUB_KEY_VALID,
	.private_key_valid = CFG_BLE_PARAM_P256_PRIV_KEY_VALID,
	.public_key = {CFG_BLE_PARAM_P256_PUB_KEY},
	.private_key = {CFG_BLE_PARAM_P256_PRIV_KEY},

	.ble_activity_max = BLE_ACTIVITY_MAX,
	.ble_connection_max = BLE_CONNECTION_MAX,
	.ble_rx_desc_nb = BLE_RX_DESC_NB,
	.ble_rx_data_buf_nb = BLE_DATA_BUF_NB_RX,

	.ble_tx_desc_nb = BLE_TX_DESC_NB,
	.ble_tx_desc_per_con_nb = BLE_NB_TX_DESC_PER_CON,
	.ble_tx_desc_per_act_nb = BLE_NB_TX_DESC_PER_ACT,
	.ble_tx_acl_buf_nb = BLE_ACL_BUF_NB_TX,

	.ble_tx_llcp_buf_nb = BLE_LLCPTXBUF_NB,
	.ble_tx_adv_buf_nb = BLE_ADV_BUF_NB_TX,
	.ble_whitelist_max = BLE_WHITELIST_MAX,
	.ble_resol_addr_list_max = BLE_RESOL_ADDR_LIST_MAX,

	.ble_duplicate_filter_max = BLE_DUPLICATE_FILTER_MAX,
	.ble_task_max = TASK_MAX,
	.ble_observer = BLE_OBSERVER,
	.ble_central = BLE_CENTRAL,

	.ble_peripheral = BLE_PERIPHERAL,
	.ble_broadcaster = BLE_BROADCASTER,
	.ble_atts = BLE_ATTS,
	.ble_attc = BLE_ATTC,

	.ble_l2cc = BLE_L2CC,
	.ble_smpc = BLE_SMPC,
	.ble_lecb = BLE_LECB,
	.secure_connection = (CFG_BLE_DEV_PAIR_MODE & 0x2),

	.sdr_en = CFG_SDR,
	.hci_nb_cmd_pkts = 5,//HCI_NB_CMD_PKTS,
	.max_prf_nb = CFG_NB_PRF,
#if CFG_HCI
	.app_main_task = 4,
#else
	.app_main_task = 3,
#endif

	.ble_ch_assess_rssi_interf_thr = (char)BLE_CH_ASSESS_RSSI_INTERF_THR,
	.ble_ch_map_update_period = (char)BLE_CH_MAP_UPDATE_PERIOD,
	.ble_ch_assess_count_max = (char)BLE_CH_ASSESS_COUNT_MAX,
	.ble_ch_assess_count_min = (char)BLE_CH_ASSESS_COUNT_MIN,

	.ble_ch_assess_count_thr_bad = (char)BLE_CH_ASSESS_COUNT_THR_BAD,
	.ble_adv_no_delay = CFG_BLE_ADV_NO_DELAY_EN,
	.ble_dev_tx_max_power = (CFG_BLE_DEV_TX_MAX_POWER & 0x7F),
	.ble_dev_cs_tx_pwr_en = CFG_BLE_DEV_CS_TX_PWR_EN,

	.ble_adv_frag_size_tx = BLE_ADV_FRAG_SIZE_TX,
	.ble_adv_frag_nb_tx = BLE_ADV_FRAG_NB_TX,
	.lld_prog_delay = LLD_PROG_DELAY,
	.llc_proc_switch_instant_delay = LLC_PROC_SWITCH_INSTANT_DELAY,

	.ble_ch_assess_valid_to = 	BLE_CH_ASSESS_VALID_TO,
	.ble_ch_reassess_to = BLE_CH_REASSESS_TO,

	.ble_normal_win_size = BLE_NORMAL_WIN_SIZE,
	.ble_phy_coded_normal_win_size = BLE_PHY_CODED_NORMAL_WIN_SIZE,

	.ble_prefetch_time_us = BLE_PREFETCH_TIME_US,	//150
	.ble_prefetchabort_time_us = BLE_PREFETCHABORT_TIME_US,

	.ble_reservation_time_margin_hus = BLE_RESERVATION_TIME_MARGIN_HUS,
	.sch_arb_evt_start_prog_margin = SCH_ARB_EVT_START_PROG_MARGIN,
#if CFG_SDR
	.sdr_tx_desc_nb = (CFG_SDR_MAX_DATA_SIZE/251 + 1),
#else
	.sdr_tx_desc_nb = 0,
#endif
	.ble_max_slp_time = CFG_BLE_PARAM_MAX_SLEEP_DURATION_TIME,
	.ble_adv_buf_sz = (BLE_ADV_FRAG_NB_TX*BLE_ADV_FRAG_SIZE_TX),
	.ble_trace_cfg = 0,
	.ble_ignore_timestamp = CFG_BLE_ADV_IGNORE_TIMESTAMP_EN,
	.ble_osc_int_en = CFG_BLE_OSC_INT_EN,
	.ipmac_en =CFG_BLE_IPMAC,
};

/*
 * BLE Stack Memory
 ****************************************************************************************
 */

#if CFG_BLE_STK_MEM_SIZE
static uint8_t ble_stack_mem[CFG_BLE_STK_MEM_SIZE]; 
#endif

/*
 * Static Variables
 ****************************************************************************************
 */

static ble_app_t g_app = {
	.hdl_bs = NULL,
	.dev_name = CFG_BLE_DEV_LOCAL_NAME,
	.dev_appearance = CFG_BLE_DEV_LOCAL_APPEARANCE,
};

/*
 * Static Functions
 ****************************************************************************************
 */

/*
 * Events
 ****************************************************************************************
 */

/*
 * API FUNCTIONS
 ****************************************************************************************
 */

void *ble_stack_init(uint8_t *bd_addr)
{
	ble_app_t *p_ba = &g_app;

	if (!CFG_BLE_STK_EN) 
		return NULL;

	if (!bd_addr) 
		return NULL;
	hal_ble_isr_register(NULL, ble_isr_cb);
	/// copy bd address
  	memcpy(g_ble_conf.bd_addr, bd_addr, 6);

	/// start ble task
	p_ba->hdl_bs = in_ble_init(&g_ble_conf, &g_plt_isr_fun, &g_plt_fun, (uint32_t)ble_stack_mem, CFG_BLE_STK_MEM_SIZE);

	/// ble stack handle
	if (!p_ba->hdl_bs) {
		PRINTD(DBG_TRACE, "failed: initialize ble stack, func:%s line:%d\n", __FUNCTION__, __LINE__);
		return NULL;
	}

	return (void *)p_ba->hdl_bs;
}

