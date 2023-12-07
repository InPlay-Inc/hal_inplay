#ifndef BOOTRAM_MEM_H
#define BOOTRAM_MEM_H

#if CFG_FW_UPD_EN
#define BOOTRAM_SIZE					0x2000
#else
#define BOOTRAM_SIZE					0x1000
#endif

#define BOOTRAM_FLASH_BASE		0x00000000

#define BOOTRAM_CODE_START		0x200000
#define BOOTRAM_CODE_SIZE		0xF64
#define BOOTRAM_CODE_END			(BOOTRAM_CODE_START + BOOTRAM_CODE_SIZE)

#define BOOTRAM_RW_START		BOOTRAM_CODE_END
#define BOOTRAM_RW_SIZE		0x1C
#define BOOTRAM_RW_END			(BOOTRAM_RW_START + BOOTRAM_RW_SIZE)

#define BOOTRAM_BOOTCFG_START				0x200F80
#define BOOTRAM_BOOTCFG_SIZE					0x80
#define BOOTRAM_BOOTCFG_END					(BOOTRAM_BOOTCFG_START + BOOTRAM_BOOTCFG_SIZE)

#define FW_UPD_CODE_START									0x201000
#define FW_UPD_CODE_SIZE									0x1000
#define FW_UPD_CODE_END										(FW_UPD_CODE_START + FW_UPD_CODE_SIZE)

#endif