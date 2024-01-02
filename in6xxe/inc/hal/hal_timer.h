/**
 ****************************************************************************************
 *
 * @file hal_timer.h
 *
 * @brief Generic timer header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_TIMER_H
#define HAL_TIMER_H

/**
 ****************************************************************************************
 * @defgroup HAL_TIM timer driver  
 * @ingroup HAL
 * @brief  HAL_TIM
 * @{
 ****************************************************************************************
 */

#include "in_mmap.h"
#include "in_compile.h"
#include "./hal/hal_clk.h"

/*
 * Defines Regular Timer (no sleep)
 ****************************************************************************************
 */

#define TMR_SMEM_EMIT_EMPTY               0x1
#define TMR_SMEM_CAP_FULL                 0x2
#define TMR_SMEM_EMIT_FIFO_UNDERFLOW      0x4
#define TMR_SMEM_EMIT_FIFO_OVERFLOW       0x8
#define TMR_SMEM_EMIT_REG_FIFO_UNDERFLOW  0x10
#define TMR_SMEM_EMIT_REG_FIFO_OVERFLOW   0x20
#define TMR_SMEM_CAP_FIFO_UNDERFLOW       0x40
#define TMR_SMEM_CAP_FIFO_OVERFLOW        0x80
#define TMR_SMEM_CAP_REG_FIFO_UNDERFLOW   0x100
#define TMR_SMEM_CAP_REG_FIFO_OVERFLOW    0x200

/// Timer Id
enum tmr_id {
    TMR0_ID,
    TMR1_ID,
    TMR2_ID,
    TMR3_ID,
    TMR4_ID,
    TMR5_ID,
    TMR6_ID, //adv timer
    TMR7_ID,
    TMR8_ID,
    TMR9_ID,
    TMR_ID_MAX,
};

/// Timer Signal Capture Id
enum cap_id {
    CAP0_ID,
    CAP1_ID,
    CAP2_ID,
    CAP3_ID,
    CAP_ID_MAX,
};

/// Timer Emit Id 
enum emit_id {
    EMIT0_ID,
    EMIT1_ID,
    EMIT2_ID,
    EMIT3_ID,
    EMIT4_ID,
    EMIT5_ID,
    EMIT6_ID,
    EMIT7_ID,
    EMIT8_ID,
    EMIT9_ID,
    EMIT_ID_MAX,
};

typedef struct tmr_emit_option_s{
    uint8_t auto_clr; //Clear the emit signal automatically
    uint8_t touch_clr; //Clear the emit signal by write to touch register 
    uint8_t sig_default;
    uint8_t sig_toggle;
    uint8_t toggle_default;
    uint8_t toggle_pol;
} tmr_emit_option_t;

/*
 * Defines Timer 
 ****************************************************************************************
 */


/*
 * Defines Slow Timer (can sleep)  
 ****************************************************************************************
 */

#define SLP_TMR_NB 4
#define SLP_TMR_MAX_64 0xFFFFFFFFFFFFFFFF
#define SLP_TMR_MAX_32 0xFFFFFFFF

enum aon_tmr_id {
    AON_TMR0_ID,
    AON_TMR1_ID,
    AON_TMR2_ID,
    AON_TMR3_ID,
    AON_TMR_MAX,
};

enum aon_tmr_sts {
    AON_TMR_STS_EN = 0x1,
    AON_TMR_STS_TOUCH = 0x2,
    AON_TMR_STS_IRQ_CLR = 0x4,
    AON_TMR_STS_MANU_MODE = 0x8,
    AON_TMR_STS_MANU_TICK = 0x10,
};

enum aon_cap_id {
    AON_CAP0_ID,
    AON_CAP1_ID,
    AON_CAP_ID_MAX,
};

enum aon_emit_id {
    AON_EMIT0_ID,
    AON_EMIT1_ID,
    AON_EMIT_ID_MAX,
};

enum aon_int_status_bit {
    AON_TMR0_INT_TMO,
    AON_TMR1_INT_TMO,
    AON_TMR2_INT_TMO,
    AON_TMR3_INT_TMO,
    AON_TMR2_INT_CAP0,
    AON_TMR2_INT_CAP1,
    AON_TMR2_INT_EMIT0,
    AON_TMR2_INT_EMIT1,
};


/*
 * Defines Shared (sleep and non sleep) Error Code  
 ****************************************************************************************
 */
/// (Aon) Timer error code
enum tmr_err {
    TMR_ERR_OK = 0,
    TMR_ERR_INVALID_PARAM = -1,
    TMR_ERR_IN_USE = -2,
    TMR_ERR_BAD_STATE = -3,
    TMR_ERR_INVALID_ID = -4,
    TMR_ERR_NOT_READY = -5,
    TMR_ERR_TIMEOUT = -6,
} ;

/*
 * Inline AON Functions
 ****************************************************************************************
 */

static FORCEINLINE void aon_tmr_init_tick(uint32_t addr, uint32_t tick)         
{
    WR_WORD(addr, tick);
}

static FORCEINLINE uint32_t aon_tmr_init_tick_sts(uint32_t addr)            
{
    return (RD_WORD(addr));
}

static FORCEINLINE void aon_tmr0_init_tick(uint32_t tick)
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_0_INIT_VAL, tick);
}

static FORCEINLINE uint32_t aon_tmr0_init_tick_sts(void)            
{
    return RD_WORD(GLOBAL2_REG_AON_TIMER_0_INIT_VAL_STS);
}

static FORCEINLINE void aon_tmr1_init_tick(uint32_t tick)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_1_INIT_VAL, tick);
}

static FORCEINLINE uint32_t aon_tmr1_init_tick_sts(void)            
{
    return RD_WORD(GLOBAL2_REG_AON_TIMER_1_INIT_VAL_STS);
}

static FORCEINLINE void aon_tmr2_init_tick(uint32_t tick)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_2_INIT_VAL, tick);
}

static FORCEINLINE uint32_t aon_tmr2_init_tick_sts(void)            
{
    return RD_WORD(GLOBAL2_REG_AON_TIMER_2_INIT_VAL_STS);
}

static FORCEINLINE void aon_tmr3_init_tick(uint64_t tick)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO, (uint32_t)tick);
    WR_WORD(GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI, (uint32_t)(tick >> 31));
}

static FORCEINLINE uint64_t aon_tmr3_init_tick_sts(void)            
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_STS) | (RD_WORD(GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_STS) << 31)) ;
}

static FORCEINLINE void aon_tmr_snap_tick(int id)           
{
    WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, (RD_WORD(GLOBAL2_REG_SNAPSHOT_CTRL) |(1 << 20 << id)));
}

static FORCEINLINE uint32_t aon_tmr_read_tick(uint32_t addr)            
{
    return RD_WORD(addr);
}

static FORCEINLINE void aon_tmr0_snap_tick(void)            
{
    WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, (RD_WORD(GLOBAL2_REG_SNAPSHOT_CTRL)|GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_0_TAKE_SNAPSHOT));
}

static FORCEINLINE uint32_t aon_tmr0_read_tick(int id)          
{
    return RD_WORD(GLOBAL2_REG_AON_TIMER_0_SNAPSHOT_VAL);
}

static FORCEINLINE void aon_tmr1_snap_tick(void)            
{
    WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, (RD_WORD(GLOBAL2_REG_SNAPSHOT_CTRL)|GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_1_TAKE_SNAPSHOT));
}

static FORCEINLINE uint32_t aon_tmr1_read_tick(int id)          
{
    return RD_WORD(GLOBAL2_REG_AON_TIMER_1_SNAPSHOT_VAL);
}

static FORCEINLINE void aon_tmr2_snap_tick(void)            
{
    WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, (RD_WORD(GLOBAL2_REG_SNAPSHOT_CTRL)|GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_2_TAKE_SNAPSHOT));
}

static FORCEINLINE uint32_t aon_tmr2_read_tick(void)          
{
    return RD_WORD(GLOBAL2_REG_AON_TIMER_2_SNAPSHOT_VAL);
}

static FORCEINLINE void aon_tmr3_snap_tick(void)            
{
    WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, (RD_WORD(GLOBAL2_REG_SNAPSHOT_CTRL)|GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_3_TAKE_SNAPSHOT));
}

static FORCEINLINE uint64_t aon_tmr3_read_tick(void)            
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_LO)|(RD_WORD(GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_HI) << 31));
}

static FORCEINLINE void aon_tmr_clk_en(int id)          
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|(1 << id)));
}

static FORCEINLINE void aon_tmr_clk_dis(int id)         
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~(1 << id)));
}

static FORCEINLINE void aon_tmr0_clk_en(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER0_CLK_EN));
}

static FORCEINLINE void aon_tmr0_clk_dis(void)          
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER0_CLK_EN));
}

static FORCEINLINE void aon_tmr1_clk_en(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER1_CLK_EN));
}

static FORCEINLINE void aon_tmr1_clk_dis(void)          
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER1_CLK_EN));
}

static FORCEINLINE void aon_tmr2_clk_en(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_CLK_EN));
}

static FORCEINLINE void aon_tmr2_clk_dis(void)          
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_CLK_EN));
}

static FORCEINLINE void aon_tmr3_clk_en(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER3_CLK_EN));
}

static FORCEINLINE void aon_tmr3_clk_dis(void)          
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER3_CLK_EN));
}

static FORCEINLINE void aon_tmr_reload_en(int id)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|(1 << 8 << id)));
}

static FORCEINLINE void aon_tmr_reload_dis(int id)          
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~(1 << 8 << id)));
}

static FORCEINLINE void aon_tmr0_reload_en(void)            
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER0_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr0_reload_dis(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER0_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr1_reload_en(void)            
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER1_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr1_reload_dis(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER1_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr2_reload_en(void)            
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr2_reload_dis(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr3_reload_en(void)            
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER3_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr3_reload_dis(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER3_AUTO_RELOAD_EN));
}

static FORCEINLINE void aon_tmr_en(uint32_t addr)           
{
    WR_WORD(addr, (RD_WORD(addr)|Bit0));
}

static FORCEINLINE int aon_tmr_en_sts(uint32_t addr)            
{
    return (RD_WORD(addr) & Bit0);
}

static FORCEINLINE void aon_tmr0_en(void)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_0_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_0_CTL)|Bit0));
}

static FORCEINLINE int aon_tmr0_en_sts(void)            
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_0_STS) & Bit0);
}

static FORCEINLINE void aon_tmr1_en(void)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_1_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_1_CTL)|Bit0));
}

static FORCEINLINE int aon_tmr1_en_sts(void)            
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_1_STS) & Bit0);
}

static FORCEINLINE void aon_tmr2_en(void)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_2_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_2_CTL)|Bit0));
}

static FORCEINLINE int aon_tmr2_en_sts(void)            
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_2_STS) & Bit0);
}

static FORCEINLINE void aon_tmr3_en(void)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_3_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_3_CTL)|Bit0));
}

static FORCEINLINE int aon_tmr3_en_sts(void)            
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_3_STS) & Bit0);
}

static FORCEINLINE void aon_tmr_dis(uint32_t addr)          
{
    WR_WORD(addr, (RD_WORD(addr)&~Bit0));
}

static FORCEINLINE int aon_tmr_dis_sts(uint32_t addr)           
{
    return ((RD_WORD(addr) & Bit0) ? 0 : 1);
}

static FORCEINLINE void aon_tmr0_dis(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_0_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_0_CTL)&~Bit0));
}

static FORCEINLINE int aon_tmr0_dis_sts(void)           
{
    return ((RD_WORD(GLOBAL2_REG_AON_TIMER_0_STS) & Bit0) ? 0 : 1);
}

static FORCEINLINE void aon_tmr1_dis(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_1_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_1_CTL)&~Bit0));
}

static FORCEINLINE int aon_tmr1_dis_sts(void)           
{
    return ((RD_WORD(GLOBAL2_REG_AON_TIMER_1_STS) & Bit0) ? 0 : 1);
}

static FORCEINLINE void aon_tmr2_dis(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_2_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_2_CTL)&~Bit0));
}

static FORCEINLINE int aon_tmr2_dis_sts(void)           
{
    return ((RD_WORD(GLOBAL2_REG_AON_TIMER_2_STS) & Bit0) ? 0 : 1);
}

static FORCEINLINE void aon_tmr3_dis(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_3_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_3_CTL)&~Bit0));
}

static FORCEINLINE int aon_tmr3_dis_sts(void)           
{
    return ((RD_WORD(GLOBAL2_REG_AON_TIMER_3_STS) & Bit0) ? 0 : 1);
}

static FORCEINLINE void aon_tmr_touch(uint32_t addr)            
{
    WR_WORD(addr, (RD_WORD(addr) | Bit1));
}

static FORCEINLINE int aon_tmr_touch_sts(uint32_t addr)         
{
    return (RD_WORD(addr) & Bit1);
}

static FORCEINLINE void aon_tmr0_touch(void)            
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_0_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_0_CTL)|Bit1));
}

static FORCEINLINE int aon_tmr0_touch_sts(void)         
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_0_STS) & Bit1) >> 1) & 1);
}

static FORCEINLINE void aon_tmr1_touch(int toggle)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_1_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_1_CTL)|Bit1));
}

static FORCEINLINE int aon_tmr1_touch_sts(void)         
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_1_STS) & Bit1) >> 1) & 1);
}

static FORCEINLINE void aon_tmr2_touch(int toggle)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_2_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_2_CTL)|Bit1));
}

static FORCEINLINE int aon_tmr2_touch_sts(void)         
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_2_STS) & Bit1) >> 1) & 1);
}

static FORCEINLINE void aon_tmr3_touch(int toggle)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_3_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_3_CTL)|Bit1));
}

static FORCEINLINE int aon_tmr3_touch_sts(void)         
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_3_STS) & Bit1) >> 1) & 1);
}

static FORCEINLINE void aon_tmr_irq_clr(uint32_t addr, uint32_t sts_addr)           
{
    WR_WORD(addr, Bit7 |Bit2 | RD_WORD(sts_addr));
}

static FORCEINLINE int aon_tmr_irq_clr_sts(uint32_t addr)           
{
    return (((RD_WORD(addr) & Bit2) >> 2) & 1);
}

static FORCEINLINE void aon_tmr0_irq_clr(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_0_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_0_CTL)|Bit2));
}

static FORCEINLINE int aon_tmr0_irq_clr_sts(void)           
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_0_STS) & Bit2) >> 2) & 1);
}

static FORCEINLINE void aon_tmr1_irq_clr(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_1_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_1_CTL)|Bit2));
}

static FORCEINLINE int aon_tmr1_irq_clr_sts(void)           
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_1_STS) & Bit2) >> 2) & 1);
}

static FORCEINLINE void aon_tmr2_irq_clr(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_2_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_2_CTL)|Bit2));
}

static FORCEINLINE int aon_tmr2_irq_clr_sts(void)           
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_2_STS) & Bit2) >> 2) & 1);
}

static FORCEINLINE void aon_tmr3_irq_clr(void)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_3_CTL, (RD_WORD(GLOBAL2_REG_AON_TIMER_3_CTL)|Bit2));
}

static FORCEINLINE int aon_tmr3_irq_clr_sts(void)           
{
    return (((RD_WORD(GLOBAL2_REG_AON_TIMER_3_STS) & Bit2) >> 2) & 1);
}

static FORCEINLINE void aon_tmr_manual_en(uint32_t addr)            
{
    WR_WORD(addr, (RD_WORD(addr) | Bit3));
}

static FORCEINLINE int aon_tmr_manual_en_sts(uint32_t addr)         
{
    return ((RD_WORD(addr) & Bit3) >> 3);
}

static FORCEINLINE void aon_tmr_manual_dis(uint32_t addr)           
{
    WR_WORD(addr, (RD_WORD(addr) & ~Bit3));
}

static FORCEINLINE int aon_tmr_manual_dis_sts(uint32_t addr)            
{
    return ((RD_WORD(addr) & Bit3) >> 3);
}

static FORCEINLINE void aon_tmr_manual_tick_en(uint32_t addr)           
{
    WR_WORD(addr, (RD_WORD(addr) | Bit4));
}

static FORCEINLINE int aon_tmr_manual_tick_en_sts(uint32_t addr)            
{
    return (((RD_WORD(addr) & Bit4) >> 4) & 1);
}

static FORCEINLINE void aon_tmr_manual_tick_dis(uint32_t addr)          
{
    WR_WORD(addr, (RD_WORD(addr) & ~Bit4));
}

static FORCEINLINE int aon_tmr_manual_tick_dis_sts(uint32_t addr)           
{
    return (((RD_WORD(addr) & Bit4) >> 4) & 1);
}

static FORCEINLINE void aon_tmr_wup_en(int id)          
{
    WR_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL, (RD_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL)|(1<<id)));
}

static FORCEINLINE void aon_tmr_wup_dis(int id)         
{
    WR_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL, (RD_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL)&~(1<<id)));
}

static FORCEINLINE void aon_tmr_int_clk_en(void)
{
    WR_WORD(GLOBAL_REG_CLK_ENABLE_1, (RD_WORD(GLOBAL_REG_CLK_ENABLE_1)|GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_AON_TIMER_INTR_CLK));
}

static FORCEINLINE void aon_tmr_int_clk_dis(void)
{
    WR_WORD(GLOBAL_REG_CLK_ENABLE_1, (RD_WORD(GLOBAL_REG_CLK_ENABLE_1)&~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_AON_TIMER_INTR_CLK));
}

static FORCEINLINE uint32_t aon_tmr_int_status(void)            
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_INTR_STATUS));
}   

static FORCEINLINE uint32_t aon_tmr_int_mask_status(void)           
{
    return (RD_WORD(GLOBAL2_REG_AON_TIMER_INTR_MASK_STATUS));
}   

static FORCEINLINE void aon_tmr_int_clear(uint32_t status)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_CLEAR, status);
}   

static FORCEINLINE void aon_tmr_int_set(int idx)            
{
    
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_SET, (1 << idx));
}   

static FORCEINLINE void aon_tmr_int_mask_set(int idx)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_MASK_SET, (1 << idx));
}   

static FORCEINLINE void aon_tmr_cap_int_mask_set(int idx)           
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_MASK_SET, (1 << AON_TMR2_INT_CAP0 << idx));
}   

static FORCEINLINE void aon_tmr_emit_int_mask_set(int idx)          
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_MASK_SET, (1 << AON_TMR2_INT_EMIT0 << idx));
}   

static FORCEINLINE void aon_tmr_int_mask_clear(int idx)         
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR, (1 << idx));
}   

static FORCEINLINE void aon_tmr_cap_int_mask_clear(int idx)         
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR, (1 << AON_TMR2_INT_CAP0 << idx));
}   

static FORCEINLINE void aon_tmr_emit_int_mask_clear(int idx)            
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR, (1 << AON_TMR2_INT_EMIT0 << idx));
}   

static FORCEINLINE void aon_tmr_cap_clk_en(void)            
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)|AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_CAP_CLK_EN));
}

static FORCEINLINE void aon_tmr_cap_clk_dis(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL)&~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_CAP_CLK_EN));
}

static FORCEINLINE void aon_tmr_cap_rise_en(int idx)            
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)|(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_REDGE_EN_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_cap_rise_dis(int idx)           
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)&~(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_REDGE_EN_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_cap_fall_en(int idx)            
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)|(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_FEDGE_EN_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_cap_fall_dis(int idx)           
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)&~(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_FEDGE_EN_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_cap_sig(int idx, int hw_id)         
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, ((RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL) & ~(0xFF << (16 + (idx << 3)))) | ((hw_id &0xFF) << (16 + (idx << 3)))));
}

static FORCEINLINE uint32_t aon_tmr_cap_read_tick(int idx)          
{
    return (RD_WORD(GLOBAL_REG_AON_TIMER2_CAP_VAL_0 + (idx << 2)));
}

static FORCEINLINE void aon_tmr_emit_clk_en(void)           
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL) |AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_EMIT_CLK_EN));
}

static FORCEINLINE void aon_tmr_emit_clk_dis(void)          
{
    WR_WORD(AON_REG_AON_TIMER_CLK_CTRL, (RD_WORD(AON_REG_AON_TIMER_CLK_CTRL) &~AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_EMIT_CLK_EN));
}

static FORCEINLINE void aon_tmr_emit_en(int idx)            
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)|(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_EN_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_emit_dis(int idx)           
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)&~(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_EN_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_emit_auto_clr_en(int idx)           
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)|(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_AUTO_CLR_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_emit_auto_clr_dis(int idx)          
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)&~(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_AUTO_CLR_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_emit_touch_clr_en(int idx)          
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)|
                            (1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOUCH_CLR_EMIT_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_emit_touch_clr_dis(int idx)         
{
    WR_WORD(AON_REG_AON_TIMER2_MISC_CTRL, (RD_WORD(AON_REG_AON_TIMER2_MISC_CTRL)&
                            ~(1 << AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOUCH_CLR_EMIT_SHIFT << idx)));
}

static FORCEINLINE void aon_tmr_emit_set_tick(int idx, uint32_t tick)           
{
    WR_WORD((AON_REG_AON_TIMER2_EMIT_VAL_0 + (idx << 2)), tick);
}

static FORCEINLINE void aon_tmr_emit_wup_en(int idx)            
{
    WR_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL, (RD_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL)|(1 << 4 << idx)));
}

static FORCEINLINE void aon_tmr_emit_wup_dis(int idx)           
{
    WR_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL, (RD_WORD(AON_REG_AON_TIMER_WAKE_UP_SEL)&~(1 << 4 << idx)));
}

static FORCEINLINE void aon_tmr_emit_man_clr(int idx)
{
    WR_WORD(GLOBAL2_REG_AON_TIMER_2_CTL, Bit0 | (RD_WORD(GLOBAL2_REG_AON_TIMER_2_CTL)|(1 << 16 << idx)));
}
/*
 * Inline Timer Functions
 ****************************************************************************************
 */
static FORCEINLINE void tmr_all_enable(void)
{
    WR_WORD(TIMERS_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_REGS_TIMERS_MISC_CTRL) | Bit0));
}

static FORCEINLINE void tmr_intr_reset(int en)
{
    uint32_t reg = RD_WORD(TIMERS_REGS_TIMERS_MISC_CTRL);
    if (en) {
        reg |= Bit1;
    } else {
        reg &= ~Bit1;
    }
    WR_WORD(TIMERS_REGS_TIMERS_MISC_CTRL, reg);
}

static FORCEINLINE void tmr_add_all_enable(void)
{
    WR_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL) | Bit0));
}

static FORCEINLINE void tmr_add_intr_reset(int en)
{
    uint32_t reg = RD_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL);
    if (en) {
        reg |= Bit1;
    } else {
        reg &= ~Bit1;
    }
    WR_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL, reg);
}

static FORCEINLINE void tmr_manual_en(int id)
{
    if (id < TMR6_ID) 
        WR_WORD(TIMERS_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_REGS_TIMERS_MISC_CTRL) | (1 << 16 << id)));
    else
        WR_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL) | (1 << (16 + id - 6))));
}

static FORCEINLINE void tmr_manual_dis(int id)
{
    if (id < TMR6_ID) 
        WR_WORD(TIMERS_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_REGS_TIMERS_MISC_CTRL) & ~(1 << 16 << id)));
    else
        WR_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL) & ~(1 << (16 + id - 6))));
}

static FORCEINLINE void tmr_manual_tick(int id)
{
    if (id < TMR6_ID)
        WR_WORD(TIMERS_REGS_MANUAL_TICK, (1 << id));
    else
        WR_WORD(TIMERS_REGS_MANUAL_TICK, (1 << (8 + id -6)));
}

static FORCEINLINE void tmr_reload_en(int id)
{
    if (id < TMR6_ID)
        WR_WORD(TIMERS_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_REGS_TIMERS_MISC_CTRL) | (1 << 24 << id)));
    else
        WR_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL) | (1 << (24 + id - 6))));
}

static FORCEINLINE void tmr_reload_dis(int id)
{
    if (id < TMR6_ID)
        WR_WORD(TIMERS_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_REGS_TIMERS_MISC_CTRL) & ~(1 << 24 << id)));
    else
        WR_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL, (RD_WORD(TIMERS_ADD_REGS_TIMERS_MISC_CTRL) & ~(1 << (24 + id - 6))));
}

static FORCEINLINE void tmr_touch(int id)
{
    if (id < TMR6_ID)
        WR_WORD(TIMERS_REGS_TOUCH, (1 << id));
    else
        WR_WORD(TIMERS_REGS_TOUCH, (1 << (8 + id -6)));
}

static FORCEINLINE void tmr_enable(uint32_t addr)
{
    WR_WORD(addr, (RD_WORD(addr) | Bit0));
}

static FORCEINLINE void tmr0_enable(void)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) | Bit0));
}

static FORCEINLINE void tmr1_enable(void)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) | Bit0));
}

static FORCEINLINE void tmr2_enable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_2_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_2_CTRL) | Bit0));
}

static FORCEINLINE void tmr3_enable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_3_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_3_CTRL) | Bit0));
}

static FORCEINLINE void tmr4_enable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_4_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_4_CTRL) | Bit0));
}

static FORCEINLINE void tmr5_enable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_5_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_5_CTRL) | Bit0));
}

static FORCEINLINE void tmr_disable(uint32_t addr)
{
    WR_WORD(addr, (RD_WORD(addr) & ~Bit0));
}

static FORCEINLINE void tmr0_disable(void)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) & ~Bit0));
}

static FORCEINLINE void tmr1_disable(void)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) & ~Bit0));
}

static FORCEINLINE void tmr2_disable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_2_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_2_CTRL) & ~Bit0));
}

static FORCEINLINE void tmr3_disable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_3_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_3_CTRL) & ~Bit0));
}

static FORCEINLINE void tmr4_disable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_4_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_4_CTRL) & ~Bit0));
}

static FORCEINLINE void tmr5_disable(void)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_5_CTRL, (RD_WORD(TIMERS_REGS_BASIC_TIMER_5_CTRL) & ~Bit0));
}

static FORCEINLINE void tmr_init_tick(uint32_t addr,  uint32_t tick)
{
    WR_WORD(addr, tick);
}

static FORCEINLINE uint32_t tmr_read_init_tick(uint32_t addr)
{
    return RD_WORD(addr);
}

static FORCEINLINE void tmr0_init_tick(uint32_t tick)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_INIT_VAL, tick);
}

static FORCEINLINE uint32_t tmr0_read_init_tick(void)
{
    return RD_WORD(TIMERS_REGS_ADV_TIMER_0_INIT_VAL);
}

static FORCEINLINE void tmr1_init_tick(uint32_t tick)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_INIT_VAL, tick);
}

static FORCEINLINE uint32_t tmr1_read_init_tick(void)
{
    return RD_WORD(TIMERS_REGS_ADV_TIMER_1_INIT_VAL);
}

static FORCEINLINE void tmr2_init_tick(uint32_t tick)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_2_INIT_VAL, tick);
}

static FORCEINLINE uint32_t tmr2_read_init_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_2_INIT_VAL);
}

static FORCEINLINE void tmr3_init_tick(uint32_t tick)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_3_INIT_VAL, tick);
}

static FORCEINLINE uint32_t tmr3_read_init_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_3_INIT_VAL);
}

static FORCEINLINE void tmr4_init_tick(uint32_t tick)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_4_INIT_VAL, tick);
}

static FORCEINLINE uint32_t tmr4_read_init_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_4_INIT_VAL);
}

static FORCEINLINE void tmr5_init_tick(uint32_t tick)
{
    WR_WORD(TIMERS_REGS_BASIC_TIMER_5_INIT_VAL, tick);
}

static FORCEINLINE uint32_t tmr5_read_init_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_5_INIT_VAL);
}

static FORCEINLINE uint32_t tmr_read_tick(uint32_t addr)
{
    return RD_WORD(addr);
}

static FORCEINLINE uint32_t tmr0_read_tick(void)
{
    return RD_WORD(TIMERS_REGS_ADV_TIMER_0_CURR_VAL);
}

static FORCEINLINE uint32_t tmr1_read_tick(void)
{
    return RD_WORD(TIMERS_REGS_ADV_TIMER_1_CURR_VAL);
}

static FORCEINLINE uint32_t tmr2_read_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_2_CURR_VAL);
}

static FORCEINLINE uint32_t tmr3_read_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_3_CURR_VAL);
}

static FORCEINLINE uint32_t tmr4_read_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_4_CURR_VAL);
}

static FORCEINLINE uint32_t tmr5_read_tick(void)
{
    return RD_WORD(TIMERS_REGS_BASIC_TIMER_5_CURR_VAL);
}

static FORCEINLINE void tmr_int_clear(int id)
{
    if (id < TMR6_ID)
        WR_WORD(TIMERS_REGS_TIMEOUT_IRQ_CLR, (1 << id));
    else
        WR_WORD(TIMERS_REGS_TIMEOUT_IRQ_CLR, (1 << (8 + id - 6)));
    
}

static INLINE void tmr_systick_enable(uint32_t init_count)
{
    uint32_t reg = RD_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL);
    reg &= ~(TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_FINECNT_LMT);
    reg |= (init_count & TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_FINECNT_LMT_MASK) << TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_FINECNT_LMT_SHIFT;
    reg |= TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_EN;
    WR_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL, reg);

    reg = RD_WORD(AON_REG_SYSTICK_AON_CTRL);
    reg |= AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_EN;
    WR_WORD(AON_REG_SYSTICK_AON_CTRL, reg);
}

static INLINE void tmr_systick_disable(void)
{
    uint32_t reg = RD_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL);
    reg &= ~(TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_EN);
    WR_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL, reg);
}

static FORCEINLINE uint32_t tmr_systick_coarse_count(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_CURR_COARSECNT);
}

static FORCEINLINE uint32_t tmr_systick_fine_count(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_CURR_FINECNT);
}

static INLINE void tmr_systick_sleep(void)
{
    uint32_t reg = RD_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL);
    reg |= TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_GO_TO_SLEEP;
    reg &= ~TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_WAKEUP;
    WR_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL, reg);
    /// poll sleep storage done bit
    while (!(RD_WORD(TIMERS_REGS_SYSTICK_INTR_STATUS) & 0x2));
    /// clear the storage done bit
    WR_WORD(TIMERS_REGS_SYSTICK_INTR_CLEAR, 0x2);
    
}

static INLINE void tmr_systick_wup(void)
{
    uint32_t reg = RD_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL);
    reg &= ~TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_GO_TO_SLEEP;
    reg |= TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_WAKEUP;
    WR_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL, reg);
    /// poll wake up compensation done bit
    while (!(RD_WORD(TIMERS_REGS_SYSTICK_INTR_STATUS) & 0x1));
    /// clear the storage done bit
    WR_WORD(TIMERS_REGS_SYSTICK_INTR_CLEAR, 0x1);

}

static INLINE void tmr_systick_reset(void)
{
    uint32_t reg = RD_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL);
    reg |= TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_RESET;
    WR_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL, reg);
    reg &= ~TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_RESET;
    WR_WORD(TIMERS_REGS_SYSTICK_MISC_CTRL, reg);
}

static INLINE void tmr_systick_clk_ratio(uint32_t frac, uint32_t integer)
{
    uint32_t reg = (frac & TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_FRAC_SYSCLK_IN_SLPCLK_MASK);
    reg |= (integer & TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_INT_SYSCLK_IN_SLPCLK_MASK) << TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_INT_SYSCLK_IN_SLPCLK_SHIFT;
    WR_WORD(TIMERS_REGS_SYSTICK_CLK_RATIO, reg);
}

static FORCEINLINE void tmr_systick_clk_ratio_set(uint32_t ratio)
{
    WR_WORD(TIMERS_REGS_SYSTICK_CLK_RATIO, ratio);
}

static FORCEINLINE uint32_t tmr_systick_clk_ratio_get(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_CLK_RATIO);
}


static FORCEINLINE uint32_t tmr_systick_slp_clk_count(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_SLP_CLK_CNT);
}

static FORCEINLINE uint32_t tmr_systick_slp_fine_count(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_SLP_FINE_CNT);
}

static FORCEINLINE uint32_t tmr_systick_slp_coarse_count(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_SLP_COARSE_CNT);
}

static FORCEINLINE uint32_t tmr_systick_store_coarse_count(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_STORED_COARSE_CNT);
}

static FORCEINLINE uint32_t tmr_systick_store_fine_count(void)
{
    return RD_WORD(TIMERS_REGS_SYSTICK_STORED_FINE_CNT);
}

static FORCEINLINE uint32_t tmr_adv_int_status(uint32_t addr)
{
    return RD_WORD(addr);
}

static FORCEINLINE uint32_t tmr0_adv_int_status(void)
{
    return RD_WORD(TIMERS_REGS_TIMER0_MISC_INTR_STATUS);
}

static FORCEINLINE uint32_t tmr1_adv_int_status(void)
{
    return RD_WORD(TIMERS_REGS_TIMER1_MISC_INTR_STATUS);
}

static FORCEINLINE uint32_t tmr_adv_int_mask_status(uint32_t addr)
{
    return RD_WORD(addr);
}

static FORCEINLINE uint32_t tmr0_adv_int_mask_status(void)
{
    return RD_WORD(TIMERS_REGS_TIMER0_MISC_INTR_MASK_STATUS);
}

static FORCEINLINE uint32_t tmr1_adv_int_mask_status(void)
{
    return RD_WORD(TIMERS_REGS_TIMER1_MISC_INTR_MASK_STATUS);
}

static FORCEINLINE void tmr_adv_int_clr_all(uint32_t addr)
{
    WR_WORD(addr, 0x3FFF);
}

static FORCEINLINE void tmr0_adv_int_clr_all(void)
{
    WR_WORD(TIMERS_REGS_TIMER0_MISC_INTR_CLEAR, 0x3FFF);
}

static FORCEINLINE void tmr1_adv_int_clr_all(void)
{
    WR_WORD(TIMERS_REGS_TIMER1_MISC_INTR_CLEAR, 0x3FFF);
}

static FORCEINLINE void tmr_adv_int_clr(uint32_t addr, uint32_t mask)
{
    WR_WORD(addr, mask);
}

static FORCEINLINE void tmr0_adv_int_clr(uint32_t mask)
{
    WR_WORD(TIMERS_REGS_TIMER0_MISC_INTR_CLEAR, mask);
}

static FORCEINLINE void tmr1_adv_int_clr(uint32_t mask)
{
    WR_WORD(TIMERS_REGS_TIMER1_MISC_INTR_CLEAR, mask);
}

static FORCEINLINE void tmr_adv_int_mask(uint32_t addr, uint32_t bit)
{
    WR_WORD(addr, (1 << bit));
}

static FORCEINLINE void tmr0_adv_int_mask(uint32_t bit)
{
    WR_WORD(TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET, (1 << bit));
}

static FORCEINLINE void tmr1_adv_int_mask(uint32_t bit)
{
    WR_WORD(TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET, (1 << bit));
}

static FORCEINLINE void tmr_adv_int_mask_all(uint32_t addr)
{
    WR_WORD(addr, 0x3FFF);
}

static FORCEINLINE void tmr0_adv_int_mask_all(void)
{
    WR_WORD(TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET, 0x3FFF);
}

static FORCEINLINE void tmr1_adv_int_mask_all(void)
{
    WR_WORD(TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET, 0x3FFF);
}

static FORCEINLINE void tmr_adv_int_unmask(uint32_t addr, uint32_t bit)
{
    WR_WORD(addr, (1 << bit));
}

static FORCEINLINE void tmr0_adv_int_unmask(uint32_t bit)
{
    WR_WORD(TIMERS_REGS_TIMER0_MISC_INTR_MASK_CLEAR, (1 << bit));
}

static FORCEINLINE void tmr1_adv_int_unmask(uint32_t bit)
{
    WR_WORD(TIMERS_REGS_TIMER1_MISC_INTR_MASK_CLEAR, (1 << bit));
}

static FORCEINLINE void tmr_adv_cap_rise_en(uint32_t addr, int idx)
{
    WR_WORD(addr, (RD_WORD(addr) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr0_adv_cap_rise_en(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr1_adv_cap_rise_en(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr_adv_cap_rise_dis(uint32_t addr, int idx)
{
    WR_WORD(addr, (RD_WORD(addr) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr0_adv_cap_rise_dis(uint32_t addr, int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr1_adv_cap_rise_dis(uint32_t addr, int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr_adv_cap_fall_en(uint32_t addr, int idx)
{
    WR_WORD(addr, (RD_WORD(addr) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr0_adv_cap_fall_en(uint32_t addr, int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr1_adv_cap_fall_en(uint32_t addr, int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr_adv_cap_fall_dis(uint32_t addr, int idx)
{
    WR_WORD(addr, (RD_WORD(addr) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr0_adv_cap_fall_dis(uint32_t addr, int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr1_adv_cap_fall_dis(uint32_t addr, int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT << idx)));
}

static FORCEINLINE void tmr_adv_cap_sig(uint32_t addr, int idx, uint8_t sig_id)
{
    WR_WORD(addr, ((RD_WORD(addr) & ~(0xFF << (idx << 3))) | (((sig_id & 0xFF) << (idx << 3)))));
}

static FORCEINLINE void tmr0_adv_cap_sig(int idx, uint8_t sig_id)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL, ((RD_WORD(TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL) & ~(0xFF << (idx << 3))) | (((sig_id & 0xFF) << (idx << 3)))));
}

static FORCEINLINE void tmr1_adv_cap_sig(int idx, uint8_t sig_id)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL, ((RD_WORD(TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL) & ~(0xFF << (idx << 3))) | (((sig_id & 0xFF) << (idx << 3)))));
}

static FORCEINLINE uint32_t tmr_adv_cap_tick(uint32_t addr, int idx)
{
    return RD_WORD(addr + (idx * 4));
}

static FORCEINLINE uint32_t tmr0_adv_cap_tick(int idx)
{
    return RD_WORD(TIMERS_REGS_ADV_TIMER_0_CAP_VAL_0 + (idx * 4));
}

static FORCEINLINE uint32_t tmr1_adv_cap_tick(int idx)
{
    return RD_WORD(TIMERS_REGS_ADV_TIMER_1_CAP_VAL_0 + (idx * 4));
}

static FORCEINLINE void tmr_adv_emit_en(uint32_t addr, int idx)
{
    
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(addr, (RD_WORD(addr) | (1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_SHIFT + idx - 8))));
    } else {
        WR_WORD(addr, (RD_WORD(addr) | (1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_SHIFT + idx))));
    }   
}

static FORCEINLINE void tmr0_adv_emit_en(int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) | (1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) | (1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_SHIFT + idx))));
    }   
    
}

static FORCEINLINE void tmr1_adv_emit_en(int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) | (1 << (TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE2_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) | (1 << (TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE_SHIFT + idx))));
    }   
}

static FORCEINLINE void tmr_adv_emit_dis(uint32_t addr, int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(addr, (RD_WORD(addr) & ~(1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_SHIFT + idx - 8))));
    } else {
        WR_WORD(addr, (RD_WORD(addr) & ~(1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_SHIFT + idx))));
    }   
}

static FORCEINLINE void tmr0_adv_emit_dis(int idx)
{
    
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) & ~(1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) & ~(1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_SHIFT + idx))));
    }
}

static FORCEINLINE void tmr1_adv_emit_dis(int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) & ~(1 << (TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE2_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) & ~(1 << (TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE_SHIFT + idx))));
    }
}

static FORCEINLINE void tmr_adv_emit_touch_clr_en(uint32_t addr, int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(addr, (RD_WORD(addr) | (1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2_SHIFT + idx - 8))));
    } else {
        WR_WORD(addr, (RD_WORD(addr) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_SHIFT << idx)));
    }
}

static FORCEINLINE void tmr0_adv_emit_touch_clr_en(int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) | (1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) | (1 << TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_SHIFT << idx)));
    }
}

static FORCEINLINE void tmr1_adv_emit_touch_clr_en(int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) | (1 << (TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT2_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) | (1 << TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT_SHIFT << idx)));
    }
}


static FORCEINLINE void tmr_adv_emit_touch_clr_dis(uint32_t addr, int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(addr, (RD_WORD(addr) & ~(1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2_SHIFT + idx - 8))));
    } else {
        WR_WORD(addr, (RD_WORD(addr) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_SHIFT << idx)));
    }
}

static FORCEINLINE void tmr0_adv_emit_touch_clr_dis(int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) & ~(1 << (TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL) & ~(1 << TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_SHIFT << idx)));
    }
}

static FORCEINLINE void tmr1_adv_emit_touch_clr_dis(int idx)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) & ~(1 << (TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT_SHIFT + idx - 8))));
    } else {
        WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL) & ~(1 << TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT_SHIFT << idx)));
    }
}

static FORCEINLINE void tmr_adv_emit_auto_clr_en(uint32_t addr, int idx)
{
    WR_WORD(addr, (RD_WORD(addr) | (1 << idx)));
}

static FORCEINLINE void tmr0_adv_emit_auto_clr_en(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL1, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL1) | (1 << idx)));
}

static FORCEINLINE void tmr1_adv_emit_auto_clr_en(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL1, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL1) | (1 << idx)));
}

static FORCEINLINE void tmr_adv_emit_auto_clr_dis(uint32_t addr, int idx)
{
    WR_WORD(addr, (RD_WORD(addr) & ~(1 << idx)));
}

static FORCEINLINE void tmr0_adv_emit_auto_clr_dis(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL1, (RD_WORD(TIMERS_REGS_ADV_TIMER_0_CTRL1) & ~(1 << idx)));
}

static FORCEINLINE void tmr1_adv_emit_auto_clr_dis(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL1, (RD_WORD(TIMERS_REGS_ADV_TIMER_1_CTRL1) & ~(1 << idx)));
}

static FORCEINLINE void tmr_adv_emit_manual_clr(uint32_t addr, int idx)
{
    WR_WORD(addr, (1 << idx));
}

static FORCEINLINE void tmr0_adv_emit_manual_clr(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_0_EMIT_CLR, (1 << idx));
}

static FORCEINLINE void tmr1_adv_emit_manual_clr(int idx)
{
    WR_WORD(TIMERS_REGS_ADV_TIMER_1_EMIT_CLR, (1 << idx));
}

static FORCEINLINE int tmr_adv_emit_status(uint32_t addr, int idx)
{
    return ((RD_WORD(addr) >> idx) & 1);
}

static FORCEINLINE int tmr0_adv_emit_status(int idx)
{
    return ((RD_WORD(TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS) >> idx) & 1);
}

static FORCEINLINE int tmr1_adv_emit_status(int idx)
{
    return ((RD_WORD(TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS) >> idx) & 1);
}

static FORCEINLINE void tmr_adv_emit_set_tick(uint32_t addr, int idx, uint32_t tick)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD((addr + (idx *4) + 8), tick);
    } else {
        WR_WORD((addr + (idx *4)), tick);
    }
    
}

static FORCEINLINE void tmr0_adv_emit_set_tick(int idx, uint32_t tick)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD((TIMERS_REGS_ADV_TIMER_0_EMIT_0 + (idx *4) + 8), tick);
    } else {
        WR_WORD((TIMERS_REGS_ADV_TIMER_0_EMIT_0 + (idx *4)), tick);
    }
    
}

static FORCEINLINE void tmr1_adv_emit_set_tick(int idx, uint32_t tick)
{
    if ((idx == 8) || (idx == 9)) {
        WR_WORD((TIMERS_REGS_ADV_TIMER_1_EMIT_0 + (idx *4) + 8), tick);
    } else {
        WR_WORD((TIMERS_REGS_ADV_TIMER_1_EMIT_0 + (idx *4)), tick);
    }
}

static FORCEINLINE void tmr_adv_emit_toggle_default(uint32_t addr, int idx, int val)
{
    uint32_t reg = RD_WORD(addr);
    if (val) {
        reg |= 1 << (10 + idx);
    }else {
        reg &= ~(1 << (10 + idx));
    }
    WR_WORD(addr, reg);
}

static FORCEINLINE void tmr_adv_emit_toggle_pol(uint32_t addr, int idx, int val)
{
    uint32_t reg = RD_WORD(addr);
    if (val) {
        reg |= 1 << (15 + idx);
    }else {
        reg &= ~(1 << (15 + idx));
    }
    WR_WORD(addr, reg);
}

static FORCEINLINE void tmr_adv_emit_sig_toggle(uint32_t addr, int idx, int val)
{
    uint32_t reg = RD_WORD(addr);
    if (val) {
        reg |= 1 << (20 + idx);
    }else {
        reg &= ~(1 << (20 + idx));
    }
    WR_WORD(addr, reg);
}

static FORCEINLINE void tmr_adv_emit_sig_default(uint32_t addr, int idx, int val)
{
    uint32_t reg = RD_WORD(addr);
    if (val) {
        reg |= 1 << idx;
    }else {
        reg &= ~(1 << idx);
    }
    WR_WORD(addr, reg);
}

static FORCEINLINE void tmr_smem_emit_en(uint32_t addr)
{
    WR_WORD(addr, RD_WORD(addr) | TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_EN);
}

static FORCEINLINE void tmr_smem_emit_rst(uint32_t addr)
{
    uint32_t reg = RD_WORD(addr);
    WR_WORD(addr, reg | TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_RESET);
    WR_WORD(addr, reg & ~TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_RESET);
}


static FORCEINLINE void tmr_smem_emit_dis(uint32_t addr)
{
    WR_WORD(addr, RD_WORD(addr) & ~TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_EN);
}

static FORCEINLINE void tmr_smem_emit_set_max_num(uint32_t addr, uint32_t num)
{
    WR_WORD(addr, (RD_WORD(addr) & ~TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1) 
    | ((num & TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1_MASK) << TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1_SHIFT));
}
static FORCEINLINE uint32_t tmr_smem_emit_get_max_num(uint32_t addr)
{
    return (RD_WORD(addr) & TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1) >> TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1_SHIFT;
}
static FORCEINLINE void tmr_smem_emit_empty_th(uint32_t addr, uint32_t num)
{
    WR_WORD(addr, (RD_WORD(addr) & ~TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH)
    | ((num & TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH_MASK) << TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH_SHIFT));
}

static FORCEINLINE void tmr_smem_emit_set_tick(uint32_t addr, uint32_t val)
{
    WR_WORD(addr, val);
    RD_WORD(addr);
}

static FORCEINLINE uint32_t tmr_smem_emit_data_num(uint32_t addr)
{
    uint32_t reg = RD_WORD(addr);
    uint32_t smem = (reg & TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM)>>TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM_SHIFT;
    uint32_t reg_fifo = (reg & TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO)>>TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO_SHIFT;
    uint32_t fifo = (reg & TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO)>>TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO_SHIFT;
    return smem + reg_fifo + fifo;
}

static FORCEINLINE void tmr_smem_cap_en(uint32_t addr)
{
    WR_WORD(addr, RD_WORD(addr) | TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_EN);
}

static FORCEINLINE void tmr_smem_cap_dis(uint32_t addr)
{
    WR_WORD(addr, RD_WORD(addr) & ~TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_EN);
}

static FORCEINLINE void tmr_smem_cap_set_max_num(uint32_t addr, uint32_t num)
{
    WR_WORD(addr, (RD_WORD(addr) & ~TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1) 
    | ((num & TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1_MASK) << TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1_SHIFT));
}

static FORCEINLINE uint32_t tmr_smem_cap_get_max_num(uint32_t addr)
{
    return (RD_WORD(addr) & TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1) >> TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1_SHIFT;
}

static FORCEINLINE void tmr_smem_cap_full_th(uint32_t addr, uint32_t num)
{
    WR_WORD(addr, (RD_WORD(addr) & ~TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH) 
    | ((num & TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH_MASK) << TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH_SHIFT));
}

static FORCEINLINE uint32_t tmr_smem_cap_tick(uint32_t addr)
{
    return RD_WORD(addr);
}

static FORCEINLINE uint32_t tmr_smem_intr_status(uint32_t addr)
{
    return RD_WORD(addr);
}

static FORCEINLINE uint32_t tmr_smem_intr_mask_status(void)
{
    return RD_WORD(TIMERS_REGS_SHM_IF_INTR_MASK_STATUS);
}

static FORCEINLINE void tmr_smem_intr_clr(uint32_t addr, uint32_t val)
{
    WR_WORD(addr, val);
}

static FORCEINLINE void tmr_smem_intr_mask(uint32_t val)
{
    WR_WORD(TIMERS_REGS_SHM_IF_INTR_MASK_SET, val);
}

static FORCEINLINE void tmr_smem_intr_unmask(uint32_t val)
{
    WR_WORD(TIMERS_REGS_SHM_IF_INTR_MASK_CLEAR, val);
}

static FORCEINLINE uint32_t tmr_smem_cap_data_ready(uint32_t addr)
{
    return ((RD_WORD(addr)&TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_DATA_RDY) ? 1 : 0);
}
static FORCEINLINE uint32_t tmr_smem_cap_data_num(uint32_t addr)
{
    uint32_t reg = RD_WORD(addr);
    uint32_t smem = (reg & TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM)>>TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM_SHIFT;
    uint32_t reg_fifo = (reg & TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO)>>TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO_SHIFT;
    uint32_t fifo = (reg & TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO)>>TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO_SHIFT;
    return smem + reg_fifo + fifo;
}
static FORCEINLINE uint32_t tmr_smem_cap_data(uint32_t addr)
{
    return RD_WORD(addr);
}


/*
 * Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Check if any timer is active.
 * 
 *
 * @return 1: timer is active; 0: otherwise. 
 ****************************************************************************************
 */
int hal_timer_busy(void);


/**
 ****************************************************************************************
 * @brief rigster Timer timeout callback function
 * @note This function is not context safe. Call it before start.
 *           The call back function will be called in the interrupt context. 
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] pri               Interrupt priority.   
 * @param[in] arg               Pointer to user's own context to be passed back to user. 
 * @param[in] tmr_cb            Pointer to user's provided call back function.   
 *
 * @return  @see enum tim_err
 ****************************************************************************************
*/
int hal_timer_set_tmo_callback(int tmr_id, int prio, void *arg, void (*tmr_cb)(void *));


/**
 ****************************************************************************************
 * @brief Run Timer periodic function
 * @note This function is not context safe.  Use it with care.
 * @note This function will set the timer to run user's specified time periodically. User will be informed thru 
 *              the provided call back function after each period.  The call back function will be called in the 
 *              interrupt context.  
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] reload            reload the initial value after time out
 * @param[in] manual            timers manual mode enable. 1 enable, 0 disable    
 * @param[in] tick              Initial value of timer clock ticks  
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_start(int tmr_id, int reload, int manual, uint32_t tick);


/**
 ****************************************************************************************
 * @brief Stop Timer periodic function
 * @note This function is not context safe.  Use it with care.
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_stop(int tim_id);


/**
 ****************************************************************************************
 * @brief start timer profile function
 * @note This function is not context safe.  Use it with care.
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_start_tick(int tim_id);

/**
 ****************************************************************************************
 * @brief timer get current tick function.
 * @note This function is not context safe.  Use it with care.
 * @note The timer start from 0xFFFFFFFF and counting down.
 * @note The "hal_timer_get_tick_us" return the lapse time in microsecond.
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 *
 * @return  Current timer ticks.
 ****************************************************************************************
 */
uint32_t hal_timer_get_tick(int tim_id);
uint32_t hal_timer_get_tick_us(int tim_id);
//float hal_timer_get_tick_us(int tim_id);

/**
 ****************************************************************************************
 * @brief timer tick stop function.
 * @note This function is not context safe.  Use it with care.
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_end_tick(int tim_id);


/**
 ****************************************************************************************
 * @brief timer delaye function
 * @note This function is not context safe.  Use it with care.
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] usec              Delay time in Microsecond.   
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_delay_us(int tim_id, uint32_t usec);

/**
 ****************************************************************************************
 * @brief Return the OS tick
 *
 * @return  Current OS tick 
 ****************************************************************************************
 */
uint32_t hal_timer_get_systick(void);

uint32_t hal_timer_us_to_tick(int tmr_id, uint32_t us);


int hal_timer_capture_set_callback(int tmr_id, int prio, void *arg, void (*callback)(void *, int, uint32_t));

/**
 ****************************************************************************************
 * @brief Add HW signal to the timer's capture list 
 * @note Only timer 0 and 1 can support capture
 * @note Each timer can capture at most 4 HW signal  
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] idx               The index for the current capture, possible values are 0, 1, 2, 3   
 * @param[in] sig_id            The HW signal ID, @see in_trig_defs.h    
 * @param[in] rise              Capture on the HW signal's rising edge   
 * @param[in] fall              Captuer on the HW signal's falling edge
 * @param[in] prio              Interrupt priority
 * @param[in] arg               User provided argument for the capture callback  
 * @param[in] callback          Pointer to user's provided call back function.
 *                                                     
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_capture_signal_add(int tmr_id, int idx, uint8_t sig_id, int rise, int fall);


/**
 ****************************************************************************************
 * @brief Remove HW signal from the timer's capture list 
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] idx               The index for the current capture, possible values are 0, 1, 2, 3   
 *                                                     
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_capture_signal_rem(int tmr_id, int idx);


int hal_timer_smem_capture_set_callback(int prio, void *arg, void (*callback)(void *parg, uint32_t sts, uint32_t cap_num));
int hal_timer_smem_capture_signal_add(int tmr_id, uint8_t sig_id, int rise, int fall, uint16_t max_num, uint16_t full_threshold);
int hal_timer_smem_capture_signal_rem(int tmr_id);
int hal_timer_smem_capture_data_read(int tmr_id, uint32_t *buffer, int len);
uint32_t hal_timer_smem_capture_get_data_num(int tmr_id);


/**
 ****************************************************************************************
 * @brief Set emit IRQ handler callback for the timer's emit
 * @note Only timer 0,1 and 6 can support emit
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] prio              Interrupt priority
 * @param[in] arg               User provided argument for the emit callback  
 * @param[in] callback          Pointer to user's provided call back function.
 *                                                     
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_emit_set_callback(int tmr_id, int prio, void *arg, void (*callback)(void *parg,int emit_idx));


/**
 ****************************************************************************************
 * @brief Add HW trigger to the timer's trigger list 
 * @note Only timer 0 and 1 can support emit
 * @note Each timer can capture at most 8 HW signal  
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] idx               The index for the current emit, possible values are 0, 1, 2, 3, 4, 5, 6, 7   
 * @param[in] tick              Trigger happens on this timer's tick(in timer clk tick unit)
 * @param[in] option            Option of emit. Use default config if it is NULL
 *                                                     
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_emit_add(int tmr_id, int idx, uint32_t tick, tmr_emit_option_t *option);



/**
 ****************************************************************************************
 * @brief Remove HW trigger from the timer's trigger list 
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] idx               The index for the current emit, possible values are 0, 1, 2, 3, 4, 5, 6, 7   
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_emit_rem(int tmr_id, int idx);


int hal_timer_smem_emit_set_callback(int tmr_id, int prio, void *arg, void (*callback)(void *parg, uint32_t sts));

/**
 ****************************************************************************************
 * @brief Add HW trigger to the timer's trigger list 
 * @note Only emit 0 of timer 0 and 6 can support smem emit 
 *
 * @param[in] tim_id            Timer Id, @see enum tim_id   
 * @param[in] ticks             Trigger happens on one of timer's ticks(in timer clk tick unit).
                                    the ticks are stored in share memory.
                                    They're in order of precedence.
 * @param[in] size              Number of ticks
 * @param[in] empty_threshold   When the number of entries is smaller than this number,
                                    an interrupt will be generated. 
 * @param[in] option            Option of emit. Use default config if it is NULL
 *                                                     
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_timer_smem_emit_add(int tmr_id, uint32_t *ticks, uint32_t size, uint16_t empty_threshold, tmr_emit_option_t *option);

int hal_timer_smem_emit_rem(int tmr_id);

uint32_t hal_timer_smem_emit_update_tick(int tmr_id, uint32_t *tick_buf, uint32_t buf_len);

/**
 ****************************************************************************************
 * @brief  Open sleep timer 
 *
 * @param[in] id                AON timer Id, @see enum aon_tmr_id
 * @param[in] wup_en            1: AON timer can wake up system; 0: Otherwise
 * @param[in] reload            1: AON timer can reload initial value; 0: Otherwise
 * @param[in] prio              Interrupt priority
 * @param[in] arg               Call back function argument
 * @param[in] isr_cb            Times up call back (Note: from interrupt context)
 *
 * @return @see enum tim_err 
 ****************************************************************************************
 */
int hal_aon_timer_open(int id, int wup_en, int reload, int prio, void *arg, void (*isr_cb)(void *arg));

/**
 ****************************************************************************************
 * @brief  Close sleep timer 
 *
 * @param[in] id                AON timer Id, @see enum aon_tmr_id
 *
 * @return @see enum tim_err 
 ****************************************************************************************
 */
int hal_aon_timer_close(int id);


/**
 ****************************************************************************************
 * @brief  Start sleep timer 
 *
 * @param[in] id                AON timer Id, @see enum aon_tmr_id
 * @param[in] time_us           Sleep time in micro second unit: 
 *                                    a. Timer 0,1,and2 is oxffffffff (32 bits)   
 *                                    b. Timer 3 is 0xffffffffffffff (64 bits) 
 *
 * @return @see enum tim_err 
 ****************************************************************************************
 */
int hal_aon_timer_start(int id, uint64_t time_us);


/**
 ****************************************************************************************
 * @brief  Stop sleep timer 
 *
 * @param[in] id                AON timer Id, @see enum aon_tmr_id
 *
 * @return @see enum tim_err 
 ****************************************************************************************
 */
int hal_aon_timer_stop(int id) ;

/**
 ****************************************************************************************
 * @brief  Get the current sleep timer tick 
 *
 * @param[in] id                AON timer Id, @see enum aon_timer_id
 *
 * @return current sleep timer tcik
 ****************************************************************************************
 */
uint64_t hal_aon_timer_get_tick(int id);

/**
 ****************************************************************************************
 * @brief  Get the current sleep timer time in microsecond 
 *
 * @param[in] id                AON timer Id, @see enum aon_timer_id
 *
 * @return current sleep timer tcik
 ****************************************************************************************
 */
uint64_t hal_aon_timer_get_time(int id);

#if CFG_PM_EN
/**
 ****************************************************************************************
 * @brief  Sleep timer resume
 *
 * @return none
 ****************************************************************************************
 */
void hal_aon_timer_resume(void);
#endif
#if !CFG_PM_EN
/**
 ****************************************************************************************
 * @brief Add HW trigger to the AON timer2's trigger list 
 *
 * @param[in] emit_id           @see enum aon_emit_id 
 * @param[in] auto_clr          Clear the emit signal automatically    
 * @param[in] touch_clr         Clear the emit signal by write to touch register   
 * @param[in] time_us           Trigger happens on AON timer2's value (tick)
 * @param[in] arg               User provided argument for the emit callback  
 * @param[in] callback          Pointer to user's provided call back function.
 *                                                     
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_aon_timer_emit_add(int emit_id, int auto_clr, int touch_clr, uint32_t time_us, int prio, void *arg, void (*callback)(void *));

/**
 ****************************************************************************************
 * @brief Remove HW trigger from the AON timer2's trigger list 
 *
 * @param[in] emit_id           @see enum aon_emit_id
 *
 * @return @see enum tim_err 
 ****************************************************************************************
 */
int hal_aon_timer_emit_rem(int emit_id);

/**
 ****************************************************************************************
 * @brief Add HW trigger to the AON timer2's trigger list 
 *
 * @param[in] emit_id           @see enum aon_emit_id 
 * @param[in] auto_clr          Clear the emit signal automatically    
 * @param[in] touch_clr         Clear the emit signal by write to touch register   
 * @param[in] time_us           Trigger happens on AON timer2's value (tick)
 * @param[in] arg               User provided argument for the emit callback  
 * @param[in] callback          Pointer to user's provided call back function.
 *                                                     
 *
 * @return  @see enum tim_err
 ****************************************************************************************
 */
int hal_aon_timer_capture_add(int cap_id, uint8_t sig_id, int rise, int fall, int prio, void *arg, void (*callback)(void *, int, uint32_t));


/**
 ****************************************************************************************
 * @brief Remove HW trigger from the AON timer2's trigger list 
 *
 * @param[in] emit_id           @see enum aon_emit_id
 *
 * @return @see enum tim_err 
 ****************************************************************************************
 */
int hal_aon_timer_capture_rem(int cap_id);

#endif

/// @} HAL_TIMER

#endif  // HAL_TIMER_H
