#ifndef KEIL_FLASH_LOAD_TOOL
#include "in_config.h"
#else
#define CFG_QSPI_PIN_0		0x00002310	
#define CFG_QSPI_PIN_1		0x00002111
#define CFG_QSPI_PIN_2		0x00002312
#define CFG_QSPI_PIN_3		0x00002313
#define CFG_QSPI_PIN_4		0x00002314
#define CFG_QSPI_PIN_5		0x00002315
#endif

/**
 ****************************************************************************************
 *
 * @file spi_flash.c
 *
 * @brief Platform SPI Flash functions  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#if CFG_EXT_SPI_FLASH
#include "stddef.h"
#include "stdint.h"
#include "string.h"

#include "in_mmap.h"
#include "in_arm.h"
#include "in_irq.h"

#include "./hal/hal_clk.h"
#include "./hal/hal_spi.h"
#include "./hal/hal_icache.h"
#include "./hal/hal_power.h"
#include "./hal/hal_gpio.h"
#include "./hal/hal_timer.h"
#include "spi_flash.h"

#define SPI_FIFO_DEPTH		16

#if CFG_EXT_SPI_FLASH_MXIC
#define SPI_INS_SPEED			4000000
#define SPI_READ_SPEED		2000000
#define SPI_PROG_SPEED		2000000
#define SPI_READ_SIZE			16	// avoid overflow
#define SPI_PROG_SIZE			64	// avoid overflow
#define SPI_SS						0
#define FLASH_MANU_ID			0xC2
#define FLASH_DEVICE_ID		0x13
#define FLASH_PAGE_SIZE		256
#define FLASH_BLOCK_SIZE 	(64 * 1024)
#define FLASH_SECTOR_SIZE (4 * 1024)
#endif

#if CFG_EXT_SPI_FLASH_PUYA
#define SPI_INS_SPEED			4000000
#define SPI_READ_SPEED		2000000
#define SPI_PROG_SPEED		2000000
#define SPI_READ_SIZE			64	// avoid overflow
#define SPI_PROG_SIZE			64	// avoid overflow
#define SPI_SS						0
#define FLASH_MANU_ID			0x85
#define FLASH_DEVICE_ID		0x12
#define FLASH_PAGE_SIZE		256
#define FLASH_BLOCK_SIZE 	(64 * 1024)
#define FLASH_SECTOR_SIZE (4 * 1024)
#endif

#if CFG_EXT_SPI_FLASH_GIGA_8M
#define SPI_INS_SPEED			4000000
#define SPI_READ_SPEED		2000000
#define SPI_PROG_SPEED		2000000
#define SPI_READ_SIZE			64	// avoid overflow
#define SPI_PROG_SIZE			64	// avoid overflow
#define SPI_SS						0
#define FLASH_MANU_ID			0xC8
#define FLASH_DEVICE_ID		0x13
#define FLASH_PAGE_SIZE		256
#define FLASH_BLOCK_SIZE 	(64 * 1024)
#define FLASH_SECTOR_SIZE (4 * 1024)
#endif

#if CFG_EXT_SPI_FLASH_GIGA
#define SPI_INS_SPEED			4000000
#define SPI_READ_SPEED		2000000
#define SPI_PROG_SPEED		2000000
#define SPI_READ_SIZE			64	// avoid overflow
#define SPI_PROG_SIZE			64	// avoid overflow
#define SPI_SS						0
#define FLASH_MANU_ID			0xC8
#define FLASH_DEVICE_ID		0x12
#define FLASH_PAGE_SIZE		256
#define FLASH_BLOCK_SIZE 	(64 * 1024)
#define FLASH_SECTOR_SIZE (4 * 1024)
#endif
extern int boot_first_warm_boot(void);
/*
 * SPI Controller
 ****************************************************************************************
 */
#ifndef KEIL_FLASH_LOAD_TOOL
static void spi_flash_xip_share(uint32_t ins, int speed, int wait_cycle, int ins_width, int addr_width, int tran_type, int si_fmt, int cache_clear)
{
	/// Configure SPI 
	spi_disable(SSI_MASTER_0_BASE);
	spi_baud_rate(SSI_MASTER_0_BASE, CFG_QSPI_CLK, speed);
	spi_ctl0(SSI_MASTER_0_BASE, si_fmt, SPI_TMOD_RX_ONLY, 32, 0, 0);
	qspi_spi_ctl(SSI_MASTER_0_BASE, wait_cycle, ins_width, addr_width, tran_type);
	spi_rxftl(SSI_MASTER_0_BASE, 0);
	spi_intr_mask(SSI_MASTER_0_BASE, SPI_IT_ALL);
	spi_intr_unmask(SSI_MASTER_0_BASE, SPI_IT_RXF);
	spi_ndf(SSI_MASTER_0_BASE, 1);
	spi_ser(SSI_MASTER_0_BASE, 1, SPI_SS);//re-enable XIP need set to 1
	spi_enable(SSI_MASTER_0_BASE);		

#if CFG_FPGA
	qspi_single_wire_mode(0);		
#endif

	/// Clear icache memory
	if (cache_clear)
		icache_clear_mem();
       
	/// Program glue logic
	qspi_xip_enable(addr_width, wait_cycle, tran_type);
	qspi_xip_ssn(1);
	qspi_xip_ins(ins);

	// Enable icache
	icache_en(1);

	// Delay 
	if (cache_clear)
		clk_delay(20);

}
#endif	// KEIL_FLASH_LOAD_TOOL 

static void spi_config(int speed, int ssn, int fmt, int tmod, int dfs, int ndf, int ins_width, int addr_width, int idle_cycle, int tran_type)
{
	spi_disable(SSI_MASTER_0_BASE);		// disable SPI
#if CFG_FPGA
	spi_baud_rate(SSI_MASTER_0_BASE, 64000000, speed);		
#else
#ifndef KEIL_FLASH_LOAD_TOOL
	spi_baud_rate(SSI_MASTER_0_BASE, CFG_QSPI_CLK, speed);
#else
	spi_baud_rate(SSI_MASTER_0_BASE, 32000000, speed);		// default SPI pclk
#endif
#endif
	spi_ctl0_clear(SSI_MASTER_0_BASE);
	spi_rx_samp_dly(SSI_MASTER_0_BASE, 1);  //add for flash XIP (VDDIO 1.8V  QSPI 32M)
	spi_ctl0(SSI_MASTER_0_BASE, fmt, tmod, dfs, 0, 0);
	if (fmt == SPI_QUAD_FMT) {
		qspi_spi_ctl(SSI_MASTER_0_BASE, idle_cycle, ins_width, addr_width, tran_type);
	}
	spi_txftl(SSI_MASTER_0_BASE, 0);		
	spi_rxftl(SSI_MASTER_0_BASE, 0);		
	if (ndf)
		spi_ndf(SSI_MASTER_0_BASE, (ndf-1));
	spi_ser(SSI_MASTER_0_BASE, 0, ssn);		// disable chip select		
	spi_intr_clr(SSI_MASTER_0_BASE);
	spi_enable(SSI_MASTER_0_BASE);		// enable SPI
}

static int spi_tx(int speed, uint8_t *ins, uint16_t ins_len, uint8_t *data, uint16_t data_len)
{
	int nbytes;

#if CFG_FPGA
	qspi_single_wire_mode(1);	/// only for FPGA		
#endif

#ifndef KEIL_FLASH_LOAD_TOOL
	uint32_t primask;
	/// interrupt mask
	primask = disable_irq();
#endif

	/// config spi
	spi_config(speed, SPI_SS, SPI_STD_FMT, SPI_TMOD_TX_ONLY, 8, 0, 0, 0, 0, 0);

	/// Fill the FIFO
	uint32_t fifo_size = SPI_FIFO_DEPTH;

	/// the instruction length is less than fifo size
	for (uint32_t i = 0; i < ins_len; i++) {
		spi_dr_write(SSI_MASTER_0_BASE, *ins++);
	}
	fifo_size -= ins_len;

	if (fifo_size && data_len) {
		if (data_len <= fifo_size) {
			nbytes = data_len;
		} else {
			nbytes = fifo_size;
		}

		for (int i = 0; i < nbytes; i++) {
			spi_dr_write(SSI_MASTER_0_BASE, *data++);
		}

		data_len -= nbytes;
		fifo_size -= nbytes;
	}

	/// chip select 
	spi_ser(SSI_MASTER_0_BASE, 1, SPI_SS);			

	/// any more data to send
	int retry = 5000;
	while (data_len) {
		while (!(spi_sr(SSI_MASTER_0_BASE) & SPI_SR_TFNF) && retry--); 		// poll until TX FIFO not full
		if (retry <= 0)
			break;
		spi_dr_write(SSI_MASTER_0_BASE, *data++);
		data_len -= 1;
		retry = 5000;
	}

	if (retry <= 0)
		goto out;

	retry = 5000;
	do {
		uint32_t status = spi_sr(SSI_MASTER_0_BASE);
		if ((status & SPI_SR_TFE) && !(status & SPI_SR_BUSY)) 	// make sure tx empty and not busy 
			break;
	} while(retry--);

out:

	spi_disable(SSI_MASTER_0_BASE);		// Disable SPI

#ifndef KEIL_FLASH_LOAD_TOOL
	/// interrupt unmask
	__set_PRIMASK(primask);
#endif

	return ((retry > 0) ? 1 : 0);

}

static int spi_trx(int speed, int dfs, uint8_t *ins, uint16_t ins_len, uint8_t *rxb, uint16_t rx_len)
{
	//only support data frame size is 8 or 32 
#if CFG_FPGA
	qspi_single_wire_mode(1);		
#endif

	int ndf;
	if (dfs == SPI_DFS_32_BITS) {
		ndf = rx_len/4;
	} else if (dfs == SPI_DFS_8_BITS) {
		ndf = rx_len;
	} else {
		return 0;
	}

#ifndef KEIL_FLASH_LOAD_TOOL
	uint32_t primask;
	/// interrupt mask 
	primask = disable_irq();
#endif

	/// config spi
	spi_config(speed, SPI_SS, SPI_STD_FMT, SPI_TMOD_EEPROM_READ, dfs, ndf, 0, 0, 0, 0);

	/// fill the TX fifo
	if (dfs == SPI_DFS_8_BITS) {
		for (int i = 0; i < ins_len; i++) {
			spi_dr_write(SSI_MASTER_0_BASE, *ins++);
		}
	}

	if (dfs == SPI_DFS_32_BITS) {
		for (int i = 0; i < (ins_len/4); i++) {
			spi_dr_write(SSI_MASTER_0_BASE, *((uint32_t *)ins++));
		}
	}

	/// chip select 
	spi_ser(SSI_MASTER_0_BASE, 1, SPI_SS);			

	// read from flash... 
	int retry;
	uint32_t count = 0;
	do {
		retry = 5000;
		while (!(spi_sr(SSI_MASTER_0_BASE) & SPI_SR_RFNE) && retry--);
		if (retry <= 0) {
			break;
		}

		uint32_t rxfl = spi_rxfl(SSI_MASTER_0_BASE);
		if (rxfl == 0) {
			retry = -1;
			break;
		}

		for (uint32_t i = 0; i < rxfl; i++) {
			if (dfs == SPI_DFS_8_BITS) {
				*(rxb + count + i) = (uint8_t)spi_dr_read(SSI_MASTER_0_BASE);
			} else {
				*((uint32_t *)rxb + count + i) =  spi_dr_read(SSI_MASTER_0_BASE);
			}
		}
		count += rxfl;
	} while (count < ndf);

	if (retry <= 0) 
		goto out;

	/// disable SPI
	retry = 5000;
	do {
		uint32_t status = spi_sr(SSI_MASTER_0_BASE);
		if ((status & SPI_SR_TFE) && !(status & SPI_SR_BUSY))	// make sure tx empty and not busy 
			break;
	} while (retry--);

out:

	spi_disable(SSI_MASTER_0_BASE);		

#ifndef KEIL_FLASH_LOAD_TOOL
	/// interrupt unmask
	__set_PRIMASK(primask);
#endif

	if (retry > 0) {
		// reverse data aince the SPI fifo is big endian
		if (dfs == SPI_DFS_32_BITS) {
			for (int i = 0; i < ndf; i++) {
				*((uint32_t *)rxb + i) = __rev(*((uint32_t *)rxb + i));
			}
		}
	}

	return ((retry > 0) ? 1 : 0);

}

/*
 * SPI Flash Commands
 ****************************************************************************************
 */
#if (CFG_EXT_SPI_FLASH_MXIC || CFG_EXT_SPI_FLASH_GIGA)
static uint8_t read_status(void)
{
	uint8_t ins[1];
	uint8_t ins_rsp[1];

	ins[0] = 0x05;
	if (!spi_trx(SPI_INS_SPEED, SPI_DFS_8_BITS, ins, 1, ins_rsp, 1)) {
		return 0;
	}

	return ins_rsp[0];
}
#endif	// CFG_EXT_SPI_FLASH_MXIC

#if (CFG_EXT_SPI_FLASH_PUYA || CFG_EXT_SPI_FLASH_GIGA_8M)
static uint16_t read_status(void)
{
	uint8_t ins[1];
	uint8_t ins_rsp[2];

	ins[0] = 0x05;
	if (!spi_trx(SPI_INS_SPEED, SPI_DFS_8_BITS, ins, 1, ins_rsp, 2)) {
		return 0;
	}
	
	return (ins_rsp[0]|(ins_rsp[1]<<8));
}
#endif	// CFG_EXT_SPI_FLASH_PUYA || CFG_EXT_SPI_FLASH_GIGA_8M

static int write_enable(void)
{
	uint8_t ins[1];

	ins[0] = 0x06;
	if (!spi_tx(SPI_INS_SPEED, ins, 1, NULL, 0)) {
		return 0;
	}

	int retry = 1000;
	while (retry--) {
		// poll WEL bit 
		if (read_status() & 0x2)
			break;
	}

	return ((retry > 0) ? 1 : 0);
}

static int write_disable(void)  __attribute__((unused));
static int write_disable(void)
{
	uint8_t ins[1];

	ins[0] = 0x04;
	if (!spi_tx(SPI_INS_SPEED, ins, 1, NULL, 0))
		return 0;

	int retry = 1000;
	while (retry--) {
		// poll WEL bit 
		if (!(read_status() & 0x2))
			break;
	}

	return ((retry > 0) ? 1 : 0);
}

#if (CFG_EXT_SPI_FLASH_MXIC)
static int write_status(uint8_t status)
{
	uint8_t ins[2];

	if (!write_enable()) 
		return 0;

	ins[0] = 0x01;
	ins[1] = status;
	if (!spi_tx(SPI_INS_SPEED, ins, 2, NULL, 0)) {
		return 0;
	}

	int retry = 5000;
	while (retry--) {
		/// poll WIP bit 
		if (!(read_status() & 0x1))
			break;
	}

	return ((retry > 0) ? 1 : 0);
}
#endif	// CFG_EXT_SPI_FLASH_GIGA

#if (CFG_EXT_SPI_FLASH_PUYA || CFG_EXT_SPI_FLASH_GIGA_8M)
static int write_status(uint16_t status)
{
	uint8_t ins[3];

	if (!write_enable())
		return 0;

	ins[0] = 0x01;
	ins[1] = (uint8_t)status;
	ins[2] = (uint8_t)(status>>8);
	if (!spi_tx(SPI_INS_SPEED, ins, 3, NULL, 0))
		return 0;

	int retry = 5000;
	while (retry--) {
		/// poll WIP bit 
		if (!(read_status() & 0x1))
			break;
	}

	return ((retry > 0) ? 1 : 0);
}
#endif	// (CFG_EXT_SPI_FLASH_PUYA || CFG_EXT_SPI_FLASH_GIGA_8M)

static int erase_sector(uint32_t address)
{
	uint8_t ins[4];

	if (!write_enable())
		return 0;

	ins[0] = 0x20;
	ins[1] = (uint8_t)(address>>16);
	ins[2] = (uint8_t)(address>>8);
	ins[3] = (uint8_t)(address);;
	if (!spi_tx(SPI_INS_SPEED, ins, 4, NULL, 0))
		return 0;

	/// poll WIP bit 
	int retry;
#if CFG_NO_OS && CFG_PM_EN
	if (boot_first_warm_boot()) {
		pd1_tmr_init();
		pd1_tmr_periodic_start(1000);

		retry = 5000;
		while (retry--) {
			if (!(read_status() & 0x1)) {
				break;
			}
			__wfi();
		}
		pd1_tmr_stop();
	} else {
		retry = 50000;
		while (retry--) {
			if (!(read_status() & 0x1))
				break;
		}
	}

#else
	retry = 50000;
	while (retry--) {
		if (!(read_status() & 0x1))
			break;
	}
#endif

	return ((retry > 0) ? 1 : 0);
}

static int erase_block(uint32_t address) __attribute__((unused));
static int erase_block(uint32_t address)
{
	uint8_t ins[4];

	if (!write_enable())
		return 0;

	ins[0] = 0xD8;
	ins[1] = (uint8_t)(address>>16);
	ins[2] = (uint8_t)(address>>8);
	ins[3] = (uint8_t)(address);;
	if (!spi_tx(SPI_INS_SPEED, ins, 4, NULL, 0))
		return 0;

	/// poll WIP bit 
	int retry = 50000;
	while (retry--) {
		if (!(read_status() & 0x1))
			break;
	}

	return ((retry > 0) ? 1 : 0);
}

static int erase_chip(void)
{
	uint8_t ins[1];

	if (!write_enable())
		return 0;

	ins[0] = 0xC7;
	if (!spi_tx(SPI_INS_SPEED, ins, 1, NULL, 0))
		return 0;

	/// poll WIP bit 
	int retry = 500000;
	while (retry--) {
		if (!(read_status() & 0x1))
			break;
	}

	return ((retry > 0) ? 1 : 0);
}

static int prog_data(uint32_t address, uint8_t *data, uint16_t data_len)
{
	uint8_t ins[4];

	if (!write_enable())
		return 0;

	ins[0] = 0x02;
	ins[1] = (uint8_t)(address>>16);
	ins[2] = (uint8_t)(address>>8);
	ins[3] = (uint8_t)(address);
	if (!spi_tx(SPI_PROG_SPEED, ins, 4, data, data_len)) {
		return 0;
	}

	/// poll WIP bit 
	int retry = 5000;
	while (retry--) {
		if (!(read_status() & 0x1))
			break;
	}

	return ((retry > 0) ? 1 : 0);
}

static int read_data(uint32_t address, uint8_t *data, uint16_t data_len)
{
	uint8_t ins[4];
	
	ins[0] = (uint8_t)(address);
	ins[1] = (uint8_t)(address>>8);
	ins[2] = (uint8_t)(address>>16);
	ins[3] = 0x03;

	if (!spi_trx(SPI_READ_SPEED, SPI_DFS_32_BITS, ins, 4, data, data_len)) {
		return 0;
	}

	return data_len;
}

static uint16_t manu_dev_id(void)
{
	uint8_t ins[4];
	uint8_t ins_rsp[2];

	ins[0] = 0x90;
	ins[1] = 0x00;
	ins[2] = 0x00;
	ins[3] = 0x00;

	if (!spi_trx(SPI_INS_SPEED, SPI_DFS_8_BITS, ins, 4, ins_rsp, 2))
		return 0;

	// manufacture + device ID
	return (ins_rsp[0] | (ins_rsp[1] << 8));
}

/*
 * SPI Flash APIs
 ****************************************************************************************
 */
int spi_flash_init(void)
{
#ifdef KEIL_FLASH_LOAD_TOOL
#if !CFG_FPGA
	/// QSPI pin mux
	spi_flash_pin_mux();		
#endif
#endif	// KEIL_FLASH_LOAD_TOOL

	uint16_t manu_id = manu_dev_id();

#ifdef KEIL_FLASH_LOAD_TOOL
#ifdef UART_DEBUG
	printf("id=%04x\r\n", manu_id);
#endif
#endif

	if (manu_id != (FLASH_MANU_ID | (FLASH_DEVICE_ID << 8))) 
		return 0;

#if CFG_EXT_SPI_FLASH_MXIC
	uint8_t status;

	status = read_status();
	if (!(status & 0x40)) {
		status |= 0x40;
		write_status(status);
	}
#endif	// CFG_EXT_SPI_FLASH_MXIC

#if (CFG_EXT_SPI_FLASH_PUYA || CFG_EXT_SPI_FLASH_GIGA_8M)
	uint16_t status;

	status = read_status();
	if (!(status & 0x200)) {
		status |= 0x200;
		write_status(status);
	}
#endif	// (CFG_EXT_SPI_FLASH_PUYA || CFG_EXT_SPI_FLASH_GIGA_8M)

	return 1;
}

void spi_flash_deinit(void)
{
	// Nothing to do
}

int spi_flash_chip_erase(void)
{
	if (!erase_chip())
		return 0;	
	return 1;
}

#ifndef KEIL_FLASH_LOAD_TOOL
int spi_flash_sector_erase(uint32_t addr, uint32_t size)
{
	while (size) {
		if (!erase_sector(addr))
			return 0;
	
		addr += FLASH_SECTOR_SIZE;
		if (size >= FLASH_SECTOR_SIZE)
			size -= FLASH_SECTOR_SIZE;
		else
			break;
	}

	return 1;
}
#else	// KEIL_FLASH_LOAD_TOOL
int spi_flash_sector_erase(uint32_t addr)
{
	if (!erase_sector(addr)) {
		return 0;
	}
	return 1;
}
#endif	// KEIL_FLASH_LOAD_TOOL

int spi_flash_read(uint32_t addr, uint8_t *data, uint32_t data_len)
{
	int nbytes;

	// note: assume data_len is 4 bytes align
	while (data_len) {
		if (data_len >= SPI_READ_SIZE)
			nbytes = SPI_READ_SIZE;
		else
			nbytes = data_len;				

		if (!read_data(addr, data, nbytes)) {
			return 0;
		}

		addr += nbytes;
		data += nbytes;
		data_len -= nbytes;
	}	

	return 1;
}

int spi_flash_prog_page(uint32_t addr, uint8_t *data, uint32_t data_len)
{
	int nbytes;

	// note: assume data_len is 4 bytes align
	while (data_len) {
		if (data_len >= SPI_PROG_SIZE)
			nbytes = SPI_PROG_SIZE;
		else
			nbytes = data_len;

		if (!prog_data(addr, data, nbytes)) {
			return 0;
		}

		addr += nbytes;
		data += nbytes;
		data_len -= nbytes;
	}
	
	return 1;
}

uint32_t spi_flash_verify(uint32_t addr, int size, uint8_t *data)
{
	int nbytes, ok = 1;
	uint32_t offset = 0, saddr = addr;

	// note: assume size is 4 bytes align
	while (size) {
		/// By initialized below to 0 cuases linker to link in the C library "memset" function which
		/// not only increase the code size, but also crashed the system  if the "memset" address 
		/// is not ready to be accessed yet (Boot and SPI flash is not ready).   
		uint8_t buf[SPI_READ_SIZE];

		if (size >= SPI_READ_SIZE)
			nbytes = SPI_READ_SIZE;
		else
			nbytes = size;

		if (!read_data(addr, buf, nbytes)) { 
			return 0;
		}

		for (int i = 0; i < nbytes; i++) {
			if (*(data+offset) != buf[i]) {
				ok = 0;
				break;
			}
			offset += 1;
		}

		if (!ok)
			break;
		addr += nbytes;
		size -= nbytes;
	}			

	return (saddr+offset);
}

void spi_flash_pin_mux(void)
{
	uint8_t oe_mask, ie_mask, pu_mask, pd_mask;

	// Pin mux
	gpio_qspi_pin_mux((CFG_QSPI_PIN_0 >> QSPI_CFG_MUX_SHIFT) & 0xF,
									(CFG_QSPI_PIN_2 >> QSPI_CFG_MUX_SHIFT) & 0xF,
										(CFG_QSPI_PIN_3 >> QSPI_CFG_MUX_SHIFT) & 0xF,
											(CFG_QSPI_PIN_4 >> QSPI_CFG_MUX_SHIFT) & 0xF,
												(CFG_QSPI_PIN_5 >> QSPI_CFG_MUX_SHIFT) & 0xF);
	// Pad
	oe_mask = ((CFG_QSPI_PIN_0 >> QSPI_CFG_OE_IE_SHIFT) & 1) |
				 		(((CFG_QSPI_PIN_1 >> QSPI_CFG_OE_IE_SHIFT) & 1) << 1) |
				 			(((CFG_QSPI_PIN_2 >> QSPI_CFG_OE_IE_SHIFT) & 1) << 2) |
				 				(((CFG_QSPI_PIN_3 >> QSPI_CFG_OE_IE_SHIFT) & 1) << 3) |
				 					(((CFG_QSPI_PIN_4 >> QSPI_CFG_OE_IE_SHIFT) & 1) << 4) |
				 						(((CFG_QSPI_PIN_5 >> QSPI_CFG_OE_IE_SHIFT) & 1) << 5);
	ie_mask = ((CFG_QSPI_PIN_0 >> (QSPI_CFG_OE_IE_SHIFT+1)) & 1) |
				 		(((CFG_QSPI_PIN_1 >> (QSPI_CFG_OE_IE_SHIFT+1)) & 1) << 1) |
				 			(((CFG_QSPI_PIN_2 >> (QSPI_CFG_OE_IE_SHIFT+1)) & 1) << 2) |
				 				(((CFG_QSPI_PIN_3 >> (QSPI_CFG_OE_IE_SHIFT+1)) & 1) << 3) |
				 					(((CFG_QSPI_PIN_4 >> (QSPI_CFG_OE_IE_SHIFT+1)) & 1) << 4) |
				 						(((CFG_QSPI_PIN_5 >> (QSPI_CFG_OE_IE_SHIFT+1)) & 1) << 5);

	pd_mask = ((CFG_QSPI_PIN_0 >> QSPI_CFG_PD_PU_SHIFT) & 1) |
				 		(((CFG_QSPI_PIN_1 >> QSPI_CFG_PD_PU_SHIFT) & 1) << 1) |
				 			(((CFG_QSPI_PIN_2 >> QSPI_CFG_PD_PU_SHIFT) & 1) << 2) |
				 				(((CFG_QSPI_PIN_3 >> QSPI_CFG_PD_PU_SHIFT) & 1) << 3) |
				 					(((CFG_QSPI_PIN_4 >> QSPI_CFG_PD_PU_SHIFT) & 1) << 4) |
				 						(((CFG_QSPI_PIN_5 >> QSPI_CFG_PD_PU_SHIFT) & 1) << 5);

	pu_mask = ((CFG_QSPI_PIN_0 >> (QSPI_CFG_PD_PU_SHIFT+1)) & 1) |
				 		(((CFG_QSPI_PIN_1 >> (QSPI_CFG_PD_PU_SHIFT+1)) & 1) << 1) |
				 			(((CFG_QSPI_PIN_2 >> (QSPI_CFG_PD_PU_SHIFT+1)) & 1) << 2) |
				 				(((CFG_QSPI_PIN_3 >> (QSPI_CFG_PD_PU_SHIFT+1)) & 1) << 3) |
				 					(((CFG_QSPI_PIN_4 >> (QSPI_CFG_PD_PU_SHIFT+1)) & 1) << 4) |
				 						(((CFG_QSPI_PIN_5 >> (QSPI_CFG_PD_PU_SHIFT+1)) & 1) << 5);

	gpio_qspi_pin_pad_ie_oe_pu_pd(oe_mask, ie_mask, pu_mask, pd_mask);

	// Drive Strength
	gpio_qspi_pin_pad_pc(0x1F);
}

/*
 * XIP
 ****************************************************************************************
 */
void spi_flash_xip_disable(void)
{
	__DSB();
	__ISB();

	// disable xip mode
	qspi_xip_disable();

	// disable icache
	icache_en(0);

	// clear pending interrupt
	spi_intr_mask(SSI_MASTER_0_BASE, SPI_IT_ALL);
	NVIC_ClearPendingIRQ(MSpi0_IRQn);

	//qspi_reset();
}

#ifndef KEIL_FLASH_LOAD_TOOL
void spi_flash_power(int on)
{
#if !CFG_FPGA
#if !CFG_SIM
	if (on) {
		/// Turn on power
		aon_qspi_vddio(1);
		/// Wait
		clk_delay(CFG_EXT_SPI_FLASH_POWER_ON_SETTLE_TIME);
	} else {
		aon_qspi_vddio(0);
	}
#endif
#endif
}

void spi_flash_xip_enable(uint32_t speed, int cache_clear)
{

#if CFG_EXT_SPI_FLASH_MXIC
	spi_flash_xip_share(0xEB, speed, 6, QSPI_CMD_WIDTH_8BITS, QSPI_ADDR_WIDTH_24BITS, QSPI_TT_CMD_STD_ADDR_QUAD, SPI_QUAD_FMT, cache_clear);
#endif

#if (CFG_EXT_SPI_FLASH_PUYA || CFG_EXT_SPI_FLASH_GIGA_8M)
	spi_flash_xip_share(0xEB, speed, 6, QSPI_CMD_WIDTH_8BITS, QSPI_ADDR_WIDTH_24BITS, QSPI_TT_CMD_STD_ADDR_QUAD, SPI_QUAD_FMT, cache_clear);
#endif

#if CFG_EXT_SPI_FLASH_GIGA
	spi_flash_xip_share(0x3B, speed, 8, QSPI_CMD_WIDTH_8BITS, QSPI_ADDR_WIDTH_24BITS, QSPI_TT_CMD_STD_ADDR_STD, SPI_DUAL_FMT, cache_clear);
#endif
}

int spi_flash_xip_erase_sector(uint32_t addr, uint32_t irq_prio)
{
	int res = 0;
	uint8_t ins[4];
	uint32_t primask, basepri;
	int retry;

	/// disable XIP before issue the erase command
	/// disbale interrupt
	primask = disable_irq();
	/// read the current base priority
	basepri = 	__get_BASEPRI();

	/// disable XIP 
	spi_flash_xip_disable();
	
	/// enable write
	if (!write_enable()) {
		res = -1;
		goto out;
	}

	/// erase command
	ins[0] = 0x20;
	ins[1] = (uint8_t)(addr>>16);
	ins[2] = (uint8_t)(addr>>8);
	ins[3] = (uint8_t)(addr);;
	if (!spi_tx(SPI_INS_SPEED, ins, 4, NULL, 0)) {
		res = -1;
		goto out;
	}

	/// allow interrupts above the specified priority
	__set_BASEPRI(irq_prio << (8 - __NVIC_PRIO_BITS));

	/// enable interrupt
	__set_PRIMASK(primask);

	/// poll WIP bit until erase is done, could be long 
	retry = 50000;
	while (retry--) {
		if (!(read_status() & 0x1))
			break;
	}

	if (retry < 0)
		res = -1;

	/// erase is done, enable XIP       
	/// disable interrupt
	primask = disable_irq();
	
	/// put original base priority
	__set_BASEPRI(basepri);

	/// enable XIP 
	spi_flash_xip_enable(CFG_QSPI_SPEED, 0);

	/// enable interrupt
	__set_PRIMASK(primask);

	return res;
	
out:
	
	/// enable XIP 
	spi_flash_xip_enable(CFG_QSPI_SPEED, 0);
	/// enable interrupt
	__set_PRIMASK(primask);

	return res;

}


int spi_flash_xip_prog_page(uint32_t addr, uint8_t *data, uint32_t data_len, uint32_t irq_prio)
{
	int res = 0;
	uint8_t ins[4];
	uint32_t primask, basepri;
	int nbytes;

	/// disable XIP before issue the program command
	/// disable interrupt
	primask = disable_irq();

	/// read the current base priority
	basepri = 	__get_BASEPRI();

	/// disable XIP 
	spi_flash_xip_disable();

	/// allow interrupts above the specified priority
	__set_BASEPRI(irq_prio << (8 - __NVIC_PRIO_BITS));
	
	while (data_len) {
		if (data_len >= SPI_PROG_SIZE)
			nbytes = SPI_PROG_SIZE;
		else
			nbytes = data_len;

		if (((addr & (FLASH_PAGE_SIZE - 1)) + nbytes) >= FLASH_PAGE_SIZE) {
			nbytes = FLASH_PAGE_SIZE - (addr & (FLASH_PAGE_SIZE - 1));
		}

		/// enable write 
		if (!write_enable()) {
			res = -1;
			break;
		}

		/// program command
		ins[0] = 0x02;
		ins[1] = (uint8_t)(addr>>16);
		ins[2] = (uint8_t)(addr>>8);
		ins[3] = (uint8_t)(addr);
		if (!spi_tx(SPI_PROG_SPEED, ins, 4, data, nbytes)) {
			res = -1;
			break;
		}

		/// enable interrupt
		__set_PRIMASK(primask);

		/// poll WIP bit until program done 
		int retry = 5000;
		while (retry--) {
			if (!(read_status() & 0x1))
				break;
		}

		if (retry < 0) {
			res = -1;
			/// disable interrupt
			primask = disable_irq();
			break;
		}

		addr += nbytes;
		data += nbytes;
		data_len -= nbytes;

		/// disable interrupt
		primask = disable_irq();
	}

	/// put original base priority
	__set_BASEPRI(basepri);

	/// enable XIP 
	spi_flash_xip_enable(CFG_QSPI_SPEED, 0);
	
	/// enable interrupt
	__set_PRIMASK(primask);

	return res;
}

int spi_flash_xip_read(uint32_t addr, uint8_t *data, uint32_t data_len, uint32_t irq_prio)
{
	int nbytes;
	int res = 0;
	uint32_t primask;

	/// disable XIP before issue the read command
	/// disable interrupt
	primask = disable_irq();

	/// disable XIP 
	spi_flash_xip_disable();

	// note: assume data_len is 4 bytes align
	while (data_len) {
		if (data_len >= SPI_READ_SIZE)
			nbytes = SPI_READ_SIZE;
		else
			nbytes = data_len;				

		if (!read_data(addr, data, nbytes)) {
			res = -1;
			goto out;
		}

		addr += nbytes;
		data += nbytes;
		data_len -= nbytes;
	}	

out:

	/// enable XIP 
	spi_flash_xip_enable(CFG_QSPI_SPEED, 0);

	/// enable interrupt
	__set_PRIMASK(primask);

	return res;
}

#endif 	// KEIL_FLASH_LOAD_TOOL
#endif 	// CFG_EXT_SPI_FLASH
