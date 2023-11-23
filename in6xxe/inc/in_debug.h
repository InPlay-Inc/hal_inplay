//#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file in_debug.h
 *
 * @brief Inplay Debug configuration
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */

#ifndef IN_DEBUG_H
#define IN_DEBUG_H
#if 0
#include <stdio.h>
#include <assert.h>
#include "in_arm.h"
#include "../thirdparty/segger/inc/segger_rtt.h"
#define DBG_ERR	0x01
#define DBG_WARN	0x02
#define DBG_TRACE	0x04
enum dbg_if {
	DBG_IF_NONE = 0,
	DBG_IF_RTT_VIEW,
	DBG_IF_UART,
};
extern int dbg_en;
extern int dbg_flag;
extern int dbg_if;

#if (0 == CFG_DBG_IF_RTT_VIEW)
static void dummy(int flag, const char *fmt, ...) {}
#define SEGGER_RTT_printf dummy
#endif

#define PRINTD(flag, fmt, ...) do { \
		if (dbg_en) { \
			if (flag & dbg_flag) { \
				if (dbg_if == DBG_IF_RTT_VIEW) { \
					SEGGER_RTT_printf(0, fmt,  ##__VA_ARGS__); \
				} else if (dbg_if == DBG_IF_UART) { \
					printf(fmt, ##__VA_ARGS__); \
				} \
			} \
		} \
	} while(0)
#else
#include <stdio.h>
#include <assert.h>
#include "in_arm.h"
#define DBG_ERR	0x01
#define DBG_WARN	0x02
#define DBG_TRACE	0x0
#define PRINTD(flag, fmt, ...)
#endif
#endif	// IN_DEBG_H


