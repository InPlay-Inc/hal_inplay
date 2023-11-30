#include "in_config.h"

/**
 ****************************************************************************************
 *
 * @file ram_entry.c
 *
 * @brief RAM functions to support external SPI flash
 *
 *		  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "boot_config.h"
#include "boot_share.h"

#include "in_arm.h"
#include "in_compile.h"
#include "in_fw_upd.h"

#include "./hal/hal_power.h"
#include "./hal/hal_gpio.h"
#include "./hal/hal_spi.h"
#include "./hal/hal_efuse.h"
#include "./hal/hal_clk.h"
#include "./hal/hal_timer.h"
#include "./hal/hal_global.h"
#include "./hal/hal_wdt.h"

#if CFG_EXT_SPI_FLASH
#include "spi_flash.h"
#endif	// CFG_EXT_SPI_FLASH


/*
 *	Debug
 *
 ****************************************************************************************
 */

static uint32_t trace_offset = 0;
static uint32_t trace_addr = 0x21e000;
void pm_trace(int index, uint32_t value)
{
	WR_WORD((trace_addr + trace_offset), index);
	trace_offset += 4;
	WR_WORD((trace_addr + trace_offset), value);
	trace_offset += 4;
	if (trace_offset >= 0x2000)
		trace_offset = 0;
}

uint32_t pm_tick(int first)
{
	if (first) {
		clk_tmr_pclk_en();
		clk_tmr5_en();
		WR_WORD(TIMERS_REGS_TIMERS_MISC_CTRL, 0x3);		
		WR_WORD(TIMERS_REGS_BASIC_TIMER_5_INIT_VAL, 0xFFFFFFFF);
		WR_WORD(TIMERS_REGS_BASIC_TIMER_5_CTRL, 1);
	}

	return (0xFFFFFFFF - RD_WORD(TIMERS_REGS_BASIC_TIMER_5_CURR_VAL));
}

/*
 *	Local Variables
 *
 ****************************************************************************************
 */

typedef struct {
	char first_warm_boot;
	char flash_encrypt;
	char pad[2];

	//uint32_t clkd0_enable_1;
	//uint32_t clkd0_enable_2;
	uint32_t clk_enable_1;
	//uint32_t clk_enable_2;
	uint32_t clk_ctl_1;
	uint32_t clk_ctl_2;
	//uint32_t clk_tmr_mux;

#if !CFG_NO_OS
#if !OS_SYSTICK
	uint32_t clk_systick;
#endif
#endif	// CFG_NO_OS

	uint32_t pcr;
	uint32_t sp;

#if CFG_FW_UPD_EN
	uint32_t flash_offset;	
#endif
} bootram_t;

static bootram_t g_bram __attribute__((section(".data"))) = {0};

/*
 *	Boot Jump functions
 *
 ****************************************************************************************
 */
#if defined (__CC_ARM)
static __asm void boot_cold_jump(uint32_t start_addr)
{
	; r0 = SP location
	mov r1, r0
	add r0, r0, #4
	ldr r0, [r0]
	ldr sp, [r1] 
	isb
	bx r0
}

static __asm void boot_warm_jump(uint32_t pcr, uint32_t stk)
{
	; r0 = prog ptr
	; r1 = stack ptr
	mov sp, r1		
	orr r0, r0, #1
	isb
	bx r0
}
#elif defined(__GNUC__)
static void boot_cold_jump(uint32_t start_addr)
{
	//; r0 = SP location
	__asm__ __volatile__ (
		"mov r1, %0      \n"
		"add %0, %0, #4  \n"
		"ldr %0, [%0]    \n"
		"ldr sp, [r1]    \n"
		"isb             \n"
		"bx %0           \n"
		::"r"(start_addr)
    );
}

static void boot_warm_jump(uint32_t pcr, uint32_t stk)
{
	//; r0 = prog ptr
	//; r1 = stack ptr
	__asm__ __volatile__ (
		"mov sp, %1		\n"
		"orr %0, %0, #1 \n"
		"isb            \n"
		"bx %0          \n"
		::"r"(pcr),"r"(stk)
	);
}
#else
#error unsupported compiler
#endif

/*
 *	Efuse 
 *
 ****************************************************************************************
 */
static int boot_load_efuse(void)
{
	efuse_tpp(0x4F);
	int retry = 1000;
	while (retry--) {
		if (efuse_load_done())
			break;
		clk_delay(1);
	}

	if (retry <= 0)
		return 0;

	return 1;
}

/*
 *	XO find drive strength 
 *
 ****************************************************************************************
 */
static __inline uint32_t boot_xo_ds(uint32_t target)
{
	//clear the xo_2x_current bit
	clk_xo_2x_current(0);	

	//charge the XO amplitude target to 0x5 (equivalent 550mv)
	clk_xo_amp(target);

	//turn on amplitude peak detection
	clk_xo_peak_det(1);

	uint32_t dsc;
	for (dsc = 0x1f; dsc > 0 ; dsc--) {
		clk_xo_gm(dsc);
		clk_delay(1);	//  wait for result
		if ((clk_xo_status() & 1) == 0)
			break;
	}

	clk_xo_peak_det(0);
	return dsc;
}

/*
 *	PM Clocks  
 *
 ****************************************************************************************
 */
void boot_clk_save(void)
{
#if !CFG_FPGA
#if !CFG_SIM
	bootram_t *pb = &g_bram;

	//pb->clkd0_enable_1 = clk_d0_enable_1_get();
	//pb->clkd0_enable_2 = clk_d0_enable_2_get();
	pb->clk_enable_1 = clk_enable_1_get();
	//pb->clk_enable_2 = clk_enable_2_get();
	pb->clk_ctl_1 = clk_ctl_1_get();
	pb->clk_ctl_2 = clk_ctl_2_get();
	//pb->clk_tmr_mux = clk_tmr_mux_get();
#if !CFG_NO_OS
#if !OS_SYSTICK
	pb->clk_systick = clk_systick_get();
#endif
#endif
#endif
#endif
}

void boot_clk_retore(void)
{
#if !CFG_FPGA
#if !CFG_SIM
	bootram_t *pb = &g_bram;

	//if (pb->clkd0_enable_1 != GLOBAL_REG_CLKD0_ENABLE_1_DEFAULT) {
	//	clk_d0_enable_1_set(pb->clkd0_enable_1);
	//}

	//if (pb->clkd0_enable_2 != GLOBAL_REG_CLKD0_ENABLE_2_DEFAULT) {
	//	pb->clkd0_enable_2 |= (1 << 16);	// profile clock
	//	clk_d0_enable_2_set(pb->clkd0_enable_2);
	//}

	if (pb->clk_enable_1 != GLOBAL_REG_CLK_ENABLE_1_DEFAULT) {
		clk_enable_1_set(pb->clk_enable_1);
	}

	//if (pb->clk_enable_2 != GLOBAL_REG_CLK_ENABLE_2_DEFAULT) {
	//	clk_enable_2_set(pb->clk_enable_2);
	//}

	if (pb->clk_ctl_1 != GLOBAL_REG_CLK_CTRL_1_DEFAULT) {
		clk_ctl_1_set(pb->clk_ctl_1);
	}

	if (pb->clk_ctl_2 != GLOBAL_REG_CLK_CTRL_2_DEFAULT) {
		clk_ctl_2_set(pb->clk_ctl_2);
	}

	//if (pb->clk_tmr_mux != 0) {
	//	pb->clk_tmr_mux &= ~(0x3 << 10);	// profile clock
	//	pb->clk_tmr_mux |= (1 << 21);			// profile clock
	//	clk_tmr_mux_set(pb->clk_tmr_mux);
	//}

#if !CFG_NO_OS
#if !OS_TICK
	if (pb->clk_systick != GLOBAL_REG_SYSTICK_CLK_CTRL_DEFAULT) {
		clk_systick_set(pb->clk_systick);
	}
#endif	
#endif	// !CFG_NO_OS

#endif
#endif
}

int boot_first_warm_boot(void)
{
	bootram_t *pb = &g_bram;
	return pb->first_warm_boot;
}
#if CFG_EXT_SPI_FLASH
/*
 *	SPI FLASH Functions for boot rom
 *
 ****************************************************************************************
 */
static int boot_spi_flash_open(void)
{
	if (!spi_flash_init()) {
		return 0;
	}

	return 1;
}

static int boot_spi_flash_close(void)
{
	spi_flash_deinit();
	return 1;
}

static int boot_spi_flash_erase(uint32_t addr, uint32_t size)
{
	if (!spi_flash_sector_erase(addr, size))
		return 0;

	return 1;
}

static int boot_spi_flash_prog(uint32_t addr, uint8_t *data, uint32_t data_len)
{
	spi_flash_prog_page(addr, data, data_len);

	// verify it ??? your decision...
	if (spi_flash_verify(addr, data_len, data) != (addr + data_len))
		return 0;

	return 1;
}

static int boot_spi_flash_read(uint32_t addr, uint8_t *data, uint32_t data_len)
{
	spi_flash_read(addr, data, data_len);	

	return 1;
}

/*
 *	SPI FLASH XIP Setup Function
 *
 ****************************************************************************************
 */
static void boot_spi_flash_xip(int cold_boot)
{
	bootram_t *pb = &g_bram;

	if (cold_boot) {
		/// spi root clock 
		clk_qspi_mux(CFG_QSPI_CLK_MUX);

		/// If secure flash, turn on icache decoding
		efuse_w7_t w7;
		w7.w7 = efuse_init_rd_val_w7();
		if (w7.u.flash_encrypt) {	
			spi_flash_icache_dec(1);
			pb->flash_encrypt = 1;
		}

	} else {
		spi_flash_pin_mux();
		if (pb->flash_encrypt) {
			spi_flash_icache_dec(1);
		}
	}

	/// XIP enable
	spi_flash_xip_enable(CFG_QSPI_SPEED, 1);
}

/*
 *	FW Update (OTA)
 *
 ****************************************************************************************
 */

#if CFG_FW_UPD_EN
void boot_fw_update(void)
{
	bootram_t *pb = &g_bram;
	fw_upd_info_t info;

	pb->flash_offset = 0;
	clk_qspi_mux(CFG_QSPI_CLK_MUX);//Fix D0 32M issue
	spi_flash_read(FW_UPD_INFO_ADDR, (uint8_t *)&info, sizeof(fw_upd_info_t));

	#if 0//FW_UPD_WDT_EN

		if (info.status == OTA_SWITCHING) {
			/* enable WDT */
			clk_wdt_en(1);
			wdt_tmo_period(FW_UPD_WDT_TMO, FW_UPD_WDT_TMO);
			wdt_enable(1);//mode WDT_MODE_INTR
			wdt_touch();
		}
	#endif

	if (info.upd_magic == FW_UPD_MAGIC_WORD) {
        switch (info.status) {
            case OTA_SWITCHING: {
                info.status = OTA_SWITCHED;
                spi_flash_sector_erase(FW_UPD_INFO_ADDR, sizeof(fw_upd_info_t));
                spi_flash_prog_page(FW_UPD_INFO_ADDR, (uint8_t *)&info, sizeof(fw_upd_info_t));
                pb->flash_offset = info.cur_offset;
            }
            break;
            case OTA_SWITCHED: {
                info.status = OTA_FAIL;
                info.cur_offset = info.last_offset;
                spi_flash_sector_erase(FW_UPD_INFO_ADDR, sizeof(fw_upd_info_t));
                spi_flash_prog_page(FW_UPD_INFO_ADDR, (uint8_t *)&info, sizeof(fw_upd_info_t));
                pb->flash_offset = info.cur_offset;
            }
            break;
            case OTA_FAIL:
            case OTA_SUCCESS: {
                pb->flash_offset = info.cur_offset;
            }
            break;
            default:
                break;
        }

        if (pb->flash_offset < FW_UPD_MAX_FLASH_ADDR) {
            qspi_addr_set_offset(pb->flash_offset);
        } else {
            pb->flash_offset = 0;
        }

	}
}
#endif	// CFG_FW_UPD_EN

#if CFG_BRAM_RAM_APP_EN 
static void* in_memcpy(void *dst, void *src, size_t len)
{
	// Don't check alignment here. dst, src and len should be 4 bytes aligned.
	uint32_t * dst32 = (uint32_t *)dst;
	uint32_t * src32 = (uint32_t *)src;
	len = len / 4;
	while(len--) {
		*(dst32++) = *(src32++);
	}
	return dst;
}
#endif	// CFG_BRAM_RAM_APP_EN
#endif	// CFG_EXT_SPI_FLASH

/*
 *	System Cold Boot function
 *
 ****************************************************************************************
 */

//static int g_debug = 1;
static void boot_cold(void)
{
	//
	// Note: This function is called by the boot rom main function. Don't use
	//			any C library functions here.  
	//

//aon_wdt_dis();
//aon_wdt_clk_en(0);
//while (g_debug);

#if !CFG_FPGA
	if (CFG_ROOT_CLK_RC_32M) {
		/// RC
		clk_root_rc_32mhz();
	} else {
		clk_root_rc_32mhz();
	
		/// XO cap
		clk_xo_2x_current(0);
		clk_xo_cap((CFG_XO_CAP & 0xF));
		if (CFG_XO_DRIVE_STRENGTH) {
			clk_xo_gm(CFG_XO_DRIVE_STRENGTH);
		} else {
			/// find XO drive strength
			uint32_t gm = boot_xo_ds(5);	
			clk_xo_gm(gm);
		}
		/// XO stable time
		clk_xo_ps_opt(CFG_XO_STABLE_TIME);
		clk_xo_stage_delay(0x16+CFG_XO_STABLE_TIME-0x24, 0x4);
		clk_xo_x2(1);//Must enable xo2 for 1M phy
		/// default we are running at XO 32Mhz
		if (CFG_ROOT_CLK_XO_64M) {
			//clk_xo_x2(1);
			clk_root_xo_64mhz();
		} else {
			clk_root_xo_32mhz(1);
		}

		/// CPLL
		/// TODO
	}
#endif	// !CFG_FPGA
	
	/// Configure clock mux
	clk_mux_set(CFG_D0_CLK_MUX, CFG_D1_CLK_MUX, CFG_D2_CLK_MUX); 

	/// Configure timer clock mux
	clk_tmr_mux(CFG_TIM0_CLK_MUX, CFG_TIM1_CLK_MUX, CFG_TIM2_CLK_MUX, CFG_TIM3_CLK_MUX, CFG_TIM4_CLK_MUX, CFG_TIM5_CLK_MUX);

	/// CM4 gated hclk enable
	clk_gated_hclk_en();

#if 0
	/// wake up ble
	if (RD_WORD(0x46000030)&(1 << 15)) {
		WR_WORD(0x46000030, RD_WORD(0x46000030) | (1 << 4));
	}
#endif

	/// Let BLE detect new clock
	clk_ble_phase_match_reset();	

	/// memory
	if (CFG_RAM_ADD_CACHE_16K) {
		cache_mem_as_dram(1);		
	} else {
		cache_mem_as_dram(0);		
	}

	if (CFG_RAM_ADD_SHM_16K) {
		share_mem_as_dram(1, SHM_16K_AS_DRAM);
	} else {
		share_mem_as_dram(0, SHM_16K_AS_DRAM);
	}

	if (CFG_RAM_ADD_SHM_32K) {
		share_mem_as_dram(1, SHM_32K_AS_DRAM);
	} else {
		share_mem_as_dram(0, SHM_32K_AS_DRAM);
	}

#if CFG_EXT_SPI_FLASH
#if CFG_FW_UPD_EN
	boot_fw_update();
#endif	// CFG_OTA_EN

	/// force SPI flash clock on
	clk_force_spiflash_ctl_clk();

	//clk_sm_en(1);
	/// enable XIP mode
	boot_spi_flash_xip(1);
    
	/// Ram app
#if CFG_BRAM_RAM_APP_EN 
	{
		efuse_w7_t w7;
		w7.word = efuse_init_rd_val_w7();
		if (!w7.u.ram_secure_boot) {
			/// Not secure Ram app, copy from flash to ram thru XIP
			in_memcpy((void *)CFG_BRAM_RAM_APP_RAM_ADDR, (void *)CFG_BRAM_RAM_APP_FLASH_ADDR, CFG_BRAM_RAM_APP_SIZE); 
		}
		spi_flash_xip_disable();
		boot_cold_jump(CFG_BRAM_RAM_APP_RAM_ADDR);
		/// never return
	}	
#endif	//  CFG_BRAM_RAM_APP_EN
#endif	// CFG_EXT_SPI_FLASH

	// branch to ...
	boot_cold_jump(CFG_BRAM_COLD_BOOT_ADDR);
	// never return...
}

/*
 *	System Warm Boot function  (Power Resume)
 *
 ****************************************************************************************
 */

static void boot_warm(uint32_t addr)
{
	bootram_t *pb = &g_bram;

	/// load efuse values
	///boot_load_efuse();

	/// resume address
	if (!pb->first_warm_boot) {
		pb->sp = aon_get_sp();
		pb->pcr = aon_get_pc();
		/// clear the warm boot bit
		pb->pcr &= ~0x80000000;
		pb->first_warm_boot = 1;
	}

#if !CFG_FPGA
	if (CFG_ROOT_CLK_RC_32M) {
		clk_root_rc_32mhz();
	}
	
	if (CFG_ROOT_CLK_XO_32M) {
		clk_root_xo_32mhz(0);
	}

	/// default we are running at XO 32Mhz
	if (CFG_ROOT_CLK_XO_64M) {
		clk_root_xo_64mhz();
	}

	// recover d0 clock mux
	if (CFG_D0_CLK_MUX != 1)
		clk_d0_mux(CFG_D0_CLK_MUX);

	// Clock mux restore
	boot_clk_retore();

	// Let BLE detect new clock
	clk_ble_phase_match_reset();	
#endif	// !CFG_FPGA

#if CFG_EXT_SPI_FLASH
	/// force SPI flash clock on
	if (!CFG_BRAM_RAM_APP_EN) {
		clk_force_spiflash_ctl_clk();
	} 
	
#if CFG_BRAM_RAM_APP_EN && CFG_LOW_POWER	
	clk_spiflash_en(0);
	clk_qspi_mux(0x7); // slowest clk
#endif

#if CFG_FW_UPD_EN
	qspi_addr_set_offset(pb->flash_offset);
#endif	// CFG_OTA_EN

	/// QSPI set up and enable XIP mode
	if (!CFG_BRAM_RAM_APP_EN)
		boot_spi_flash_xip(0);

	/// Secure Ram app???
#endif	// CFG_EXT_SPI_FLASH

	// Set vector table offset
	SCB->VTOR = CFG_VTOR_ADDR & SCB_VTOR_TBLOFF_Msk; 

	// Set floating point
	SCB->CPACR |= ((3UL << 10*2) |     /* set CP10 Full Access */
	               (3UL << 11*2)  );               /* set CP11 Full Access */

	// branch
	boot_warm_jump(pb->pcr, pb->sp);

	// never return
}

/*
 * Secondary Bootloader (Boot Ram) entry function
 *		Note: always execute from the address 0x200000 (Ram starting address)
 ****************************************************************************************
 */
void boot_ram_entry(int reason, void *p_para) __attribute__((section("ram_start")));
void boot_ram_entry(int reason, void *p_para)
{
	switch (reason) {
		case SPI_FLASH_CB:	
			{
				/// SPI flash Callback function 
				///	Note: Bootloader ROM will call this to retrieve SPI FLASH function pointers.
#if CFG_EXT_SPI_FLASH
				spi_flash_cb_t *pcb = (spi_flash_cb_t *)p_para;
				pcb->sflash_open = boot_spi_flash_open;
				pcb->sflash_close = boot_spi_flash_close;
				pcb->sflash_erase = boot_spi_flash_erase;
				pcb->sflash_prog = boot_spi_flash_prog;
				pcb->sflash_read = boot_spi_flash_read;
#else	// CFG_EXT_SPI_FLASH
				spi_flash_cb_t *pcb = (spi_flash_cb_t *)p_para;
				pcb->sflash_open = NULL;
				pcb->sflash_close = NULL;
				pcb->sflash_erase = NULL;
				pcb->sflash_prog = NULL;
				pcb->sflash_read = NULL;
#endif	// CFG_EXT_SPI_FLASH
			}	
			break;
		case COLD_BOOT:
			{
				// System cold boot function 
				//	Note: Bootloader ROM will call this to cold boot the system.
				boot_cold();
			}
			break;
		case WARM_BOOT:
			{
				// System warm boot function 
				//	Note: Bootloader ROM will call this to warm boot the system (suspend and resume).
				boot_warm((uint32_t)p_para);
			}
			break;
		default:
			break;
	}

	return;
}

