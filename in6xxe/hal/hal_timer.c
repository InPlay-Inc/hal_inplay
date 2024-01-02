#if !(CFG_BUILD_ROM)
#include "in_config.h"
#endif  // !CFG_BUILD_ROM */ 

/**
 ****************************************************************************************
 *
 * @file hal_timer.c
 *
 * @brief Generic timer implementation file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "in_arm.h"
#include "in_mmap.h"
#include "in_irq.h"
#include "in_debug.h"
#include "in_rom_if.h"

#include "./hal/hal_clk.h"
#include "./hal/hal_timer.h"
#include "./hal/hal_global.h"
#include "./hal/hal_gpio.h"

#if !(CFG_BUILD_ROM)
#if !CFG_NO_OS
#include "cmsis_os.h"
#endif  // !CFG_NO_OS
#endif  // !CFG_BUILD_ROM */ 

extern uint32_t rt_time_get(void);

/*
 * Structure
 ****************************************************************************************
 */

typedef struct {
    void *arg;
    void (*callback)(void *, int, uint32_t);
} tmr_cap_cb_t; 

typedef struct {
    int clear; 
    void *arg;
    void (*callback)(void *);
} tmr_emit_cb_t;    

typedef struct {
    char    smem_irq;
    uint8_t smem_prio;
    uint8_t emit_en;
    uint8_t cap_en;
} tmr_smem_cfg_t;

typedef struct {
    char    irq;
    uint8_t cap_en_map;
    uint8_t prio;
    uint8_t pad;
    uint16_t emit_en_map;



    uint32_t ctl1_adr;
    uint32_t cap_sig_adr;
    uint32_t cap_tick_adr;
    uint32_t emit_man_clr_adr;
    uint32_t emit_sts_adr;
    uint32_t emit_set_tick_adr;
    
    uint32_t int_sts_adr;
    uint32_t int_mask_sts_adr;
    uint32_t int_clr_adr;
    uint32_t int_mask_adr;
    uint32_t int_unmask_adr;

    uint32_t emit_ctl_adr;
    uint32_t smem_emit_ctl_adr;
    uint32_t smem_emit_tick_adr;
    uint32_t smem_emit_num_adr;
    uint32_t smem_cap_ctl_adr;
    uint32_t smem_cap_tick_adr;
    uint32_t smem_cap_num_adr;
    uint32_t smem_cap_val_adr;
    uint32_t smem_int_sts_adr;
    uint32_t smem_int_clr_adr;


    //tmr_cap_cb_t cap_cb[4];
    //tmr_emit_cb_t emit_cb[10];
    char emit_clear[8];
    void *cap_arg;
    void (*cap_cb)(void *arg, int idx, uint32_t status);
    void *emit_arg;
    void (*emit_cb)(void *arg, int idx);
    void *smem_emit_arg;
    void *smem_cap_arg;
    void (*smem_emit_cb)(void *arg, uint32_t status);
    void (*smem_cap_cb)(void *arg, uint32_t status, uint32_t cap_num);

    tmr_smem_cfg_t *smem_cfg;
} tmr_adv_t;

typedef struct {
    char tmr_id;
    char used;
    char irq;
    char mux;
    uint8_t prio;
    uint8_t pad[3];
    tmr_adv_t *pa;

    uint32_t ctl_adr;
    uint32_t init_tick_adr;
    uint32_t read_tick_adr;

    void *arg;
    void (*callback)(void *);
} tmr_dev_t;

#if !(CFG_BUILD_ROM)
static tmr_smem_cfg_t smem_cfg = {
    .smem_prio = IRQ_PRI_Normal,
    .smem_irq = Tmr_Smem_IRQn,
    .emit_en = 0,
    .cap_en = 0,
};

static tmr_adv_t tmr_adv[3] = {
    {
        .irq = Tmr0_Misc_IROn,
        .prio = IRQ_PRI_Normal,
        

        .ctl1_adr = TIMERS_REGS_ADV_TIMER_0_CTRL1,
        .cap_sig_adr = TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL,
        .cap_tick_adr = TIMERS_REGS_ADV_TIMER_0_CAP_VAL_0,
        .emit_man_clr_adr = TIMERS_REGS_ADV_TIMER_0_EMIT_CLR,
        .emit_sts_adr = TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS,
        .emit_set_tick_adr = TIMERS_REGS_ADV_TIMER_0_EMIT_0,
 
        .int_sts_adr = TIMERS_REGS_TIMER0_MISC_INTR_STATUS,
        .int_mask_sts_adr = TIMERS_REGS_TIMER0_MISC_INTR_MASK_STATUS,
        .int_clr_adr = TIMERS_REGS_TIMER0_MISC_INTR_CLEAR,
        .int_mask_adr = TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET,
        .int_unmask_adr = TIMERS_REGS_TIMER0_MISC_INTR_MASK_CLEAR,
        .emit_ctl_adr = TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL,
        .smem_emit_ctl_adr = TIMERS_REGS_EMIT_SHM_IF_CTRL,
        .smem_emit_tick_adr = TIMERS_REGS_EMIT_SHM_IF_VAL,
        .smem_emit_num_adr = TIMERS_REGS_EMIT_SHM_NUM_VAL,
        .smem_cap_ctl_adr = TIMERS_REGS_CAP_SHM_IF_CTRL,
        .smem_cap_tick_adr = TIMERS_REGS_CAP_SHM_IF_VAL,
        .smem_cap_num_adr = TIMERS_REGS_CAP_SHM_NUM_VAL,
        .smem_cap_val_adr = TIMERS_REGS_CAP_SHM_IF_VAL,
        .smem_int_sts_adr = TIMERS_REGS_SHM_IF_INTR_STATUS,
        .smem_int_clr_adr = TIMERS_REGS_SHM_IF_INTR_CLEAR,


        .cap_en_map = 0,
        .emit_en_map = 0,
        .smem_cfg = &smem_cfg,
        
    },
    {
        .irq = Tmr1_Misc_IROn,
        .prio = IRQ_PRI_Normal,
        
        .ctl1_adr = TIMERS_REGS_ADV_TIMER_1_CTRL1,
        .cap_sig_adr = TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL,
        .cap_tick_adr = TIMERS_REGS_ADV_TIMER_1_CAP_VAL_0,
        .emit_man_clr_adr = TIMERS_REGS_ADV_TIMER_1_EMIT_CLR,
        .emit_sts_adr = TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS,
        .emit_set_tick_adr = TIMERS_REGS_ADV_TIMER_1_EMIT_0,

        .int_sts_adr = TIMERS_REGS_TIMER1_MISC_INTR_STATUS,
        .int_mask_sts_adr = TIMERS_REGS_TIMER1_MISC_INTR_MASK_STATUS,
        .int_clr_adr = TIMERS_REGS_TIMER1_MISC_INTR_CLEAR,
        .int_mask_adr = TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET,
        .int_unmask_adr = TIMERS_REGS_TIMER1_MISC_INTR_MASK_CLEAR,
        .emit_ctl_adr = TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL,

        .cap_en_map = 0,
        .emit_en_map = 0,
    },
    {
        .irq = Tmr0_Add_Misc_IROn,
        .prio = IRQ_PRI_Normal,
        
        .ctl1_adr = TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1,
        .cap_sig_adr = TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL,
        .cap_tick_adr = TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_0,
        .emit_man_clr_adr = TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CLR,
        .emit_sts_adr = TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS,
        .emit_set_tick_adr = TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_0,
 
        .int_sts_adr = TIMERS_ADD_REGS_TIMER0_MISC_INTR_STATUS,
        .int_mask_sts_adr = TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_STATUS,
        .int_clr_adr = TIMERS_ADD_REGS_TIMER0_MISC_INTR_CLEAR,
        .int_mask_adr = TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_SET,
        .int_unmask_adr = TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_CLEAR,
        .emit_ctl_adr = TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL,
        .smem_emit_ctl_adr = TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL,
        .smem_emit_tick_adr = TIMERS_ADD_REGS_EMIT_SHM_IF_VAL,
        .smem_emit_num_adr = TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL,
        .smem_cap_ctl_adr = TIMERS_ADD_REGS_CAP_SHM_IF_CTRL,
        .smem_cap_tick_adr = TIMERS_ADD_REGS_CAP_SHM_IF_VAL,
        .smem_cap_num_adr = TIMERS_ADD_REGS_CAP_SHM_NUM_VAL,
        .smem_cap_val_adr = TIMERS_ADD_REGS_CAP_SHM_IF_VAL,

        .smem_int_sts_adr = TIMERS_ADD_REGS_SHM_IF_INTR_STATUS,
        .smem_int_clr_adr = TIMERS_ADD_REGS_SHM_IF_INTR_CLEAR,

        .cap_en_map = 0,
        .emit_en_map = 0,

        .smem_cfg = &smem_cfg,
    },
};

static tmr_dev_t tmr_dev[] = {
    {
        .tmr_id = TMR0_ID,
        .used = 0,
        .irq = Tmr0_IROn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM0_CLK_MUX,

        .pa = &tmr_adv[0],
        .ctl_adr = TIMERS_REGS_ADV_TIMER_0_CTRL,
        .init_tick_adr = TIMERS_REGS_ADV_TIMER_0_INIT_VAL,
        .read_tick_adr = TIMERS_REGS_ADV_TIMER_0_CURR_VAL,
    },
    {
        .tmr_id = TMR1_ID,
        .used = 0,
        .irq = Tmr1_IROn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM1_CLK_MUX,

        .pa = &tmr_adv[1],
        .ctl_adr = TIMERS_REGS_ADV_TIMER_1_CTRL,
        .init_tick_adr = TIMERS_REGS_ADV_TIMER_1_INIT_VAL,
        .read_tick_adr = TIMERS_REGS_ADV_TIMER_1_CURR_VAL,
    },
    {
        .tmr_id = TMR2_ID,
        .used = 0,
        .irq = Tmr2_IROn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM2_CLK_MUX,

        .pa = NULL,
        .ctl_adr = TIMERS_REGS_BASIC_TIMER_2_CTRL,
        .init_tick_adr = TIMERS_REGS_BASIC_TIMER_2_INIT_VAL,
        .read_tick_adr = TIMERS_REGS_BASIC_TIMER_2_CURR_VAL,
    },
    {
        .tmr_id = TMR3_ID,
        .used = 0,
        .irq = Tmr3_IROn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM3_CLK_MUX,

        .pa = NULL,
        .ctl_adr = TIMERS_REGS_BASIC_TIMER_3_CTRL,
        .init_tick_adr = TIMERS_REGS_BASIC_TIMER_3_INIT_VAL,
        .read_tick_adr = TIMERS_REGS_BASIC_TIMER_3_CURR_VAL,
    },
    {
        .tmr_id = TMR4_ID,
#if CFG_NO_OS
        .used = 0,
#else
#if CFG_PM_EN
        .used = 1,
#else
        .used = 0,
#endif  // CFG_PM_EN
#endif  // CFG_NO_OS
        .irq = Tmr4_IRQn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM4_CLK_MUX,

        .pa = NULL,
        .ctl_adr = TIMERS_REGS_BASIC_TIMER_4_CTRL,
        .init_tick_adr = TIMERS_REGS_BASIC_TIMER_4_INIT_VAL,
        .read_tick_adr = TIMERS_REGS_BASIC_TIMER_4_CURR_VAL,
    },
    {
        .tmr_id = TMR5_ID,
        .used = 0,
        .irq = Tmr5_IRQn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM5_CLK_MUX,

        .pa = NULL,
        .ctl_adr = TIMERS_REGS_BASIC_TIMER_5_CTRL,
        .init_tick_adr = TIMERS_REGS_BASIC_TIMER_5_INIT_VAL,
        .read_tick_adr = TIMERS_REGS_BASIC_TIMER_5_CURR_VAL,
    },
    {
        .tmr_id = TMR6_ID,
        .used = 0,
        .irq = Tmr0_Add_IRQn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM6_CLK_MUX,

        .pa = &tmr_adv[2],
        .ctl_adr = TIMERS_ADD_REGS_ADV_TIMER_0_CTRL,
        .init_tick_adr = TIMERS_ADD_REGS_ADV_TIMER_0_INIT_VAL,
        .read_tick_adr = TIMERS_ADD_REGS_ADV_TIMER_0_CURR_VAL,
    },
    {
        .tmr_id = TMR7_ID,
        .used = 0,
        .irq = Tmr1_Add_IRQn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM7_CLK_MUX,
        .pa = NULL,

        .ctl_adr = TIMERS_ADD_REGS_BASIC_TIMER_1_CTRL,
        .init_tick_adr = TIMERS_ADD_REGS_BASIC_TIMER_1_INIT_VAL,
        .read_tick_adr = TIMERS_ADD_REGS_BASIC_TIMER_1_CURR_VAL,
    },
    {
        .tmr_id = TMR8_ID,
        .used = 0,
        .irq = Tmr2_Add_IRQn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM8_CLK_MUX,

        .pa = NULL,
        .ctl_adr = TIMERS_ADD_REGS_BASIC_TIMER_2_CTRL,
        .init_tick_adr = TIMERS_ADD_REGS_BASIC_TIMER_2_INIT_VAL,
        .read_tick_adr = TIMERS_ADD_REGS_BASIC_TIMER_2_CURR_VAL,
    },
    {
        .tmr_id = TMR9_ID,
        .used = 0,
        .irq = Tmr3_Add_IRQn,
        .prio = IRQ_PRI_Normal,
        .mux = CFG_TIM9_CLK_MUX,

        .pa = NULL,
        .ctl_adr = TIMERS_ADD_REGS_BASIC_TIMER_3_CTRL,
        .init_tick_adr = TIMERS_ADD_REGS_BASIC_TIMER_3_INIT_VAL,
        .read_tick_adr = TIMERS_ADD_REGS_BASIC_TIMER_3_CURR_VAL,
    },
};
#endif  // !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * ISR
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
static void tmr_isr_handler(int id) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
static void tmr_isr_handler(int id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd = (tmr_dev_t *)pif->tmr->tmr + id;
    //tmr_dev_t *pd = &tmr_dev[id];

    tmr_int_clear(id);
    if (pd->callback && pd->used) {
        pd->callback(pd->arg);
    }
}

#if !(CFG_BUILD_ROM)
__irq void TMR0_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR0_Handler(void)
{
    tmr_isr_handler(TMR0_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR1_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR1_Handler(void)
{
    tmr_isr_handler(TMR1_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR2_Handler(void *arg) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR2_Handler(void *arg)
{
    tmr_isr_handler(TMR2_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR3_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR3_Handler(void)
{
    tmr_isr_handler(TMR3_ID);
}

#if !CFG_PM_EN
#if !(CFG_BUILD_ROM)
__irq void TMR4_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR4_Handler(void)
{
    tmr_isr_handler(TMR4_ID);
}
#endif

#if !(CFG_BUILD_ROM)
__irq void TMR5_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR5_Handler(void)
{
    tmr_isr_handler(TMR5_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR0_Add_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR0_Add_Handler(void)
{
    tmr_isr_handler(TMR6_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR1_Add_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR1_Add_Handler(void)
{
    tmr_isr_handler(TMR7_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR2_Add_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR2_Add_Handler(void)
{
    tmr_isr_handler(TMR8_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR3_Add_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR3_Add_Handler(void)
{
    tmr_isr_handler(TMR9_ID);
}
/*
 * Timer APIs
 ****************************************************************************************
 */
int RAM_PM hal_timer_busy(void)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);

    for (uint32_t i = 0; i < TMR_ID_MAX; i++) {
        tmr_dev_t *pd = (tmr_dev_t *)pif->tmr->tmr + i;
#if !CFG_NO_OS
#if CFG_PM_EN
        if (i == TMR4_ID) {
            continue;
        }
#endif      
#endif

        if (pd->used) {
            return 1;
        }
    }   

    return 0;
}

uint32_t hal_timer_us_to_tick(int tmr_id, uint32_t us)
{
    uint32_t tick;
    if (us == 0xFFFFFFFF)
        tick = us;
    else
        tick = (hal_clk_tmr_get(tmr_id)/1000000) * us;
    return tick;
}

int hal_timer_set_tmo_callback(int tmr_id, int prio, void *arg, void (*tmr_cb)(void *))
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd; 

    if (tmr_id >= TMR_ID_MAX)
        return TMR_ERR_INVALID_ID;

    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pd->arg = arg;
    pd->callback = tmr_cb;
    pd->prio = prio;
    return TMR_ERR_OK;
}

int hal_timer_start(int tmr_id, int reload, int manual, uint32_t tick)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd; 
    uint32_t count = tick;

    if (tmr_id >= TMR_ID_MAX)
        return TMR_ERR_INVALID_ID;

    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;

    if (pd->used)
        return TMR_ERR_IN_USE;


    hal_clk_tmr_mux(tmr_id, pd->mux);
    hal_clk_tmr_en(tmr_id, 1);

    if (tmr_id < TMR6_ID)
        tmr_all_enable();
    else
        tmr_add_all_enable();

    tmr_disable(pd->ctl_adr);

    if (tmr_id < TMR6_ID)
        tmr_intr_reset(0);
    else
        tmr_add_intr_reset(0);

    tmr_init_tick(pd->init_tick_adr, count);

    if (reload)
        tmr_reload_en(tmr_id);
    else
        tmr_reload_dis(tmr_id);
    if (manual) {
        tmr_manual_en(tmr_id);
    } else {
        tmr_manual_dis(tmr_id);
    }
    //pd->arg = arg;
    //pd->callback = tmr_cb;

    tmr_int_clear(tmr_id);
    tmr_read_tick(0);//dummy read
    NVIC_ClearPendingIRQ((IRQn_Type)pd->irq);
    NVIC_SetPriority((IRQn_Type)pd->irq, pd->prio); 
    NVIC_EnableIRQ((IRQn_Type)pd->irq);
    tmr_enable(pd->ctl_adr);

    pd->used = 1;

    return TMR_ERR_OK;
}

int hal_timer_stop(int tmr_id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd;

    if (tmr_id >= TMR_ID_MAX)
        return TMR_ERR_INVALID_ID;

    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;

    if (!pd->used)
        return TMR_ERR_OK;

    tmr_disable(pd->ctl_adr);
    NVIC_DisableIRQ((IRQn_Type)pd->irq);
    NVIC_ClearPendingIRQ((IRQn_Type)pd->irq);

	pd->used = 0;
	//comment to fix higher irq call this
	// pd->callback = NULL;

    hal_clk_tmr_en(tmr_id, 0);

    tmr_read_tick(0);

    return TMR_ERR_OK;
}

int hal_timer_start_tick(int tmr_id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd;

    if (tmr_id >= TMR_ID_MAX)
        return TMR_ERR_INVALID_ID;

    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;

    if (pd->used)
        return TMR_ERR_IN_USE;

    hal_clk_tmr_en(tmr_id, 1);

    tmr_all_enable();
    tmr_reload_dis(tmr_id);
    tmr_manual_dis(tmr_id);
    tmr_disable(pd->ctl_adr);
    tmr_init_tick(pd->init_tick_adr, 0xFFFFFFFFUL);
    tmr_enable(pd->ctl_adr);
    
    pd->used = 1;

    return TMR_ERR_OK;
}

#if !(CFG_BUILD_ROM)
uint32_t hal_timer_get_tick(int tmr_id) __attribute__((section("RAM_PM")));
#endif  // !CFG_BUILD_ROM */ 
uint32_t hal_timer_get_tick(int tmr_id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd;
    //uint32_t init_tick;

    if (tmr_id >= TMR_ID_MAX)
        return 0;

    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;

    if (!pd->used)
        return 0;

    return (tmr_read_init_tick(pd->init_tick_adr) - tmr_read_tick(pd->read_tick_adr));
}

#if !(CFG_BUILD_ROM)
uint32_t hal_timer_get_tick_us(int tmr_id) __attribute__((section("RAM_PM")));
#endif  // !CFG_BUILD_ROM */ 
uint32_t hal_timer_get_tick_us(int tmr_id)
{
    float clk = hal_clk_tmr_get(tmr_id);
    float tick = (float)hal_timer_get_tick(tmr_id);
    return (uint32_t)(tick * (1000000.f/clk));
}

int hal_timer_end_tick(int tmr_id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd;

    if (tmr_id >= TMR_ID_MAX)
        return TMR_ERR_INVALID_ID;

    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;

    if (!pd->used)
        return TMR_ERR_NOT_READY;

    tmr_disable(tmr_id);
    pd->used = 0;

    hal_clk_tmr_en(tmr_id, 0);

    return TMR_ERR_OK;
}

int hal_timer_delay_us(int tmr_id, uint32_t us)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd;

    if (tmr_id >= TMR_ID_MAX)
        return TMR_ERR_INVALID_ID;

    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;

    if (pd->used)
        return TMR_ERR_IN_USE;

    uint32_t count; 

    hal_clk_tmr_en(tmr_id, 1);

    tmr_all_enable();
    tmr_reload_dis(tmr_id);
    tmr_manual_dis(tmr_id);
    tmr_disable(pd->ctl_adr);
    count = (hal_clk_tmr_get(tmr_id)/1000000) * us;
    tmr_init_tick(pd->init_tick_adr, count);
    tmr_enable(pd->ctl_adr);
    while (tmr_read_tick(pd->read_tick_adr) != 0);
    tmr_disable(pd->ctl_adr);

    hal_clk_tmr_en(tmr_id, 0);

    return TMR_ERR_OK;
}

int hal_timer_touch(int tmr_id)
{
    if (tmr_id >= TMR_ID_MAX)
        return TMR_ERR_INVALID_ID;

    tmr_touch(tmr_id);

    return TMR_ERR_OK;
}
#endif  // CFG_BUILD_ROM || !CFG_HAL_ROM  

#if !(CFG_BUILD_ROM)
uint32_t hal_timer_get_systick(void)
{
#if !CFG_NO_OS
    return rt_time_get();
#else
    return 0;
#endif // !CFG_NO_OS
}
#endif  // !CFG_BUILD_ROM */ 

/*
 * Advance Timer ISR
 ****************************************************************************************
 */
#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
#if !(CFG_BUILD_ROM)
static void tmr_adv_isr_handler(int id) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
static void tmr_adv_isr_handler(int id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd = (tmr_dev_t *)pif->tmr->tmr + id;
    tmr_adv_t *pa = pd->pa;
    uint32_t status = tmr_adv_int_status(pa->int_sts_adr);
    uint32_t mask = tmr_adv_int_mask_status(pa->int_mask_sts_adr);

    tmr_adv_int_clr(pa->int_clr_adr, status);

    status &= ~mask;

    for (uint32_t i = 0; i < 4; i++) {
        if ((status >> i) & 1) {
            uint32_t data = tmr_adv_cap_tick(pa->cap_tick_adr, i);
            if (pa->cap_cb && ((pa->cap_en_map >> i) & 1)) {
                pa->cap_cb(pa->cap_arg, i, data);
            }
        }
    }

    status >>= 4;
    for (uint32_t i = 0; i < 8; i++) {
        if ((status >> i) & 1) {
            if (pa->emit_cb && ((pa->emit_en_map >> i) & 1)) {
                pa->emit_cb(pa->emit_arg, i);
                //if (pa->emit_clear[i]) {
                //  tmr_adv_emit_manual_clr(pa->emit_man_clr_adr, i);
                //}
            }
        }
    }
}

#if !(CFG_BUILD_ROM)
__irq void TMR0_Misc_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR0_Misc_Handler(void)
{
    tmr_adv_isr_handler(TMR0_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR1_Misc_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR1_Misc_Handler(void)
{
    tmr_adv_isr_handler(TMR1_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR0_Add_Misc_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR0_Add_Misc_Handler(void)
{
    tmr_adv_isr_handler(TMR6_ID);
}

#if !(CFG_BUILD_ROM)
__irq void TMR_Smem_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void TMR_Smem_Handler(void)
{
    uint32_t cap_num_status;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_adv_t *pa[2];
    tmr_dev_t *pd = (tmr_dev_t *)pif->tmr->tmr;
    pa[0] = pd->pa;
    pd = (tmr_dev_t *)pif->tmr->tmr + TMR6_ID;
    pa[1] = pd->pa;

    for (int i = 0; i < 2; i++) {
        uint32_t status = tmr_smem_intr_status(pa[i]->smem_int_sts_adr);
        uint32_t mask = tmr_smem_intr_mask_status();
        tmr_smem_intr_clr(pa[i]->smem_int_clr_adr, status);

        status &= ~mask;
        if (status & (TMR_SMEM_CAP_FULL | TMR_SMEM_CAP_FIFO_UNDERFLOW 
            | TMR_SMEM_CAP_FIFO_OVERFLOW|TMR_SMEM_CAP_REG_FIFO_UNDERFLOW|TMR_SMEM_CAP_REG_FIFO_OVERFLOW)) 
        {
            if (pa[i]->smem_cap_cb ) {
                cap_num_status = RD_WORD(pa[i]->smem_cap_num_adr);
                uint32_t cap_num = cap_num_status & 0xFFF;
                cap_num += ((cap_num_status >> 12) & 0x0F);
                cap_num += ((cap_num_status >> 16) & 0x0F);
                pa[i]->smem_cap_cb(pa[i]->smem_cap_arg, status, cap_num);
            }
            
        }
        if (status & (TMR_SMEM_EMIT_EMPTY|TMR_SMEM_EMIT_FIFO_UNDERFLOW|TMR_SMEM_EMIT_FIFO_OVERFLOW |
            TMR_SMEM_EMIT_REG_FIFO_UNDERFLOW|TMR_SMEM_EMIT_REG_FIFO_OVERFLOW))
        {
            if (pa[i]->smem_emit_cb)
            {
                pa[i]->smem_emit_cb(pa[i]->smem_emit_arg, status);
            }
        }
    }
}


/*
 * Advance Timer
 ****************************************************************************************
 */

int hal_timer_capture_set_callback(int tmr_id, int prio, void *arg, void (*callback)(void *, int, uint32_t))
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd; 
    tmr_adv_t *pa;
    if ((tmr_id > TMR1_ID) && (tmr_id != TMR6_ID))
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    pa->cap_arg = arg;
    pa->cap_cb = callback;
    pa->prio = prio;
    return TMR_ERR_OK;
}

int hal_timer_capture_signal_add(int tmr_id, int idx, uint8_t sig_id, int rise, int fall)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd; 
    tmr_adv_t *pa;

    if (idx >= CAP_ID_MAX || ((tmr_id > TMR1_ID) && (tmr_id != TMR6_ID)))
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    if ((pa->cap_en_map >> idx) & 1)
    {
        return TMR_ERR_IN_USE;
    }
    if (rise)
    {
        tmr_adv_cap_rise_en(pd->ctl_adr, idx);
    }
    else
    {
        tmr_adv_cap_rise_dis(pd->ctl_adr, idx);
    }
    if (fall)
    {
        tmr_adv_cap_fall_en(pd->ctl_adr, idx);
    }
    else
    {
        tmr_adv_cap_fall_dis(pd->ctl_adr, idx);
    }
    tmr_adv_cap_sig(pa->cap_sig_adr, idx, sig_id);
    if (pa->cap_en_map == 0)
    {
        hal_clk_cap_en(tmr_id, 1);
        NVIC_SetPriority((IRQn_Type)pd->pa->irq, pa->prio);
        NVIC_ClearPendingIRQ((IRQn_Type)pd->pa->irq);
        NVIC_EnableIRQ((IRQn_Type)pd->pa->irq);
    } 
    tmr_adv_int_unmask(pa->int_unmask_adr, idx);
    pa->cap_en_map |= (1 << idx);
    return TMR_ERR_OK;
}

int hal_timer_capture_signal_rem(int tmr_id, int idx)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd; 
    tmr_adv_t *pa;
    if (idx >= CAP_ID_MAX || ((tmr_id > TMR1_ID) && (tmr_id != TMR6_ID)))
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;

    if (!((pa->cap_en_map >> idx) & 1))
    {
        return TMR_ERR_OK;
    }

    tmr_adv_cap_rise_dis(pd->ctl_adr, idx);
    tmr_adv_cap_fall_dis(pd->ctl_adr, idx);
    tmr_adv_int_mask(pa->int_mask_adr, idx);

    pa->cap_en_map &= ~(1 << idx);
    if (pa->cap_en_map == 0) 
    {
        hal_clk_cap_en(tmr_id, 0);                      
        if (pa->emit_en_map == 0) 
        {
            NVIC_DisableIRQ((IRQn_Type)pd->pa->irq);
        }
    } 
    return TMR_ERR_OK;
}


int hal_timer_smem_capture_set_callback(int prio, void *arg, void (*callback)(void *parg, uint32_t sts, uint32_t cap_num))
{
    tmr_dev_t *pd;
    tmr_adv_t *pa;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    pd = (tmr_dev_t *)pif->tmr->tmr;
    pa = pd->pa;
    pa->smem_cap_arg = arg;
    pa->smem_cap_cb = callback;
    pa->smem_cfg->smem_prio = prio;
    return TMR_ERR_OK;
}

uint32_t RAM_PM hal_timer_smem_capture_get_data_num(int tmr_id)
{
    tmr_dev_t *pd; 
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    if ((tmr_id != TMR0_ID) && (tmr_id != TMR6_ID))
    {
        return 0;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    uint32_t cap_num_status = RD_WORD(pd->pa->smem_cap_num_adr);
    uint32_t cap_num = cap_num_status & 0xFFF;
    cap_num += ((cap_num_status >> 12) & 0x0F);
    cap_num += ((cap_num_status >> 16) & 0x0F);
    return cap_num;
}

int RAM_PM hal_timer_smem_capture_data_read(int tmr_id, uint32_t *buffer, int len)
{
    int r_len;
    uint32_t num_sts;
    uint32_t dly;
    tmr_dev_t *pd; 
    tmr_adv_t *pa;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    if ((tmr_id != TMR0_ID) && (tmr_id != TMR6_ID))
    {
        return 0;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    for (r_len = 0; r_len < len; r_len++)
    {
        dly = 0;
        while(1)
        {
            num_sts = RD_WORD(pa->smem_cap_num_adr);
            if (num_sts & TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_DATA_RDY)
            {
                buffer[r_len] = RD_WORD(pa->smem_cap_val_adr);
                break;
            }
            dly++;
            if (dly > 400)
            {
                break;
            }
        }
        // timeout
        if (dly > 400)
        {
            break;
        }
    }
    return r_len;
}

int hal_timer_smem_capture_signal_add(int tmr_id, uint8_t sig_id, int rise, int fall, uint16_t max_num, uint16_t full_threshold)
{
    tmr_dev_t *pd;
    tmr_adv_t *pa;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    int res = TMR_ERR_OK;
    int idx = 0;
    if ((tmr_id != TMR0_ID) && (tmr_id != TMR6_ID))
    {
        return TMR_ERR_INVALID_ID;
    }
    if (max_num < 2)
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    if ((pa->cap_en_map >> idx) & 1)
    {
        return TMR_ERR_IN_USE;
    }
    if (pa->smem_cfg->cap_en == 1) 
    {
        return TMR_ERR_IN_USE;
    }
    pa->smem_cfg->cap_en = 1;
    //uint32_t size = CFG_SMEM_TMR_CAP & 0xFFFF;
    tmr_smem_cap_en(pa->smem_cap_ctl_adr);
    tmr_smem_cap_set_max_num(pa->smem_cap_ctl_adr, max_num-1);
    tmr_smem_cap_full_th(pa->smem_cap_ctl_adr, full_threshold);
    clk_tmr0_smem_capture_en();
    tmr_smem_intr_unmask(TMR_SMEM_CAP_FULL|TMR_SMEM_CAP_FIFO_UNDERFLOW|TMR_SMEM_CAP_FIFO_OVERFLOW
                                |TMR_SMEM_CAP_REG_FIFO_UNDERFLOW|TMR_SMEM_CAP_REG_FIFO_OVERFLOW);

    tmr_smem_intr_clr(pa->smem_int_clr_adr, 0x3FF);
    NVIC_SetPriority((IRQn_Type)pa->smem_cfg->smem_irq, pa->smem_cfg->smem_prio);
    NVIC_ClearPendingIRQ((IRQn_Type)pa->smem_cfg->smem_irq);
    NVIC_EnableIRQ((IRQn_Type)pa->smem_cfg->smem_irq);
    res = hal_timer_capture_signal_add(tmr_id, idx, sig_id, rise, fall);
    return res;
}

int hal_timer_smem_capture_signal_rem(int tmr_id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd;
    tmr_adv_t *pa;
    int res = TMR_ERR_OK;
    if ((tmr_id != TMR0_ID) && (tmr_id != TMR6_ID))
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    if (!(pa->cap_en_map & 0x1))
    {
        return TMR_ERR_OK; 
    }
    if (pa->smem_cfg->cap_en == 0)
    {
        return TMR_ERR_IN_USE;
    }
    tmr_smem_cap_dis(pa->smem_cap_ctl_adr);
    NVIC_DisableIRQ((IRQn_Type)pa->smem_cfg->smem_irq);
    tmr_smem_intr_mask(TMR_SMEM_CAP_FULL|TMR_SMEM_CAP_FIFO_UNDERFLOW|TMR_SMEM_CAP_FIFO_OVERFLOW
                                |TMR_SMEM_CAP_REG_FIFO_UNDERFLOW|TMR_SMEM_CAP_REG_FIFO_OVERFLOW);
    clk_tmr0_smem_capture_dis();
    pa->smem_cfg->cap_en = 0;
    res = hal_timer_capture_signal_rem(TMR0_ID, 0);
    return res;
}


int hal_timer_emit_set_callback(int tmr_id, int prio, void *arg, void (*callback)(void *parg,int emit_idx))
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd; 
    tmr_adv_t *pa;
    if ((tmr_id > TMR1_ID) && (tmr_id != TMR6_ID))
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    pa->emit_arg = arg;
    pa->emit_cb = callback;
    pa->prio = prio;
    return TMR_ERR_OK;
}

static INLINE void timer_smem_emit_add(tmr_adv_t *pa, uint32_t *ticks, uint32_t size,  uint16_t empty_th)
{
    clk_tmr0_smem_emit_en(); 
    pa->smem_cfg->emit_en = 1;
    tmr_smem_emit_en(pa->smem_emit_ctl_adr);
    tmr_smem_emit_rst(pa->smem_emit_ctl_adr);
    tmr_smem_emit_set_max_num(pa->smem_emit_ctl_adr, size - 1);
    tmr_smem_emit_empty_th(pa->smem_emit_ctl_adr, empty_th);
    //hal_timer_emit_update_bundle_tick(pd->tmr_id, ticks, size);
    for (int i = 0; i < size; i++) 
    {
        tmr_smem_emit_set_tick(pa->smem_emit_tick_adr, ticks[i]);
    }
    tmr_smem_intr_unmask(TMR_SMEM_EMIT_EMPTY|TMR_SMEM_EMIT_FIFO_UNDERFLOW|TMR_SMEM_EMIT_FIFO_OVERFLOW
                         |TMR_SMEM_EMIT_REG_FIFO_UNDERFLOW|TMR_SMEM_EMIT_REG_FIFO_OVERFLOW); 
    tmr_smem_intr_clr(pa->smem_int_clr_adr, 0x3FF); 
    NVIC_ClearPendingIRQ((IRQn_Type)pa->smem_cfg->smem_irq);
    NVIC_SetPriority((IRQn_Type)pa->smem_cfg->smem_irq, pa->smem_cfg->smem_prio);
    NVIC_EnableIRQ((IRQn_Type)pa->smem_cfg->smem_irq);
}

static INLINE void timer_smem_emit_rem(tmr_adv_t *pa)
{
    if (pa->smem_cfg->emit_en)
    {
        tmr_smem_emit_dis(pa->smem_emit_ctl_adr);
        clk_tmr0_smem_emit_dis();
        NVIC_DisableIRQ((IRQn_Type)pa->smem_cfg->smem_irq);
        tmr_smem_intr_mask(TMR_SMEM_EMIT_EMPTY|TMR_SMEM_EMIT_FIFO_UNDERFLOW|TMR_SMEM_EMIT_FIFO_OVERFLOW
                            |TMR_SMEM_EMIT_REG_FIFO_UNDERFLOW|TMR_SMEM_EMIT_REG_FIFO_OVERFLOW); 
        pa->smem_cfg->emit_en = 0;
   }
}

static INLINE void timer_emit_add(tmr_dev_t *pd, int idx, uint32_t tick, int is_not_smem, tmr_emit_option_t *cfg)
{
    tmr_adv_t *pa = pd->pa;
    if (cfg->touch_clr)
    {
        tmr_adv_emit_touch_clr_en(pd->ctl_adr, idx);
    }
    else
    {
        tmr_adv_emit_touch_clr_dis(pd->ctl_adr, idx);
    }
    if (cfg->auto_clr)
    {
        tmr_adv_emit_auto_clr_en(pa->ctl1_adr, idx);
    }
    else
    {
        tmr_adv_emit_auto_clr_dis(pa->ctl1_adr, idx);
    }
    tmr_adv_emit_sig_toggle(pa->emit_ctl_adr, idx, cfg->sig_toggle);
    tmr_adv_emit_sig_default(pa->emit_ctl_adr, idx, cfg->sig_default);
    tmr_adv_emit_toggle_default(pa->emit_ctl_adr, idx/2, cfg->toggle_default);
    tmr_adv_emit_toggle_pol(pa->emit_ctl_adr, idx/2, cfg->toggle_pol);
    if (pa->emit_en_map == 0) 
    {
        hal_clk_emit_en(pd->tmr_id, 1);
        NVIC_SetPriority((IRQn_Type)pd->pa->irq, pa->prio);
        NVIC_ClearPendingIRQ((IRQn_Type)pd->pa->irq);           
        NVIC_EnableIRQ((IRQn_Type)pd->pa->irq);
    }
    tmr_adv_int_unmask(pa->int_unmask_adr, (idx + 4)); 
    if (is_not_smem)
    {
        tmr_adv_emit_set_tick(pa->emit_set_tick_adr, idx, tick);
        tmr_adv_emit_en(pd->ctl_adr, idx);
    }
    pa->emit_en_map |= (1 << idx);
}

static INLINE void timer_emit_rem(tmr_dev_t *pd, int idx)
{
    tmr_adv_t *pa = pd->pa;
    tmr_adv_int_mask(pa->int_mask_adr, (idx + 4)); 
    tmr_adv_emit_dis(pd->ctl_adr, idx);
    pa->emit_en_map &= ~(1 << idx);
    if (pa->emit_en_map == 0)
    {
        hal_clk_emit_en(pd->tmr_id, 0);                     
        if (pa->cap_en_map == 0)
        {
            NVIC_DisableIRQ((IRQn_Type)pd->pa->irq);
        }
    } 
}

int hal_timer_emit_add(int tmr_id, int idx, uint32_t tick, tmr_emit_option_t *option)
{
    tmr_dev_t *pd;
    tmr_adv_t *pa;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_emit_option_t default_cfg = {0};
    if ((idx >= EMIT_ID_MAX) ||((tmr_id > TMR1_ID) && (tmr_id != TMR6_ID)))
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    if ((pa->emit_en_map >> idx) & 1)
    {
        return TMR_ERR_IN_USE;
    }
    if (NULL == option)
    {
        default_cfg.auto_clr = 1;
        option = &default_cfg;        
    }
    timer_emit_add(pd, idx, tick, 1, option);
    return TMR_ERR_OK;
}

int hal_timer_emit_rem(int tmr_id, int idx)
{
    tmr_dev_t *pd;
    tmr_adv_t *pa;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    if ((idx >= EMIT_ID_MAX) ||((tmr_id > TMR1_ID) && (tmr_id != TMR6_ID)))
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    if (!((pa->emit_en_map >> idx) & 1))
    {
        return TMR_ERR_OK;
    }
    if (pa->smem_cfg && pa->smem_cfg->emit_en)
    {
        //need use hal_timer_smem_emit_rem
        return TMR_ERR_BAD_STATE;
    }
    timer_emit_rem(pd, idx);
    return TMR_ERR_OK;
}

int hal_timer_smem_emit_set_callback(int tmr_id, int prio, void *arg, void (*callback)(void *parg, uint32_t sts))
{
    tmr_dev_t *pd; 
    tmr_adv_t *pa;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    if (tmr_id != TMR0_ID && tmr_id != TMR6_ID)
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    pa->smem_emit_arg = arg;
    pa->smem_emit_cb = callback;
    pa->smem_cfg->smem_prio = prio;
    return TMR_ERR_OK;
}

int hal_timer_smem_emit_add(int tmr_id, uint32_t *ticks, uint32_t size,  uint16_t empty_threshold, tmr_emit_option_t *option)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd; 
    tmr_adv_t *pa;
    int idx = 0;
    assert(size > 1 && NULL != ticks);
    if (tmr_id != TMR0_ID && tmr_id != TMR6_ID)
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    if ((pa->emit_en_map >> idx) & 1)
    {
        return TMR_ERR_IN_USE;
    }
    
    timer_emit_add(pd, idx, 0, 0, option);
    timer_smem_emit_add(pa, ticks, size, empty_threshold);
    return TMR_ERR_OK;
}

int hal_timer_smem_emit_rem(int tmr_id)
{
    tmr_dev_t *pd;
    tmr_adv_t *pa;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    int idx = 0;
    if (tmr_id != TMR0_ID && tmr_id != TMR6_ID)
    {
        return TMR_ERR_INVALID_ID;
    }
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    if (!((pa->emit_en_map >> idx) & 1))
    {
        return TMR_ERR_OK;
    }
    if (NULL == pa->smem_cfg || 0 == pa->smem_cfg->emit_en)
    {
        //need use hal_timer_emit_rem
        return TMR_ERR_BAD_STATE;
    }
    timer_smem_emit_rem(pa);
    timer_emit_rem(pd, idx);
    return TMR_ERR_OK;
}

uint32_t hal_timer_smem_emit_update_tick(int tmr_id, uint32_t *tick_buf, uint32_t buf_len)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    tmr_dev_t *pd;
    tmr_adv_t *pa;
    if ((tmr_id != TMR0_ID) && (tmr_id != TMR6_ID))
        return 0;
    if (!tick_buf || (buf_len == 0))
        return 0;
    pd = (tmr_dev_t *)pif->tmr->tmr + tmr_id;
    pa = pd->pa;
    
    uint32_t valid_num = tmr_smem_emit_data_num(pa->smem_emit_num_adr);
    uint32_t max_num = tmr_smem_emit_get_max_num(pa->smem_emit_ctl_adr) + 1;
    uint32_t empty_num = max_num - valid_num;
    if (buf_len > empty_num)
        buf_len = empty_num;
    for (int i = 0; i < buf_len; i++) {
        tmr_smem_emit_set_tick(pa->smem_emit_tick_adr, tick_buf[i]);
    }
    return buf_len;

}


#endif  // CFG_BUILD_ROM || !CFG_HAL_ROM  

/*
 * Sleep Timer Global
 ****************************************************************************************
 */
typedef struct {
    char tmr_id;
    char used;
    char reload;
    char irq;
    char prio;
    char init;
    uint32_t init_tick;

    uint32_t ctl_adr;
    uint32_t ctl_sts_adr;
    uint32_t init_tick_lo_adr;
    uint32_t init_tick_hi_adr;
    uint32_t init_tick_lo_sts_adr;
    uint32_t init_tick_hi_sts_adr;
    uint32_t read_tick_lo_adr;
    uint32_t read_tick_hi_adr;

    void *arg;
    void (*callback)(void *);

} aon_tmr_dev_t;

typedef struct {
    char    irq;
    uint8_t cap_en_map;
    uint8_t emit_en_map;
    uint8_t pad;

    tmr_cap_cb_t cap_cb[2];
    tmr_emit_cb_t emit_cb[2];
} aon_tmr_adv_t;

#if !(CFG_BUILD_ROM)
static aon_tmr_dev_t aon_tmr_dev[AON_TMR_MAX] = {
    {
        .tmr_id = AON_TMR0_ID,
        .used = 0,
        .init = 0,
        .irq = Aon_Tmr_Misc_IRQn,
        .prio = IRQ_PRI_Normal,
        .ctl_adr = GLOBAL2_REG_AON_TIMER_0_CTL,
        .ctl_sts_adr = GLOBAL2_REG_AON_TIMER_0_STS,
        .init_tick_lo_adr = GLOBAL2_REG_AON_TIMER_0_INIT_VAL,
        .init_tick_lo_sts_adr = GLOBAL2_REG_AON_TIMER_0_INIT_VAL_STS,
        .read_tick_lo_adr = GLOBAL2_REG_AON_TIMER_0_SNAPSHOT_VAL
    },
    {
        .tmr_id = AON_TMR1_ID,
        .used = 0,
        .init = 0,
        .irq = Aon_Tmr_Misc_IRQn,
        .prio = IRQ_PRI_Normal,
        .ctl_adr = GLOBAL2_REG_AON_TIMER_1_CTL,
        .ctl_sts_adr = GLOBAL2_REG_AON_TIMER_1_STS,
        .init_tick_lo_adr = GLOBAL2_REG_AON_TIMER_1_INIT_VAL,
        .init_tick_lo_sts_adr = GLOBAL2_REG_AON_TIMER_1_INIT_VAL_STS,
        .read_tick_lo_adr = GLOBAL2_REG_AON_TIMER_1_SNAPSHOT_VAL
    },
    {
        .tmr_id = AON_TMR2_ID,
#if CFG_PM_EN && !CFG_NO_OS
        .used = 1,
#else
        .used = 0,
#endif
        .init = 0,
        .irq = Aon_Tmr_Misc_IRQn,
        .prio = IRQ_PRI_Normal,
        .ctl_adr = GLOBAL2_REG_AON_TIMER_2_CTL,
        .ctl_sts_adr = GLOBAL2_REG_AON_TIMER_2_STS,
        .init_tick_lo_adr = GLOBAL2_REG_AON_TIMER_2_INIT_VAL,
        .init_tick_lo_sts_adr = GLOBAL2_REG_AON_TIMER_2_INIT_VAL_STS,
        .read_tick_lo_adr = GLOBAL2_REG_AON_TIMER_2_SNAPSHOT_VAL
    },
    {
        .tmr_id = AON_TMR3_ID,
        .used = 0,
        .init = 0,
        .irq = Aon_Tmr_Misc_IRQn,
        .prio = IRQ_PRI_Normal,
        .ctl_adr = GLOBAL2_REG_AON_TIMER_3_CTL,
        .ctl_sts_adr = GLOBAL2_REG_AON_TIMER_3_STS,
        .init_tick_lo_adr = GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO,
        .init_tick_hi_adr = GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI,
        .init_tick_lo_sts_adr = GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_STS,
        .init_tick_hi_sts_adr = GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_STS,
        .read_tick_lo_adr = GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_LO,
        .read_tick_hi_adr = GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_HI,
    },
};

static aon_tmr_adv_t aon_tmr_adv = {
    .irq = Aon_Tmr_Misc_IRQn,
    .cap_en_map = 0,
    .emit_en_map = 0, 
};
#endif  // !CFG_BUILD_ROM */ 

#if (CFG_BUILD_ROM) || !(CFG_HAL_ROM)
/*
 * Sleep Timer ISR
 ****************************************************************************************
 */
 #if 0
#if !(CFG_BUILD_ROM)
static void aon_timer_isr(int tmr_id) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
static void aon_timer_isr(int tmr_id)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    aon_tmr_dev_t *pd = (aon_tmr_dev_t *)pif->tmr->aon_tmr + tmr_id;

    aon_tmr_irq_clr(pd->ctl_adr, pd->ctl_sts_adr);
    if (pd->callback) {
        pd->callback(pd->arg);
    }
}

#if !(CFG_BUILD_ROM)
__irq void Aon_Tmr0_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void Aon_Tmr0_Handler(void)
{
    aon_timer_isr(AON_TMR0_ID);
}

#if !(CFG_BUILD_ROM)
__irq void Aon_Tmr1_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void Aon_Tmr1_Handler(void)
{
    aon_timer_isr(AON_TMR1_ID);
}

#if !(CFG_BUILD_ROM)
__irq void Aon_Tmr3_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void Aon_Tmr3_Handler(void)
{
    aon_timer_isr(AON_TMR3_ID);
}

#if !(CFG_BUILD_ROM)
__irq void Aon_Tmr2_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void Aon_Tmr2_Handler(void)
{
    aon_timer_isr(AON_TMR2_ID);
}
#endif
#if !(CFG_BUILD_ROM)
__irq void Aon_Tmr_Misc_Handler(void) __attribute__((section("ISR")));
#endif  // !CFG_BUILD_ROM */ 
__irq void Aon_Tmr_Misc_Handler(void)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    aon_tmr_adv_t *p_aon_tmr_adv = (aon_tmr_adv_t *)pif->tmr->aon_tmr_adv;
    uint32_t status = aon_tmr_int_status();
    uint32_t mask = aon_tmr_int_mask_status();
    aon_tmr_int_clear(status);
    status &= ~mask;


    for (uint32_t i = 0; i < AON_TMR_MAX; i++) {
        if ((status >> i) & 1) {
            aon_tmr_dev_t *pd = (aon_tmr_dev_t *)pif->tmr->aon_tmr + i;
            aon_tmr_irq_clr(pd->ctl_adr, pd->ctl_sts_adr);
            if (pd->callback) {
                pd->callback(pd->arg);
            }       
        }
    }

    // Note; We don't handle timer time out here. It is handled by the arm directly.         

    //AON capture
    for (uint32_t i = 0; i < AON_CAP_ID_MAX; i++) 
    {
        if (((status >> AON_TMR2_INT_CAP0 >> i) & 1) && p_aon_tmr_adv->cap_cb[i].callback) {
            p_aon_tmr_adv->cap_cb[i].callback(p_aon_tmr_adv->cap_cb[i].arg, i, aon_tmr_cap_read_tick(i));
        }
    }    

    //AON emit
    for (uint32_t i = 0; i < AON_EMIT_ID_MAX; i++) {
        if (((status >> AON_TMR2_INT_EMIT0 >> i) & 1) && p_aon_tmr_adv->emit_cb[i].callback) {
            p_aon_tmr_adv->emit_cb[i].callback(p_aon_tmr_adv->emit_cb[i].arg);

            if (p_aon_tmr_adv->emit_cb[i].clear) {
                aon_tmr_emit_man_clr(i);
                // review: poll status???
            }
        }
    }    
}
#endif
#if CFG_PM_EN
void hal_aon_timer_resume(void) __attribute__((section("RAM_PM")));
void hal_aon_timer_resume(void)
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    aon_tmr_dev_t *pd;
    int en_irq = 0;
    int prio;
    for (int i = 0; i < AON_TMR_MAX; i++) {
        pd = (aon_tmr_dev_t *)pif->tmr->aon_tmr + i;
        if (pd->used) {
            aon_tmr_int_mask_clear(i);
            en_irq = 1;
            prio = pd->prio;
        }
    }
    if (en_irq) {
        NVIC_SetPriority(Aon_Tmr_Misc_IRQn, prio);
        NVIC_EnableIRQ(Aon_Tmr_Misc_IRQn);
    }
}
#endif
/*
 * Sleep Timer APIs
 ****************************************************************************************
 */
#if !(CFG_BUILD_ROM)
int hal_aon_timer_open(int id, int wup_en, int reload, int prio, void *arg, void (*isr_cb)(void *arg))
{
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    aon_tmr_dev_t *pd = NULL;
    if (id >= AON_TMR_MAX)
        return TMR_ERR_INVALID_ID;
    pd = (aon_tmr_dev_t *)pif->tmr->aon_tmr + id;

    if (pd->init)
        return TMR_ERR_BAD_STATE;



    /// enable clock
    aon_tmr_clk_en(id);
    delay_us(150);  

    /// wake up
    if (wup_en)
        aon_tmr_wup_en(id);
    else
        aon_tmr_wup_dis(id);

    /// reload      
    if (reload)
        aon_tmr_reload_en(id);
    else
        aon_tmr_reload_dis(id);

    /// interrupt       
    if (isr_cb) {
        aon_tmr_int_clk_en();
        aon_tmr_int_mask_clear(id);
        pd->arg = arg;
        pd->callback = isr_cb;
        pd->prio = prio;
        __NVIC_ClearPendingIRQ((IRQn_Type)pd->irq);
        __NVIC_SetPriority((IRQn_Type)pd->irq, prio);
        __NVIC_EnableIRQ((IRQn_Type)pd->irq);
    }   
    pd->init = 1;
    return TMR_ERR_OK;
}
int hal_aon_timer_close(int id) 
{
    aon_tmr_dev_t *pd = NULL;
    rom_if_t *pif = (rom_if_t *)RD_WORD(ROM_IF_BASE);
    int retry;

    if (id >= AON_TMR_MAX)
        return TMR_ERR_INVALID_ID;

    pd = (aon_tmr_dev_t *)pif->tmr->aon_tmr + id;

    if (!pd->init)
        return TMR_ERR_BAD_STATE;

    /// disable
    if (!aon_tmr_dis_sts(pd->ctl_sts_adr)) {
        aon_tmr_dis(pd->ctl_adr);
        delay_us(150);
        retry = 100;
        while (!aon_tmr_dis_sts(pd->ctl_sts_adr) && retry--);
        assert(retry > 0);
    }

    aon_tmr_reload_dis(id);
    aon_tmr_wup_dis(id);
    aon_tmr_clk_dis(id);
    

    int disable_int_clk = 1;
    for (uint32_t i = 0; i < AON_TMR_MAX; i++) {
        if (aon_tmr_dev[i].used) {
            disable_int_clk = 0;
            break;
        }
    }    
    
    if (disable_int_clk) {
        __NVIC_DisableIRQ((IRQn_Type)pd->irq);
        aon_tmr_int_clk_dis();
    }
    pd->arg = NULL;
    pd->callback = NULL;
    pd->used = 0;
    pd->init = 0;
    return TMR_ERR_OK;
}
int hal_aon_timer_start(int id, uint64_t time_us)
{
    aon_tmr_dev_t *pd = NULL;
    float lpc;
    uint64_t tick;
    int retry;

    if (id >= AON_TMR_MAX)
        return TMR_ERR_INVALID_ID;

    pd = &aon_tmr_dev[id];

    if (pd->used)
        return TMR_ERR_IN_USE;

    /// RTC tick
    lpc = (float)hal_clk_32k_get();
    
    /// disable
    if (!aon_tmr_dis_sts(pd->ctl_sts_adr)) {
        aon_tmr_dis(pd->ctl_adr);
        delay_us(150);
        retry = 100;
        while (!aon_tmr_dis_sts(pd->ctl_sts_adr) && retry--) {
            delay_us(1);
        }
        assert(retry > 0);
    }

    /// initial count
    if (id == AON_TMR3_ID) {
        if (time_us == SLP_TMR_MAX_64) {
            tick = SLP_TMR_MAX_64;
        } else {
            tick = (uint64_t)(time_us * (lpc/1000000.f));
        }
        /// program initial value
        aon_tmr_init_tick(pd->init_tick_lo_adr, (uint32_t)tick);
    


        aon_tmr_init_tick(pd->init_tick_hi_adr, (uint32_t)(tick >> 32));
        delay_us(150);
        
        retry = 100;
        while ((aon_tmr_init_tick_sts(pd->init_tick_lo_sts_adr) != (uint32_t)tick) && retry--) {
            clk_delay(1);
        }
        assert(retry > 0);
        
        retry = 100;
        while ((aon_tmr_init_tick_sts(pd->init_tick_hi_sts_adr) != (uint32_t)(tick >> 32)) && retry--) {
            clk_delay(1);
        }
        assert(retry > 0);
    } else {
        if (time_us == SLP_TMR_MAX_32) {
            tick = SLP_TMR_MAX_32;
        } else {
            tick = (uint32_t)(time_us * (lpc/1000000.f));
        }
        aon_tmr_init_tick(pd->init_tick_lo_adr, tick);
        delay_us(150);
        retry = 100;
        while ((aon_tmr_init_tick_sts(pd->init_tick_lo_sts_adr) != tick) && retry--) {
            clk_delay(1);
        }
        assert(retry > 0);    
    }

    /// enable 
    aon_tmr_en(pd->ctl_adr);
    delay_us(150);
    retry = 100;
    while (!aon_tmr_en_sts(pd->ctl_sts_adr) && retry--) {
        clk_delay(1);
    }
    assert(retry > 0);         

    pd->used = 1;
        
    return TMR_ERR_OK;
}

int hal_aon_timer_stop(int id) 
{
    aon_tmr_dev_t *pd = NULL;
    int retry;

    if (id >= AON_TMR_MAX)
        return TMR_ERR_INVALID_ID;

    pd = &aon_tmr_dev[id];

    if (!pd->used)
        return TMR_ERR_OK;

    /// disable
    aon_tmr_dis(pd->ctl_adr);
    delay_us(150);
    retry = 100;
    while (!aon_tmr_dis_sts(pd->ctl_sts_adr) && retry--) {
        clk_delay(1);
    }
    assert(retry > 0);

    pd->used = 0;

    return TMR_ERR_OK;
}

uint64_t RAM_PM hal_aon_timer_get_tick(int id)
{
    aon_tmr_dev_t *pd = NULL;
    uint64_t init_tick, tick;

    if (id >= AON_TMR_MAX)
        return 0;

    pd = &aon_tmr_dev[id];

    if (!pd->used)
        return 0;

    if (id == AON_TMR3_ID) {
        aon_tmr3_snap_tick();
        tick = aon_tmr3_read_tick();
        init_tick = aon_tmr3_init_tick_sts();
    } else {
        aon_tmr_snap_tick(id);
        tick = aon_tmr_read_tick(pd->read_tick_lo_adr);
        init_tick = aon_tmr_init_tick_sts(pd->init_tick_lo_sts_adr);
    }

    if (init_tick >= tick)
        tick = init_tick - tick;
    else
        tick = 0;

    return tick;
}

uint64_t hal_aon_timer_get_time(int id)
{
    uint64_t tick = hal_aon_timer_get_tick(id);
    float lpc = (float)hal_clk_32k_get();
    return  (uint64_t)(tick * (1000000.f/lpc));
}

int hal_aon_timer_touch(int id)
{
    aon_tmr_dev_t *pd = NULL;

    if (id >= AON_TMR_MAX)
        return 0;

    pd = &aon_tmr_dev[id];

    if (!pd->used)
        return 0;

    aon_tmr_touch(pd->ctl_adr);
    delay_us(150);

    return 1;
}

#if !CFG_PM_EN

int hal_aon_timer_capture_add(int cap_id, uint8_t sig_id, int rise, int fall, int prio, void *arg, void (*callback)(void *, int, uint32_t))
{
    aon_tmr_adv_t *pa = &aon_tmr_adv;

    if (cap_id > AON_CAP_ID_MAX)
        return TMR_ERR_INVALID_ID;

    if ((pa->cap_en_map >> cap_id) & 1)
        return TMR_ERR_IN_USE;

    if (rise)
        aon_tmr_cap_rise_en(cap_id);
    else
        aon_tmr_cap_rise_dis(cap_id);

    if (fall)
        aon_tmr_cap_fall_en(cap_id);
    else
        aon_tmr_cap_fall_dis(cap_id);

    aon_tmr_cap_sig(cap_id, sig_id);

    pa->cap_cb[cap_id].arg = arg;
    pa->cap_cb[cap_id].callback = callback;

    if (pa->cap_en_map == 0) {
        aon_tmr_cap_clk_en();
        NVIC_EnableIRQ(Aon_Tmr_Misc_IRQn);
    } 
    NVIC_SetPriority(Aon_Tmr_Misc_IRQn, prio);
    aon_tmr_cap_int_mask_clear(cap_id);

    pa->cap_en_map |= (1 << cap_id);

    return TMR_ERR_OK;
}

int hal_aon_timer_capture_rem(int cap_id)
{
    aon_tmr_adv_t *pa = &aon_tmr_adv;

    if (cap_id > AON_CAP_ID_MAX)
        return TMR_ERR_INVALID_ID;

    if (!((pa->cap_en_map >> cap_id) & 1))
        return TMR_ERR_OK;

    aon_tmr_cap_int_mask_set(cap_id);
    aon_tmr_cap_rise_dis(cap_id);
    aon_tmr_cap_fall_dis(cap_id);

    pa->cap_en_map &= ~(1 << cap_id);
    pa->cap_cb[cap_id].arg = NULL;
    pa->cap_cb[cap_id].callback = NULL;

    if (pa->cap_en_map == 0) {
        aon_tmr_cap_clk_en();
        if (pa->emit_en_map == 0) {
            NVIC_DisableIRQ(Aon_Tmr_Misc_IRQn);
        }
    } 

    return TMR_ERR_OK;
}

int hal_aon_timer_emit_add(int emit_id, int auto_clr, int touch_clr, uint32_t time_us, int prio, void *arg, void (*callback)(void *))
{
    aon_tmr_adv_t *pa = &aon_tmr_adv;

    if (emit_id >= AON_EMIT_ID_MAX)
        return TMR_ERR_INVALID_ID;

    if ((pa->emit_en_map >> emit_id) & 1) 
        return TMR_ERR_IN_USE;

    if (auto_clr)
        aon_tmr_emit_auto_clr_en(emit_id);
    else
        aon_tmr_emit_auto_clr_dis(emit_id);

    if (touch_clr)
        aon_tmr_emit_touch_clr_en(emit_id);
    else
        aon_tmr_emit_touch_clr_dis(emit_id);

    uint32_t tick = (uint32_t)((hal_clk_32k_get()/1000000.f) * time_us);
    aon_tmr_emit_set_tick(emit_id, tick);
    aon_tmr_emit_en(emit_id);

    pa->emit_cb[emit_id].arg = arg;
    pa->emit_cb[emit_id].callback = callback;
    if (!(auto_clr || touch_clr))
        pa->emit_cb[emit_id].clear = 1;
    else
        pa->emit_cb[emit_id].clear = 0;

    if (pa->emit_en_map == 0) {
        aon_tmr_emit_clk_en();
        NVIC_EnableIRQ(Aon_Tmr_Misc_IRQn);
    }
    NVIC_SetPriority(Aon_Tmr_Misc_IRQn, prio);
    aon_tmr_emit_int_mask_clear(emit_id);

    pa->emit_en_map |= (1 << emit_id);

    return TMR_ERR_OK;
}

int hal_aon_timer_emit_rem(int emit_id)
{
    aon_tmr_adv_t *pa = &aon_tmr_adv;

    if (emit_id >= AON_EMIT_ID_MAX)
        return TMR_ERR_INVALID_ID;

    if (!((pa->emit_en_map >> emit_id) & 1)) 
        return TMR_ERR_OK;

    aon_tmr_emit_int_mask_set(emit_id); 
    aon_tmr_emit_dis(emit_id);

    pa->emit_en_map &= ~(1 << emit_id);
    pa->emit_cb[emit_id].arg = NULL;
    pa->emit_cb[emit_id].callback = NULL;

    if (pa->emit_en_map == 0) {
        aon_tmr_emit_clk_dis();
        if (pa->cap_en_map == 0) {
            NVIC_DisableIRQ(Aon_Tmr_Misc_IRQn);
        }
    }


    return TMR_ERR_OK;
}



#endif  // !CFG_BUILD_ROM */ 
tmr_rom_if_t g_tmr_if = {
    (void *)&tmr_dev[0],
    (void *)&aon_tmr_dev[0],
    (void *)&aon_tmr_adv,
};
#if 0
int hal_aon_timer2_emit_start(int wup_en, int reload, uint32_t time_us, int prio, void *arg, void (*isr_cb)(void *arg))
{
    aon_tmr_dev_t *pd = NULL;
    float lpc;
    uint32_t tick;
    int id = AON_TMR2_ID;
    pd = &aon_tmr_dev[id];

    if (pd->used)
        return TMR_ERR_IN_USE;

    /// RTC tick
    lpc = (float)hal_clk_32k_get();

    /// enable clock
    aon_tmr_clk(id, 1);
    aon_tmr_int_clk(1);
    aon_tmr_emit_clk(1);
    
    //delay_n_us(10);
    
    /// disable
    aon_tmr_dis(pd->ctl_adr);
    int retry = 1000;
    while (aon_tmr_dis_sts(pd->ctl_sts_adr) && retry--);
    assert(retry > 0);

    /// initial count
    if (time_us == SLP_TMR_MAX_32) {
        tick = SLP_TMR_MAX_32;
    } else {
        tick = (uint32_t)(time_us * (lpc/1000000.f));
    }
    aon_tmr_init_tick(pd->init_tick_lo_adr, tick);
    retry = 1000;
    while ((aon_tmr_init_tick_sts(pd->init_tick_lo_sts_adr) != tick) && retry--)
    assert(retry > 0);

    PRINTD(DBG_TRACE, "%s:time_us=%u,tick=%u\r\n", __FUNCTION__,time_us, tick);

    /// wake up
    if (wup_en)
        aon_tmr_wup(id, 1);
    else
        aon_tmr_wup(id, 0);

    /// reload      
    if (reload)
        aon_tmr_reload(id, 1);
    else
        aon_tmr_reload(id, 0);

    /// interrupt 
    if (isr_cb)
    {
        pd->arg = arg;
        pd->callback = isr_cb;
        __NVIC_ClearPendingIRQ((IRQn_Type)pd->irq);
        __NVIC_SetPriority((IRQn_Type)pd->irq, prio);
        __NVIC_EnableIRQ((IRQn_Type)pd->irq);
        if (AON_tmr_IRQn == pd->irq)
        {
            aon_tmr_int_mask_clear(id);
        }
        else
        {
            aon_tmr_int_mask_set(id);
        }
    }

    /// emit interrupt
    if ((Aon_tmr2_IRQn == pd->irq)|| (NULL == isr_cb))
    {
        __NVIC_ClearPendingIRQ((IRQn_Type)aon_tmr2_adv.irq);
        __NVIC_SetPriority((IRQn_Type)aon_tmr2_adv.irq, prio);
        __NVIC_EnableIRQ((IRQn_Type)aon_tmr2_adv.irq);
    }
    if (aon_tmr2_adv.emit_en_map & 1) {
        aon_tmr_int_mask_clear(6);
    }
    if (aon_tmr2_adv.emit_en_map & 2) {
        aon_tmr_int_mask_clear(7);
    }

    /// enable 
    aon_tmr_en(pd->ctl_adr);
    retry = 1000;
    while (!aon_tmr_en_sts(pd->ctl_sts_adr) && retry--);
    assert(retry > 0);

    pd->used = 1;
    return TMR_ERR_OK;
}

int hal_aon_timer2_emit_stop(void) 
{
    aon_tmr_dev_t *pd = &aon_tmr_dev[AON_TMR2_ID];
    int id = AON_TMR2_ID;
    pd = &aon_tmr_dev[id];

    if (!pd->used)
        return TMR_ERR_OK;

    /// disable
    aon_tmr_dis(pd->ctl_adr);
    int retry = 1000;
    while (aon_tmr_dis_sts(pd->ctl_sts_adr) && retry--);
    assert(retry > 0);

    aon_tmr_int_mask_set(id);
    aon_tmr_reload_dis(id);
    aon_tmr_wup_dis(id);
    pd->used = 0;
    aon_tmr_emit_clk(0);
    aon_tmr_clk_dis(id);
    __NVIC_DisableIRQ((IRQn_Type)pd->irq);
    __NVIC_DisableIRQ((IRQn_Type)aon_tmr2_adv.irq);
    
    return TMR_ERR_OK;
}
#endif

#endif

