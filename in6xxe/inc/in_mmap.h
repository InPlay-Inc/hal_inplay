/**
 ****************************************************************************************
 *
 * @file in_mmap.h
 *
 * @brief Inplay chipset memory map file 
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */
#ifndef IN_MMAP_H
#define IN_MMAP_H


/******************************************************************************/
/*                                                                            */
/*    BIT Defines                    							*/
/*                                                                            */
/******************************************************************************/

#define Bit0		(0x00000001UL)
#define Bit1		(0x00000002UL)
#define Bit2		(0x00000004UL)
#define Bit3		(0x00000008UL)
#define Bit4		(0x00000010UL)
#define Bit5		(0x00000020UL)
#define Bit6		(0x00000040UL)
#define Bit7		(0x00000080UL)
#define Bit8		(0x00000100UL)
#define Bit9		(0x00000200UL)
#define Bit10	(0x00000400UL)
#define Bit11	(0x00000800UL)
#define Bit12	(0x00001000UL)
#define Bit13	(0x00002000UL)
#define Bit14	(0x00004000UL)
#define Bit15	(0x00008000UL)
#define Bit16	(0x00010000UL)
#define Bit17	(0x00020000UL)
#define Bit18	(0x00040000UL)
#define Bit19	(0x00080000UL)
#define Bit20	(0x00100000UL)
#define Bit21	(0x00200000UL)
#define Bit22	(0x00400000UL)
#define Bit23	(0x00800000UL)
#define Bit24	(0x01000000UL)
#define Bit25	(0x02000000UL)
#define Bit26	(0x04000000UL)
#define Bit27	(0x08000000UL)
#define Bit28	(0x10000000UL)
#define Bit29	(0x20000000UL)
#define Bit30	(0x40000000UL)
#define Bit31	(0x80000000UL)

/******************************************************************************/
/*                         Code memory                               					*/
/******************************************************************************/
#define ROM_BASE					0x00000000
#define ROM_SIZE					0x00060000			/// 384KB 
#define ROM_BOOT_BASE		0x00000000
#define ROM_BOOT_SIZE			0x0000B000			/// 44KB 
#define ROM_HAL_BASE			0x0000B000			
#define ROM_HAL_SIZE			0x00007000			/// 28KB 
#define ROM_OS_BASE			0x00012000
#define ROM_OS_SIZE				0x00004000			/// 16KB 
#define ROM_BLE_BASE			0x00016000
#define ROM_BLE_SIZE			0x0004A000			/// 296KB 

#if CFG_FPGA
#define FLASH_BASE				0x00000000
#define FLASH_SIZE				0x00080000	/// 512KB 
#else
#define FLASH_BASE				0x300000
#define FLASH_SIZE				0x80000
#endif

/******************************************************************************/
/*                         Data memory                               					*/
/******************************************************************************/
#define RAM_BASE					0x00200000
#define RAM_SIZE					0x00020000	/// 128KB 

/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/

/// CM4 to D0 bridge
#define D2_REG_BASE					(0x23F000UL)

/// AON base address
#define AON_REG_BASE				(0x44110000UL)

/// AON PS base address
#define AON_PS_REGS_BASE		(0x44111000UL)

/// DMAC 0 control port base address
#define DMAC_0_BASE				(0x44000000UL)

/// DMAC 1 control port base address
#define DMAC_1_BASE				(0x44002000UL)

/// Cache controller base address
#define ICACHE_REG_BASE			(0x44009000UL)

/// ECC base address
#define ECC_BASE						(0x44010000UL)

/// AES base address
#define AES_REG_BASE				(0x44018000UL)

/// SHA base address
#define SHA_BASE						(0x4401A000UL)

/// Uart0 base address
#define UART_0_BASE					(0x44100000UL)

/// Uart1 base address
#define UART_1_BASE					(0x44101000UL)

/// Quad SPI master controller base address
#define SSI_MASTER_0_BASE		(0x44102000UL)

/// SPI master base address
#define SSI_MASTER_1_BASE		(0x44103000UL)

/// EFUSE base address
#define EFUSECTRL_REG_BASE		(0x44104000UL)

/// SPI slave base address
#define SSI_SLAVE_0_BASE			(0x44105000UL)				// SPI SLAVE 

/// SPI slave base address
#define SSI_SLAVE_1_BASE			(0x4411A000UL)				// SPI SLAVE 

/// Audio controller base address
#define AUDIO_REGS_BASE			(0x44106000UL)

/// SPI flash mux controller base address
#define SPIFLASH_REG_BASE			(0x44107000UL)

/// I2c0 base address
#define I2C_0_BASE							(0x44108000UL)

/// I2c1 base address
#define I2C_1_BASE							(0x44109000UL)

/// I2s master base address
#define I2S_MASTER_BASE				(0x4410A000UL)

/// Timer base address
#define TIMERS_REGS_BASE			(0x4410C000UL)

/// Additional timer base address
#define TIMERS_ADD_REGS_BASE		(0x4411E800UL)

/// I2s slave base address
#define I2S_SLAVE_BASE				(0x4410D000UL)

/// Debug capture base address
#define DBGCAPTURE_REG_BASE	(0x4410E000UL)

/// Irda controller base address
#define IRDACNTR_REG_BASE			(0x4410F000UL)

/// PD0 register bridge base address
#define APB_AON_BRIDGE_REG_BASE		(0x44111000UL)

/// PWM base address
#define PWM_REGS_BASE				(0x44119000UL)

/// Watch dog timer base address
#define WDT_BASE					(0x4411E000UL)

/// Mouse decoder base address
#define QUADDEC_REG_BASE		(0x4411F000UL)		/* Review */

/// Counter base address
#define COUNTER_ALL_APB_REG_BASE		(0x44120000UL)	

/// Sensor ADC base address
#define SADCCTRL_REG_BASE	(0x44124000UL)

/// Calibration clock base address
#define CALIB_CLK_REG_BASE 	(0x44125000UL)

/// Global misc. base address
#define GLOBAL_REG_BASE		(0x44126000UL)
#define GLOBAL2_REG_BASE		(0x44126BC0UL)

/// Keyboard controller base address
#define KEYBOARD_REG_BASE	(0x44127000UL)

/// Share memory controller base address
#define SHAREDMEM_REG_BASE	(0x4414F000UL)
#define SMEM_APB_BASE			(0x44140000UL)
#define SMEM_AHB_BASE			(0x44200000UL)

/// IPMAC base address
#define IPMAC_REG_BASE 		(0x46800000UL)

/// Frontend base address
#define FRONTEND_REGS_BASE	(0x46A01000UL)

/// Tx/Rx control register base address
#define RFTRX_REG_BASE			(0x46A03000UL)

/// TR sequence controller base address
#define RXTX_SEQ_CTRL_REGISTERS_BASE	(0x46A04000UL)

/// AHB trigger base address
#define TRIG_HANDLER_REGS_BASE		(0x46A07000UL)

/// BLE baseband base address
#define BLE_MAC_BASE			(0x46000000UL)

/// BLE baseband exchange memory base address
#define BLE_EM_BASE				(0x44200000UL)			 //(0x46008000UL)      
                         
/// BLE modem base address
#define BLE_MODEM_BASE		(0x46A00000UL)

/// FPGA 
#define FPGA_REG_BASE				(0x44123000UL)
#define FPGA_ADI_SPI_BASE		(0x44123000UL)
#define FPGA_IOBASE					(0x44123030UL)
#define FPGA_SPI_FLASH_CTRL	(0x4412303CUL)

/******************************************************************************/
/*                                                                            																	*/
/*    OS RAM                     																												*/
/*                                                                            																	*/
/******************************************************************************/
#define ROM_IF_BASE		D2_REG_AON_CPU_SPARE0					


/******************************************************************************/
/*                                                                            */
/*    Register Read/Write                    							*/
/*                                                                            */
/******************************************************************************/
#define RD_WORD(addr)		(*((volatile unsigned int *)(addr)))
#define RD_HWORD(addr)		(*((volatile unsigned short *)(addr)))
#define RD_BYTE(addr)			(*((volatile unsigned char *)(addr)))

#define WR_WORD(addr, val)			(*((volatile unsigned int *)(addr)) = (val))
#define WR_HWORD(addr, val)		(*((volatile unsigned short *)(addr)) = (val))
#define WR_BYTE(addr, val)			(*((volatile unsigned char *)(addr)) = (val))

#include "./reg/aes_reg_c.h"
#include "./reg/ahb_trig_reg_c.h"
#include "./reg/aon_ps_regs_c.h"
#include "./reg/aon_reg_c.h"
#include "./reg/apb_aon_bridge_reg_c.h"
#include "./reg/audio_regs_c.h"
//#include "./reg/calib_clk_reg_c.h"
#include "./reg/counter_all_apb_reg_c.h"
#include "./reg/d2_reg_c.h"
#include "./reg/dbgcapture_reg_c.h"
#include "./reg/dmac_0_c.h"
#include "./reg/dmac_1_c.h"
#include "./reg/efusectrl_reg_c.h"
#include "./reg/fpga_reg_c.h"
#include "./reg/frontend_regs_c.h"
#include "./reg/global_reg_c.h"
#include "./reg/global2_reg_c.h"
#include "./reg/i2c_0_c.h"
#include "./reg/i2c_1_c.h"
#include "./reg/i2s_master_c.h"
#include "./reg/i2s_slave_c.h"
#include "./reg/icache_reg_c.h"
#include "./reg/ipmac_reg_c.h"
//#include "./reg/irdacntr_reg_c.h"
#include "./reg/keyboard_reg_c.h"
#include "./reg/pwm_regs_c.h"
#include "./reg/quaddec_reg_c.h"
#include "./reg/rftrx_reg_c.h"
#include "./reg/rxtx_seq_ctrl_registers_c.h"
#include "./reg/sadcctrl_reg_c.h"
#include "./reg/sharedmem_reg_c.h"
#include "./reg/spiflash_reg_c.h"
#include "./reg/ssi_master_0_c.h"
#include "./reg/ssi_master_1_c.h"
#include "./reg/ssi_slave_0_c.h"
#include "./reg/timers_regs_c.h"
#include "./reg/timers_add_regs_c.h"
#include "./reg/trig_handler_regs_c.h"
#include "./reg/uart_0_c.h"
#include "./reg/uart_1_c.h"
#include "./reg/wdt_c.h"

#endif	/* IN_MMAP_H */
