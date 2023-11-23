/**
 ****************************************************************************************
 *
 * @file hal_spi.h
 *
 * @brief SPI driver header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_SPI_H
#define HAL_SPI_H

/**
 ****************************************************************************************
 * @defgroup HAL_SPI SPI device driver  
 * @ingroup HAL
 * @brief  HAL_SPI
 * @{
 ****************************************************************************************
 */

#include "in_mmap.h"
#include "in_compile.h"

/*
 * Defines
 ****************************************************************************************
 */

#define SPI_REG_CTRL0_OFS		0x00000000UL
#define SPI_REG_CTRL1_OFS		0x00000004UL
#define SPI_REG_SSIEN_OFS		0x00000008UL
#define SPI_REG_SE_OFS				0x00000010UL
#define SPI_REG_BAUD_OFS		0x00000014UL
#define SPI_REG_TXFTL_OFS		0x00000018UL
#define SPI_REG_RXFTL_OFS		0x0000001CUL
#define SPI_REG_TXFL_OFS			0x00000020UL
#define SPI_REG_RXFL_OFS		0x00000024UL
#define SPI_REG_SR_OFS			0x00000028UL
#define SPI_REG_IMR_OFS			0x0000002CUL
#define SPI_REG_ISR_OFS			0x00000030UL
#define SPI_REG_RISR_OFS			0x00000034UL
#define SPI_REG_TXOIC_OFS		0x00000038UL
#define SPI_REG_RXOIC_OFS		0x0000003CUL
#define SPI_REG_RXUIC_OFS		0x00000040UL
#define SPI_REG_ICR_OFS			0x00000048UL
#define SPI_REG_ICR_OFS			0x00000048UL
#define SPI_REG_DMACR_OFS		0x0000004CUL
#define SPI_REG_DMATDL_OFS	0x00000050UL
#define SPI_REG_DMARDL_OFS	0x00000054UL
#define SPI_REG_DR_OFS			0x00000060UL
#define SPI_REG_RX_SAMPLE_DLY	0x000000F0UL
#define SPI_REG_DUAL_QUAD_CTRL_OFS	0x000000F4UL

#define SPI_CTL0_DFS_16	0x0000000FUL
#define SPI_CTL0_SCPH		0x00000040UL
#define SPI_CTL0_SCPOL	0x00000080UL
#define SPI_CTL0_TMOD		0x00000300UL
#define SPI_CTL0_DFS			0x001F0000UL
#define SPI_CTL0_FRF			0x00600000UL

#define SPI_CTL1_NDF			0x0000FFFFUL

#define SPI_SE_EN				0x0000000FUL		/// Slave Enable Register: TODO Decide how many slave can one master supported

#define SPI_BAUD_SCKDV	0x0000FFFFUL

#define SPI_TXFTL_TFT		0x0000000FUL

#define SPI_RXFTL_RFT		0x0000000FUL

#define SPI_TXFL_TXTFL		0x0000000FUL

#define SPI_RXFL_RXTFL	0x0000000FUL

#define SPI_SR_BUSY			0x00000001UL
#define	 SPI_SR_TFNF			0x00000002UL
#define	 SPI_SR_TFE				0x00000004UL
#define	 SPI_SR_RFNE			0x00000008UL
#define	 SPI_SR_RFF			0x00000010UL
#define	 SPI_SR_TXE			0x00000020UL
#define	 SPI_SR_DCOL			0x00000040UL		/// Data Collection Error

#define SPI_IT_TXE				0x00000001UL
#define SPI_IT_TXO				0x00000002UL
#define SPI_IT_RXU				0x00000004UL
#define SPI_IT_RXO				0x00000008UL
#define SPI_IT_RXF				0x00000010UL
#define SPI_IT_MSTIM			0x00000020UL
#define SPI_IT_ALL				(SPI_IT_TXE|SPI_IT_TXO|SPI_IT_RXU|SPI_IT_RXO|SPI_IT_RXF|SPI_IT_MSTIM)

#define SPI_DUAL_QUAD_TRANS_TYPE			0x00000003UL
#define SPI_DUAL_QUAD_ADDR_LEN				0x0000003CUL
#define SPI_DUAL_QUAD_INS_LEN				0x00000300UL
#define SPI_DUAL_QUAD_WAIT_CYCLES		0x00007800UL 

/*
 * Enumeratios
 ****************************************************************************************
 */

/// SPI ID 
enum spi_id {
	/// Master SPI Id
	MSPI_ID,
	/// Slave SPI Id
	SSPI0_ID,
	/// Slave SPI Id
	SSPI1_ID,
};

/// SPI format 
enum spi_fmt {
	/// Standard
	SPI_STD_FMT,
	/// Dual format with 2 data wire
	SPI_DUAL_FMT,
	/// Quad format with 4 data wire
	SPI_QUAD_FMT,
};

/// SPI transfer mode 
enum spi_tmod {
	/// Transfer in bi-direction mode
	SPI_TMOD_TX_AND_RX,		
	/// Tranfer in TX mode only
	SPI_TMOD_TX_ONLY,
	/// Transfer in RX mode only
	SPI_TMOD_RX_ONLY,
	/// Transfer in EEPROM 
	SPI_TMOD_EEPROM_READ,
	SPI_TMOD_MAX,
};

/// SPI data frame size 
enum spi_dfs_bit {
	SPI_DFS_4_BITS = 0x4,
	SPI_DFS_5_BITS,	
	SPI_DFS_6_BITS,
	SPI_DFS_7_BITS,
	SPI_DFS_8_BITS,
	SPI_DFS_9_BITS,
	SPI_DFS_10_BITS,
	SPI_DFS_11_BITS,
	SPI_DFS_12_BITS,
	SPI_DFS_13_BITS,
	SPI_DFS_14_BITS,
	SPI_DFS_15_BITS,
	SPI_DFS_16_BITS,
	SPI_DFS_17_BITS,
	SPI_DFS_18_BITS,
	SPI_DFS_19_BITS,
	SPI_DFS_20_BITS,
	SPI_DFS_21_BITS,
	SPI_DFS_22_BITS,
	SPI_DFS_23_BITS,
	SPI_DFS_24_BITS,
	SPI_DFS_25_BITS,
	SPI_DFS_26_BITS,
	SPI_DFS_27_BITS,
	SPI_DFS_28_BITS,
	SPI_DFS_29_BITS,
	SPI_DFS_30_BITS,
	SPI_DFS_31_BITS,
	SPI_DFS_32_BITS,
	SPI_DFS_MAX,
};

/// SPI error code 
enum spi_err {
	SPI_ERR_OK = 0,
	SPI_ERR_INVALID_PARAM = -1,
	SPI_ERR_INVALID_OPER = -2,
	SPI_ERR_TX_OV = -3,
	SPI_ERR_RX_OV = -4,
	SPI_ERR_RX_UN = -5,
	SPI_ERR_DMA_NOT_AVAIL = -6,
	SPI_ERR_DMA_ERROR = -7,
	SPI_ERR_RESET = -8,
	SPI_ERR_ALIGN = -9,
	SPI_ERR_TMO = -10,
} ;

/// SPI DMA direction
enum spi_dir {
	SPI_DIR_RX = 1,
	SPI_DIR_TX,
};

/// SPI CS (master only)
enum spi_mstr_cs {
	SPI_CS_0 	= 0x1,
	SPI_CS_1	= 0x2,
	SPI_CS_2	= 0x4,
	SPI_CS_3	= 0x8,
};


/// Dual or Quad SPI command width
enum qspi_cmd_width {
	QSPI_CMD_WIDTH_0BITS,
	QSPI_CMD_WIDTH_4BITS,
	QSPI_CMD_WIDTH_8BITS,
	QSPI_CMD_WIDTH_16BITS,
};

/// Dual or Quad SPI address width 
enum  qspi_addr_width {
	QSPI_ADDR_WIDTH_0BITS,
	QSPI_DDR_WIDTH_4BITS,
	QSPI_ADDR_WIDTH_8BITS,
	QSPI_ADDR_WIDTH_12BITS,
	QSPI_ADDR_WIDTH_16BITS,
	QSPI_ADDR_WIDTH_20BITS,
	QSPI_ADDR_WIDTH_24BITS,
	QSPI_ADDR_WIDTH_28BITS,
	QSPI_ADDR_WIDTH_32BITS,
	QSPI_ADDR_WIDTH_36BITS,
	QSPI_ADDR_WIDTH_40BITS,
	QSPI_ADDR_WIDTH_44BITS,
	QSPI_ADDR_WIDTH_48BITS,
	QSPI_ADDR_WIDTH_52BITS,
	QSPI_ADDR_WIDTH_56BITS,
	QSPI_ADDR_WIDTH_60BITS,
};

/// Quad SPI command and address transfer type 
enum qspi_ttype {
	QSPI_TT_CMD_STD_ADDR_STD,		
	QSPI_TT_CMD_STD_ADDR_QUAD,
	QSPI_TT_CMD_ADDR_QUAD,
};

/*
 * Inline Functions
 ****************************************************************************************
 */

static INLINE void spi_ctl0_clear(uint32_t spi_base)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), 0);
}

static INLINE void spi_ctl0(uint32_t spi_base, int fmt, int tmod, int dfs, int phase_high, int polarity_high)
{
	uint32_t reg = RD_WORD(spi_base + SPI_REG_CTRL0_OFS);

	// phase
	if (phase_high) {
		reg |= SPI_CTL0_SCPH;
	} else {
		reg &= ~SPI_CTL0_SCPH;
	}

	// polarity
	if (polarity_high) {
		reg |= SPI_CTL0_SCPOL;
	} else {
		reg &= ~SPI_CTL0_SCPOL;
	}

	// format 
	reg &= ~SPI_CTL0_FRF;
	reg |= ((fmt&0x3)<<21);

	// transfer mode
	reg &= ~SPI_CTL0_TMOD;
	reg |= (tmod << 8);

	// data frame size
	reg &= ~SPI_CTL0_DFS;
	dfs -= 1;
	reg |= ((dfs&0x1F)<<16);
	
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), reg);
}

static FORCEINLINE void spi_phase_0(uint32_t spi_base)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), (RD_WORD(spi_base + SPI_REG_CTRL0_OFS) & ~SPI_CTL0_SCPH));
}

static FORCEINLINE void spi_phase_1(uint32_t spi_base)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), (RD_WORD(spi_base + SPI_REG_CTRL0_OFS) | SPI_CTL0_SCPH));
}

static FORCEINLINE void spi_polarity_0(uint32_t spi_base)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), (RD_WORD(spi_base + SPI_REG_CTRL0_OFS) & ~SPI_CTL0_SCPOL));
}

static FORCEINLINE void spi_polarity_1(uint32_t spi_base)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), (RD_WORD(spi_base + SPI_REG_CTRL0_OFS) | SPI_CTL0_SCPOL));
}

static FORCEINLINE void spi_tmod(uint32_t spi_base, int tmod)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), ((RD_WORD(spi_base + SPI_REG_CTRL0_OFS) & ~SPI_CTL0_TMOD) | (tmod << 8)));
}

static FORCEINLINE void spi_dfs(uint32_t spi_base, int len)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), ((RD_WORD(spi_base + SPI_REG_CTRL0_OFS) & ~SPI_CTL0_DFS) | (((len - 1)&0x1F)<<16)));
}

static FORCEINLINE void spi_frf(uint32_t spi_base, int fmt)
{
	WR_WORD((spi_base + SPI_REG_CTRL0_OFS), ((RD_WORD(spi_base + SPI_REG_CTRL0_OFS) & ~SPI_CTL0_FRF) | ((fmt&0x3)<<21)));
}

static FORCEINLINE void spi_ndf(uint32_t spi_base, uint16_t ndf)
{
	WR_WORD((spi_base + SPI_REG_CTRL1_OFS), ((RD_WORD(spi_base + SPI_REG_CTRL1_OFS) & ~SPI_CTL1_NDF)|ndf));
}

static FORCEINLINE void spi_enable(uint32_t spi_base)
{
	WR_WORD((spi_base + SPI_REG_SSIEN_OFS), (RD_WORD(spi_base + SPI_REG_SSIEN_OFS) |1UL));
}

static FORCEINLINE void spi_disable(uint32_t spi_base)
{
	WR_WORD((spi_base + SPI_REG_SSIEN_OFS), (RD_WORD(spi_base + SPI_REG_SSIEN_OFS) & ~1UL));
}

static FORCEINLINE void spi_ser_en(uint32_t spi_base, int bit)
{
	WR_WORD((spi_base + SPI_REG_SE_OFS), (RD_WORD(spi_base + SPI_REG_SE_OFS)|(1<<bit)));
}

static FORCEINLINE void spi_ser_dis(uint32_t spi_base, int bit)
{
	WR_WORD((spi_base + SPI_REG_SE_OFS), (RD_WORD(spi_base + SPI_REG_SE_OFS)&~(1<<bit)));
}

static INLINE void spi_ser(uint32_t spi_base, int enable, int bit)
{
	uint32_t reg = RD_WORD(spi_base + SPI_REG_SE_OFS);

	if (enable) {
		reg &= ~SPI_SE_EN;
		reg |= (1 << (bit & 0x3));
	} else {
		reg &= ~SPI_SE_EN;
	}

	WR_WORD((spi_base + SPI_REG_SE_OFS), reg);
}

#if CFG_FPGA
static INLINE void spi_fpga_cs(int ss, int low)
{
	uint32_t reg = RD_WORD(FPGA_SPI_FLASH_CTRL);

	if (((reg >> 8) & 0xF) != 1) {
		reg |= (1 << 8);
	}

	if (low) {
		reg &= ~(1<<((ss & 0xF) + 4));  
	} else {
		reg |= (1<<((ss & 0xF) + 4));
	}

	WR_WORD(FPGA_SPI_FLASH_CTRL, reg);
}
#endif

static INLINE void spi_baud_rate(uint32_t spi_base, uint32_t clk, uint32_t spi_clk)
{
	uint16_t div = clk/spi_clk;
	if (div < 2)
		div = 2;
	if (div & 1)
		div += 1;
		
	WR_WORD((spi_base + SPI_REG_BAUD_OFS), div);
}

static FORCEINLINE void spi_txftl(uint32_t spi_base, uint8_t tl)
{
	WR_WORD((spi_base + SPI_REG_TXFTL_OFS), tl);
}

static INLINE void spi_rxftl(uint32_t spi_base, uint8_t tl)
{
	WR_WORD((spi_base + SPI_REG_RXFTL_OFS), tl);
}

static INLINE uint8_t spi_txfl(uint32_t spi_base)
{
	return (RD_WORD(spi_base + SPI_REG_TXFL_OFS)/* & 0xF*/);
}

static INLINE uint8_t spi_rxfl(uint32_t spi_base)
{
	return (RD_WORD(spi_base + SPI_REG_RXFL_OFS) & 0xF);
}

static INLINE uint32_t spi_sr(uint32_t spi_base)
{
	return (RD_WORD(spi_base + SPI_REG_SR_OFS));
}

static FORCEINLINE void spi_intr_mask(uint32_t spi_base, uint32_t mask)
{
	WR_WORD((spi_base + SPI_REG_IMR_OFS), (RD_WORD(spi_base + SPI_REG_IMR_OFS) & ~mask));
}

static FORCEINLINE void spi_intr_unmask(uint32_t spi_base, uint32_t mask)
{
	WR_WORD((spi_base + SPI_REG_IMR_OFS), (RD_WORD(spi_base + SPI_REG_IMR_OFS)|mask));
}

static FORCEINLINE uint32_t spi_intr_status(uint32_t spi_base)
{
	return RD_WORD(spi_base + SPI_REG_ISR_OFS);
}

static FORCEINLINE uint32_t spi_intr_raw_status(uint32_t spi_base)
{
	return RD_WORD(spi_base + SPI_REG_RISR_OFS);
}

static FORCEINLINE uint32_t spi_intr_txo_clr(uint32_t spi_base)
{
	return RD_WORD(spi_base + SPI_REG_TXOIC_OFS);
}

static FORCEINLINE uint32_t spi_intr_rxo_clr(uint32_t spi_base)
{
	return RD_WORD(spi_base + SPI_REG_RXOIC_OFS);
}

static FORCEINLINE uint32_t spi_intr_rxu_clr(uint32_t spi_base)
{
	return RD_WORD(spi_base + SPI_REG_RXUIC_OFS);
}

static FORCEINLINE uint32_t spi_intr_clr(uint32_t spi_base)
{
	return RD_WORD(spi_base + SPI_REG_ICR_OFS);
}

static FORCEINLINE void spi_txdma_enable(uint32_t spi_base)
{
	WR_WORD(spi_base + SPI_REG_DMACR_OFS, (RD_WORD(spi_base + SPI_REG_DMACR_OFS)|0x2));
}

static FORCEINLINE void spi_txdma_disable(uint32_t spi_base)
{
	WR_WORD(spi_base + SPI_REG_DMACR_OFS, (RD_WORD(spi_base + SPI_REG_DMACR_OFS)&~0x2));
}

static FORCEINLINE void spi_txdma_req_level(uint32_t spi_base, int level)
{
	WR_WORD(spi_base + SPI_REG_DMATDL_OFS, (level & 0xFF));
}

static FORCEINLINE void spi_rxdma_enable(uint32_t spi_base)
{
	WR_WORD(spi_base + SPI_REG_DMACR_OFS, (RD_WORD(spi_base + SPI_REG_DMACR_OFS)|0x1));
}

static FORCEINLINE void spi_rxdma_disable(uint32_t spi_base)
{
	WR_WORD(spi_base + SPI_REG_DMACR_OFS, (RD_WORD(spi_base + SPI_REG_DMACR_OFS)&~0x1));
}

static INLINE void spi_rxdma_req_level(uint32_t spi_base, int level)
{
	if (level <= 0)
		return;

	WR_WORD(spi_base + SPI_REG_DMARDL_OFS, ((level-1) & 0xFF));
}

static FORCEINLINE void spi_dr_write(uint32_t spi_base, uint32_t data)
{
	WR_WORD((spi_base + SPI_REG_DR_OFS), data);
}

static FORCEINLINE uint32_t spi_dr_read(uint32_t spi_base)
{
	return RD_WORD(spi_base + SPI_REG_DR_OFS);
}

static FORCEINLINE void spi_rx_samp_dly(uint32_t spi_base, uint8_t delay)
{
	WR_WORD((spi_base + SPI_REG_RX_SAMPLE_DLY), delay);
}

static INLINE void qspi_spi_ctl(uint32_t spi_base, int wc, int ins_len, int adr_len, int tt)
{
	uint32_t reg = RD_WORD(spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS);

	reg &= ~SPI_DUAL_QUAD_WAIT_CYCLES;
	reg |= ((wc&0xF) << 11);		

	reg &= ~SPI_DUAL_QUAD_INS_LEN;
	reg |= ((ins_len&0x3) << 8);		

	reg &= ~SPI_DUAL_QUAD_ADDR_LEN;
	reg |= ((adr_len&0xF) << 2);		

	reg &= ~SPI_DUAL_QUAD_TRANS_TYPE;
	reg |= (tt&0x3) ;		

	WR_WORD((spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS), reg);
}

static INLINE void qspi_wait_cycle(uint32_t spi_base, int wc)
{

	uint32_t reg = RD_WORD(spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS);

	reg &= ~SPI_DUAL_QUAD_WAIT_CYCLES;
	reg |= ((wc&0xF) << 11);		

	WR_WORD((spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS), reg);
}

static INLINE void qspi_cmd_width(uint32_t spi_base, int ins_len)
{
	uint32_t reg = RD_WORD(spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS);

	reg &= ~SPI_DUAL_QUAD_INS_LEN;
	reg |= ((ins_len&0x3) << 8);		

	WR_WORD((spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS), reg);
}

static INLINE void qspi_addr_width(uint32_t spi_base, int adr_len)
{
	uint32_t reg = RD_WORD(spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS);

	reg &= ~SPI_DUAL_QUAD_ADDR_LEN;
	reg |= ((adr_len&0xF) << 2);		

	WR_WORD((spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS), reg);
}

static INLINE void qspi_trans_type(uint32_t spi_base, int tt)
{
	uint32_t reg = RD_WORD(spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS);

	reg &= ~SPI_DUAL_QUAD_TRANS_TYPE;
	reg |= (tt&0x3) ;		

	WR_WORD((spi_base + SPI_REG_DUAL_QUAD_CTRL_OFS), reg);
}

static INLINE void qspi_single_wire_mode(int single)
{
#if CFG_FPGA
	if (single)
		WR_WORD(FPGA_REG_FPGA_SPI_M0_CTRL, 1);
	else
		WR_WORD(FPGA_REG_FPGA_SPI_M0_CTRL, 0);
#endif
}

static INLINE void qspi_xip_enable(int addr_width, int wait_cycle, int tran_type)
{
	uint32_t reg = SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_APB_MUX_SEL |
							SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_FLASH_ENDIAN_PRDATA_SWAP | 
							((addr_width & SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_FLASH_ADDR_LENGTH_MASK) << SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_FLASH_ADDR_LENGTH_SHIFT) |
							((wait_cycle & SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_WAIT_CYCLE_MASK) << SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_WAIT_CYCLE_SHIFT) |
							((tran_type & SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_TRANS_TYPE_MASK) << SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_TRANS_TYPE_SHIFT) |
							SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_FLASH_ADDR_SRC;	

	WR_WORD(SPIFLASH_REG_SPIFLASH_MISC_CTRL, reg);
}

static INLINE void qspi_xip_disable(void)
{
	WR_WORD(SPIFLASH_REG_SPIFLASH_MISC_CTRL, SPIFLASH_REG_SPIFLASH_MISC_CTRL_DEFAULT);
}

static INLINE void qspi_xip_ins(uint32_t ins)
{
	WR_WORD(SPIFLASH_REG_SPIFLASH_INSTRUCTION, ins);
}

static INLINE void qspi_xip_ssn(int ssn)
{
	WR_WORD(SPIFLASH_REG_SPIFLASH_SLV_SEL, (ssn & SPIFLASH_REG_SPIFLASH_SLV_SEL_CTL_SPI_FLASH_SLAVE_SEL_MASK));	
}
static INLINE void qspi_addr_set_offset(uint32_t offset)
{
	WR_WORD(SPIFLASH_REG_SPIFLASH_ADDR_OFFSET, offset);
}
static INLINE uint32_t qspi_addr_get_offset(void)
{
	return RD_WORD(SPIFLASH_REG_SPIFLASH_ADDR_OFFSET);
}
static INLINE void spi_flash_icache_dec(int en)
{
	if (en) {
		WR_WORD(SPIFLASH_REG_ICACHE_DEC_MISC_CTRL, 1);
	} else {
		WR_WORD(SPIFLASH_REG_ICACHE_DEC_MISC_CTRL, 0);
	}
}

static INLINE void spi_reset(int id)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_RESET_CTRL_1);

	// Toggle 1-0-1 to reset
	if (id == MSPI_ID) {
		reg &= ~GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_MASTER1_SSI_RSTN_REG;
	} else {
		if (id == SSPI0_ID)
			reg &= ~GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_SLAVE0_SSI_RSTN_REG;
		else
			reg &= ~GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_SLAVE1_SSI_RSTN_REG;
	}
	WR_WORD(GLOBAL_REG_RESET_CTRL_1, reg);
	if (id == MSPI_ID) {
		reg |= GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_MASTER1_SSI_RSTN_REG;
	} else {
		if (id == SSPI0_ID)
			reg |= GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_SLAVE0_SSI_RSTN_REG;
		else
			reg |= GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_SLAVE1_SSI_RSTN_REG;
	}
	WR_WORD(GLOBAL_REG_RESET_CTRL_1, reg);
}

static INLINE int qspi_is_xip_enable(void)
{
	return ((RD_WORD(SPIFLASH_REG_SPIFLASH_MISC_CTRL) & SPIFLASH_REG_SPIFLASH_MISC_CTRL_CTL_SPI_APB_MUX_SEL) ? 1:0);
}


static INLINE void qspi_reset(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_RESET_CTRL_1);

	// Toggle 1-0-1 to reset
	reg &= ~GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_MASTER0_SSI_RSTN_REG;
	WR_WORD(GLOBAL_REG_RESET_CTRL_1, reg);
	reg |= GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_CPU_SSI_MASTER0_SSI_RSTN_REG;
	WR_WORD(GLOBAL_REG_RESET_CTRL_1, reg);
}


/*
 * API Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Open the SPI driver
 *
 * @param[in] id		The SPI ID, @see enum spi_id.   
 *
 * @return Handle to the SPI driver, NULL means open failed. 
 ****************************************************************************************
 */
//void *hal_spi_open(int id);
//void *hal_spi_open(int id, int speed, int phase, int polarity, int tmod, int dfs, int prio, void *arg, void (*callback)(void *arg, int status, int nbytes));
void *hal_spi_open(int id, int speed, int phase, int polarity, int prio);
//void *hal_spi_open_dma(int id, int speed, int phase, int polarity, int tmod, int prio);
void *hal_spi_open_dma(int id, int speed, int phase, int polarity, int prio);


/**
 ****************************************************************************************
 * @brief Close the SPI driver
 *
 * @param[in] hdl		The handle from the "open" function call.   
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
int hal_spi_close(void *hdl);
int hal_spi_close_dma(void *hdl);

/**
 ****************************************************************************************
 * @brief Set SPI interrupt priority
 *
 * @param[in] hdl		The handle from the "open" function call.   
 * @param[in] prio		Interrupt priority. @see in_irq.h.
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
int hal_spi_int_prio(void *hdl, int prio);
/**
 ****************************************************************************************
 * @brief Master or Slave SPI transmit function
 * @note 
 *				1. For SPI slave transmit, the master needs to provide the "Slave Select" signal.  The SPI slave will 
 *					transmit one unit (could be byte, short, or long depends on the data frame size) out per "Slave Select"
 *					signal.  SPI slave can't do multiple transfer within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *					 
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] cs				The SPI slave select.  This is only valid for SPI master and the possible value are 0 or 1.
 * @param[in] speed			The SPI serial clock rate.  They can be 16, 8, 4, 2, or 1 Mhz. Only for master.
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] buffer		The void pointer point to the TX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The TX buffer length.       
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
//int hal_spi_tx(void *hdl, int cs, int speed, int phase, int polarity, int dfs, void *buffer, uint16_t buffer_len);
//int hal_spi_tx(void *hdl, int cs, void *buffer, uint16_t buffer_len, uint16_t *actual_size);
int hal_spi_tx_non_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, void *arg, void (*callback)(void *arg, int status, uint16_t size));
int hal_spi_tx_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, uint32_t tmo, uint16_t *actual_size);
int hal_spi_tx_dma_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, uint32_t tmo, uint16_t *actual_size);
int hal_spi_tx_dma_non_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, void *arg, void (*callback)(void *arg, int status, uint16_t actual_size));


/**
 ****************************************************************************************
 * @brief Master or Slave SPI Receive function
 * @note 
 *				1. SPI slave can receive multiple uint within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] cs				The SPI slave select.  This is only valid for master SPI and the possible value are 0 or 1.
 * @param[in] speed			The SPI serial clock rate.  They can be 16, 8, 4, 2, or 1 Mhz.  Only for master.
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] buffer		The void pointer point to the RX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The RX buffer length.       
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
//int hal_spi_rx(void *hdl, int cs, int speed, int phase, int polarity, int dfs, void *buffer, uint16_t buffer_len);
//int hal_spi_rx(void *hdl, int cs, void *buffer, uint16_t buffer_len, uint16_t *actual_size);
int hal_spi_rx_non_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, void *arg, void (*callback)(void *arg, int status, uint16_t size));
int hal_spi_rx_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, uint32_t tmo, uint16_t *actual_size);
int hal_spi_rx_dma_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, uint32_t tmo, uint16_t *actual_size);
int hal_spi_rx_dma_non_block(void *hdl, int cs, int dfs, void *buffer, uint16_t buffer_len, void *arg, void (*callback)(void *arg, int status, uint16_t actual_size));


/**
 ****************************************************************************************
 * @brief Master or Slave SPI Transmit and Receive function (bi-direction)
 * @note 
 *				1. For SPI slave transmit, the master needs to provide the "Slave Select" signal.  The SPI slave will 
 *					transmit one unit (could be byte, short, or long depends on the data frame size) out per "Slave Select"
 *					signal.  SPI slave can't do multiple transfer within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] cs				The SPI slave select.  This is only valid for master SPI and the possible value are 0 or 1.
 * @param[in] speed			The SPI serial clock rate.  They can be 16, 8, 4, 2, or 1 Mhz. Only for master.
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] wbuf			The void pointer point to the TX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] rbuf			The void pointer point to the RX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buf_len	The TX and RX buffer length.       
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
//int hal_spi_trx(void *hdl, int cs, int speed, int phase, int polarity, int dfs, void *wbuf, void *rbuf, uint16_t buf_len);
//int hal_spi_trx(void *hdl, int cs, void *wbuf, void *rbuf, uint16_t buf_len, uint16_t *actual_size);
int hal_spi_trx_non_block(void *hdl, int cs, int dfs, void *wbuf, void *rbuf, uint16_t buf_len, void *arg, void (*callback)(void *arg, int status, uint16_t actual_size));
int hal_spi_trx_block(void *hdl, int cs, int dfs, void *wbuf, void *rbuf, uint16_t buf_len, uint32_t tmo, uint16_t *actual_size);
int hal_spi_trx_dma_block(void *hdl, int cs, int dfs, void *wbuf, void *rbuf, uint16_t buffer_len, uint32_t tmo, uint16_t *actual_size);
int hal_spi_trx_dma_non_block(void *hdl, int cs, int dfs, void *wbuf, void *rbuf, uint16_t buffer_len, void *arg, void (*callback)(void *arg, int status, uint16_t actual_size));


/**
 ****************************************************************************************
 * @brief Master or Slave SPI transmit DMA function
 * @note 
 *				1. For SPI slave transmit, the master needs to provide the "Slave Select" signal.  The SPI slave will 
 *					transmit one unit (could be byte, short, or long depends on the data frame size) out per "Slave Select"
 *					signal.  SPI slave can't do multiple transfer within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *					 
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] cs				The SPI slave select.  This is only valid for SPI master and the possible value are 0 or 1.
 * @param[in] speed			The SPI serial clock rate.  They can be 16, 8, 4, 2, or 1 Mhz. Only for master.
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] buffer		The void pointer point to the TX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The TX buffer length.       
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
//int hal_spi_tx_dma(void *hdl, int cs, int speed, int phase, int polarity, int dfs, void *buffer, uint16_t buffer_len);
int hal_spi_tx_dma(void *hdl, int cs, void *buffer, uint16_t buffer_len, uint16_t *actual_size);

/**
 ****************************************************************************************
 * @brief Master or Slave SPI Receive DMA function
 * @note 
 *				1. SPI slave can receive multiple uint within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] cs				The SPI slave select.  This is only valid for master SPI and the possible value are 0 or 1.
 * @param[in] speed			The SPI serial clock rate.  They can be 16, 8, 4, 2, or 1 Mhz.  Only for master.
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] buffer		The void pointer point to the RX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The RX buffer length.       
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
//int hal_spi_rx_dma(void *hdl, int cs, int speed, int phase, int polarity, int dfs, void *buffer, uint16_t buffer_len);
int hal_spi_rx_dma(void *hdl, int cs, void *buffer, uint16_t buffer_len, uint16_t *actual_size);

/**
 ****************************************************************************************
 * @brief Master or Slave SPI Transmit and Receive DMA function (bi-direction)
 * @note 
 *				1. For SPI slave transmit, the master needs to provide the "Slave Select" signal.  The SPI slave will 
 *					transmit one unit (could be byte, short, or long depends on the data frame size) out per "Slave Select"
 *					signal.  SPI slave can't do multiple transfer within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] cs				The SPI slave select.  This is only valid for master SPI and the possible value are 0 or 1.
 * @param[in] speed			The SPI serial clock rate.  They can be 16, 8, 4, 2, or 1 Mhz. Only for master.
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] wbuf			The void pointer point to the TX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] rbuf			The void pointer point to the RX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The TX and RX buffer length.       
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
//int hal_spi_trx_dma(void *hdl, int cs, int speed, int phase, int polarity, int dfs, void *wbuf, void *rbuf, uint16_t buffer_len);
int hal_spi_trx_dma(void *hdl, int cs, void *wbuf, void *rbuf, uint16_t buffer_len, uint16_t *actual_size);


/**
 * Experimental slave SPI API 
 */
 /**
 ****************************************************************************************
 * @brief Slave SPI transmit function
 * @note 
 *				1. For SPI slave transmit, the master needs to provide the "Slave Select" signal.  The SPI slave will 
 *					transmit one unit (could be byte, short, or long depends on the data frame size) out per "Slave Select"
 *					signal.  SPI slave can't do multiple transfer within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *					 
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] buffer		The void pointer point to the TX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The TX buffer length.       
 * @param[out] wlen		Actual TX length.
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
int hal_slv_spi_tx(void *hdl, int phase, int polarity, int dfs, void *buf, uint16_t buf_len, uint16_t *wlen);
/**
 ****************************************************************************************
 * @brief  Slave SPI Receive function
 * @note 
 *				1. SPI slave can receive multiple uint within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] buffer		The void pointer point to the RX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The RX buffer length.       
 * @param[out] rlen		Actual RX length.
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */

int hal_slv_spi_rx(void *hdl, int phase, int polarity, int dfs, void *buf, uint16_t buf_len, uint16_t *rlen);

/**
 ****************************************************************************************
 * @brief  Slave SPI Transmit and Receive function (bi-direction)
 * @note 
 *				1. For SPI slave transmit, the master needs to provide the "Slave Select" signal.  The SPI slave will 
 *					transmit one unit (could be byte, short, or long depends on the data frame size) out per "Slave Select"
 *					signal.  SPI slave can't do multiple transfer within one "Slave Select" signal. 
 *				2.	SPI slave can only support speed up to D0 clock divided by 4.  If D0 clock is 32 Mhz, then SPI master
 *					speed has to be less or equal to 8 Mhz.    
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity	The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] wbuf			The void pointer point to the TX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] rbuf			The void pointer point to the RX buffer.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buf_len	The TX and RX buffer length.       
 * @param[out] wlen		Actual TX length.
 * @param[out] rlen		Actual RX length.
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
int hal_slv_spi_trx(void *hdl, int phase, int polarity, int dfs, void *wbuf, void *rbuf, uint16_t buf_len, uint16_t* wlen, uint16_t *rlen);

/**
 ****************************************************************************************
 * @brief  Slave SPI stop function
 *
 * @param[in] hdl				The handle from the "open" function call.   
 *
 * @return None. 
 ****************************************************************************************
 */

void hal_slv_spi_stop(void *hdl);


/**
 ****************************************************************************************
 * @brief  Get SPI busy status.
 *
 * @param[in] hdl				The handle from the "open" function call.   
 *
 * @return 1 if busy, otherwise 0 
 ****************************************************************************************
 */

int hal_spi_busy(void *hdl);

/**
 ****************************************************************************************
 * @brief Master SPI Transmit and Receive DMA block chain function (bi-direction)
 * @note 
 *				1. This is to start the DMA block chaining. The SPI's TX/RX FIFO will be automatically filled/emptied by the 
 *					DMA.
 *				2. While user handles the ping buffer, the DMA will handle the pong buffer 
 *				2. The ping/pong scheme will continuously transfer data to/from slave which means the 
 *					slave selected signal will be always low. 		 
 *
 * @param[in] hdl				The handle from the "open" function call.   
 * @param[in] cs				The SPI slave select.  This is only valid for master SPI and the possible value are 0 or 1.
 * @param[in] speed			The SPI serial clock rate.  They can be 16, 8, 4, 2, or 1 Mhz. Only for master.
 * @param[in] phase			The SPI clock phase. 0: first edge of SPI clock, 1: trailing edge of SPI clock.
 * @param[in] polarity		The SPI clock polarity. 0: rising, 1: falling.
 * @param[in] dfs				The data frame size, @see enum spi_dfs_bit.
 * @param[in] wbuf			The ping/pong buffers pointer array for the TX.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] rbuf			The ping/pong buffer pointer array for the RX.  This pointer, depends on the data frame size,
 *										will be cast by the driver to byte, short, or long.
 * @param[in] buffer_len	The ping/pong buffer size.
 * @param[in] arg				The user provided argument for the ping/pong completed call back function.
 * @param[in] callback		The user provided ping/pong completed call back function:
 *											
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */

int hal_spi_trx_dma_chain_start(void *hdl, int cs, int speed, int phase, int polarity, int dfs, void *wbuf[2], void *rbuf[2], uint16_t buffer_len, void *arg, void (*callback)(void *arg, int dir, int id, int status));

/**
 ****************************************************************************************
 * @brief Master or Slave SPI Transmit and Receive DMA block chain function (bi-direction)
 * @note 
 *				1. Stop the DMA block chaining. 
 *
 * @param[in] hdl				The handle from the "open" function call.   
 *
 * @return SPI_ERR_OK if successful, otherwise failed. @see enum spi_err. 
 ****************************************************************************************
 */
int hal_spi_trx_dma_chain_stop(void *hdl);


int hal_spiflash_trx_dma(void *h, int cs, int speed, void *wbuf, uint16_t wbuf_len, void *rbuf, uint16_t rbuf_len, void *arg, void (*comp_cb)(void *arg, int status));


/// @} HAL_SPI

#endif	// HAL_SPI_H
