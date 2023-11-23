/**
 ****************************************************************************************
 *
 * @file hal_global.h
 *
 * @brief HAL Global   
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_GLOBAL_H
#define HAL_GLOBAL_H
#include <stdint.h>
#include "in_mmap.h"
#include "in_compile.h"
#include "./hal/hal_clk.h"
#define ENV_MAGIC_WORD 0xB563A832
#define ENV_DATA_ADDR 0x7f000

/**
 ****************************************************************************************
 * @defgroup HAL_GLOBAL Platform globally initialization, suspend, and resume functions   
 * @ingroup HAL
 * @brief  HAL_GLOBAL
 * @{
 ****************************************************************************************
 */

/*
 * Enumeration
 ****************************************************************************************
 */

enum glb_irq_id {
	GLB_IRQ_PS_TRANS_DONE,
	GLB_IRQ_PD_DOO_SLEEP_BLOCK,
	GLB_IRQ_BLE_CLK_EN,
	GLB_IRQ_BLE_CLK_DIS,
	GLB_IRQ_AON_SQ_WAVE_START,
	GLB_IRQ_AON_SQ_WAVE_END,
	GLB_IRQ_CM4_PC_MATCH_HIT,
	GLB_IRQ_CM4_DATA_ADDR_MATCH_HIT,
	GLB_IRQ_CM4_SYS_ADDR_MATCH_HIT,
	GLB_IRQ_MAX,
};

enum nmi_irq_id {
	NMI_IRQ_PD1_WDT_TIME_OUT,
	NMI_IRQ_PD0_WDT_TIME_OUT,
	NMI_IRQ_SEL_0_GPIO_RISE_EDGE,
	NMI_IRQ_SEL_0_GPIO_FALL_EDGE,
	NMI_IRQ_SEL_1_GPIO_RISE_EDGE,
	NMI_IRQ_SEL_1_GPIO_FALL_EDGE,
	NMI_IRQ_BOD_ASSERT,
	NMI_IRQ_BOD2_ASSERT,
	NMI_IRQ_MAX,
};

enum osc_xo_irq_id {
	OSC_XO_IRQ_OSC_EN = 0,
	OSC_XO_IRQ_OSC_EN_INV = 1,
	OSC_XO_IRQ_XO_READY = 2,
	OSC_XO_IRQ_XO_EN = 3,
	OSC_XO_IRQ_XO_STG_1 = 4,
	OSC_XO_IRQ_XO_DET_0 = 5,
	OSC_XO_IRQ_XO_ERR_DET_0 = 6,
	OSC_XO_IRQ_XO_UNDET_0 = 7,
	OSC_XO_IRQ_XO_DET_1 = 8,
	OSC_XO_IRQ_XO_ERR_DET_1 = 9,
	OSC_XO_IRQ_XO_UNDET_1 = 10,
	OSC_XO_IRQ_CPLL_RST_DONE = 11,
	OSC_XO_IRQ_CPLL_LOCK = 12,
	OSC_XO_IRQ_CPLL_UNLOCK = 13,
	OSC_XO_IRQ_XO_GT_TGT = 14,
	OSC_XO_IRQ_XO_GT_TGT_INV = 15,
	OSC_XO_IRQ_BOD_RISE = 16,
	OSC_XO_IRQ_BOD2_RISE = 17,
	OSC_XO_IRQ_MAX,
};

enum data_ram_access_prio {
	DATA_RAM_ACCESS_PRIO_1=0,	// Highest
	DATA_RAM_ACCESS_PRIO_2=1,
	DATA_RAM_ACCESS_PRIO_3=2,
};

typedef enum {
	BOD_ID0 = 0,
	BOD_ID1,
	BOD_ID_MAX,
} bod_num_t;

enum bod_thrd {
	BOD_THRD_1P60V = 0, //< BOD_ID0 start
	BOD_THRD_1P65V, 	//< BOD_ID1 start
	BOD_THRD_1P70V,
	BOD_THRD_1P75V, 	//< BOD_ID0 end
	BOD_THRD_1P80V, 	//< BOD_ID1 end
};

enum {
	SHM_16K_AS_DRAM = 1,
	SHM_32K_AS_DRAM = 2,
};
typedef struct {
	uint32_t magic_word;
	uint32_t cap;
} env_data_t;
/*
 * Inine
 ****************************************************************************************
 */
static INLINE uint32_t chip_get_id(void)
{
	return (RD_WORD(GLOBAL_REG_CHIP_ID) & (GLOBAL_REG_CHIP_ID_VERSION|GLOBAL_REG_CHIP_ID_SUBVERSION));
}

static INLINE void disable_fpu(int disable)
{
	uint32_t reg = RD_WORD(AON_REG_CM4_CTRL);

	if (disable)
		reg |= AON_REG_CM4_CTRL_CTL_CM4_DISABLE_FPU;
	else
		reg &= ~AON_REG_CM4_CTRL_CTL_CM4_DISABLE_FPU;

	WR_WORD(AON_REG_CM4_CTRL, reg);
}

static INLINE void disable_mpu(int disable)
{
	uint32_t reg = RD_WORD(AON_REG_CM4_CTRL);

	if (disable)
		reg |= AON_REG_CM4_CTRL_CTL_CM4_DISABLE_MPU;
	else
		reg &= ~AON_REG_CM4_CTRL_CTL_CM4_DISABLE_MPU;

	WR_WORD(AON_REG_CM4_CTRL, reg);
}

static INLINE void cache_mem_as_dram(int en)
{
	uint32_t reg = RD_WORD(AON_REG_CM4_CTRL);

	if (en)
		reg |= AON_REG_CM4_CTRL_CTL_CACHE_MEM_AS_DC_RAM;
	else
		reg &= ~AON_REG_CM4_CTRL_CTL_CACHE_MEM_AS_DC_RAM;

	WR_WORD(AON_REG_CM4_CTRL, reg);
	RD_WORD(AON_REG_CM4_CTRL);		/// make sure it is written
}

static INLINE void share_mem_as_dram(int en, int shm_as_dram)
{
	uint32_t reg = RD_WORD(AON_REG_CM4_CTRL);

	if (en) {
		if ((shm_as_dram == SHM_16K_AS_DRAM)) {
			reg |= (1 << 5);
		}
		if ((shm_as_dram == SHM_32K_AS_DRAM)) {
			reg |= (1 << 6);
		}
	} else {
		if ((shm_as_dram == SHM_16K_AS_DRAM)) {
			reg &= ~(1 << 5);
		}
		if ((shm_as_dram == SHM_32K_AS_DRAM)) {
			reg &= ~(1 << 6);
		}
	}

	WR_WORD(AON_REG_CM4_CTRL, reg);
	RD_WORD(AON_REG_CM4_CTRL);		/// make sure it is written
}

static INLINE void enable_all_as_dram(void)
{
	uint32_t reg = RD_WORD(AON_REG_CM4_CTRL);

	reg |= (0x5 << 4);

	WR_WORD(AON_REG_CM4_CTRL, reg);
	RD_WORD(AON_REG_CM4_CTRL);		/// make sure it is written
}

static FORCEINLINE uint32_t fw_get_version(void)
{
	/// rom address
	return RD_WORD(0x5FFF8);
}

static FORCEINLINE uint32_t chip_sleep(void)
{
	return (WR_WORD(GLOBAL_REG_SLEEP_CTRL, 1));
}

static FORCEINLINE void aon_reset_pd0(void)
{
	WR_WORD(AON_REG_AON_GLOBAL_RESET_CTRL, 0);
}

static __inline void aon_reset_pd1(void)
{
	uint32_t reg = RD_WORD(AON_REG_AON_RESET_CTRL);

	if (reg & AON_REG_AON_RESET_CTRL_CTL_PD1_MANUAL_RST_N) {
		/// it is 1, so can write 0 directly
		reg &= ~AON_REG_AON_RESET_CTRL_CTL_PD1_MANUAL_RST_N;
		WR_WORD(AON_REG_AON_RESET_CTRL, reg);
	} else {
		/// it is 0, need to write 1 first
		reg |= AON_REG_AON_RESET_CTRL_CTL_PD1_MANUAL_RST_N;
		WR_WORD(AON_REG_AON_RESET_CTRL, reg);
		/// wait 100 us
		clk_delay(100);
		/// write 
		reg &= ~AON_REG_AON_RESET_CTRL_CTL_PD1_MANUAL_RST_N;
		WR_WORD(AON_REG_AON_RESET_CTRL, reg);
	}
}

static FORCEINLINE void aon_set_pc(uint32_t pc)
{
	WR_WORD(AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT, pc);
}

static FORCEINLINE uint32_t aon_get_pc(void)
{
	return RD_WORD(AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT);
}

static FORCEINLINE void aon_set_sp(uint32_t sp)
{
	WR_WORD(AON_REG_CPU_STACK_POINTER, sp);
}

static FORCEINLINE uint32_t aon_get_sp(void)
{
	return RD_WORD(AON_REG_CPU_STACK_POINTER);
}

static INLINE void data_ram_access_prio(int cpu_i_prio, int cpu_d_prio, int dma_prio)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_AHB_CTRL_1);

	reg &= ~GLOBAL_REG_AHB_CTRL_1_CTL_ICM_D2_DATA_CODE_RAM_PRIORITY ;
	reg |= ((cpu_i_prio & 0x3) << 0) | ((cpu_d_prio & 0x3) << 2) | ((dma_prio & 0x3) << 4);
	WR_WORD(GLOBAL_REG_AHB_CTRL_1, reg);
}

static FORCEINLINE uint32_t glb_int_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_STATUS));
}

static FORCEINLINE uint32_t glb_int_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_MASK_STATUS));
}

static FORCEINLINE void glb_int_clear_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_CLEAR, GLOBAL_REG_INTR_CLEAR_IRQ);
}

static FORCEINLINE void glb_int_clear(uint32_t status)
{
	WR_WORD(GLOBAL_REG_INTR_CLEAR, status);
}

static FORCEINLINE void glb_int_mask_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_MASK_SET, GLOBAL_REG_INTR_MASK_SET_IRQ);
}

static FORCEINLINE void glb_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_MASK_SET, mask);
}

static FORCEINLINE void glb_int_unmask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_MASK_CLEAR, mask);
}

static FORCEINLINE uint32_t swi_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_SW_STATUS));
}

static FORCEINLINE uint32_t swi_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_INTR_SW_MASK_STATUS));
}

static FORCEINLINE void swi_clear_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_SW_CLEAR, GLOBAL_REG_INTR_SW_CLEAR_IRQ);
}

static FORCEINLINE void swi_clear(uint32_t status)
{
	WR_WORD(GLOBAL_REG_INTR_SW_CLEAR, status);
}

static FORCEINLINE void swi_mask_all(void)
{
	WR_WORD(GLOBAL_REG_INTR_SW_MASK_SET, GLOBAL_REG_INTR_SW_MASK_SET_IRQ);
}

static FORCEINLINE void swi_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_SW_MASK_SET, mask);
}

static FORCEINLINE void swi_unmask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_INTR_SW_MASK_CLEAR, mask);
}

static FORCEINLINE void swi_set(int bit)
{
	WR_WORD(GLOBAL_REG_INTR_SW_SET, (1 << bit));
}

static INLINE void aon_bod_en(int en)
{
	uint32_t reg = RD_WORD(AON_REG_PMU_DOOPD_REG_1TO4);
	if (en) 
		reg |= (1 << 8);
	else
		reg &= ~(1 << 8);

	WR_WORD(AON_REG_PMU_DOOPD_REG_1TO4, reg);
}

static INLINE void aon_bod_thrd(int val)
{
	uint32_t reg = RD_WORD(AON_REG_PMU_DOOPD_REG_1TO4);

	// BOD threshold 
	//	bit[29:30]:
	//		00: 1.65
	//		01: 1.70
	//		10: 1.75
	//		11: 1.8
	reg &= ~(0x3 << 29);
	reg |= (val & 0x3) << 29;
	
	WR_WORD(AON_REG_PMU_DOOPD_REG_1TO4, reg);
}

static INLINE void arm_wic(int en)			
{
	/// wake up interrupt controller..
	if (en) {
		WR_WORD(GLOBAL_REG_CM4_WIC_EN_REQ, 1);
		while (!(RD_WORD(GLOBAL_REG_CM4_WIC_EN_ACK) & GLOBAL_REG_CM4_WIC_EN_ACK_STS_CM4_WIC_EN_ACK));
	} else {
		WR_WORD(GLOBAL_REG_CM4_WIC_EN_REQ, 0);
	}
}

static FORCEINLINE uint32_t osc_xo_int_status(void)
{
	return (RD_WORD(GLOBAL2_REG_OSC_XO_INTR_STATUS));
}

static FORCEINLINE uint32_t osc_xo_int_mask_status(void)
{
	return (RD_WORD(GLOBAL2_REG_OSC_XO_INTR_MASK_STATUS));
}

static FORCEINLINE void osc_xo_int_clear_all(void)
{
	WR_WORD(GLOBAL2_REG_OSC_XO_INTR_CLEAR, GLOBAL2_REG_OSC_XO_INTR_CLEAR_IRQ);
}

static FORCEINLINE void osc_xo_int_clear(uint32_t status)
{
	WR_WORD(GLOBAL2_REG_OSC_XO_INTR_CLEAR, status);
}

static FORCEINLINE void osc_xo_int_mask_all(void)
{
	WR_WORD(GLOBAL2_REG_OSC_XO_INTR_MASK_SET, GLOBAL2_REG_OSC_XO_INTR_MASK_SET_IRQ);
}

static FORCEINLINE void osc_xo_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL2_REG_OSC_XO_INTR_MASK_SET, mask);
}

static FORCEINLINE void osc_xo_int_unmask(uint32_t unmask)
{
	WR_WORD(GLOBAL2_REG_OSC_XO_INTR_MASK_CLEAR, unmask);
}

static INLINE void xo_stage_delay(uint32_t stage0_delay, uint32_t stage1_delay)
{
	uint32_t reg;
	reg  = RD_WORD(AON_REG_XO_EN_STAGE_CTRL);
	reg &= ~(AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION | AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION);
	reg |= (stage0_delay<<AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION_SHIFT);
	reg |= (stage1_delay<<AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION_SHIFT);
	WR_WORD(AON_REG_XO_EN_STAGE_CTRL, reg);
}

static FORCEINLINE uint32_t nmi_int_status(void)
{
	return (RD_WORD(GLOBAL_REG_NMI_STATUS));
}

static FORCEINLINE uint32_t nmi_int_mask_status(void)
{
	return (RD_WORD(GLOBAL_REG_NMI_MASK_STATUS));
}

static FORCEINLINE void nmi_int_clear_all(void)
{
	WR_WORD(GLOBAL_REG_NMI_CLEAR, GLOBAL_REG_NMI_CLEAR_NMI);
}

static FORCEINLINE void nmi_int_clear(int id)
{
	WR_WORD(GLOBAL_REG_NMI_CLEAR, (1 << id));
}

static FORCEINLINE void nmi_int_mask_all(void)
{
	WR_WORD(GLOBAL_REG_NMI_MASK_SET, GLOBAL_REG_NMI_MASK_SET_NMI);
}

static FORCEINLINE void nmi_int_mask(uint32_t mask)
{
	WR_WORD(GLOBAL_REG_NMI_MASK_SET, mask);
}

static FORCEINLINE void nmi_int_unmask(uint32_t unmask)
{
	WR_WORD(GLOBAL_REG_NMI_MASK_CLEAR, unmask);
}

static INLINE void snapshot_ctrl(uint32_t type, int en)
{
	uint32_t reg = RD_WORD(GLOBAL2_REG_SNAPSHOT_CTRL);
	if (en) {
		reg |= 1<<type;
	} else {
		reg &= ~(1<<type);
	}
	WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, reg);
}

static FORCEINLINE uint32_t snapshot_fr_ipmac_cnt(void)
{
	return RD_WORD(GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR);
}
/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief  Globally initialize system (such as clock...) before OS starting.  
 *
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_global_pre_init(void);

/**
 ****************************************************************************************
 * @brief  Globally initialize system (such as debug, RTC...) after OS starting.  
 *
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_global_post_init(void);

/**
 ****************************************************************************************
 * @brief  Globally save system (such as system tick...) registers before deep sleep.  
 *
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_global_suspend(void);

/**
 ****************************************************************************************
 * @brief  Globally resume system (such as system tick...) registers after wake up.  
 *
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_global_resume(void);

/**
 ****************************************************************************************
 * @brief  Reset the CPU (cold boot)  
 *
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_global_cpu_reset(void);


/**
 ****************************************************************************************
 * @brief  Reset the system (cold boot)  
 *
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_global_sys_reset(void);
void hal_global_pd0_reset(void);

/**
 ****************************************************************************************
 * @brief  Close debug uart  
 *
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_global_close_sys_uart(void);

/**
 ****************************************************************************************
 * @brief  Enable BOD 
 *
 * @param[in] bod_id		BOD id select, @see enum bod_num_t for possible value
 * @param[in] bod_thrd_mv 	BOD threshold, rang: 1600 to 1800 unit:mv
 * @param[in] arg				Pointer to the user's provided parameter for the BOD ISR call back 
 * @param[in] callback		BOD ISR call back: 
 *											arg: The provided pointer,
 *
 *
 * @return  int   0: fail; or the voltage of bod threshold. @see enum bod_thrd
 ****************************************************************************************
 */
int hal_bod_enable(int bod_id, int bod_thrd_mv, void *arg, void (*callback)(void *arg));

/**
 ****************************************************************************************
 * @brief  Disable BOD 
 *
 * @param[in] bod_id		BOD id select, @see enum bod_num_t for possible value
 *
 * @return  No return
 ****************************************************************************************
 */
void hal_bod_disable(int bod_id);

/**
 ****************************************************************************************
 * @brief  Set BOD threshold 
 *
 * @param[in] bod_id		BOD id select, @see enum bod_num_t for possible value
 * @param[in] bod_thrd_mv 	BOD threshold, rang: 1600 to 1800 unit:mv
 *
 *
 * @return  int   0: fail; or the voltage of bod threshold. @see enum bod_thrd
 ****************************************************************************************
 */
int hal_bod_set_thrd(int bod_id, int bod_thrd_mv);

/**
 ****************************************************************************************
 * @brief  Start the RTC timer  
 *
 *
 * @return  0: Failed, 1: Success
 ****************************************************************************************
 */
int RTC_timer_start(void);

/**
 ****************************************************************************************
 * @brief  Stop the RTC timer  
 *
 *
 * @return No return
 ****************************************************************************************
 */
void RTC_timer_stop(void);

/**
 ****************************************************************************************
 * @brief  Get the RTC timer ticks (64 bits)  
 *
 *
 * @return  64 bits timer tick
 ****************************************************************************************
 */
uint64_t RTC_timer_get_tick(void);

/**
 ****************************************************************************************
 * @brief  Get the RTC timer in micro second  
 *
 *
 * @return  64 bits time in micro second
 ****************************************************************************************
 */
uint64_t RTC_timer_get_time(void);

/**
 ****************************************************************************************
 * @brief Calculate tick difference convert to time    
 *
 * @param[in] s_tick 				Start ticks
 * @param[in] e_tick 				End ticks
 *
 * @return  64 bits time in micro second
 ****************************************************************************************
 */
uint64_t RTC_timer_diff(uint64_t s_tick, uint64_t e_tick);

/**
 ****************************************************************************************
 * @brief  Get the RTC timer ticks low part  
 *
 *
 * @return  32 bits timer tick
 ****************************************************************************************
 */
uint32_t RTC_timer_get_tick_low(void);

/**
 ****************************************************************************************
 * @brief Calculate tick difference convert to time    
 *
 * @param[in] s_tick 				Start ticks
 * @param[in] e_tick 				End ticks
 *
 * @return  32 bits time in micro second
 ****************************************************************************************
 */
uint32_t RTC_timer_diff_low(uint32_t s_tick, uint32_t e_tick);

/**
 ****************************************************************************************
 * @brief Register BLE interupt    
 *
 * @param[in] arg 					Call back argument from user
 * @param[in] callback				ISR call back
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_ble_isr_register(void *arg, void (*callback)(void *));

/**
 ****************************************************************************************
 * @brief Deregister BLE interupt    
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_ble_isr_deregister(void);

/**
 ****************************************************************************************
 * @brief Globally manage shared interupts     
 *
 * @param[in] irq_id 					The ID of interrupt source, @see enum glb_irq_id
 * @param[in] prio 					Interrupt priority, @see in_irq.h
 * @param[in] arg 					Call back argument from user
 * @param[in] callback				ISR call back
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_glb_isr_register(int irq_id, int prio, void *arg, void (*callback)(void *));

/**
 ****************************************************************************************
 * @brief Deregister global shared interupts     
 *
 * @param[in] irq_id 					The ID of interrupt source, @see enum glb_irq_id
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_glb_isr_deregister(int irq_id);


/**
 ****************************************************************************************
 * @brief Set Software interrupt priority.
 * @Note There are max 4 SWI.
 *
 * @param[in] prio 					Interrupt priority, @see in_irq.h.
 *
 * @return 0 if success, otherwise fail.
 ****************************************************************************************
 */
int hal_swi_int_prio(int prio);
/**
 ****************************************************************************************
 * @brief Register a Software interrupt index.
 * @Note There are max 4 SWI.
 *
 * @param[in] arg 					Call back argument from user
 * @param[in] callback				SWI ISR call back
 *
 * @return SWI INDEX >= 0, otherwise FAIL 
 ****************************************************************************************
 */
int hal_swi_register(void *arg, void (*callback)(void *));

/**
 ****************************************************************************************
 * @brief Deregister a Software interrupt index.
 *
 * @param[in] index					Index from SWI register API calls
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_swi_deregister(int index);

/**
 ****************************************************************************************
 * @brief Trigger a Software interrupt.
 *
 * @param[in] index					Index from SWI register API calls
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_swi_set(int index);

/**
 ****************************************************************************************
 * @brief Register Osc and XO shared interupts     
 *
 * @param[in] irq_id 					The ID of interrupt source, @see enum osc_xo_irq_id
 * @param[in] prio 					Interrupt priority, @see in_irq.h
 * @param[in] arg 					Call back argument from user
 * @param[in] callback				ISR call back
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_osc_xo_isr_register(int irq_id, int prio, void *arg, void (*callback)(void *));

/**
 ****************************************************************************************
 * @brief Deregister an Osc and XO shared interupt     
 *
 * @param[in] irq_id 					The ID of interrupt source, @see enum osc_xo_irq_id
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_osc_xo_isr_deregister(int irq_id);

/**
 ****************************************************************************************
 * @brief Register a NMI interrupt     
 *
 * @param[in] irq_id 					The ID of interrupt source, @see enum nmi_irq_id
 * @param[in] arg 					Call back argument from user
 * @param[in] callback				ISR call back
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_nmi_register(int irq_id, void *arg, void (*callback)(void *));

/**
 ****************************************************************************************
 * @brief Deregister a NMI interrupt     
 *
 * @param[in] irq_id 					The ID of interrupt source, @see enum nmi_irq_id
 *
 * @return  NONE
 ****************************************************************************************
 */
void hal_nmi_deregister(int irq_id);

/**
 ****************************************************************************************
 * @brief Enable/disable external PA    
 *
 * @param[in] bias_port				PA bias pin port
 * @param[in] bias_pin				PA bias pin pin
 * @param[in] en_port				PA EN pin port. When use one pin mode, set en_port same as bias_port
 * @param[in] en_pin				PA EN pin pin. When use one pin mode, set en_pin same as biad_pin
 *
 * @return  NONE
 ****************************************************************************************
 */
void * hal_sys_uart_hdl(void);

/**
 ****************************************************************************************
 * @brief Delay in tight loop    
 *
 * @param[in] us				delay time in microsecond unit
 *
 * @return  NONE
 ****************************************************************************************
 */
void RAM_PM delay_us(uint32_t us);

/// @} HAL_GLOBAL

#endif 	// HAL_GLOBAL_H
