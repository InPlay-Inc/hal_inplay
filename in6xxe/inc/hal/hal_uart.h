/**
 ****************************************************************************************
 *
 * @file hal_uart.h
 *
 * @brief Uart driver header file  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_UART_H
#define HAL_UART_H

/**
 ****************************************************************************************
 * @defgroup HAL_UART uart driver  
 * @ingroup HAL
 * @brief  HAL_UART
 * @{
 ****************************************************************************************
 */

#include <stdint.h>
#include "in_mmap.h"

/*
 * Defines
 ****************************************************************************************
 */

#define UART_REG_RBR_OFS		0x00000000UL
#define UART_REG_THR_OFS		0x00000000UL
#define UART_REG_DLL_OFS		0x000000D0UL
#define UART_REG_DLH_OFS		0x000000D4UL
#define UART_REG_IER_OFS		0x00000004UL
#define UART_REG_IIR_OFS		0x000000E0UL
#define UART_REG_FCR_OFS		0x00000008UL
#define UART_REG_LCR_OFS		0x0000000CUL
#define UART_REG_MCR_OFS		0x00000010UL
#define UART_REG_LSR_OFS		0x00000014UL
#define UART_REG_MSR_OFS		0x00000018UL
#define UART_REG_USR_OFS		0x0000007CUL
#define UART_REG_TFL_OFS		0x00000080UL
#define UART_REG_RFL_OFS		0x00000084UL
#define UART_REG_DLF_OFS		0x000000C0UL
#define UART_REG_CTO_OFS		0x00000028UL

#define UART_FIFO_DEPTH 16

#define UART_LSR_RFE 	(1<<7)		/* RX FIFO Error */
#define UART_LSR_TEMT	(1<<6)		/* TX Empty */
#define UART_LSR_THRE	(1<<5)		/* THR Empty */
#define UART_LSR_BI		(1<<4)		/* Break Interrupt */
#define UART_LSR_FE		(1<<3)		/* Framing Error */
#define UART_LSR_PE		(1<<2)		/* Parity Error */
#define UART_LSR_OE		(1<<1)		/* Overrun Error */
#define UART_LSR_DR		(1<<0)		/* Data Ready */

#define UART_MSR_DCD	(1<<7)		/* Data Carrier Detect */ 
#define UART_MSR_RI		(1<<6)		/* Ring Indicator */ 
#define UART_MSR_DSR	(1<<5)		/* Data Set Ready */ 
#define UART_MSR_CTS	(1<<4)		/* Clear To Send */ 
#define UART_MSR_DDCD (1<<3)		
#define UART_MSR_TERI	(1<<2)		
#define UART_MSR_DDSR (1<<1)		
#define UART_MSR_DCTS (1<<0)		

#define UART_MCR_SIRE				0x00000040UL		/* SIR Mode Enable */
#define UART_MCR_AFCE				0x00000020UL		/* Auto Flow Control Enbale */
#define UART_MCR_LOOPBACK	0x00000010UL		/* Loopback */
#define UART_MCR_OUT2			0x00000008UL		/* OUT2 */
#define UART_MCR_OUT1			0x00000004UL		/* OUT1 */
#define UART_MCR_RTS				0x00000002UL		/* RTS */
#define UART_MCR_DTR				0x00000001UL		/* Data Terminal Ready */ 

#define UART_LCR_DLAB		0x00000080UL		/* Divisor Latch Access */
#define UART_LCR_BC			0x00000040UL		/* Break Control */
#define UART_LCR_SPS		0x00000020UL		/* Stick Parity */
#define UART_LCR_EPS		0x00000010UL		/* Even Parity Select */
#define UART_LCR_PEN		0x00000008UL		/* Parity Enable */
#define UART_LCR_STOP		0x00000004UL		/* Number of stop bits */
#define UART_LCR_DLS		0x00000003UL		/* Data Length Select */

#define UART_IER_EDSSI				0x00000008UL		/// Modem Status interrupt
#define UART_IER_ELSI				0x00000004UL		/// Receiver Line Status Interrupt
#define UART_IER_ETBEI				0x00000002UL		/// Transmit Holding Register Empty Interrupt
#define UART_IER_ERBFI				0x00000001UL		/// Receive Data Available Interrupt
#define UART_IER_PTIME				0x00000080UL		/// Programmable threshold interrupt mode enable
#define UART_IER_CTO				0x00000010UL		/// RAW Timeout interrupt enable
#define UART_IER_ALL					0x0000001FUL		/// All the interrupts

#define UART_IT_ID_NONE						0x1
#define UART_IT_ID_LINE_STATUS			0x6			/* Highest */
#define UART_IT_ID_RCVR_DATA				0x4			/* Second */
#define UART_IT_ID_CHAR_TIME_OUT		0xC			/* Second */
#define UART_IT_ID_THR_EMPTY				0x2			/* Third */
#define UART_IT_ID_MODEM_STATUS		0x0			/* Fourth */
#define UART_IT_ID_BUSY_DET				0x7				/* Fifth */
#define UART_IT_ID_CTO_DET				0x10		

#define UART_FCR_RT					0x000000C0UL
#define UART_FCR_TET				0x00000030UL
#define UART_FCR_DMAM			0x00000008UL
#define UART_FCR_XFIFOR			0x00000004UL
#define UART_FCR_RFIFOR			0x00000002UL
#define UART_FCR_FIFOE			0x00000001UL

#define UART_TET_EMPTY				0
#define UART_TET_2_CHARS			1
#define UART_TET_QUARTER_FULL	2
#define UART_TET_HALF_FULL		3

#define UART_USR_BUSY				0x00000001UL	/// UART budy
#define UART_USR_TFNF				0x00000002UL	/// TX fifo not full
#define UART_USR_TFE				0x00000004UL	/// TX fifo empty
#define UART_USR_RFNE				0x00000008UL	/// RX fifo not empty
#define UART_USR_RFF				0x00000010UL	/// RX fifo full

#define UART_CTO_STATUS		0x00000010UL
#define UART_CTO_EN				0x00000008UL
#define UART_CTO_CYCLES		0x00000007UL
#define UART_CTO_WAIT			0x00000020UL
#define UART_CTO_AUTO_DEASSERT			0x00000040UL
#define UART_CTO_AUTO_CLEAR			0x00000080UL
#define UART_RTS_ASSERT_BELOW_TH			0x00000100UL
#define UART_RTS_STANDALONE_THRSH			0x00000200UL

/*
 * Enumeration
 ****************************************************************************************
 */

enum uart_id {
	UART0_ID = 0,
	UART1_ID,
};

enum uart_err {
	UART_ERR_PEND = 1,
	UART_ERR_OK = 0,
	UART_ERR_INVALID_PARAM = -1,
	UART_ERR_DEV_BAD_STATE = -2,
	UART_ERR_FE = -3,		/* Frame Error */
	UART_ERR_PE = -4,		/* Parity Error */
	UART_ERR_OE = -5,		/* Overrun Error */
	UART_ERR_BI = -6,		/* Break Error */
	UART_DMA_NOT_AVAIL = -7,
	UART_DMA_TX_FAIL = -8,
	UART_DMA_RX_FAIL = -9,
	UART_OS_FAIL = -10,
	UART_ERR_CFG = -11,
	UART_ERR_DMA = -12,
	UART_ERR_TMO = -13,
	UART_ERR_BUSY = -14,
} ;

enum uart_len {
	UART_LENGTH_5BITS = 0,
	UART_LENGTH_6BITS,
	UART_LENGTH_7BITS,
	UART_LENGTH_8BITS,
};

enum uart_rt {
	UART_RT_1_CHAR = 0,
	UART_RT_QUARTER_FULL,
	UART_RT_HALF_FULL,
	UART_RT_2_LESS_FULL,
};
enum uart_stop_bit {
	UART_STOP_1BIT = 0,
	UART_STOP_2BITS,
};

typedef enum uart_rts_fifo_th {
	UART_RTS_TH_FIFO_1_BYTE = 0,
	UART_RTS_TH_FIFO_DEPTH_QUARTER,
	UART_RTS_TH_FIFO_DEPTH_HALF,
	UART_RTS_TH_FIFO_DEPTH_LESS_2,
} uart_rts_fifo_th_t;

typedef struct uart_init {
	int baud_rate; ///<Uart baud rate
	int data_len; ///<Uart char length, @see enum uart_len
	int stop_bit; ///<Uart stop bits, 0: 1 stop bit, 1: 2 stop bits
	int parity_en; ///<Uart parity enable, 0: disable, 1: enable
	int even_parity; ///<Uart even parity, 0: odd parity, 1: even parity
	int fc; ///<Uart controller flow control enable, 1: enable, 0: disable
	int no_intr; ///<Uart don't generate interrupt
	int prio; ///< interrupt priority
	void *rx_arg; ///< rx callback argument
	void (*rx_cb)(void* arg, int length, int error); ///<rx callback
	void *tx_arg; ///< tx callback argument
	void (*tx_cb)(void* arg, int length, int error); ///< tx callback
} uart_init_t;
/*
 * Inline Functions
 ****************************************************************************************
 */

static __inline uint8_t uart_read_data(uint32_t uart_base)			
{
	return ((uint8_t)RD_WORD(uart_base + UART_REG_RBR_OFS));
}

static __inline void uart_write_data(uint32_t uart_base, uint8_t byte)			
{
	WR_WORD(uart_base + UART_REG_THR_OFS, byte);
}

static __inline void uart_set_baud(uint32_t uart_base, int pclk, int baud)
{
	float div = ((float)pclk/(float)baud)/16.0f;
	uint16_t div_i = div;
	uint8_t div_f = (div - div_i) *64;	/* 6 bits for fraction */

	WR_WORD(uart_base + UART_REG_LCR_OFS, (RD_WORD(uart_base + UART_REG_LCR_OFS) |UART_LCR_DLAB));		/* Latch */
	WR_WORD(uart_base + UART_REG_DLF_OFS, (div_f & 0x3F));		/* Fractional Part */
	WR_WORD(uart_base + UART_REG_DLL_OFS, (div_i & 0xFF));		/* Low */
	WR_WORD(uart_base + UART_REG_DLH_OFS, ((div_i>>8) & 0xFF));		/* High */
	WR_WORD(uart_base + UART_REG_LCR_OFS, (RD_WORD(uart_base + UART_REG_LCR_OFS)  & ~UART_LCR_DLAB));		/* Unlatch */
}

static __inline void uart_set_lcr(uint32_t uart_base, int stop_bit, int par_en, int ev_par, int data_len)
{
	uint32_t reg = RD_WORD(uart_base + UART_REG_LCR_OFS);
	
	if (stop_bit) {
		reg |= UART_LCR_STOP;		
	} else {
		reg &= ~UART_LCR_STOP;		
	}

	if (par_en) {
		reg |= UART_LCR_PEN;
	} else {
		reg &= ~UART_LCR_PEN;
	}

	if (ev_par) {
		reg |= UART_LCR_EPS;
	} else {
		reg &= ~UART_LCR_EPS;
	}

	reg &= ~UART_LCR_DLS;
	if (data_len == 5) {
		reg |= UART_LENGTH_5BITS;		
	} else if (data_len == 6) {
		reg |= UART_LENGTH_6BITS;		
	} else if (data_len == 7) {
		reg |= UART_LENGTH_7BITS;		
	} else {
		reg |= UART_LENGTH_8BITS;		
	}

	WR_WORD(uart_base + UART_REG_LCR_OFS, reg);
}

static __inline void uart_set_stop_bits(uint32_t uart_base, int bits)
{
	uint32_t reg = RD_WORD(uart_base + UART_REG_LCR_OFS);

	if (bits == 1) {
		reg &= ~UART_LCR_STOP;		
	} else {
		reg |= UART_LCR_STOP;		
	}

	WR_WORD(uart_base + UART_REG_LCR_OFS, reg);
}

static __inline void uart_set_parity(uint32_t uart_base, int enable)
{
	uint32_t reg = RD_WORD(uart_base + UART_REG_LCR_OFS);

	if (enable)
		reg |= UART_LCR_PEN;
	else
		reg &= ~UART_LCR_PEN;

	WR_WORD(uart_base + UART_REG_LCR_OFS, reg);
}

static __inline void uart_set_even_parity(uint32_t uart_base, int even)
{
	uint32_t reg = RD_WORD(uart_base + UART_REG_LCR_OFS);

	if (even) {
		reg |= UART_LCR_EPS;
	} else {
		reg &= ~UART_LCR_EPS;
	}

	WR_WORD(uart_base + UART_REG_LCR_OFS, reg);
}

static __inline void uart_set_data_len(uint32_t uart_base, int data_len)
{
	uint32_t reg = RD_WORD(uart_base + UART_REG_LCR_OFS);

	reg &= ~UART_LCR_DLS;

	if (data_len == 5) {
		reg |= UART_LENGTH_5BITS;		
	} else if (data_len == 6) {
		reg |= UART_LENGTH_6BITS;		
	} else if (data_len == 7) {
		reg |= UART_LENGTH_7BITS;		
	} else {
		reg |= UART_LENGTH_8BITS;		
	}

	WR_WORD(uart_base + UART_REG_LCR_OFS, reg);
}

static __inline void uart_intr_enable(uint32_t uart_base, uint32_t bits)			
{
	WR_WORD(uart_base + UART_REG_IER_OFS, (RD_WORD(uart_base + UART_REG_IER_OFS) |bits));		
}

static __inline uint32_t uart_intr_enable_get(uint32_t uart_base)			
{
	return (RD_WORD(uart_base + UART_REG_IER_OFS));		
}

static __inline void uart_intr_disable(uint32_t uart_base, uint32_t bits)			
{
	WR_WORD(uart_base + UART_REG_IER_OFS, (RD_WORD(uart_base + UART_REG_IER_OFS) & ~bits));		
}

static __inline uint32_t uart_intr_status(uint32_t uart_base)			
{
	return (RD_WORD(uart_base + UART_REG_IIR_OFS) & 0x1F);
}

static __inline int uart_fifo_enable_status(uint32_t uart_base)			
{
	return ((RD_WORD(uart_base + UART_REG_IIR_OFS) & 0xC0) == 0xC0);
}

static __inline void uart_fcr(uint32_t uart_base, int fifo_enable, int fifo_tx_thold, int fifo_rx_thold, int dma_mode, int xfifo_reset, int rfifo_reset)			
{
	// This is a write only register.
	uint32_t reg = 0;

	if (fifo_enable) {
		reg |=  UART_FCR_FIFOE;
	} 

	reg |= (fifo_tx_thold & 0x3) << 4;
	reg |= (fifo_rx_thold & 0x3) << 6;
	if (dma_mode)	// DMA mode is not used
		reg |= UART_FCR_DMAM;

	if (xfifo_reset) 
		reg |= UART_FCR_XFIFOR;

	if (rfifo_reset)
		reg |= UART_FCR_RFIFOR;

	WR_WORD(uart_base + UART_REG_FCR_OFS, reg);		
}

static __inline void uart_fifo_disable(uint32_t uart_base)			
{
	WR_WORD(uart_base + UART_REG_FCR_OFS, 0);		
}

static __inline void uart_auto_fc(uint32_t uart_base, int fc)			
{
	WR_WORD(uart_base + UART_REG_MCR_OFS, (fc ? (RD_WORD(uart_base + UART_REG_MCR_OFS)|UART_MCR_AFCE) : (RD_WORD(uart_base + UART_REG_MCR_OFS)&~UART_MCR_AFCE)));		
}


static __inline void uart_xmit_ready(uint32_t uart_base)
{
	do {
		uint32_t reg = RD_WORD(uart_base + UART_REG_LSR_OFS);
		if (reg & UART_LSR_THRE) 
			break;	
	} while (1);
}
	
static __inline void uart_rcvd_ready(uint32_t uart_base)
{
	do {
		uint32_t reg = RD_WORD(uart_base + UART_REG_LSR_OFS);
		if (reg & UART_LSR_DR) 
			break;	
	} while (1);

}

static __inline uint32_t uart_line_status(uint32_t uart_base)
{
	return (RD_WORD(uart_base + UART_REG_LSR_OFS));
}

static __inline uint32_t uart_modem_status(uint32_t uart_base)
{
	return (RD_WORD(uart_base + UART_REG_MSR_OFS));
}

static __inline void uart_rts_off(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_MCR_OFS, (RD_WORD(uart_base + UART_REG_MCR_OFS) & ~UART_MCR_RTS));
}

static __inline void uart_rts_on(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_MCR_OFS, (RD_WORD(uart_base + UART_REG_MCR_OFS) | UART_MCR_RTS));
}

static __inline void uart_rts_off_clear_cto_count_enable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_MCR_OFS, (RD_WORD(uart_base + UART_REG_MCR_OFS) | (1 << 7u)));
}

static __inline void uart_rts_off_clear_cto_count_disable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_MCR_OFS, (RD_WORD(uart_base + UART_REG_MCR_OFS) & ~(1 << 7u)));
}

static __inline uint32_t uart_tfl(uint32_t uart_base)
{
	return RD_WORD(uart_base + UART_REG_TFL_OFS);
}

static __inline uint32_t uart_rfl(uint32_t uart_base)
{
	return RD_WORD(uart_base + UART_REG_RFL_OFS);
}

static __inline uint32_t uart_usr(uint32_t uart_base)
{
	return RD_WORD(uart_base + UART_REG_USR_OFS);
}

static __inline void uart_cto_enable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) | UART_CTO_EN));
	//WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) & ~0x20)); 
}

static __inline void uart_cto_disable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) & ~UART_CTO_EN));
}

static __inline int uart_cto_status(uint32_t uart_base)
{
	return ((RD_WORD(uart_base + UART_REG_CTO_OFS) >> 4) & 1);
}

/* timeout = (1 + cycle) << 9u / pclk */
static __inline void uart_cto_cycles(uint32_t uart_base, int cycle)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, ((RD_WORD(uart_base + UART_REG_CTO_OFS) &  ~UART_CTO_CYCLES) | (cycle & 0x7)));
}

static __inline void uart_cto_wait_enable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) | UART_CTO_WAIT));
}

static __inline void uart_cto_wait_disable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) & ~UART_CTO_WAIT));
}

static __inline void uart_cto_auto_rts_deassert_enable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) | UART_CTO_AUTO_DEASSERT));
}

static __inline void uart_cto_auto_deassert_rts_disable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) & ~UART_CTO_AUTO_DEASSERT));
}

static __inline void uart_rts_below_th_assert_enable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) | UART_RTS_ASSERT_BELOW_TH));
}

static __inline void uart_rts_below_th_assert_disable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) & ~UART_RTS_ASSERT_BELOW_TH));
}

static __inline void uart_cto_auto_rts_manu_clear(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) | UART_CTO_AUTO_CLEAR));
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) & ~UART_CTO_AUTO_CLEAR));
}

static __inline void uart_rts_standalone_th_enable(uint32_t uart_base, uart_rts_fifo_th_t th)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) | (UART_RTS_STANDALONE_THRSH | ((th & 0x03) << 10u))));
}

static __inline void uart_rts_standalone_th_disable(uint32_t uart_base)
{
	WR_WORD(uart_base + UART_REG_CTO_OFS, (RD_WORD(uart_base + UART_REG_CTO_OFS) & ~UART_RTS_STANDALONE_THRSH));
}


/*
 * APIs
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Open the uart driver
 *
 * @param[in] id					Uart Id, @see enum uart_id   
 * @param[in] init					init parameter, @see uart_init_t
 *
 * @return Uart driver handle if successful; NULL otherwise
 ****************************************************************************************
 */
void *hal_uart_open(int id, uart_init_t *init);

/**
 ****************************************************************************************
 * @brief Close the uart driver
 *
 * @param[in] hdl					Uart handle from the open API
 *
 * @return No return
 ****************************************************************************************
 */
void hal_uart_close(void *hdl);

/**
 ****************************************************************************************
 * @brief Output 1 char
 * @note This function is to support C printf function
 *
 * @param[in] hdl					Uart handle from the open API
 * @param[in] c					Character code
 *
 * @return No return
 ****************************************************************************************
 */
void hal_uart_putc(void *hdl, char c);

/**
 ****************************************************************************************
 * @brief Uart TX by polling
 *
 * @param[in] hdl					Uart handle from the open API
 * @param[in] buffer			Data buffer to TX
 * @param[in] buffer_len		Data buffer length
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_xmit_poll(void *hdl, uint8_t *buffer, uint32_t buffer_len);

/**
 ****************************************************************************************
 * @brief Uart RX by polling
 *
 * @param[in] hdl					Uart handle from the open API
 * @param[in] buffer			Data buffer to RX
 * @param[in] buffer_len		Data buffer length
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_rcvd_poll(void *hdl, uint8_t *buffer, uint32_t buffer_len);

/**
 ****************************************************************************************
 * @brief Uart TX by interrupt
 * @note This function can be in either block or non-block mode. If TX completion call back function is not 
 *				specified, this function will be blocked until TX completed.  Otherwise, this function will return 
 *				(non-block) 	without waiting for the TX completion.  Later on, the TX completion callback function 
 *				will be called from the driver's interrupt service routine to indicate transfer completed, the exact 
 *				transmit bytes and any errors.   
 *
 * @param[in] hdl					Uart handle from the open API
 * @param[in] buffer			Data buffer to TX
 * @param[in] buffer_len		Data buffer length
 * @param[in] cb_arg			Argument that user wants to pass to the TX completion call back function
 * @param[in] callback			TX completion call back function provided by the user 
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_xmit_intr(void *hdl, uint8_t *buffer, uint32_t buffer_len);

/**
 ****************************************************************************************
 * @brief HCI Uart TX by interrupt
 * @note This function is used for BLE HCI. Don't use it in normal application.   
 *
 * @param[in] hdl					Uart handle from the open API
 * @param[in] buffer			Data buffer to TX
 * @param[in] buffer_len		Data buffer length
 * @param[in] cb_arg			Argument that user wants to pass to the TX completion call back function
 * @param[in] callback			TX completion call back function provided by the user 
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_xmit_intr_hci(void* hdl, uint8_t* buffer, uint32_t buffer_len, void* cb_arg, void (*callback)(void* arg, int length, int error));
/**
 ****************************************************************************************
 * @brief Uart RX by interrupt
 * @note This function can be in either block or non-block mode. If RX completion call back function is not 
 *				specified, this function will be blocked until RX completed.  Otherwise, this function will return 
 *				(non-block) 	without waiting for the RX completion.  Later on, the RX completion callback function 
 *				will be called from the driver's interrupt service routine to indicate transfer completed, the exact 
 *				receive bytes and any errors.   
 *
 * @param[in] hdl							Uart handle from the open API
 * @param[in] buffer					Data buffer to RX
 * @param[in] buffer_len				Data buffer length
 * @param[in] tmo             			Timeout for block call, 0: means wait forever
 * @param[out] actual_rx_len		Blocking call return the exact RX bytes
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_rcvd_intr(void *hdl, uint8_t *buffer, uint32_t buffer_len, uint32_t tmo, uint32_t *actual_rx_len);

/**
 ****************************************************************************************
 * @brief HCI Uart RX by interrupt.
 * @note This function is used for BLE HCI. Don't use it in normal application.     
 *
 * @param[in] hdl							Uart handle from the open API
 * @param[in] buffer					Data buffer to RX
 * @param[in] buffer_len				Data buffer length
 * @param[in] cb_arg					Argument that user wants to pass to the RX completion call back function
 * @param[in] callback					RX completion call back function provided by the user 
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_rcvd_intr_hci(void* hdl, uint8_t* buffer, uint32_t buffer_len, void* cb_arg, void (*callback)(void* arg, int length, int error));
/**
 ****************************************************************************************
 * @brief  Manually turn on RTS request
 *
 * @param[in] hdl					Uart handle from the open API
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_flow_on(void *hdl);

/**
 ****************************************************************************************
 * @brief  Manually turn off RTS request
 *
 * @param[in] hdl					Uart handle from the open API
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_flow_off(void *hdl);

/**
 ****************************************************************************************
 * @brief Uart TX by DMA
 *
 * @param[in] hdl					Uart handle from the open API
 * @param[in] buffer			Data buffer to TX
 * @param[in] buffer_len		Data buffer length
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_xmit_dma(void *hdl, uint8_t *buffer, uint32_t buffer_len);

/**
 ****************************************************************************************
 * @brief Uart RX by DMA
 *
 * @param[in] hdl							Uart handle from the open API
 * @param[in] buffer					Data buffer pointer for RX
 * @param[in] buffer_len				Data buffer length. Max 2047 for dma transmission.
 * @param[in] tmo             			Timeout for block call, 0: means wait forever
 * @param[out] actual_rx_len		Blocking call return the exact RX bytes
 *
 * @return Driver error return code, @see enum uart_err 
 ****************************************************************************************
 */
int hal_uart_rcvd_dma(void *hdl, uint8_t *buffer, uint32_t buffer_len, uint32_t tmo, uint32_t *actual_rx_len);



/**
 * ****************************************************************************************
 * @brief cancel uart rx
 * 
 * @param[in] hdl 
 * @return none
 * ****************************************************************************************
 */
void hal_uart_cancel(void* hdl);


/**
 * ****************************************************************************************
 * @brief enable uart break feature. Use uart break signal to wake chip.
 * 
 * @param[in] hdl 
 * @param[in] en 1: enable, 0: disable
 * @param[in] cb callback function
 * @param[in] arg callback function argument
 * @return Driver error return code, @see enum uart_err  
 * ****************************************************************************************
 */
int hal_uart_en_break(void* hdl, char en, void (*cb)(void*), void* arg);

/**
 * ****************************************************************************************
 * @brief enable uart break interrupt
 * 
 * @param[in] hdl 
 * @return Driver error return code, @see enum uart_err  
 * ****************************************************************************************
 */
int hal_uart_en_unbreak_int(void *hdl);



#endif	// HAL_UART_H

