#ifndef _UART_1_DEFINES_H
#define _UART_1_DEFINES_H
/* **************************** */
#define UART_1_RBR_THR                                                                        (UART_1_BASE + 0x0)
#define UART_1_RBR_THR_DEFAULT                                                                0x0
#define UART_1_RBR_THR_RBR_THR                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_RBR_THR_RBR_THR_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_RBR_THR_RBR_THR_SHIFT                                                          (0)


#define UART_1_IER                                                                            (UART_1_BASE + 0x4)
#define UART_1_IER_DEFAULT                                                                    0x0
#define UART_1_IER_ERBFI                                                                      (Bit0)
#define UART_1_IER_ETBEI                                                                      (Bit1)
#define UART_1_IER_ELSI                                                                       (Bit2)
#define UART_1_IER_EDSSI                                                                      (Bit3)
#define UART_1_IER_RAW_TIMEOUT_INTR_ENABLE                                                    (Bit4)
#define UART_1_IER_PTIME                                                                      (Bit7)


#define UART_1_FCR                                                                            (UART_1_BASE + 0x8)
#define UART_1_FCR_DEFAULT                                                                    0x0
#define UART_1_FCR_FIFO_ENABLE                                                                (Bit0)
#define UART_1_FCR_RCVR_FIFO_RESET                                                            (Bit1)
#define UART_1_FCR_XMIT_FIFO_RESET                                                            (Bit2)
#define UART_1_FCR_DMA_MODE                                                                   (Bit3)
#define UART_1_FCR_TX_EMPTY_TRIG                                                              (Bit4+Bit5)
#define UART_1_FCR_TX_EMPTY_TRIG_MASK                                                         (Bit1+Bit0)
#define UART_1_FCR_TX_EMPTY_TRIG_SHIFT                                                        (4)
#define UART_1_FCR_RCVR_TRIG                                                                  (Bit6+Bit7)
#define UART_1_FCR_RCVR_TRIG_MASK                                                             (Bit1+Bit0)
#define UART_1_FCR_RCVR_TRIG_SHIFT                                                            (6)


#define UART_1_LCR                                                                            (UART_1_BASE + 0xc)
#define UART_1_LCR_DEFAULT                                                                    0x0
#define UART_1_LCR_DLS                                                                        (Bit0+Bit1)
#define UART_1_LCR_DLS_MASK                                                                   (Bit1+Bit0)
#define UART_1_LCR_DLS_SHIFT                                                                  (0)
#define UART_1_LCR_STOP                                                                       (Bit2)
#define UART_1_LCR_PEN                                                                        (Bit3)
#define UART_1_LCR_EPS                                                                        (Bit4)
#define UART_1_LCR_STICK                                                                      (Bit5)
#define UART_1_LCR_BREAK                                                                      (Bit6)
#define UART_1_LCR_DLAB                                                                       (Bit7)


#define UART_1_MCR                                                                            (UART_1_BASE + 0x10)
#define UART_1_MCR_DEFAULT                                                                    0x0
#define UART_1_MCR_DTR                                                                        (Bit0)
#define UART_1_MCR_RTS                                                                        (Bit1)
#define UART_1_MCR_OUT1                                                                       (Bit2)
#define UART_1_MCR_OUT2                                                                       (Bit3)
#define UART_1_MCR_LOOPBACK                                                                   (Bit4)
#define UART_1_MCR_AFCE                                                                       (Bit5)
#define UART_1_MCR_SIRE                                                                       (Bit6)
#define UART_1_MCR_CTL_TIMEOUT_IGNORE_RTS_N                                                   (Bit7)


#define UART_1_LSR                                                                            (UART_1_BASE + 0x14)
#define UART_1_LSR_DEFAULT                                                                    0x0
#define UART_1_LSR_DR                                                                         (Bit0)
#define UART_1_LSR_OE                                                                         (Bit1)
#define UART_1_LSR_PE                                                                         (Bit2)
#define UART_1_LSR_FE                                                                         (Bit3)
#define UART_1_LSR_BI                                                                         (Bit4)
#define UART_1_LSR_THRE                                                                       (Bit5)
#define UART_1_LSR_TEMT                                                                       (Bit6)
#define UART_1_LSR_RFE                                                                        (Bit7)
#define UART_1_LSR_ADDR_RCVD                                                                  (Bit8)


#define UART_1_MSR                                                                            (UART_1_BASE + 0x18)
#define UART_1_MSR_DEFAULT                                                                    0x0
#define UART_1_MSR_DCTS                                                                       (Bit0)
#define UART_1_MSR_DDSR                                                                       (Bit1)
#define UART_1_MSR_TERI                                                                       (Bit2)
#define UART_1_MSR_DDCD                                                                       (Bit3)
#define UART_1_MSR_DRCTS                                                                      (Bit4)
#define UART_1_MSR_DSR                                                                        (Bit5)
#define UART_1_MSR_RI                                                                         (Bit6)
#define UART_1_MSR_DCD                                                                        (Bit7)


#define UART_1_SCRATCHPAD_REGISTER                                                            (UART_1_BASE + 0x1c)
#define UART_1_SCRATCHPAD_REGISTER_DEFAULT                                                    0x0
#define UART_1_SCRATCHPAD_REGISTER_SCRATCHPAD                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SCRATCHPAD_REGISTER_SCRATCHPAD_MASK                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SCRATCHPAD_REGISTER_SCRATCHPAD_SHIFT                                           (0)


#define UART_1_LPDLL                                                                          (UART_1_BASE + 0x20)
#define UART_1_LPDLL_DEFAULT                                                                  0x0
#define UART_1_LPDLL_LPDLL                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_LPDLL_LPDLL_MASK                                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_LPDLL_LPDLL_SHIFT                                                              (0)


#define UART_1_LPDLH                                                                          (UART_1_BASE + 0x24)
#define UART_1_LPDLH_DEFAULT                                                                  0x0
#define UART_1_LPDLH_LPDLH                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_LPDLH_LPDLH_MASK                                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_LPDLH_LPDLH_SHIFT                                                              (0)


#define UART_1_RAW_TIMEOUT_CTRL                                                               (UART_1_BASE + 0x28)
#define UART_1_RAW_TIMEOUT_CTRL_DEFAULT                                                       0x20
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RAW_TIME_OUT_VAL                                          (Bit0+Bit1+Bit2)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RAW_TIME_OUT_VAL_MASK                                     (Bit2+Bit1+Bit0)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RAW_TIME_OUT_VAL_SHIFT                                    (0)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RAW_TIME_OUT_EN                                           (Bit3)
#define UART_1_RAW_TIMEOUT_CTRL_STS_RAW_TIME_OUT                                              (Bit4)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RAW_TIME_OUT_WAIT_RX                                      (Bit5)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RAW_TIME_OUT_AUTO_RTS                                     (Bit6)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_CLR_TIME_OUT_AUTO_RTS                                     (Bit7)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RTS_DEASSERT_NON_ZERO                                     (Bit8)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RTS_USE_STANDALONE_TH                                     (Bit9)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RTS_FIFO_TH                                               (Bit10+Bit11)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RTS_FIFO_TH_MASK                                          (Bit1+Bit0)
#define UART_1_RAW_TIMEOUT_CTRL_CTL_RTS_FIFO_TH_SHIFT                                         (10)


#define UART_1_SRBR_STHR_0                                                                    (UART_1_BASE + 0x30)
#define UART_1_SRBR_STHR_0_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_0_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_0_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_0_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_0_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_1                                                                    (UART_1_BASE + 0x34)
#define UART_1_SRBR_STHR_1_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_1_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_1_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_1_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_1_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_2                                                                    (UART_1_BASE + 0x38)
#define UART_1_SRBR_STHR_2_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_2_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_2_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_2_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_2_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_3                                                                    (UART_1_BASE + 0x3c)
#define UART_1_SRBR_STHR_3_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_3_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_3_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_3_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_3_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_4                                                                    (UART_1_BASE + 0x40)
#define UART_1_SRBR_STHR_4_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_4_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_4_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_4_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_4_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_5                                                                    (UART_1_BASE + 0x44)
#define UART_1_SRBR_STHR_5_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_5_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_5_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_5_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_5_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_6                                                                    (UART_1_BASE + 0x48)
#define UART_1_SRBR_STHR_6_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_6_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_6_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_6_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_6_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_7                                                                    (UART_1_BASE + 0x4c)
#define UART_1_SRBR_STHR_7_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_7_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_7_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_7_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_7_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_8                                                                    (UART_1_BASE + 0x50)
#define UART_1_SRBR_STHR_8_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_8_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_8_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_8_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_8_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_9                                                                    (UART_1_BASE + 0x54)
#define UART_1_SRBR_STHR_9_DEFAULT                                                            0x0
#define UART_1_SRBR_STHR_9_SHADOW_BUFFER_REGISTER_LSB8                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_9_SHADOW_BUFFER_REGISTER_LSB8_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_9_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                  (0)
#define UART_1_SRBR_STHR_9_SHADOW_BUFFER_REGISTER_MSB9                                        (Bit8)


#define UART_1_SRBR_STHR_10                                                                   (UART_1_BASE + 0x58)
#define UART_1_SRBR_STHR_10_DEFAULT                                                           0x0
#define UART_1_SRBR_STHR_10_SHADOW_BUFFER_REGISTER_LSB8                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_10_SHADOW_BUFFER_REGISTER_LSB8_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_10_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                 (0)
#define UART_1_SRBR_STHR_10_SHADOW_BUFFER_REGISTER_MSB9                                       (Bit8)


#define UART_1_SRBR_STHR_11                                                                   (UART_1_BASE + 0x5c)
#define UART_1_SRBR_STHR_11_DEFAULT                                                           0x0
#define UART_1_SRBR_STHR_11_SHADOW_BUFFER_REGISTER_LSB8                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_11_SHADOW_BUFFER_REGISTER_LSB8_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_11_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                 (0)
#define UART_1_SRBR_STHR_11_SHADOW_BUFFER_REGISTER_MSB9                                       (Bit8)


#define UART_1_SRBR_STHR_12                                                                   (UART_1_BASE + 0x60)
#define UART_1_SRBR_STHR_12_DEFAULT                                                           0x0
#define UART_1_SRBR_STHR_12_SHADOW_BUFFER_REGISTER_LSB8                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_12_SHADOW_BUFFER_REGISTER_LSB8_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_12_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                 (0)
#define UART_1_SRBR_STHR_12_SHADOW_BUFFER_REGISTER_MSB9                                       (Bit8)


#define UART_1_SRBR_STHR_13                                                                   (UART_1_BASE + 0x64)
#define UART_1_SRBR_STHR_13_DEFAULT                                                           0x0
#define UART_1_SRBR_STHR_13_SHADOW_BUFFER_REGISTER_LSB8                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_13_SHADOW_BUFFER_REGISTER_LSB8_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_13_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                 (0)
#define UART_1_SRBR_STHR_13_SHADOW_BUFFER_REGISTER_MSB9                                       (Bit8)


#define UART_1_SRBR_STHR_14                                                                   (UART_1_BASE + 0x68)
#define UART_1_SRBR_STHR_14_DEFAULT                                                           0x0
#define UART_1_SRBR_STHR_14_SHADOW_BUFFER_REGISTER_LSB8                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_14_SHADOW_BUFFER_REGISTER_LSB8_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_14_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                 (0)
#define UART_1_SRBR_STHR_14_SHADOW_BUFFER_REGISTER_MSB9                                       (Bit8)


#define UART_1_SRBR_STHR_15                                                                   (UART_1_BASE + 0x6c)
#define UART_1_SRBR_STHR_15_DEFAULT                                                           0x0
#define UART_1_SRBR_STHR_15_SHADOW_BUFFER_REGISTER_LSB8                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_SRBR_STHR_15_SHADOW_BUFFER_REGISTER_LSB8_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_SRBR_STHR_15_SHADOW_BUFFER_REGISTER_LSB8_SHIFT                                 (0)
#define UART_1_SRBR_STHR_15_SHADOW_BUFFER_REGISTER_MSB9                                       (Bit8)


#define UART_1_FAR                                                                            (UART_1_BASE + 0x70)
#define UART_1_FAR_DEFAULT                                                                    0x0
#define UART_1_FAR_FIFO                                                                       (Bit0)


#define UART_1_TRANSMIT_FIFO_READ                                                             (UART_1_BASE + 0x74)
#define UART_1_TRANSMIT_FIFO_READ_DEFAULT                                                     0x0
#define UART_1_TRANSMIT_FIFO_READ_TRANSMIT_FIFO_READ                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_TRANSMIT_FIFO_READ_TRANSMIT_FIFO_READ_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_TRANSMIT_FIFO_READ_TRANSMIT_FIFO_READ_SHIFT                                    (0)


#define UART_1_RECEIVE_FIFO_WRITE                                                             (UART_1_BASE + 0x78)
#define UART_1_RECEIVE_FIFO_WRITE_DEFAULT                                                     0x0
#define UART_1_RECEIVE_FIFO_WRITE_RFWD                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_RECEIVE_FIFO_WRITE_RFWD_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_RECEIVE_FIFO_WRITE_RFWD_SHIFT                                                  (0)
#define UART_1_RECEIVE_FIFO_WRITE_RFPE                                                        (Bit8)
#define UART_1_RECEIVE_FIFO_WRITE_RFFE                                                        (Bit9)
#define UART_1_RECEIVE_FIFO_WRITE_RESERVE                                                     (Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define UART_1_RECEIVE_FIFO_WRITE_RESERVE_MASK                                                (Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_RECEIVE_FIFO_WRITE_RESERVE_SHIFT                                               (10)


#define UART_1_USR                                                                            (UART_1_BASE + 0x7c)
#define UART_1_USR_DEFAULT                                                                    0x6
#define UART_1_USR_BUSY                                                                       (Bit0)
#define UART_1_USR_TFNF                                                                       (Bit1)
#define UART_1_USR_TFE                                                                        (Bit2)
#define UART_1_USR_RFNE                                                                       (Bit3)
#define UART_1_USR_RFF                                                                        (Bit4)


#define UART_1_TFL                                                                            (UART_1_BASE + 0x80)
#define UART_1_TFL_DEFAULT                                                                    0x0
#define UART_1_TFL_TRANSMIT_FIFO_LEVEL                                                        (Bit0+Bit1+Bit2+Bit3+Bit4)
#define UART_1_TFL_TRANSMIT_FIFO_LEVEL_MASK                                                   (Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_TFL_TRANSMIT_FIFO_LEVEL_SHIFT                                                  (0)


#define UART_1_RFL                                                                            (UART_1_BASE + 0x84)
#define UART_1_RFL_DEFAULT                                                                    0x0
#define UART_1_RFL_RECEIVE_FIFO_LEVEL                                                         (Bit0+Bit1+Bit2+Bit3+Bit4)
#define UART_1_RFL_RECEIVE_FIFO_LEVEL_MASK                                                    (Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_RFL_RECEIVE_FIFO_LEVEL_SHIFT                                                   (0)


#define UART_1_SRR                                                                            (UART_1_BASE + 0x88)
#define UART_1_SRR_DEFAULT                                                                    0x0
#define UART_1_SRR_UR                                                                         (Bit0)
#define UART_1_SRR_RFR                                                                        (Bit1)
#define UART_1_SRR_XFR                                                                        (Bit2)


#define UART_1_SRTS                                                                           (UART_1_BASE + 0x8c)
#define UART_1_SRTS_DEFAULT                                                                   0x0
#define UART_1_SRTS_SHADOW_REQUEST_TO_SEND                                                    (Bit0)


#define UART_1_SBCR                                                                           (UART_1_BASE + 0x90)
#define UART_1_SBCR_DEFAULT                                                                   0x0
#define UART_1_SBCR_SHADOW                                                                    (Bit0)


#define UART_1_SHADOW_DMA_MODE                                                                (UART_1_BASE + 0x94)
#define UART_1_SHADOW_DMA_MODE_DEFAULT                                                        0x0
#define UART_1_SHADOW_DMA_MODE_SHADOW_DMA_MODE                                                (Bit0)


#define UART_1_SHADOW_FIFO_ENABLE                                                             (UART_1_BASE + 0x98)
#define UART_1_SHADOW_FIFO_ENABLE_DEFAULT                                                     0x0
#define UART_1_SHADOW_FIFO_ENABLE_SHADOW_FIFO_ENABLE                                          (Bit0)


#define UART_1_SHADOW_RCVR_TRIGGER                                                            (UART_1_BASE + 0x9c)
#define UART_1_SHADOW_RCVR_TRIGGER_DEFAULT                                                    0x0
#define UART_1_SHADOW_RCVR_TRIGGER_SHADOW_RCVR_TRIGGER                                        (Bit0+Bit1)
#define UART_1_SHADOW_RCVR_TRIGGER_SHADOW_RCVR_TRIGGER_MASK                                   (Bit1+Bit0)
#define UART_1_SHADOW_RCVR_TRIGGER_SHADOW_RCVR_TRIGGER_SHIFT                                  (0)


#define UART_1_SHADOW_TX_EMPTY_TRIGGER                                                        (UART_1_BASE + 0xa0)
#define UART_1_SHADOW_TX_EMPTY_TRIGGER_DEFAULT                                                0x0
#define UART_1_SHADOW_TX_EMPTY_TRIGGER_SHADOW_TX_EMPTY_TRIGGER                                (Bit0+Bit1)
#define UART_1_SHADOW_TX_EMPTY_TRIGGER_SHADOW_TX_EMPTY_TRIGGER_MASK                           (Bit1+Bit0)
#define UART_1_SHADOW_TX_EMPTY_TRIGGER_SHADOW_TX_EMPTY_TRIGGER_SHIFT                          (0)


#define UART_1_HALT_TX                                                                        (UART_1_BASE + 0xa4)
#define UART_1_HALT_TX_DEFAULT                                                                0x0
#define UART_1_HALT_TX_HALT_TX                                                                (Bit0)


#define UART_1_DMA_SOFTWARE_ACKNOWLEDGE                                                       (UART_1_BASE + 0xa8)
#define UART_1_DMA_SOFTWARE_ACKNOWLEDGE_DEFAULT                                               0x0
#define UART_1_DMA_SOFTWARE_ACKNOWLEDGE_DMA_SOFTWARE_ACKNOWLEDGE                              (Bit0)


#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR                                               (UART_1_BASE + 0xac)
#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR_DEFAULT                                       0x0
#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR_RS485_EN                                      (Bit0)
#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR_RE_POL                                        (Bit1)
#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR_DE_POL                                        (Bit2)
#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR_XFER_MODE                                     (Bit3+Bit4)
#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR_XFER_MODE_MASK                                (Bit1+Bit0)
#define UART_1_TRANSCEIVER_CONTROL_REGISTER_TCR_XFER_MODE_SHIFT                               (3)


#define UART_1_DRIVER_OUTPUT_ENABLE_REGISTER_DE_EN                                            (UART_1_BASE + 0xb0)
#define UART_1_DRIVER_OUTPUT_ENABLE_REGISTER_DE_EN_DEFAULT                                    0x0
#define UART_1_DRIVER_OUTPUT_ENABLE_REGISTER_DE_EN_DE                                         (Bit0)


#define UART_1_RECEIVER_OUTPUT_ENABLE_REGISTER_RE_EN                                          (UART_1_BASE + 0xb4)
#define UART_1_RECEIVER_OUTPUT_ENABLE_REGISTER_RE_EN_DEFAULT                                  0x0
#define UART_1_RECEIVER_OUTPUT_ENABLE_REGISTER_RE_EN_RE                                       (Bit0)


#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET                                       (UART_1_BASE + 0xb8)
#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET_DEFAULT                               0x0
#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET_DE_ASSERTION_TIME                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET_DE_ASSERTION_TIME_MASK                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET_DE_ASSERTION_TIME_SHIFT               (0)
#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET_DE_DE_ASSERTION_TIME                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET_DE_DE_ASSERTION_TIME_MASK             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_DRIVER_OUTPUT_ENABLE_TIMING_REGISTER_DET_DE_DE_ASSERTION_TIME_SHIFT            (16)


#define UART_1_TURNAROUND_TIMING_REGISTER_TAT                                                 (UART_1_BASE + 0xbc)
#define UART_1_TURNAROUND_TIMING_REGISTER_TAT_DEFAULT                                         0x0
#define UART_1_TURNAROUND_TIMING_REGISTER_TAT_DE_TO_RE                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define UART_1_TURNAROUND_TIMING_REGISTER_TAT_DE_TO_RE_MASK                                   (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_TURNAROUND_TIMING_REGISTER_TAT_DE_TO_RE_SHIFT                                  (0)
#define UART_1_TURNAROUND_TIMING_REGISTER_TAT_RE_TO_DE                                        (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define UART_1_TURNAROUND_TIMING_REGISTER_TAT_RE_TO_DE_MASK                                   (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_TURNAROUND_TIMING_REGISTER_TAT_RE_TO_DE_SHIFT                                  (16)


#define UART_1_DLF                                                                            (UART_1_BASE + 0xc0)
#define UART_1_DLF_DEFAULT                                                                    0x0
#define UART_1_DLF_DLF                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define UART_1_DLF_DLF_MASK                                                                   (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_DLF_DLF_SHIFT                                                                  (0)


#define UART_1_RAR                                                                            (UART_1_BASE + 0xc4)
#define UART_1_RAR_DEFAULT                                                                    0x0
#define UART_1_RAR_RAR                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_RAR_RAR_MASK                                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_RAR_RAR_SHIFT                                                                  (0)


#define UART_1_TRANSMIT_ADDRESS_REGISTER_TAR                                                  (UART_1_BASE + 0xc8)
#define UART_1_TRANSMIT_ADDRESS_REGISTER_TAR_DEFAULT                                          0x0
#define UART_1_TRANSMIT_ADDRESS_REGISTER_TAR_TAR                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_TRANSMIT_ADDRESS_REGISTER_TAR_TAR_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_TRANSMIT_ADDRESS_REGISTER_TAR_TAR_SHIFT                                        (0)


#define UART_1_LINE_EXTENDED_CONTROL_REGISTER                                                 (UART_1_BASE + 0xcc)
#define UART_1_LINE_EXTENDED_CONTROL_REGISTER_DEFAULT                                         0x0
#define UART_1_LINE_EXTENDED_CONTROL_REGISTER_DLS_E                                           (Bit0)
#define UART_1_LINE_EXTENDED_CONTROL_REGISTER_ADDR_MATCH                                      (Bit1)
#define UART_1_LINE_EXTENDED_CONTROL_REGISTER_SEND_ADDR                                       (Bit2)
#define UART_1_LINE_EXTENDED_CONTROL_REGISTER_TRANSMIT_M                                      (Bit3)


#define UART_1_DLL                                                                            (UART_1_BASE + 0xd0)
#define UART_1_DLL_DEFAULT                                                                    0x0
#define UART_1_DLL_DIVISOR                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_DLL_DIVISOR_MASK                                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_DLL_DIVISOR_SHIFT                                                              (0)


#define UART_1_DLH                                                                            (UART_1_BASE + 0xd4)
#define UART_1_DLH_DEFAULT                                                                    0x0
#define UART_1_DLH_DIVISOR                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define UART_1_DLH_DIVISOR_MASK                                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_DLH_DIVISOR_SHIFT                                                              (0)


#define UART_1_IIR                                                                            (UART_1_BASE + 0xe0)
#define UART_1_IIR_DEFAULT                                                                    0x0
#define UART_1_IIR_INTERRUPT                                                                  (Bit0+Bit1+Bit2+Bit3)
#define UART_1_IIR_INTERRUPT_MASK                                                             (Bit3+Bit2+Bit1+Bit0)
#define UART_1_IIR_INTERRUPT_SHIFT                                                            (0)
#define UART_1_IIR_STS_RAW_TIMEOUT_IRQ                                                        (Bit4)
#define UART_1_IIR_FIFOS_ENABLED                                                              (Bit6+Bit7)
#define UART_1_IIR_FIFOS_ENABLED_MASK                                                         (Bit1+Bit0)
#define UART_1_IIR_FIFOS_ENABLED_SHIFT                                                        (6)


#define UART_1_COMPONENT_PARAMETER_REGISTER                                                   (UART_1_BASE + 0xf4)
#define UART_1_COMPONENT_PARAMETER_REGISTER_DEFAULT                                           0x0
#define UART_1_COMPONENT_PARAMETER_REGISTER_APB_DATA_WIDTH                                    (Bit0+Bit1)
#define UART_1_COMPONENT_PARAMETER_REGISTER_APB_DATA_WIDTH_MASK                               (Bit1+Bit0)
#define UART_1_COMPONENT_PARAMETER_REGISTER_APB_DATA_WIDTH_SHIFT                              (0)
#define UART_1_COMPONENT_PARAMETER_REGISTER_AFCE_MODE                                         (Bit4)
#define UART_1_COMPONENT_PARAMETER_REGISTER_THRE_MODE                                         (Bit5)
#define UART_1_COMPONENT_PARAMETER_REGISTER_SIR_MODE                                          (Bit6)
#define UART_1_COMPONENT_PARAMETER_REGISTER_SIR_LP_MODE                                       (Bit7)
#define UART_1_COMPONENT_PARAMETER_REGISTER_ADDITIONAL_FEAT                                   (Bit8)
#define UART_1_COMPONENT_PARAMETER_REGISTER_FIFO_ACCESS                                       (Bit9)
#define UART_1_COMPONENT_PARAMETER_REGISTER_FIFO_STAT                                         (Bit10)
#define UART_1_COMPONENT_PARAMETER_REGISTER_SHADOW                                            (Bit11)
#define UART_1_COMPONENT_PARAMETER_REGISTER_UART_ADD_ENCODED_PARAMS                           (Bit12)
#define UART_1_COMPONENT_PARAMETER_REGISTER_DMA_EXTRA                                         (Bit13)
#define UART_1_COMPONENT_PARAMETER_REGISTER_FIFO_MODE                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define UART_1_COMPONENT_PARAMETER_REGISTER_FIFO_MODE_MASK                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_COMPONENT_PARAMETER_REGISTER_FIFO_MODE_SHIFT                                   (16)


#define UART_1_UART_COMPONENT_VERSION                                                         (UART_1_BASE + 0xf8)
#define UART_1_UART_COMPONENT_VERSION_DEFAULT                                                 0x0
#define UART_1_UART_COMPONENT_VERSION_UART                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define UART_1_UART_COMPONENT_VERSION_UART_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_UART_COMPONENT_VERSION_UART_SHIFT                                              (0)


#define UART_1_COMPONENT_TYPE_REGISTER                                                        (UART_1_BASE + 0xfc)
#define UART_1_COMPONENT_TYPE_REGISTER_DEFAULT                                                0x44570110
#define UART_1_COMPONENT_TYPE_REGISTER_PERIPHERAL                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define UART_1_COMPONENT_TYPE_REGISTER_PERIPHERAL_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define UART_1_COMPONENT_TYPE_REGISTER_PERIPHERAL_SHIFT                                       (0)


#endif // _UART_1_DEFINES_H

