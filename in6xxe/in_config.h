/**
 ****************************************************************************************
 *
 * Auto Generated Project Configuration File
 *		Do not modify !!!
 *
 * @file E:\Tom\zephry\zephyrproject\hal_inplay\in6xxe\in_config.h
 * in_config tool version 3.0.0
 *
 * @brief Project Configuration File
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */
#ifndef IN_CONFIG_H
#define IN_CONFIG_H

/// @Misc::IN602
#define CFG_IN600	0
#define CFG_IN610	0
#define CFG_IN610L	0
#define CFG_IN612L	1
#define CFG_FPGA	0
/// @Misc::PM
#define CFG_LOW_POWER	0
#define CFG_PM_EN	1
#define CFG_PM_DEEP_SLEEP_THRD	0
#define CFG_PM_DEEP_SLEEP_COMP_TIME	200
#define CFG_PM_WUP_SLP_TMR	1
#if CONFIG_PM && defined CONFIG_BT_IN6XX
#define CFG_PM_WUP_BLE 	1
#else
#define CFG_PM_WUP_BLE 0
#endif
#define CFG_PM_WUP_BROWN_OUT	0
#define CFG_PM_WUP_MIX_SIGNAL	0
#define CFG_PM_WUP_UART	0
#define CFG_PM_RETN_4K_A	1
#define CFG_PM_RETN_4K_B	1
#define CFG_PM_RETN_8K	1
#define CFG_PM_RETN_16K	1
#define CFG_PM_RETN_32K_A	1
#define CFG_PM_RETN_32K_B	1
#define CFG_PM_RETN_32K_C	1
/// @Misc::RAM
#define CFG_RAM_ADD_CACHE_16K	0
#define CFG_RAM_ADD_SHM_16K	0
#define CFG_RAM_ADD_SHM_32K	0
#define CFG_RAM_BASE_ADDR	0x202000
#define CFG_RAM_SIZE	0x1e000
#define CFG_STACK_SIZE	0x400
#define CFG_HEAP_SIZE	0x400
/// @Misc::DEBUG
#define CFG_DBG_EN	0
#define CFG_DBG_IF_UART	0
#define CFG_DBG_IF_RTT_VIEW	0
#define CFG_DBG_FLAG	0
/// @Misc::CLOCK
#define CFG_ROOT_CLK_XO_32M	1
#define CFG_ROOT_CLK_XO_64M	0
#define CFG_ROOT_CLK_RC_32M	0
#define CFG_ROOT_CLK_CPLL_32M	0
#define CFG_ROOT_CLK_CPLL_64M	0
#define CFG_ROOT_CLK_CPLL_128M	0
#define CFG_XO_CAP	0x06
#define CFG_XO_DRIVE_STRENGTH	0x0f
#define CFG_XO_STABLE_TIME	0x24
#define CFG_D0_CLK_MUX	0
#define CFG_D0_CLK	16000000
#define CFG_D1_CLK_MUX	0
#define CFG_D1_CLK	16000000
#define CFG_D2_CLK_MUX	0
#define CFG_D2_CLK	32000000
#define CFG_TIM0_CLK_MUX	0
#define CFG_TIM0_CLK	8000000
#define CFG_TIM1_CLK_MUX	0
#define CFG_TIM1_CLK	8000000
#define CFG_TIM2_CLK_MUX	0
#define CFG_TIM2_CLK	8000000
#define CFG_TIM3_CLK_MUX	0
#define CFG_TIM3_CLK	8000000
#define CFG_TIM4_CLK_MUX	0
#define CFG_TIM4_CLK	8000000
#define CFG_TIM5_CLK_MUX	0
#define CFG_TIM5_CLK	8000000
#define CFG_TIM6_CLK_MUX	0
#define CFG_TIM6_CLK	8000000
#define CFG_TIM7_CLK_MUX	0
#define CFG_TIM7_CLK	8000000
#define CFG_TIM8_CLK_MUX	0
#define CFG_TIM8_CLK	8000000
#define CFG_TIM9_CLK_MUX	0
#define CFG_TIM9_CLK	8000000
#define CFG_SYSTICK_CLK_MUX	0
#define CFG_SYSTICK_CLK	8000000
#define CFG_EFUSE_CLK_MUX	1
#define CFG_EFUSE_CLK	4000000
#define CFG_SMEM_CLK_MUX	1
#define CFG_SMEM_CLK	16000000
#define CFG_QSPI_CLK_MUX	0
#define CFG_QSPI_CLK	32000000
#define CFG_AUDIO_SDM_CLK_MUX	0
#define CFG_SI2S_CLK_MUX	1
#define CFG_RTC_EN	1
#define CFG_LPC_PPM_OFFSET	0
#define CFG_RTC_CAP	0x03
#define CFG_LPC_CALIB	1
#define CFG_RTC_CLK	32768
/// @Misc::SMEM
/// [0:15]: size
/// [16:31]: address offset
#define CFG_SMEM_BLE	0x4000
#define CFG_SMEM_ANT_RX_DATA	0
#define CFG_SMEM_AUDIO_RX	0
#define CFG_SMEM_AUDIO_TX	0
#define CFG_SMEM_SADC	0
#define CFG_SMEM_AHB_TRIG	0
#define CFG_SMEM_IPMAC	0
#define CFG_SMEM_TMR_EMIT	0
#define CFG_SMEM_TMR_CAP	0
#define CFG_PM_SMEM_RETN_4K_A	1
#define CFG_PM_SMEM_RETN_4K_B	1
#define CFG_PM_SMEM_RETN_8K_A	1
#define CFG_PM_SMEM_RETN_8K_B	0
#define CFG_PM_SMEM_RETN_16K	0
#define CFG_PM_TRIG_MEM_RETN	1
#define CFG_SMEM_USED_SIZE	0x00004000
/// @Flash::SPI FLASH
#define CFG_EXT_SPI_FLASH	1
#define CFG_EXT_SPI_FLASH_MXIC	0
#define CFG_EXT_SPI_FLASH_PUYA	0
#define CFG_EXT_SPI_FLASH_GIGA	1
#define CFG_EXT_SPI_FLASH_GIGA_8M	0
#define CFG_QSPI_PIN_0	0x00002310
#define CFG_QSPI_PIN_1	0x00002111
#define CFG_QSPI_PIN_2	0x00002312
#define CFG_QSPI_PIN_3	0x00002313
#define CFG_QSPI_PIN_4	0x00002314
#define CFG_QSPI_PIN_5	0x00002315
#define CFG_QSPI_SPEED	16000000
#define CFG_EXT_SPI_FLASH_POWER_FROM_602	1
#define CFG_EXT_SPI_FLASH_POWER_ON_SETTLE_TIME	300
#define CFG_FW_UPD_EN	0
#define CFG_FLASH_PROJ_ADDR	0x304000
#define CFG_FLASH_PROJ_SIZE	0x1e000
/// @Flash::BOOTRAM
#define CFG_BRAM_COLD_BOOT_ADDR	0x304000
#define CFG_COPY_VTOR_TO_RAM	0
#define CFG_VTOR_ADDR	0x304000
#define CFG_BOOT_DISABLE_WDT	1
#define CFG_BOOT_CRC_CHECK	0
#define CFG_BRAM_BOOT_WAIT_TIME	0
#define CFG_BRAM_BOOT_OPT	2
#define CFG_BRAM_BOOT_GPIO_PORT	2
#define CFG_BRAM_BOOT_GPIO_PIN	6
#define CFG_BRAM_BOOT_GPIO_LEVEL	0
#define CFG_BRAM_SECURE_BOOT_HASH_ADDR	0x0
#define CFG_BRAM_SECURE_BOOT_HASH_SIZE	0x0
#define CFG_BRAM_SECURE_BOOT_ECDSA_SIG	\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#define CFG_BRAM_RAM_APP_EN	0
#define CFG_BRAM_RAM_APP_FLASH_ADDR	0x0
#define CFG_BRAM_RAM_APP_RAM_ADDR	0x0
#define CFG_BRAM_RAM_APP_SIZE	0x0
#define CFG_BRAM_SSPI_INT_EN	0
#define CFG_BRAM_SSPI_INT_PORT	0
#define CFG_BRAM_SSPI_INT_PIN	0
#define CFG_BRAM_SSPI_INT_LEVEL	0
/// @Peripheral::Peripheral
#define CFG_UART0_EN	1
#define CFG_UART1_EN	1
#define CFG_I2C0_EN	0
#define CFG_I2C1_EN	0
#define CFG_MSPI_EN	0
#define CFG_SSPI1_EN	0
#define CFG_SSPI2_EN	0
#define CFG_MI2S_EN	0
#define CFG_SI2S_EN	0
#define CFG_KB_EN	0
#define CFG_COUNTER_EN	0
#define CFG_ECC_EN	0
#define CFG_AES_EN	0
#define CFG_HASH_EN	0
#define CFG_WDT_EN	0
#define CFG_AUDIO_EN	0
#define CFG_EFUSE_EN	0
#define CFG_SADC_EN	0
#define CFG_QD_EN	0
#define CFG_PWM0_EN	0
#define CFG_PWM1_EN	0
#define CFG_PWM2_EN	0
#define CFG_PWM3_EN	0
#define CFG_PWM4_EN	0
#define CFG_PWM5_EN	0
#define CFG_PWM6_EN	0
#define CFG_PWM7_EN	0
/// @Peripheral::GPIO
/// [0:3]: Pin number
/// [4:7]: Port number
/// [8:11]: mux number
/// [12]: oe
/// [13]: ie
/// [16]: pd
/// [17]: pu
/// [20]: inv
#define CFG_GPIO_0_0	0x03022000
#define CFG_GPIO_0_1	0x03022001
#define CFG_GPIO_0_2	0x03022002
#define CFG_GPIO_0_3	0x03022003
#define CFG_GPIO_0_4	0x03022004
#define CFG_GPIO_0_5	0x03022005
#define CFG_GPIO_0_6	0x03022006
#define CFG_GPIO_0_7	0x03022007
#define CFG_GPIO_0_8	0x03012008
#define CFG_GPIO_1_0	0x03022010
#define CFG_GPIO_1_1	0x03023111
#define CFG_GPIO_1_2	0x03022112
#define CFG_GPIO_1_3	0x03022013
#define CFG_GPIO_1_4	0x03022014
#define CFG_GPIO_1_5	0x03022015
#define CFG_GPIO_1_6	0x03022016
#define CFG_GPIO_1_7	0x03022017
#define CFG_GPIO_1_8	0x03022018
#define CFG_GPIO_1_9	0x03012019
#define CFG_GPIO_2_0	0x03012020
#define CFG_GPIO_2_1	0x03021121
#define CFG_GPIO_2_2	0x03012022
#define CFG_GPIO_2_3	0x03022123
#define CFG_GPIO_2_4	0x03012024
#define CFG_GPIO_2_5	0x03022125
#define CFG_GPIO_2_6	0x03022026
#define CFG_GPIO_2_7	0x03022127
#define CFG_GPIO_2_8	0x03022028
#define CFG_GPIO_2_9	0x03022029
#define CFG_GPIO_3_0	0x03012030
#define CFG_GPIO_3_1	0x03022031
#define CFG_GPIO_3_2	0x03022032
#define CFG_GPIO_3_3	0x03022033
#define CFG_GPIO_3_4	0x03022034
#define CFG_GPIO_3_5	0x03022035
#define CFG_GPIO_4_0	0x03022040
#define CFG_GPIO_4_1	0x03022041
#define CFG_GPIO_4_2	0x03022042
#define CFG_GPIO_4_3	0x03022043
#ifndef BLE_BUILD_INTERNAL
/// @BLE::BLE
#define CFG_ALLROLES
#define CFG_SEC_CON
#define CFG_CON	4
#define CFG_SDR	0
#define CFG_SDR_MAX_DATA_SIZE	0
#define CFG_BLE_IPMAC	0
#define CFG_IPMAC_MAX_SLV_NUM	127
#define CFG_HCITL
#define CFG_HCI	0
#define CFG_HCI_FC	0
#define CFG_HCI_UART_BAUD	115200
#define CFG_HCI_UART_ID	0
/// @BLE::PLT
#define CFG_BLE_PARAM_BD_ADDR	0xcc, 0x04, 0x03, 0x02, 0x01, 0xab
#define CFG_BLE_PARAM_SLP_ALGO_DUR	312
#define CFG_BLE_PARAM_LPC_DRIFT	75
#define CFG_BLE_PARAM_OSC_WUP_TIME	0x30
#define CFG_BLE_PARAM_MAX_SLEEP_DURATION_TIME	0x0030d400
#define CFG_BLE_PARAM_LPC_32K_EN	0
#define CFG_BLE_PARAM_CODED_PHY_500_EN	0
#define CFG_BLE_PARAM_SLEEP_EN	1
#define CFG_BLE_ADV_NO_DELAY_EN	0
#define CFG_BLE_ADV_IGNORE_TIMESTAMP_EN	0
#define CFG_BLE_OSC_INT_EN	0
#define CFG_BLE_PARAM_WL_MAX	4
#define CFG_BLE_PARAM_RAL_MAX	3
#define CFG_BLE_PARAM_DUP_FILT_MAX	10
#define CFG_BLE_PARAM_CA_UPD_PER	4
#define CFG_BLE_PARAM_CA_RSSI_THRD	-70
#define CFG_BLE_PARAM_CA_MAX_COUNT	4
#define CFG_BLE_PARAM_CA_MIN_COUNT	-4
#define CFG_BLE_PARAM_CA_BAD_CH_THRD	-2
#define CFG_BLE_ADV_FRAG_NB_TX	1
#define CFG_BLE_ADV_FRAG_SIZE_TX	31
#define CFG_BLE_ADV_BUF_NB_TX	(CFG_CON)
#define CFG_BLE_PARAM_P256_PUB_KEY_VALID	0
#define CFG_BLE_PARAM_P256_PUB_KEY	\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#define CFG_BLE_PARAM_P256_PRIV_KEY_VALID	0
#define CFG_BLE_PARAM_P256_PRIV_KEY	\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#define CFG_BLE_PARAM_TRACE_EN	0
#define CFG_BLE_STK_EN	1
#define CFG_BLE_STK_MEM_SIZE	8192
#define CFG_BLE_STK_MEM_USAGE_PRF_EN	0
#define CFG_OS_BLE_STACK_TASK_STACK_SIZE	1768
#define CFG_OS_BLE_STACK_TASK_PRIO	0
#define CFG_OS_BLE_HCI_TASK_STACK_SIZE	0
#define CFG_OS_BLE_HCI_TASK_PRIO	0
#define CFG_OS_BLE_EVT_TASK_STACK_SIZE	1024
#define CFG_OS_BLE_EVT_TASK_PRIO	0
#define CFG_OS_BLE_NB_TASK	2
/// @BLE::DEV
#define CFG_BLE_DEV_PRIVACY	0x00
#define CFG_BLE_DEV_RENEW_DURATION	41400
#define CFG_BLE_DEV_IDENTITY_ADDR	0	///Public address
#define CFG_BLE_DEV_STATIC_ADDR	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define CFG_BLE_DEV_PAIR_MODE	0x03
#define CFG_BLE_DEV_GAP_START_HANDLE	0
#define CFG_BLE_DEV_GATT_START_HANDLE	0
#define CFG_BLE_DEV_ATT_DEV_NAME_WRT_PERM	0
#define CFG_BLE_DEV_ATT_APPERANCE_WRT_PERM	0
#define CFG_BLE_DEV_ATT_SLV_PREF_PARAM_PRESENT	0
#define CFG_BLE_DEV_ATT_SVC_CHG_FEAT_PRESENT	0
#define CFG_BLE_DEV_SUGG_MAX_TX_OCTETS	251
#define CFG_BLE_DEV_SUGG_MAX_TX_TIME	2120
#define CFG_BLE_DEV_L2CAP_MAX_MTU	251
#define CFG_BLE_DEV_L2CAP_MAX_MPS	251
#define CFG_BLE_DEV_L2CAP_MAX_LECB_CONN	0
#define CFG_BLE_DEV_PREF_TX_PHY	0
#define CFG_BLE_DEV_PREF_RX_PHY	0
#define CFG_BLE_DEV_TX_MAX_POWER	24
#define CFG_BLE_DEV_CS_TX_PWR_EN	0
#define CFG_BLE_DEV_LOCAL_NAME	"INPLAY_E0"
#define CFG_BLE_DEV_LOCAL_APPEARANCE	0x0000
#define CFG_BLE_DEV_SLV_PREF_CONN_MIN_INTV	0x0064
#define CFG_BLE_DEV_SLV_PREF_CONN_MAX_INTV	0x00c8
#define CFG_BLE_DEV_SLV_PREF_LATENCY	0x0000
#define CFG_BLE_DEV_SLV_PREF_SUP_TO	0x00fa
#define CFG_BLE_DEV_WL_NB	0
#define CFG_BLE_DEV_PSM_NB	0
#define CFG_BLE_DEV_PSM_PARAMSS	
#define CFG_PRF_ANPC_EN	0
#define CFG_PRF_ANPS_EN	0
#define CFG_PRF_BASC_EN	0
#define CFG_PRF_BASS_EN	0
#define CFG_PRF_DISC_EN	0
#define CFG_PRF_DISS_EN	0
#define CFG_PRF_HOGPBH_EN	0
#define CFG_PRF_HOGPD_EN	0
#define CFG_PRF_HOGPRH_EN	0
#define CFG_PRF_MESH_EN	0
#define CFG_NB_PRF	0
/// @BLE::ADV
#define CFG_BLE_ADV_SET_NB	1
#define CFG_BLE_ADV_SET_1_NAME	adv
#define CFG_BLE_ADV_IOCAP	0
#define CFG_BLE_ADV_OOB	0
#define CFG_BLE_ADV_AUTH	0x0
#define CFG_BLE_ADV_SEC	0
#define CFG_BLE_ADV_KEY_SIZE	16
#define CFG_BLE_ADV_IKEY	0x0
#define CFG_BLE_ADV_RKEY	0x0
#define CFG_BLE_ADV_CREATE_PARAMS	\
{\
	.option=0,\
	.own_addr_type=0x00,\
	.adv_param.type=0x00,\
	.adv_param.disc_mode=0x00,\
	.adv_param.prop=0x0003,\
	.adv_param.max_tx_pwr=0,\
	.adv_param.filter_pol=0x00,\
	.adv_param.peer_addr.addr.addr={0x00,0x00,0x00,0x00,0x00,0x00},\
	.adv_param.peer_addr.addr_type=0x00,\
	.adv_param.prim_cfg.adv_intv_min=0x00000640,\
	.adv_param.prim_cfg.adv_intv_max=0x00000640,\
	.adv_param.prim_cfg.chnl_map=0x07,\
	.adv_param.prim_cfg.phy=0x01,\
	.adv_param.second_cfg.max_skip=0x00,\
	.adv_param.second_cfg.phy=0x01,\
	.adv_param.second_cfg.adv_sid=0x00,\
	.adv_param.period_cfg.adv_intv_min=0x0400,\
	.adv_param.period_cfg.adv_intv_max=0x0400,\
}
#define CFG_BLE_ADV_DATA_MAX_LEN	11
#define CFG_BLE_ADV_DATA_LEN	11,
#define CFG_BLE_ADV_DATA	\
{\
0x0a,0x09,0x43,0x47,0x4d,0x31,0x30,0x47,0x36,0x36,0x36,\
}
#define CFG_BLE_ADV_SCAN_RSP_DATA_MAX_LEN	0
#define CFG_BLE_ADV_SCAN_RSP_DATA_LEN	0,
#define CFG_BLE_ADV_SCAN_RSP_DATA	\
{\
0x00\
}
#define CFG_BLE_ADV_START_PARAMS	\
{\
	.option=0,\
	.u.adv_param.duration=0x0000,\
	.u.adv_param.max_adv_evt=0x00,\
}
#define CFG_BLE_ADV_CONN_UPD_EN	0,
#define CFG_BLE_ADV_CONN_UPD_PARAMS	\
{\
	.intv_min=0x0018,\
	.intv_max=0x0018,\
	.latency=0x0000,\
	.time_out=0x07d0,\
}
/// @BLE::SCAN
#define CFG_BLE_SCAN_SET_NB	0
/// @BLE::INIT
#define CFG_BLE_INIT_SET_NB	0
/// @BLE::SYNC
#define CFG_BLE_PER_SYNC_SET_NB	0
#endif	// BLE_BUILD_INTERNAL
/// @OS::APP
#define CFG_NO_OS	1
#define CFG_OS_ROM	1
#define CFG_OS_NB_USR_TASK	0
#define CFG_OS_NB_USR_PRIV_TASK	0
#define CFG_OS_USR_PRIV_TASK_TOTAL_STACK_SIZE	0
/// @OS::OS
#define OS_TASKCNT	(2 + CFG_OS_BLE_NB_TASK + CFG_OS_NB_USR_TASK)
#define OS_STKSIZE	256
#define OS_MAINSTKSIZE	256
#define OS_PRIVCNT	(CFG_OS_NB_USR_PRIV_TASK + CFG_OS_BLE_NB_TASK)
#define OS_PRIVSTKSIZE	890
#define OS_TICK	1000
#define OS_ROBINTOUT	5
#define OS_STKCHECK	1
#define OS_STKINIT	0
#define OS_SYSTICK	1
#define OS_TIMERS	0
#define OS_TIMERSTKSZ	0
#define OS_TIMERPRIO	0
#define OS_CLOCK	CFG_D2_CLK

#endif // IN_CONFIG_H
