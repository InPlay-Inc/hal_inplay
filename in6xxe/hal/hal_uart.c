#include "in_config.h"

#define CFG_NB_UART (CFG_UART0_EN + CFG_UART1_EN)

/**
 ****************************************************************************************
 *
 * @file hal_uart.c
 *
 * @brief Platform uart functions  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#if CFG_NB_UART
#include <stdbool.h>
#include <stdint.h>
#include <stdbool.h>

#include "in_arm.h"
#include "in_mmap.h"
#include "in_irq.h"
#include "in_debug.h"

#include "./hal/hal_gpio.h"
#include "./hal/hal_clk.h"
#include "./hal/hal_uart.h"
#if CFG_PM_EN
#include "./hal/hal_power.h"
#include "./hal/hal_timer.h"
#endif
#include "./hal/hal_dma.h"

#if !CFG_NO_OS
#include "cmsis_os.h"
#endif	// !CFG_NO_OS

/*
 * Structures
 ****************************************************************************************
 */
#define UART_KEEP_WAKE_TIME 1000

typedef struct {
	char id;
	char used;
	char no_intr;
	char fc;

	int error;
	char tx_busy;
	char rx_busy;


	uint32_t base;	
	IRQn_Type irq;

	uint32_t rts_pin;
	uint32_t cts_pin;
	uint32_t tx_pin;
	uint32_t rx_pin;

#if !CFG_NO_OS
	/// OS 
	uint32_t tx_mu[4];
	osMutexId h_tx_mu;
	uint32_t rx_mu[4];
	osMutexId h_rx_mu;

	uint32_t tx_sma[2];
	osSemaphoreId h_tx_sma; 
	uint32_t rx_sma[2];
	osSemaphoreId h_rx_sma;
#else
	char tx_done;
	char rx_done;
#endif	// !CFG_NO_OS

	/// Uart configure paramters
	uint32_t baud_rate;

	char data_len;
	char stop_bit;
	char parity_en;
	char even_parity;
	
	char fifo_enable;
	char fifo_rx_thold;
	char fifo_rx_thold_nb;
	char fifo_tx_thold;

	/// TX
    //uint8_t b_tx_thd_fifo;
	void *h_tx_dma;
	uint8_t *tx_buffer;
	uint32_t tx_buffer_len;
	uint32_t tx_buffer_ofs;
	void *tx_callback_arg;
	void (*tx_callback)(void *arg, int length, int error);

	/// RX
	void *h_rx_dma;
	uint8_t *rx_buffer;
	uint32_t rx_buffer_len;
	uint32_t rx_buffer_ofs;
	void *rx_callback_arg;
	void (*rx_callback)(void *arg, int length, int error);
	char rx_wait;

	char reset_rx_fifo;

	char en_break;
    void* unbreak_cb_arg;
    void (*unbreak_cb)(void* arg);
	/// Power 
#if CFG_PM_EN
	int pwr_up_hw_init;
	uint32_t uart_int_en;
	int power_state;
	struct pm_module pm;
#endif
    
} uart_dev_t;

static uart_dev_t uart_dev[CFG_NB_UART] = {
#if CFG_UART0_EN
	{
		.id = UART0_ID,
		.used = 0,
		.tx_busy = 0,	
		.rx_busy = 0,	
		.base = UART_0_BASE,
		.irq = Uart0_IRQn,
	},
#endif	
#if CFG_UART1_EN
	{
		.id = UART1_ID,
		.used = 0,
		.tx_busy = 0,	
		.rx_busy = 0,	
		.base = UART_1_BASE,
		.irq = Uart1_IRQn,
	},
#endif	
};

/*
 * Pin Mux
 ****************************************************************************************
 */
static int uart_pin_chk(uart_dev_t* pd, int fc) __attribute__((used));
static int uart_pin_chk(uart_dev_t* pd, int fc)
{
    if (pd->id == UART0_ID) {
        // GPIO_0_0 = rts
        // GPIO_0_1 = cts
        // GPIO_0_2 = tx
        // GPIO_1_0 = rx
        // GPIO_2_3 = tx_bkup
        // GPIO_2_5 = rx_bkup

        // Sanity check

        // flow control
        if (fc) {
            // Need RTX and CTS pins
            if (((CFG_GPIO_0_0 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->rts_pin = CFG_GPIO_0_0;
            } else {
                return 0;
            }
            if (((CFG_GPIO_0_1 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->cts_pin = CFG_GPIO_0_1;
            } else {
                return 0;
            }
        }

        // TX pin
        if (((CFG_GPIO_0_2 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
            if (((CFG_GPIO_2_3 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                return 0;
            } else {
                pd->tx_pin = CFG_GPIO_0_2;
            }
        } else {
            if (((CFG_GPIO_2_3 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->tx_pin = CFG_GPIO_2_3;
            } else {
                // No uart TX pin configure
                return 0;
            }
        }

        // RX pin
        if (((CFG_GPIO_1_0 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
            if (((CFG_GPIO_2_5 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                return 0;
            } else {
                pd->rx_pin = CFG_GPIO_1_0;
            }
        } else {
            if (((CFG_GPIO_2_5 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->rx_pin = CFG_GPIO_2_5;
            } else {
                // No uart RX pin configure
                return 0;
            }
        }
    }

    if (pd->id == UART1_ID) {
        // GPIO_1_5 = rts
        // GPIO_1_6 = cts
        // GPIO_1_7 = tx
        // GPIO_1_8 = rx
        // GPIO_2_1 = tx_bkup
        // GPIO_2_7 = rx_bkup

        // Sanity check

        // flow control
        if (fc) {
            // Need RTX and CTS pins
            if (((CFG_GPIO_1_5 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->rts_pin = CFG_GPIO_1_5;
            } else {
                return 0;
            }
            if (((CFG_GPIO_1_6 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->cts_pin = CFG_GPIO_1_6;
            } else {
                return 0;
            }
        }

        // TX pin
        if (((CFG_GPIO_1_7 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
            if (((CFG_GPIO_2_1 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                return 0;
            } else {
                pd->tx_pin = CFG_GPIO_1_7;
            }
        } else {
            if (((CFG_GPIO_2_1 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->tx_pin = CFG_GPIO_2_1;
            } else {
                // No uart TX pin configure
                return 0;
            }
        }

        // RX pin
        if (((CFG_GPIO_1_8 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
            if (((CFG_GPIO_2_7 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                return 0;
            } else {
                pd->rx_pin = CFG_GPIO_1_8;
            }
        } else {
            if (((CFG_GPIO_2_7 >> GPIO_CFG_MUX_SHIFT) & 0xF) == GPIO_MUX_1) {
                pd->rx_pin = CFG_GPIO_2_7;
            } else {
                // No uart RX pin configure
                return 0;
            }
        }
    }

    return 1;
}

static void uart_pin_mux_en(uart_dev_t* pd, int en)  __attribute__((used));
static void uart_pin_mux_en(uart_dev_t* pd, int en)
{
    if (en) {
        if (pd->fc) {
            hal_gpio_pin_cfg(pd->rts_pin);
            hal_gpio_pin_cfg(pd->cts_pin);
        }
        hal_gpio_pin_cfg(pd->tx_pin);
        hal_gpio_pin_cfg(pd->rx_pin);
    } else {
        if (pd->fc) {
            hal_gpio_pin_dft(pd->rts_pin);
            hal_gpio_pin_dft(pd->cts_pin);
        }
        hal_gpio_pin_dft(pd->tx_pin);
        hal_gpio_pin_dft(pd->rx_pin);
    }
}
static void uart_unbreak_cb(void* arg, int rise, int fall, int wup)
{
    uart_dev_t* pd = (uart_dev_t*)arg;
    int pin = pd->rx_pin & 0xF;
    int port = (pd->rx_pin >> 4) & 0xF;
	hal_gpio_ext_int_mask(port, pin, 1, 0, 0);
    hal_gpio_ext_int_unreg(port, pin);
    //hal_gpio_pin_cfg(pd->rx_pin);
	
    //pd->break_flag = 0;

    if (pd->unbreak_cb) {
        pd->unbreak_cb(pd->unbreak_cb_arg);
    }
}

/*
 * PM
 ****************************************************************************************
 */

#if CFG_PM_EN
static int uart_power_state(void* arg, uint32_t* sleep_duration) __attribute__((section("RAM_PM")));
static int uart_power_state(void* arg, uint32_t* sleep_duration)
{
    uart_dev_t* pd = (uart_dev_t*)arg;
    *sleep_duration = PM_MAX_SLEEP_TIME;

    if (CFG_PM_WUP_UART) {
        if (pd->en_break && (pd->power_state == PM_DEEP_SLEEP)) {
            int pin = pd->rx_pin & 0xF;
            int port = (pd->rx_pin >> 4) & 0xF;
            if (hal_gpio_input_status(port, pin)) {
                // Can't go to deep sleep
                pd->power_state = PM_SLEEP;
                //pd->break_flag = 0;
            }
        }
    }

    return pd->power_state;
}

static void uart_power_down(void* arg, uint32_t sleep_duration) __attribute__((section("RAM_PM")));
static void uart_power_down(void* arg, uint32_t sleep_duration)
{
#if 0
    uart_dev_t* pd = (uart_dev_t*)arg;

    if (!pd->no_intr)
        pd->uart_int_en = uart_intr_enable_get(pd->base);
#endif

#if 0
    if (CFG_PM_WUP_UART && pd->en_break) {

        int pin = pd->rx_pin & 0xF;
        int port = (pd->rx_pin >> 4) & 0xF;

        // Configure RX pin as wake up pin
        hal_gpio_pin_mux(port, pin, 0, 0);
        hal_gpio_pad_oe_ie(port, pin, 0, 1);
        hal_gpio_pad_pd_pu(port, pin, 0, 0);
        //hal_gpio_pad_pc(port, pin, 1);
        hal_gpio_output(port, pin, 0, 0);
        //hal_gpio_aon_latch(port, pin, 1);
        hal_gpio_sleep_pad_latch(port, pin, 1, 0);
    }
#endif
	//PRINTD(DBG_TRACE, "down\n");
    return;
}
static void uart_tmr_callback(void* arg)
{
    uart_dev_t* pd = (uart_dev_t*)arg;
    hal_timer_stop(TMR1_ID);
    /* contention window here, need set longer delay*/
    if (pd->unbreak_cb) {
        pd->unbreak_cb(pd->unbreak_cb_arg);
    }
    pd->power_state = PM_DEEP_SLEEP;
}


static void uart_power_up(void* arg) __attribute__((section("RAM_PM")));
static void uart_power_up(void* arg)
{
    uart_dev_t* pd = (uart_dev_t*)arg;

	pd->pwr_up_hw_init = 1;

#if 0
    /// Set baud rate
    uart_set_baud(pd->base, hal_clk_d0_get(), pd->baud_rate);

    /// Set stop bits, parity, even, data_len
    uart_set_lcr(pd->base, pd->stop_bit, pd->parity_en, pd->even_parity, pd->data_len);

    /// Set FIFO control
    uart_fcr(pd->base, pd->fifo_enable, pd->fifo_tx_thold, pd->fifo_rx_thold, 1, 1, 1);

    /// Set Flow control
    uart_auto_fc(pd->base, pd->fc);

    /// Configure back to uart pin
    if (CFG_PM_WUP_UART && pd->en_break) {

        int pin = pd->rx_pin & 0xF;
       	int port = (pd->rx_pin >> 4) & 0xF;

        //hal_gpio_pin_cfg(pd->rx_pin);
        if (hal_gpio_input_status(port, pin)) {
            //pd->break_flag = 0;
            if (hal_timer_start(TMR1_ID, 0, UART_KEEP_WAKE_TIME, IRQ_PRI_Normal, pd, uart_tmr_callback) == TMR_ERR_OK) {
                pd->power_state = PM_SLEEP;
            }
            hal_gpio_ext_int_mask(port, pin, 1, 0, 0);

        } else {
            //hal_gpio_ext_int_reg(port, pin, IRQ_PRI_Normal, pd, uart_unbreak_cb);
			hal_gpio_ext_int_unmask(port, pin, 1, 0, 1);
        }
    }

    /// Pin mux
    //uart_pin_mux_en(pd, 1);

    /// Restore interrupt
    if (!pd->no_intr) {
        uart_intr_enable(pd->base, pd->uart_int_en);
        NVIC_SetPriority(pd->irq, IRQ_PRI_High);
        NVIC_EnableIRQ(pd->irq);
    }
	//PRINTD(DBG_TRACE, "up\n");
#endif
}

static void uart_hw_init(uart_dev_t* pd)
{
    // enable uart clock
    hal_clk_uart_en(pd->id, 1);

    /// Set baud rate
    uart_set_baud(pd->base, hal_clk_d0_get(), pd->baud_rate);

    /// Set stop bits, parity, even, data_len
    uart_set_lcr(pd->base, pd->stop_bit, pd->parity_en, pd->even_parity, pd->data_len);

    /// Set FIFO control
    uart_fcr(pd->base, pd->fifo_enable, pd->fifo_tx_thold, pd->fifo_rx_thold, 1, 1, 1);

    /// Set Flow control
    uart_auto_fc(pd->base, pd->fc);

    /// Configure back to uart pin
    if (CFG_PM_WUP_UART && pd->en_break) {

        int pin = pd->rx_pin & 0xF;
       	int port = (pd->rx_pin >> 4) & 0xF;

        //hal_gpio_pin_cfg(pd->rx_pin);
        if (hal_gpio_input_status(port, pin)) {
            //pd->break_flag = 0;
            hal_timer_set_tmo_callback(TMR1_ID, IRQ_PRI_Normal, pd, uart_tmr_callback);
            if (hal_timer_start(TMR1_ID, 0, 0, UART_KEEP_WAKE_TIME) == TMR_ERR_OK) {
                pd->power_state = PM_SLEEP;
            }
            hal_gpio_ext_int_mask(port, pin, 1, 0, 0);

        } else {
            //hal_gpio_ext_int_reg(port, pin, IRQ_PRI_Normal, pd, uart_unbreak_cb);
			hal_gpio_ext_int_unmask(port, pin, 1, 0, 1);
        }
    }

    /// Pin mux
    //uart_pin_mux_en(pd, 1);

    /// Restore interrupt
    if (!pd->no_intr) {
        uart_intr_enable(pd->base, pd->uart_int_en);
        NVIC_SetPriority(pd->irq, IRQ_PRI_High);
        NVIC_EnableIRQ(pd->irq);
    }


}
#endif // CFG_PM_EN

/*
 * Isr
 ****************************************************************************************
 */

static void uart_isr_handler(uart_dev_t *pd)
{
	uint32_t iid;

	iid = uart_intr_status(pd->base);

    if (UART_IT_ID_NONE == iid) {
		if (pd->h_rx_dma) {	//using Dma
			uint16_t oft = 0;
			oft = hal_dma_get_tran_len(pd->h_rx_dma);
            if ((pd->rx_callback) && (oft > 0))
                pd->rx_callback(pd->rx_callback_arg, oft, UART_IT_ID_NONE);
        }
    }
	if (iid == UART_IT_ID_LINE_STATUS) {
		uint32_t lsr = uart_line_status(pd->base);

		PRINTD(DBG_ERR, "Uart error, lsr = %08x\r\n", lsr);

		/// Disable UART interrupt
		uart_intr_disable(pd->base, UART_IER_ALL);

		// Disable char time out detection
		uart_cto_disable(pd->base);

		if (pd->h_rx_dma) {
			// Disable DMA
			hal_dma_ch_disable(pd->h_rx_dma);
			hal_dma_close(pd->h_rx_dma);
			pd->h_rx_dma = NULL;
		}


		if (lsr & UART_LSR_OE)
			pd->error = UART_ERR_OE;
		if (lsr & UART_LSR_PE)
			pd->error = UART_ERR_PE;
		if (lsr & UART_LSR_FE)
			pd->error = UART_ERR_FE;
		if (lsr & UART_LSR_BI)
			pd->error = UART_ERR_BI;
			
		if (pd->rx_callback) {
			pd->rx_busy = 0;
			pd->rx_callback(pd->rx_callback_arg, 0, pd->error);
#if CFG_PM_EN
			pd->power_state = PM_DEEP_SLEEP;
#endif
		} else {
#if !CFG_NO_OS
			if (pd->h_rx_sma)
				osSemaphoreRelease(pd->h_rx_sma);
#else
			pd->rx_done = 1;
#endif	// !CFG_NO_OS

		}
	} 

	if (iid == UART_IT_ID_RCVR_DATA) {
		if (!pd->h_rx_dma) {	// Not using Dma
			uint16_t oft = pd->rx_buffer_ofs;
			for (int i = 0; i < pd->fifo_rx_thold_nb; i++) {
				uint8_t data;
				if (oft < pd->rx_buffer_len) {
					data = uart_read_data(pd->base);   	
					pd->rx_buffer[oft] = data;
					oft += 1;
				} else {
					if (!pd->reset_rx_fifo) {
						break;
					}
					data = uart_read_data(pd->base);
				}
				

			}
			pd->rx_buffer_ofs = oft;
			if (oft >= pd->rx_buffer_len) {	// we are done 
				/// Disable UART RX interrupt
				uart_intr_disable(pd->base, UART_IER_ERBFI);

				/// Disable char time out detection
				uart_cto_disable(pd->base);

				/// Inform user
				if (pd->rx_callback) { 
					pd->rx_busy = 0;
					/// Call back
					pd->rx_callback(pd->rx_callback_arg, oft, UART_ERR_OK);
#if CFG_PM_EN
					pd->power_state = PM_DEEP_SLEEP;
#endif
				} else {
					/// Signal 
					pd->error = UART_ERR_OK;
#if !CFG_NO_OS
					if (pd->h_rx_sma)
						osSemaphoreRelease(pd->h_rx_sma);
#else
					pd->rx_done = 1;
#endif	// !CFG_NO_OS

				}
			}
		}
	}

	// Inplay: character time out
	if (iid & UART_IT_ID_CTO_DET) {
		uint16_t oft = pd->rx_buffer_ofs;

		// Disable char time out detection
		uart_cto_disable(pd->base);

		// Close dma
		if (pd->h_rx_dma) {
			// Read the total size that DMA tranfer
			oft = hal_dma_get_tran_len(pd->h_rx_dma);
			// Disable DMA
			hal_dma_ch_disable(pd->h_rx_dma);
			hal_dma_close(pd->h_rx_dma);
			pd->h_rx_dma = NULL;
		}

		// Retrieve remaining bytes in the fifo
		while (uart_line_status(pd->base) & UART_LSR_DR) {
			uint8_t data;
			if (oft < pd->rx_buffer_len) {
				data = uart_read_data(pd->base);   	
				pd->rx_buffer[oft] = data;
				oft += 1;
			} else {
				if (!pd->reset_rx_fifo) {
					break;
				}
				data = uart_read_data(pd->base);
			}
		}			
		pd->rx_buffer_ofs = oft;

		// End of uart rx	
 		// Disable UART RX interrupt
		uart_intr_disable(pd->base, UART_IER_ERBFI);

		// Inform user
		if (pd->rx_callback) { 
			pd->rx_busy = 0;
			/// Call back
			pd->rx_callback(pd->rx_callback_arg, oft, UART_ERR_OK);
#if CFG_PM_EN
			pd->power_state = PM_DEEP_SLEEP;
#endif
		} else {
			/// Signal
			pd->error = UART_ERR_OK;
#if !CFG_NO_OS
			if (pd->h_rx_sma)
				osSemaphoreRelease(pd->h_rx_sma);
#else
			pd->rx_done = 1;
#endif	// !CFG_NO_OS

		}
	} 

	if (iid == UART_IT_ID_CHAR_TIME_OUT) {
		if (!pd->h_rx_dma) {	// Not using Dma
            uint16_t oft = pd->rx_buffer_ofs;

		// Retrieve remaining bytes in the fifo
		while (uart_line_status(pd->base) & UART_LSR_DR) {
				uint8_t data;
				if (oft < pd->rx_buffer_len) {
					data = uart_read_data(pd->base);   	
					pd->rx_buffer[oft] = data;
					oft += 1;
				} else {
					if (!pd->reset_rx_fifo) {
						break;
					}
					data = uart_read_data(pd->base);
				}
		}			
		pd->rx_buffer_ofs = oft;

            if ((oft >= pd->rx_buffer_len) || (pd->rx_wait == 0)) {
                // End of uart rx	
                // Disable UART RX interrupt
                uart_intr_disable(pd->base, UART_IER_ERBFI);

                // Inform user
                if (pd->rx_callback) { 
                    pd->rx_busy = 0;
                    /// Call back
                    pd->rx_callback(pd->rx_callback_arg, oft, UART_ERR_OK);
    #if CFG_PM_EN
                    pd->power_state = PM_DEEP_SLEEP;
    #endif
                } else {
                    /// Signal
                    pd->error = UART_ERR_OK;
#if !CFG_NO_OS
                    if (pd->h_rx_sma)
                        osSemaphoreRelease(pd->h_rx_sma);
#else
						pd->rx_done = 1;
#endif	// !CFG_NO_OS

                }
            }
        } else {
            (void)uart_read_data(pd->base);   	
            if (pd->rx_callback) {
                pd->rx_busy = 0;
                pd->rx_callback(pd->rx_callback_arg, 8, UART_IT_ID_CHAR_TIME_OUT);
            }
        }
	} 

	if (iid == UART_IT_ID_THR_EMPTY) {
		uint16_t oft = pd->tx_buffer_ofs;

		while (uart_usr(pd->base) & UART_USR_TFNF) {
			if (oft >= pd->tx_buffer_len) 
				break;
			uart_write_data(pd->base, pd->tx_buffer[oft]);
			oft += 1;
		}
		pd->tx_buffer_ofs = oft;

            if (oft >= pd->tx_buffer_len) {
                /// Inform user
                if (pd->tx_callback) { 
                    pd->tx_busy = 0;
					uart_intr_disable(pd->base, UART_IER_ETBEI);
                    pd->tx_callback(pd->tx_callback_arg, oft, UART_ERR_OK);
    #if CFG_PM_EN
                    pd->power_state = PM_DEEP_SLEEP;
    #endif
                } else {
                    /// Signal
                    pd->error = UART_ERR_OK;
#if !CFG_NO_OS
                    if (pd->h_tx_sma)
                        osSemaphoreRelease(pd->h_tx_sma);
#else
							pd->tx_done = 1;
#endif	// !CFG_NO_OS

                }
            }
        }
	

	if (iid == UART_IT_ID_MODEM_STATUS) {		
		uint32_t msr = uart_modem_status(pd->base);
		//TODO???

	}

	if (iid == UART_IT_ID_BUSY_DET) {		
		uint32_t usr = uart_usr(pd->base);
		//TODO???
	}
} 

void UART0_Handler(void)
{
    for (int i = 0; i < CFG_NB_UART; i++) {
        if (uart_dev[i].id == UART0_ID)
            uart_isr_handler(&uart_dev[i]);
    }
}

void UART1_Handler(void)
{
    for (int i = 0; i < CFG_NB_UART; i++) {
        if (uart_dev[i].id == UART1_ID)
            uart_isr_handler(&uart_dev[i]);
    }
}

/*
 * Dma
 ****************************************************************************************
 */
static void uart_dma_isr_cb(int id, void *arg, uint32_t status)
{
	uart_dev_t *pd = (uart_dev_t *)arg;
	
	if (status & DMA_IT_STATUS_ERR) {
		pd->error = (char)UART_ERR_DMA;
	}

	if (id == DMA1_ID) {
		// RX dma completed
		if (pd->h_rx_dma) {
            uart_rts_off(pd->base);
			// Read the total size that DMA tranfer
			pd->rx_buffer_ofs = hal_dma_get_tran_len(pd->h_rx_dma);

			// Disable char time out detection
			uart_cto_disable(pd->base);
			
			// Disable DMA
			hal_dma_ch_disable(pd->h_rx_dma);
			hal_dma_close(pd->h_rx_dma);
			pd->h_rx_dma = NULL;

			if (pd->rx_callback) { 
				pd->rx_busy = 0;

                pd->rx_callback(pd->rx_callback_arg, pd->rx_buffer_ofs, UART_ERR_DMA);
#if CFG_PM_EN
                pd->power_state = PM_DEEP_SLEEP;
#endif
            } else {
#if !CFG_NO_OS
                if (pd->h_rx_sma)
                    osSemaphoreRelease(pd->h_rx_sma);
#else
					pd->rx_done = 1;
#endif	// !CFG_NO_OS

            }
        }
    }

    if (id == DMA0_ID) {
        // TX dma completed
        if (pd->h_tx_dma) {
            // Disable DMA
            hal_dma_ch_disable(pd->h_tx_dma);
            hal_dma_close(pd->h_tx_dma);
            pd->h_tx_dma = NULL;

            if (pd->tx_callback) {
				pd->tx_busy = 0;

                // Make sure Uart Tx fifo is empty before we call back
                while (!(uart_usr(pd->base) & UART_USR_TFE))
                    ;

                pd->tx_callback(pd->tx_callback_arg, pd->tx_buffer_len, pd->error);
#if CFG_PM_EN
                pd->power_state = PM_DEEP_SLEEP;
#endif
            } else {
#if !CFG_NO_OS
                if (pd->h_tx_sma)
                    osSemaphoreRelease(pd->h_tx_sma);
#else
					pd->tx_done = 1;
#endif	// !CFG_NO_OS

            }
        }
    }
}

/*
 * APIs
 ****************************************************************************************
 */

void* hal_uart_open(int id, uart_init_t *init)
{
    uart_dev_t* pd = NULL;
    int i;
	if (!init) 
		return NULL;
    if (!init->baud_rate)
        return NULL;

    if ((init->data_len < 5) || (init->data_len > 8))
        return NULL;

    for (i = 0; i < CFG_NB_UART; i++) {
        if ((uart_dev[i].id == id) && (uart_dev[i].used == 0)) {
            pd = &uart_dev[i];
            break;
        }
    }

    if (!pd)
        return NULL;

    // Check pin mux
#if !CFG_FPGA
    if (!uart_pin_chk(pd, init->fc))
        return NULL;
#endif

#if !CFG_NO_OS
    /// OS
    {
        osMutexDef_t def;
        def.mutex = pd->tx_mu;
        pd->h_tx_mu = osMutexCreate(&def);
        if (!pd->h_tx_mu) {
            return NULL;
        }

        def.mutex = pd->rx_mu;
        pd->h_rx_mu = osMutexCreate(&def);
        if (!pd->h_rx_mu) {
            goto fail;
        }
    }

    {
        osSemaphoreDef_t def;
        def.semaphore = (void*)pd->tx_sma;
        pd->h_tx_sma = osSemaphoreCreate(&def, 0);
        if (!pd->h_tx_sma) {
            goto fail;
        }
        def.semaphore = (void*)pd->rx_sma;
        pd->h_rx_sma = osSemaphoreCreate(&def, 0);
        if (!pd->h_rx_sma) {
            goto fail;
        }
    }
#endif	// !CFG_NO_OS

    /// Save Uart Configuration
    pd->baud_rate = init->baud_rate;
    pd->data_len = init->data_len;
    pd->stop_bit = init->stop_bit;
    pd->parity_en = init->parity_en;
    pd->even_parity = init->even_parity;
    pd->fifo_enable = 1;
    pd->fifo_rx_thold = UART_RT_HALF_FULL;
    pd->fc = init->fc;
    pd->no_intr = init->no_intr;
	pd->rx_callback_arg = init->rx_arg;
	pd->rx_callback = init->rx_cb;
	pd->tx_callback_arg = init->tx_arg;
	pd->tx_callback = init->tx_cb;
    pd->en_break = 0;
    //pd->break_flag = 0;

    // enable uart clock
    hal_clk_uart_en(pd->id, 1);

#if !CFG_FPGA
    // enable uart pin mux
    uart_pin_mux_en(pd, 1);
#endif

    /// Set baud rate
    uart_set_baud(pd->base, hal_clk_d0_get(), pd->baud_rate);

    /// Set stop bits, parity, even, data_len
    uart_set_lcr(pd->base, pd->stop_bit, pd->parity_en, pd->even_parity, pd->data_len);

    /// Set FIFO control
    uart_fcr(pd->base, pd->fifo_enable, 0, pd->fifo_rx_thold, 1, 1, 1);

    /// Set Flow control
	if (init->fc) {
    	uart_auto_fc(pd->base, 1);
		uart_rts_on(pd->base);
	} else {
    	uart_auto_fc(pd->base, 0);
		uart_rts_off(pd->base);
	}

    /// Mask all interrupt
    uart_intr_disable(pd->base, UART_IER_ALL);
    if (!init->no_intr) {
        NVIC_ClearPendingIRQ(pd->irq);
        NVIC_SetPriority(pd->irq, init->prio);
        NVIC_EnableIRQ(pd->irq);
    }

    if (pd->fifo_rx_thold == UART_RT_QUARTER_FULL) {
        pd->fifo_rx_thold_nb = UART_FIFO_DEPTH / 4;
    } else if (pd->fifo_rx_thold == UART_RT_HALF_FULL) {
        pd->fifo_rx_thold_nb = UART_FIFO_DEPTH / 2;
    } else if (pd->fifo_rx_thold == UART_RT_2_LESS_FULL) {
        pd->fifo_rx_thold_nb = UART_FIFO_DEPTH - 2;
    } else {
        pd->fifo_rx_thold_nb = 1;
    }

#if CFG_PM_EN
    pd->pm.power_state = uart_power_state;
    pd->pm.power_down = uart_power_down;
    pd->pm.power_up = uart_power_up;
    pd->pm.arg = (void*)pd;
    hal_pm_reg_mod(&pd->pm);
    pd->power_state = PM_DEEP_SLEEP;
    pd->unbreak_cb_arg = NULL;
    pd->unbreak_cb = NULL;

#endif

    pd->used = 1;
    return ((void*)pd);

fail:

#if !CFG_NO_OS
    if (pd->h_tx_mu) {
        osMutexDelete(pd->h_tx_mu);
        pd->h_tx_mu = NULL;
    }

    if (pd->h_rx_mu) {
        osMutexDelete(pd->h_rx_mu);
        pd->h_rx_mu = NULL;
    }

    if (pd->h_tx_sma) {
        osSemaphoreDelete(pd->h_tx_sma);
        pd->h_tx_sma = NULL;
    }

    if (pd->h_rx_sma) {
        osSemaphoreDelete(pd->h_rx_sma);
        pd->h_rx_sma = NULL;
    }
#endif	// !CFG_NO_OS


    return NULL;
}

void hal_uart_close(void* hdl)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;

    if (!pd)
        return;

    pd->used = 0;

#if !CFG_FPGA
    // Set pin mux to default to prevent further receive
    uart_pin_mux_en(pd, 0);
#endif

    // make sure uart is not busy
    while (uart_usr(pd->base) & 0x1)
        ;

    // disable interrupt
    NVIC_DisableIRQ(pd->irq);
    uart_intr_disable(pd->base, UART_IER_ETBEI | UART_IER_ERBFI | UART_IER_ELSI);
    NVIC_ClearPendingIRQ(pd->irq);

    // disable fifo
    uart_fifo_disable(pd->base);

    // set baud to 0 to close uart
    uart_set_baud(pd->base, hal_clk_d0_get(), 0);

    if (pd->h_rx_dma) {
        // Disable DMA
        hal_dma_ch_disable(pd->h_rx_dma);
        hal_dma_close(pd->h_rx_dma);
        pd->h_rx_dma = NULL;
    }

#if !CFG_NO_OS
    if (pd->h_tx_mu) {
        osMutexDelete(pd->h_tx_mu);
        pd->h_tx_mu = NULL;
    }

    if (pd->h_rx_mu) {
        osMutexDelete(pd->h_rx_mu);
        pd->h_rx_mu = NULL;
    }

    if (pd->h_tx_sma) {
        osSemaphoreDelete(pd->h_tx_sma);
        pd->h_tx_sma = NULL;
    }

    if (pd->h_rx_sma) {
        osSemaphoreDelete(pd->h_rx_sma);
        pd->h_rx_sma = NULL;
    }
#endif	// !CFG_NO_OS


#if CFG_PM_EN
    hal_pm_unreg_mod(&pd->pm);
#endif
    if (pd->en_break) {
        int pin = pd->rx_pin & 0xF;
        int port = (pd->rx_pin >> 4) & 0xF;
        hal_gpio_ext_int_unreg(port, pin);
        pd->en_break = 0;
        pd->unbreak_cb = NULL;
        pd->unbreak_cb_arg = NULL;
    }
    
    // clock
    hal_clk_uart_en(pd->id, 0);
}

void hal_uart_putc(void* hdl, char c)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;

#if CFG_PM_EN
	if (pd->pwr_up_hw_init) {
		uart_hw_init(pd);
		pd->pwr_up_hw_init = 0;
	}
#endif

    uart_xmit_ready(pd->base);
    uart_write_data(pd->base, c);
}

int hal_uart_xmit_poll(void* hdl, uint8_t* buffer, uint32_t buffer_len)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int err = UART_ERR_OK;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    if (!buffer)
        return UART_ERR_INVALID_PARAM;

#if !CFG_NO_OS
    osMutexWait(pd->h_tx_mu, osWaitForever);
#endif	// !CFG_NO_OS

#if CFG_PM_EN
	if (pd->pwr_up_hw_init) {
		uart_hw_init(pd);
		pd->pwr_up_hw_init = 0;
	}
#endif

    for (int i = 0; i < buffer_len; i++) {
        uart_xmit_ready(pd->base);
        uart_write_data(pd->base, buffer[i]);
    }

#if !CFG_NO_OS
    osMutexRelease(pd->h_tx_mu);
#endif	// !CFG_NO_OS

    return err;
}

int hal_uart_rcvd_poll(void* hdl, uint8_t* buffer, uint32_t buffer_len)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int err = UART_ERR_OK;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    if (!buffer)
        return UART_ERR_INVALID_PARAM;

#if !CFG_NO_OS
    osMutexWait(pd->h_rx_mu, osWaitForever);
#endif	// !CFG_NO_OS

#if CFG_PM_EN
	if (pd->pwr_up_hw_init) {
		uart_hw_init(pd);
		pd->pwr_up_hw_init = 0;
	}
#endif

    //pd->break_flag = 0;
    for (int i = 0; i < buffer_len; i++) {
        uart_rcvd_ready(pd->base);
        buffer[i] = uart_read_data(pd->base);
    }

#if !CFG_NO_OS
    osMutexRelease(pd->h_rx_mu);
#endif	// !CFG_NO_OS

    return err;
}

static int uart_xmit_intr(void* hdl, uint8_t* buffer, uint32_t buffer_len, void* cb_arg, void (*callback)(void* arg, int length, int error))
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int err = UART_ERR_OK;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    if (!buffer)
        return UART_ERR_INVALID_PARAM;

    if (pd->no_intr)
        return UART_ERR_INVALID_PARAM;

	if (pd->tx_busy) 
		return UART_ERR_BUSY; 	

#if !CFG_NO_OS
    osMutexWait(pd->h_tx_mu, osWaitForever);
#endif	// !CFG_NO_OS

#if CFG_PM_EN
	if (pd->pwr_up_hw_init) {
		uart_hw_init(pd);
		pd->pwr_up_hw_init = 0;
	}
    pd->power_state = PM_SLEEP;
#endif

    pd->tx_buffer = buffer;
    pd->tx_buffer_len = buffer_len;
    pd->tx_buffer_ofs = 0;
    pd->tx_callback_arg = cb_arg;
    pd->tx_callback = callback;

    if (buffer_len > UART_FIFO_DEPTH / 2) {
        pd->fifo_tx_thold = UART_TET_HALF_FULL;
    } else if (buffer_len > UART_FIFO_DEPTH / 4) {
        pd->fifo_tx_thold = UART_TET_QUARTER_FULL;
    } else {
        pd->fifo_tx_thold = UART_TET_EMPTY;
    }

    // FCR: Reset fifo and threshold
    uart_fcr(pd->base, 1, pd->fifo_tx_thold, pd->fifo_rx_thold, 0, 1, 0);
    if (pd->tx_callback) {
        pd->tx_busy = 1;
    }
    /// THR empty Interrupt
    uart_intr_enable(pd->base, UART_IER_ETBEI);

    if (!pd->tx_callback) {
#if !CFG_NO_OS
        osSemaphoreWait(pd->h_tx_sma, osWaitForever);
#else
		while (!pd->tx_done);
		pd->tx_done = 0;
#endif

        // Make sure Uart Tx fifo is empty before we return
        while (!(uart_usr(pd->base) & UART_USR_TFE));
		uart_intr_disable(pd->base, UART_IER_ETBEI);
        err = pd->error;
#if CFG_PM_EN
        pd->power_state = PM_DEEP_SLEEP;
#endif


    } else {
		//pd->tx_busy = 1;

        err = UART_ERR_PEND;
    }

#if !CFG_NO_OS
    osMutexRelease(pd->h_tx_mu);
#endif	// !CFG_NO_OS

    return err;
}
int hal_uart_xmit_intr(void* hdl, uint8_t* buffer, uint32_t buffer_len)
{
    int ret;
	uart_dev_t* pd = (uart_dev_t*)hdl;
	ret = uart_xmit_intr(hdl, buffer, buffer_len, pd->tx_callback_arg, pd->tx_callback);
	return ret;
}

int hal_uart_xmit_intr_hci(void* hdl, uint8_t* buffer, uint32_t buffer_len, void* cb_arg, void (*callback)(void* arg, int length, int error))
{
    int ret;
	ret = uart_xmit_intr(hdl, buffer, buffer_len, cb_arg, callback);
	return ret;
}

static int uart_rcvd_intr(void* hdl, uint8_t* buffer, uint32_t buffer_len, uint32_t tmo, int fifo_reset, int rx_wait, void* cb_arg, void (*callback)(void* arg, int length, int error), uint32_t* actual_rx_len)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int err = UART_ERR_OK;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    if (!buffer)
        return UART_ERR_INVALID_PARAM;

    if (pd->no_intr)
        return UART_ERR_INVALID_PARAM;

	if (pd->rx_busy) 
		return UART_ERR_BUSY; 	

#if !CFG_NO_OS
    osMutexWait(pd->h_rx_mu, osWaitForever);
#endif	// !CFG_NO_OS

#if CFG_PM_EN
	if (pd->pwr_up_hw_init) {
		uart_hw_init(pd);
		pd->pwr_up_hw_init = 0;
	}
    pd->power_state = PM_SLEEP;
#endif

    pd->rx_buffer = buffer;
    pd->rx_buffer_len = buffer_len;
    pd->rx_buffer_ofs = 0;
    pd->rx_callback_arg = cb_arg;
    pd->rx_callback = callback;
	pd->rx_wait = rx_wait;

    if (buffer_len < (UART_FIFO_DEPTH - 2)) {
        pd->fifo_rx_thold = UART_RT_2_LESS_FULL;
        pd->fifo_rx_thold_nb = UART_FIFO_DEPTH - 2;
    } else {
        pd->fifo_rx_thold = UART_RT_HALF_FULL;
        pd->fifo_rx_thold_nb = UART_FIFO_DEPTH / 2;
    }
    
    pd->reset_rx_fifo = fifo_reset;
    // FCR: Reset fifo and threshold
    uart_fcr(pd->base, 1, pd->fifo_tx_thold, pd->fifo_rx_thold, 0, 0, fifo_reset);//Review

    // Uart: No char time out detection
#if 0
    uart_cto_disable(pd->base);
#else
   // CTO: char time out detection
    uart_cto_cycles(pd->base, 0);
    uart_cto_enable(pd->base);
 #endif

    if (pd->fc) {
        uart_rts_off_clear_cto_count_enable(pd->base);
        uart_cto_auto_rts_deassert_enable(pd->base);
    // uart_cto_auto_deassert_rts_disable(pd->base);
        uart_rts_below_th_assert_enable(pd->base);
        uart_cto_auto_rts_manu_clear(pd->base);
        uart_rts_on(pd->base);
    }

    if (pd->rx_callback) {
        pd->rx_busy = 1;
    }

    /// RX data, Line
    uart_intr_enable(pd->base, (UART_IER_ERBFI | UART_IER_ELSI | UART_IER_CTO));

    if (!pd->rx_callback) {
#if !CFG_NO_OS
        err = osSemaphoreWait(pd->h_rx_sma, tmo);
#else
		while (!pd->rx_done);
		pd->rx_done = 0;

#endif	// !CFG_NO_OS

		uart_intr_disable(pd->base, (UART_IER_ERBFI | UART_IER_ELSI | UART_IER_CTO));
		//uart_cto_disable(pd->base);
        if (err == 0) {
            err = UART_ERR_TMO;
        } else {
            err = pd->error;
        }

        if (actual_rx_len)
            *actual_rx_len = pd->rx_buffer_ofs;

#if CFG_PM_EN
        pd->power_state = PM_DEEP_SLEEP;
#endif

    } else {
		//pd->rx_busy = 1;

        err = UART_ERR_PEND;
    }

#if !CFG_NO_OS
    osMutexRelease(pd->h_rx_mu);
#endif	// !CFG_NO_OS

    return err;
}

int hal_uart_rcvd_intr(void* hdl, uint8_t* buffer, uint32_t buffer_len, uint32_t tmo, uint32_t* actual_rx_len)
{
    int ret;
	uart_dev_t* pd = (uart_dev_t*)hdl;
    ret = uart_rcvd_intr(hdl, buffer, buffer_len, tmo, 1, 0, pd->rx_callback_arg,  pd->rx_callback, actual_rx_len);
    return ret;
}

int hal_uart_rcvd_intr_hci(void* hdl, uint8_t* buffer, uint32_t buffer_len, void* cb_arg, void (*callback)(void* arg, int length, int error))
{
	return uart_rcvd_intr(hdl, buffer, buffer_len, 0, 0, 1, cb_arg,  callback, NULL);
}

int hal_uart_flow_on(void* hdl)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    uart_rts_on(pd->base);

    return UART_ERR_OK;
}

int hal_uart_flow_off(void* hdl)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    uart_rts_off(pd->base);

    return UART_ERR_OK;
}

int hal_uart_xmit_dma(void* hdl, uint8_t* buffer, uint32_t buffer_len)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int err = UART_ERR_OK;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    if (!buffer)
        return UART_ERR_INVALID_PARAM;

    if (buffer_len == 0)
        return UART_ERR_INVALID_PARAM;

	if (pd->tx_busy) 
		return UART_ERR_BUSY; 	

#if !CFG_NO_OS
    osMutexWait(pd->h_tx_mu, osWaitForever);
#endif	// !CFG_NO_OS

#if CFG_PM_EN
	if (pd->pwr_up_hw_init) {
		uart_hw_init(pd);
		pd->pwr_up_hw_init = 0;
	}
#endif

    // DMA burst size
    int burst_size;
    if ((buffer_len & 0x7) == 0) {
        pd->fifo_tx_thold = UART_TET_HALF_FULL;
        burst_size = DMA_CTL_TR_MSIZE_8;
    } else if (buffer_len > UART_FIFO_DEPTH / 4) {
        pd->fifo_tx_thold = UART_TET_QUARTER_FULL;
        burst_size = DMA_CTL_TR_MSIZE_4;
    } else {
        pd->fifo_tx_thold = UART_TET_EMPTY;
        burst_size = DMA_CTL_TR_MSIZE_1;
    }

    // Find a available DMA channel
#if 0
    pd->h_tx_dma = hal_dma_open(DMA0_ID,
        ((pd->id == UART0_ID) ? DMA_ID_UART0_TX : DMA_ID_UART1_TX),
        (uint32_t)buffer,
        (uint32_t)(pd->base + UART_REG_THR_OFS),
        buffer_len,
        DMA_CTL_TR_WIDTH_8BITS,
        DMA_CTL_TR_WIDTH_8BITS,
        DMA_ADDR_INC,
        DMA_ADDR_SAME,
        burst_size,
        burst_size,
        DMA_AHB_MASTER_MEM,
        DMA_AHB_MASTER_PERIPH,
        DMA_TT_MEM_TO_PERF_FC_DMAC);
#else
    pd->h_tx_dma = hal_dma_open(DMA0_ID,
        ((pd->id == UART0_ID) ? DMA_ID_UART0_TX : DMA_ID_UART1_TX),
        DMA_ADDR_INC,
        DMA_ADDR_SAME,
        DMA_AHB_MASTER_MEM,
        DMA_AHB_MASTER_PERIPH,
        DMA_TT_MEM_TO_PERF_FC_DMAC, IRQ_PRI_Normal);
#endif
    if (!pd->h_tx_dma) {
        err = UART_DMA_NOT_AVAIL;
        goto out;
    }

    // Prepare...
    pd->tx_buffer = buffer;
    pd->tx_buffer_len = buffer_len;
    pd->tx_buffer_ofs = 0;
    //pd->tx_callback_arg = arg;
    //pd->tx_callback = callback;
    pd->error = err;
#if CFG_PM_EN
    pd->power_state = PM_SLEEP;
#endif

    // FCR: Reset fifo and threshold
    uart_fcr(pd->base, 1, pd->fifo_tx_thold, pd->fifo_rx_thold, 1, 1, 0);

    // DMA channel enable
    hal_dma_ch_enable(pd->h_tx_dma, (void*)pd, uart_dma_isr_cb);

    if (!pd->tx_callback) {
#if !CFG_NO_OS
        // Block call
        osSemaphoreWait(pd->h_tx_sma, osWaitForever);
#else
		while (!pd->tx_done);
		pd->tx_done = 0;
#endif	// !CFG_NO_OS

        err = pd->error;
#if CFG_PM_EN
        pd->power_state = PM_DEEP_SLEEP;
#endif

        // Make sure Uart Tx fifo is empty before we return
        while (!(uart_usr(pd->base) & UART_USR_TFE))
            ;

    } else {
		pd->tx_busy = 1; 

        err = UART_ERR_PEND;
    }

out:

#if !CFG_NO_OS
    osMutexRelease(pd->h_tx_mu);
#endif	// !CFG_NO_OS

    return err;
}

int hal_uart_recv_dma_close(void *hdl) {
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int res = UART_ERR_OK;
    

    if (!pd) {
        res = UART_ERR_INVALID_PARAM;
    } else {
        hal_dma_close(pd->h_rx_dma);
    }
    return res;
}

int hal_uart_recv_dma_open(void *hdl, uint8_t* buffer, uint32_t buffer_len) {
    int res = UART_ERR_OK;
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int burst_size;

    if (!buffer)
        return UART_ERR_INVALID_PARAM;

    if (buffer_len == 0)
        return UART_ERR_INVALID_PARAM;

    if (!pd) {
        res = UART_ERR_INVALID_PARAM;
    } else {

        if (UART_RT_HALF_FULL == pd->fifo_rx_thold) {
            burst_size = DMA_CTL_TR_MSIZE_8;
        } else if (UART_RT_QUARTER_FULL == pd->fifo_rx_thold) {
            burst_size = DMA_CTL_TR_MSIZE_4;
        } else if (UART_RT_1_CHAR == pd->fifo_rx_thold) {
            burst_size = DMA_CTL_TR_MSIZE_1;
        } else {
            burst_size = DMA_CTL_TR_MSIZE_4;
        }

#if 0
        pd->h_rx_dma = hal_dma_open(DMA1_ID,
            ((pd->id == UART0_ID) ? DMA_ID_UART0_RX : DMA_ID_UART1_RX),
            (uint32_t)(pd->base + UART_REG_RBR_OFS),
            (uint32_t)buffer,
            buffer_len>2047 ? 2047 : buffer_len,
            DMA_CTL_TR_WIDTH_8BITS,
            DMA_CTL_TR_WIDTH_8BITS,
            DMA_ADDR_SAME,
            DMA_ADDR_INC,
            burst_size,
            burst_size,
            DMA_AHB_MASTER_PERIPH,
            DMA_AHB_MASTER_MEM,
            DMA_TT_PERF_TO_MEM_FC_DMAC);
#else
        pd->h_rx_dma = hal_dma_open(DMA1_ID,
            ((pd->id == UART0_ID) ? DMA_ID_UART0_RX : DMA_ID_UART1_RX),
            DMA_ADDR_SAME,
            DMA_ADDR_INC,
            DMA_AHB_MASTER_PERIPH,
            DMA_AHB_MASTER_MEM,
            DMA_TT_PERF_TO_MEM_FC_DMAC, IRQ_PRI_Normal);
#endif
        if (!pd->h_rx_dma) {
            res = UART_DMA_NOT_AVAIL;
        }
    }
    return res;
}

int hal_uart_rcvd_dma(void* hdl, uint8_t* buffer, uint32_t buffer_len, uint32_t tmo, uint32_t* actual_rx_len)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int err = UART_ERR_OK;

    if (!pd)
        return UART_ERR_INVALID_PARAM;

    if (!buffer)
        return UART_ERR_INVALID_PARAM;

    if (buffer_len == 0)
        return UART_ERR_INVALID_PARAM;

	if (pd->rx_busy) 
		return UART_ERR_BUSY; 	

    if (actual_rx_len)
        *actual_rx_len = 0;

#if !CFG_NO_OS
    osMutexWait(pd->h_rx_mu, osWaitForever);
#endif	// !CFG_NO_OS

#if CFG_PM_EN
	if (pd->pwr_up_hw_init) {
		uart_hw_init(pd);
		pd->pwr_up_hw_init = 0;
	}
#endif

    // Burst size
    // int burst_size;
    if ((buffer_len & 0x7) == 0) {
        pd->fifo_rx_thold = UART_RT_HALF_FULL;
        // burst_size = DMA_CTL_TR_MSIZE_8;
    } else if (buffer_len > UART_FIFO_DEPTH / 4) {
        pd->fifo_rx_thold = UART_RT_QUARTER_FULL;
        // burst_size = DMA_CTL_TR_MSIZE_4;
    } else {
        pd->fifo_rx_thold = UART_RT_1_CHAR;
        // burst_size = DMA_CTL_TR_MSIZE_1;
    }
    err =  hal_uart_recv_dma_open(pd, buffer, buffer_len);
    if (UART_ERR_OK != err) {
        goto out;
    }
    // Find a available DMA channel
    // pd->h_rx_dma = hal_dma_open(DMA1_ID,
    //     ((pd->id == UART0_ID) ? DMA_ID_UART0_RX : DMA_ID_UART1_RX),
    //     (uint32_t)(pd->base + UART_REG_RBR_OFS),
    //     (uint32_t)buffer,
    //     buffer_len>2047 ? 2047 : buffer_len,
    //     DMA_CTL_TR_WIDTH_8BITS,
    //     DMA_CTL_TR_WIDTH_8BITS,
    //     DMA_ADDR_SAME,
    //     DMA_ADDR_INC,
    //     burst_size,
    //     burst_size,
    //     DMA_AHB_MASTER_PERIPH,
    //     DMA_AHB_MASTER_MEM,
    //     DMA_TT_PERF_TO_MEM_FC_DMAC);
    // if (!pd->h_rx_dma) {
    //     err = UART_DMA_NOT_AVAIL;
    //     goto out;
    // }

    // Prepare...
    pd->rx_buffer = buffer;
    pd->rx_buffer_len = buffer_len;
    pd->rx_buffer_ofs = 0;
    //pd->rx_callback_arg = arg;
    //pd->rx_callback = callback;
    pd->error = err;
	pd->rx_wait = 0;
    //pd->break_flag = 0;

#if CFG_PM_EN
    pd->power_state = PM_SLEEP;
#endif

    // FCR: Reset fifo and threshold
    uart_fcr(pd->base, 1, pd->fifo_tx_thold, pd->fifo_rx_thold, 1, 0, 1);

    // CTO: char time out detection
    uart_cto_cycles(pd->base, 0);
    uart_cto_enable(pd->base);

    if (pd->fc) {
        uart_rts_off_clear_cto_count_enable(pd->base);
        uart_cto_auto_rts_deassert_enable(pd->base);
    // uart_cto_auto_deassert_rts_disable(pd->base);
        uart_rts_below_th_assert_enable(pd->base);

        uart_cto_auto_rts_manu_clear(pd->base);
        uart_rts_on(pd->base);
    }

    
    uart_intr_enable(pd->base, (UART_IER_ELSI | UART_IER_CTO));
    // DMA channel enable
    hal_dma_ch_enable(pd->h_rx_dma, (void*)pd, uart_dma_isr_cb);

    if (!pd->rx_callback) {
        // Block call
#if !CFG_NO_OS
        err = osSemaphoreWait(pd->h_rx_sma, tmo);
#else
		while (!pd->rx_done);
		pd->rx_done = 0;

#endif	// !CFG_NO_OS

		uart_intr_disable(pd->base, (UART_IER_ELSI | UART_IER_CTO));
        if (err == 0){
            if (pd->h_rx_dma) {
                // Disable DMA
                hal_dma_ch_disable(pd->h_rx_dma);
                hal_dma_close(pd->h_rx_dma);
                pd->h_rx_dma = NULL;
            }
            err = UART_ERR_TMO;
				}
        else
            err = pd->error;

        if (actual_rx_len)
            *actual_rx_len = pd->rx_buffer_ofs;
#if CFG_PM_EN
        pd->power_state = PM_DEEP_SLEEP;
#endif
    } else {
		pd->rx_busy = 1;

        // Non-block call
        err = UART_ERR_PEND;
    }

out:

#if !CFG_NO_OS
    osMutexRelease(pd->h_rx_mu);
#endif	// !CFG_NO_OS

    return err;
}
#if !CFG_NO_OS
void hal_uart_cancel(void* hdl)
{
	uart_dev_t* pd = (uart_dev_t*)hdl;
	if (pd->h_rx_sma)
		osSemaphoreRelease(pd->h_rx_sma);
}
#endif
int hal_uart_en_unbreak_int(void* hdl)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    int pin = pd->rx_pin & 0xF;
    int port = (pd->rx_pin >> 4) & 0xF;
	hal_gpio_ext_int_prio(port, IRQ_PRI_Normal);
    hal_gpio_ext_int_reg(port, pin, pd, uart_unbreak_cb);
	hal_gpio_ext_int_unmask(port, pin, 1, 0, 1);
	
    return UART_ERR_OK;
}
int hal_uart_en_break(void* hdl, char en, void (*cb)(void*), void* arg)
{
    uart_dev_t* pd = (uart_dev_t*)hdl;
    if (!pd)
        return UART_ERR_INVALID_PARAM;
    int pin = pd->rx_pin & 0xF;
    int port = (pd->rx_pin >> 4) & 0xF;
    pd->en_break = en;
    if (en) {
        pd->unbreak_cb = cb;
        pd->unbreak_cb_arg = arg;
		hal_gpio_sleep_wup_edge(port, pin, 1, 0);
		hal_gpio_sleep_wup_edge_clear_auto(port, pin, 1);
		hal_gpio_sleep_pad_mask(port, pin, 0);
		hal_gpio_sleep_pad_latch(port, pin, 1, 0);
		hal_gpio_sleep_wup_mask(port, pin, 0);

		hal_gpio_sleep_wup_polarity(port, pin, 1);
    } else {
        pd->unbreak_cb = NULL;
        pd->unbreak_cb_arg = NULL;
		hal_gpio_sleep_wup_edge(port, pin, 0, 0);
		hal_gpio_sleep_wup_edge_clear_auto(port, pin, 0);
		hal_gpio_sleep_pad_mask(port, pin, 1);
		hal_gpio_sleep_pad_latch(port, pin, 0, 0);
		hal_gpio_sleep_wup_mask(port, pin, 1);

		hal_gpio_sleep_wup_polarity(port, pin, 0);
    }
    return UART_ERR_OK;
}

#endif /* CFG_NB_UART */
