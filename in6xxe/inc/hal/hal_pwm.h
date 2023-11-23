/**
 ****************************************************************************************
 *
 * @file hal_pwm.h
 *
 * @brief PWM driver header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_PWM_H
#define HAL_PWM_H

/**
 ****************************************************************************************
 * @defgroup HAL_PWM PWM device driver  
 * @ingroup HAL
 * @brief  HAL_PWM
 * @{
 ****************************************************************************************
 */
#include <stdint.h>
#include "in_mmap.h"

/*
 * Defines
 ****************************************************************************************
 */


/*
 * Enumeration
 ****************************************************************************************
 */

enum pwm_id {
    PWM0_ID,
    PWM1_ID,
    PWM2_ID,
    PWM3_ID,
    PWM4_ID,
    PWM5_ID,
    PWM6_ID,
    PWM7_ID,
    PWM_MAX_ID,
};

enum pwm_err {
    PWM_ERR_OK = 0,
    PWM_ERR_INVALID_PARAM = -1,
    PWM_ERR_BAD_STATE = -2,
} ;

/*
 * Inline Functions
 ****************************************************************************************
 */
static __inline void pwm_enable(int id)
{
    uint32_t reg = RD_WORD(PWM_REGS_MISC_CTRL);
    reg |= (1 << id);
    WR_WORD(PWM_REGS_MISC_CTRL, reg); 
}

static __inline void pwm_disable(int id)
{
    uint32_t reg = RD_WORD(PWM_REGS_MISC_CTRL);
    reg &= ~(1 << id);
    WR_WORD(PWM_REGS_MISC_CTRL, reg); 
}

static __inline void pwm_pause(int id, int pause)
{
    uint32_t reg = RD_WORD(PWM_REGS_MISC_CTRL);
    if (pause) {
        reg |= (1 << (PWM_REGS_MISC_CTRL_CTL_PWM_PAUSE_SHIFT + id));
    } else {
        reg &= ~(1 << (PWM_REGS_MISC_CTRL_CTL_PWM_PAUSE_SHIFT + id));
    }
    WR_WORD(PWM_REGS_MISC_CTRL, reg); 
}

static __inline void pwm_polarity(int id, int invert)
{
    uint32_t reg = RD_WORD(PWM_REGS_MISC_CTRL);
    if (invert) {
        reg |= (1 << (PWM_REGS_MISC_CTRL_CTL_PWM_POLARITY_SHIFT + id));
    } else {
        reg &= ~(1 << (PWM_REGS_MISC_CTRL_CTL_PWM_POLARITY_SHIFT + id));
    }
    WR_WORD(PWM_REGS_MISC_CTRL, reg); 
}

static __inline void pwm_config(int id, uint32_t duration, uint32_t high_duration)
{
    uint32_t addr1, addr2;

    if (id == PWM0_ID) {
        addr1 = PWM_REGS_PWM_DURATION_0;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_0;
    } else if (id == PWM1_ID) {
        addr1 = PWM_REGS_PWM_DURATION_1;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_1;
    } else if (id == PWM2_ID) {
        addr1 = PWM_REGS_PWM_DURATION_2;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_2;
    } else if (id == PWM3_ID) {
        addr1 = PWM_REGS_PWM_DURATION_3;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_3;
    } else if (id == PWM4_ID) {
        addr1 = PWM_REGS_PWM_DURATION_4;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_4;
    } else if (id == PWM5_ID) {
        addr1 = PWM_REGS_PWM_DURATION_5;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_5;
    } else if (id == PWM6_ID) {
        addr1 = PWM_REGS_PWM_DURATION_6;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_6;
    } else {
        addr1 = PWM_REGS_PWM_DURATION_7;
        addr2 = PWM_REGS_PWM_HIGH_DURATION_7;
    }

    WR_WORD(addr1, duration);
    WR_WORD(addr2, high_duration);
}

static __inline void pwm_high_duration(int id, uint32_t high_duration)
{
    uint32_t addr;

    if (id == PWM0_ID) {
        addr = PWM_REGS_PWM_HIGH_DURATION_0;
    } else if (id == PWM1_ID) {
        addr = PWM_REGS_PWM_HIGH_DURATION_1;
    } else if (id == PWM2_ID) {
        addr = PWM_REGS_PWM_HIGH_DURATION_2;
    } else if (id == PWM3_ID) {
        addr = PWM_REGS_PWM_HIGH_DURATION_3;
    } else if (id == PWM4_ID) {
        addr = PWM_REGS_PWM_HIGH_DURATION_4;
    } else if (id == PWM5_ID) {
        addr = PWM_REGS_PWM_HIGH_DURATION_5;
    } else if (id == PWM6_ID) {
        addr = PWM_REGS_PWM_HIGH_DURATION_6;
    } else {
        addr = PWM_REGS_PWM_HIGH_DURATION_7;
    }

    WR_WORD(addr, high_duration);
}

static __inline int pwm_output(int id)
{
    uint32_t addr;

    if (id == PWM0_ID) {
        addr = PWM_REGS_PWM_OUTPUT_0;
    } else if (id == PWM1_ID) {
        addr = PWM_REGS_PWM_OUTPUT_1;
    } else if (id == PWM2_ID) {
        addr = PWM_REGS_PWM_OUTPUT_2;
    } else if (id == PWM3_ID) {
        addr = PWM_REGS_PWM_OUTPUT_3;
    } else if (id == PWM4_ID) {
        addr = PWM_REGS_PWM_OUTPUT_4;
    } else if (id == PWM5_ID) {
        addr = PWM_REGS_PWM_OUTPUT_5;
    } else if (id == PWM6_ID) {
        addr = PWM_REGS_PWM_OUTPUT_6;
    } else {
        addr = PWM_REGS_PWM_OUTPUT_7;
    }

    return (RD_WORD(addr) & 1);
}

static __inline uint32_t pwm_int_status(void)
{
    return (RD_WORD(PWM_REGS_INTR_STATUS) & 0xFF);
}

static __inline uint32_t pwm_int_mask_status(void)
{
    return (RD_WORD(PWM_REGS_INTR_MASK_STATUS) & 0xFF);
}

static __inline void pwm_int_clr_all(void)
{
    WR_WORD(PWM_REGS_INTR_CLEAR, 0xFF);
}

static __inline void pwm_int_clr(int id)
{
    WR_WORD(PWM_REGS_INTR_CLEAR, (1 << id));
}

static __inline void pwm_int_mask_all(void)
{
    WR_WORD(PWM_REGS_INTR_MASK_SET, 0xFF);
}

static __inline void pwm_int_mask(int id)
{
    WR_WORD(PWM_REGS_INTR_MASK_SET, (1 << id));
}

static __inline void pwm_int_unmask(int id)
{
    WR_WORD(PWM_REGS_INTR_MASK_CLEAR, (1 << id));
}

static __inline void pwm_int_reset(void)
{
    WR_WORD(PWM_REGS_RESET_INTR, PWM_REGS_RESET_INTR_CTL_PWM_INTR_SRESET);
}

/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Open PWM driver 
 *                
 * @param[in] id                PWM Id, @see enum pwm_id.   
 *
 * @return PWM driver handle if successful; NULL otherwise
 ****************************************************************************************
 */
void *hal_pwm_open(int id);

/**
 ****************************************************************************************
 * @brief Close PWM driver 
 *                
 * @param[in] hdl               PWM handle from the open API
 *
 * @return Driver error return code, @see enum pwm_err 
 ****************************************************************************************
 */
int hal_pwm_close(void *hdl);

/**
 ****************************************************************************************
 * @brief Start PWM  
 * @note This function can generate interrupt if "callback" function is not NULL.
 *                
 * @param[in] hdl               PWM handle from the open API
 * @param[in] period_usec       PWM period
 * @param[in] high_usec         PWM high time
 * @param[in] prio              Interrupt Priority
 * @param[in] arg               PWM call back function argument
 * @param[in] callback          PWM call back function for period done interrupt
 *
 * @return Driver error return code, @see enum pwm_err 
 ****************************************************************************************
 */
int hal_pwm_start(void *hdl, uint32_t period_usec, uint32_t high_usec, int prio, void *arg, void (*callback)(void *) );


/**
 ****************************************************************************************
 * @brief Stop PWM 
 *                
 * @param[in] hdl               PWM handle from the open API
 *
 * @return Driver error return code, @see enum pwm_err 
 ****************************************************************************************
 */
int hal_pwm_stop(void *hdl);


int hal_pwm_pause(void *hdl);
int hal_pwm_resume(void *hdl);



/**
 ****************************************************************************************
 * @brief Adjust PWM driver 
 *                
 * @param[in] hdl               PWM handle from the open API
 * @param[in] high_usec         PWM adjusted high time
 *
 * @return Driver error return code, @see enum pwm_err 
 ****************************************************************************************
 */
int hal_pwm_adjust(void *hdl, uint32_t high_usec);

/// @} HAL_PWM

#endif  // HAL_PWM_H

