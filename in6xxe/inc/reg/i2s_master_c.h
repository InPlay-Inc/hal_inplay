#ifndef _I2S_MASTER_DEFINES_H
#define _I2S_MASTER_DEFINES_H
/* **************************** */
#define I2S_MASTER_I2S_IP_ENABLE_REGISTER                                                                               (I2S_MASTER_BASE + 0x0)
#define I2S_MASTER_I2S_IP_ENABLE_REGISTER_DEFAULT                                                                       0x0
#define I2S_MASTER_I2S_IP_ENABLE_REGISTER_IEN                                                                           (Bit0)


#define I2S_MASTER_I2S_IP_RECEIVER_BLOCK_ENABLE_REGISTER                                                                (I2S_MASTER_BASE + 0x4)
#define I2S_MASTER_I2S_IP_RECEIVER_BLOCK_ENABLE_REGISTER_DEFAULT                                                        0x0
#define I2S_MASTER_I2S_IP_RECEIVER_BLOCK_ENABLE_REGISTER_RXEN                                                           (Bit0)


#define I2S_MASTER_I2S_IP_TRANSMITTER_BLOCK_ENABLE_REGISTER                                                             (I2S_MASTER_BASE + 0x8)
#define I2S_MASTER_I2S_IP_TRANSMITTER_BLOCK_ENABLE_REGISTER_DEFAULT                                                     0x0
#define I2S_MASTER_I2S_IP_TRANSMITTER_BLOCK_ENABLE_REGISTER_TXEN                                                        (Bit0)


#define I2S_MASTER_CLOCK_ENABLE_REGISTER                                                                                (I2S_MASTER_BASE + 0xc)
#define I2S_MASTER_CLOCK_ENABLE_REGISTER_DEFAULT                                                                        0x0
#define I2S_MASTER_CLOCK_ENABLE_REGISTER_CLKEN                                                                          (Bit0)


#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER                                                                         (I2S_MASTER_BASE + 0x10)
#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER_DEFAULT                                                                 0x0
#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER_SCLKG                                                                   (Bit0+Bit1+Bit2)
#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER_SCLKG_MASK                                                              (Bit2+Bit1+Bit0)
#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER_SCLKG_SHIFT                                                             (0)
#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER_WSS                                                                     (Bit3+Bit4)
#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER_WSS_MASK                                                                (Bit1+Bit0)
#define I2S_MASTER_CLOCK_CONFIGURATION_REGISTER_WSS_SHIFT                                                               (3)


#define I2S_MASTER_RECEIVER_BLOCK_FIFO_RESET_REGISTER                                                                   (I2S_MASTER_BASE + 0x14)
#define I2S_MASTER_RECEIVER_BLOCK_FIFO_RESET_REGISTER_DEFAULT                                                           0x0
#define I2S_MASTER_RECEIVER_BLOCK_FIFO_RESET_REGISTER_RXFFR                                                             (Bit0)


#define I2S_MASTER_TRANSMITTER_BLOCK_FIFO_RESET_REGISTER                                                                (I2S_MASTER_BASE + 0x18)
#define I2S_MASTER_TRANSMITTER_BLOCK_FIFO_RESET_REGISTER_DEFAULT                                                        0x0
#define I2S_MASTER_TRANSMITTER_BLOCK_FIFO_RESET_REGISTER_TXFFR                                                          (Bit0)


#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_0_OR_LEFT_TRANSMIT_HOLDING_REGISTER_0                                   (I2S_MASTER_BASE + 0x20)
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_0_OR_LEFT_TRANSMIT_HOLDING_REGISTER_0_DEFAULT                           0x0
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_0_OR_LEFT_TRANSMIT_HOLDING_REGISTER_0_LRBR0_OR_LTHR0                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_0_OR_LEFT_TRANSMIT_HOLDING_REGISTER_0_LRBR0_OR_LTHR0_MASK               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_0_OR_LEFT_TRANSMIT_HOLDING_REGISTER_0_LRBR0_OR_LTHR0_SHIFT              (0)


#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_0_OR_RIGHT_TRANSMIT_HOLDING_REGISTER_0                                 (I2S_MASTER_BASE + 0x24)
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_0_OR_RIGHT_TRANSMIT_HOLDING_REGISTER_0_DEFAULT                         0x0
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_0_OR_RIGHT_TRANSMIT_HOLDING_REGISTER_0_RRBR0_OR_RTHR0                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_0_OR_RIGHT_TRANSMIT_HOLDING_REGISTER_0_RRBR0_OR_RTHR0_MASK             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_0_OR_RIGHT_TRANSMIT_HOLDING_REGISTER_0_RRBR0_OR_RTHR0_SHIFT            (0)


#define I2S_MASTER_RECEIVE_ENABLE_REGISTER_0                                                                            (I2S_MASTER_BASE + 0x28)
#define I2S_MASTER_RECEIVE_ENABLE_REGISTER_0_DEFAULT                                                                    0x1
#define I2S_MASTER_RECEIVE_ENABLE_REGISTER_0_RXCHEN0                                                                    (Bit0)


#define I2S_MASTER_TRANSMIT_ENABLE_REGISTER_0                                                                           (I2S_MASTER_BASE + 0x2c)
#define I2S_MASTER_TRANSMIT_ENABLE_REGISTER_0_DEFAULT                                                                   0x1
#define I2S_MASTER_TRANSMIT_ENABLE_REGISTER_0_TXCHEN0                                                                   (Bit0)


#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_0                                                                     (I2S_MASTER_BASE + 0x30)
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_0_DEFAULT                                                             0x5
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_0_WLEN                                                                (Bit0+Bit1+Bit2)
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_0_WLEN_MASK                                                           (Bit2+Bit1+Bit0)
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_0_WLEN_SHIFT                                                          (0)


#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_0                                                                    (I2S_MASTER_BASE + 0x34)
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_0_DEFAULT                                                            0x5
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_0_WLEN                                                               (Bit0+Bit1+Bit2)
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_0_WLEN_MASK                                                          (Bit2+Bit1+Bit0)
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_0_WLEN_SHIFT                                                         (0)


#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_0                                                                          (I2S_MASTER_BASE + 0x38)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_0_DEFAULT                                                                  0x0
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_0_RXDA                                                                     (Bit0)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_0_RXFO                                                                     (Bit1)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_0_TXFE                                                                     (Bit4)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_0_TXFO                                                                     (Bit5)


#define I2S_MASTER_INTERRUPT_MASK_REGISTER_0                                                                            (I2S_MASTER_BASE + 0x3c)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_0_DEFAULT                                                                    0x33
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_0_RXDAM                                                                      (Bit0)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_0_RXFOM                                                                      (Bit1)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_0_TXFEM                                                                      (Bit4)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_0_TXFOM                                                                      (Bit5)


#define I2S_MASTER_RECEIVE_OVERRUN_REGISTER_0                                                                           (I2S_MASTER_BASE + 0x40)
#define I2S_MASTER_RECEIVE_OVERRUN_REGISTER_0_DEFAULT                                                                   0x0
#define I2S_MASTER_RECEIVE_OVERRUN_REGISTER_0_RXCHO                                                                     (Bit0)


#define I2S_MASTER_TRANSMIT_OVERRUN_REGISTER_0                                                                          (I2S_MASTER_BASE + 0x44)
#define I2S_MASTER_TRANSMIT_OVERRUN_REGISTER_0_DEFAULT                                                                  0x0
#define I2S_MASTER_TRANSMIT_OVERRUN_REGISTER_0_TXCHO                                                                    (Bit0)


#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_0                                                                (I2S_MASTER_BASE + 0x48)
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_0_DEFAULT                                                        0x3
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_0_RXCHDT                                                         (Bit0+Bit1+Bit2+Bit3)
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_0_RXCHDT_MASK                                                    (Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_0_RXCHDT_SHIFT                                                   (0)


#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_0                                                               (I2S_MASTER_BASE + 0x4c)
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_0_DEFAULT                                                       0x3
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_0_TXCHET                                                        (Bit0+Bit1+Bit2+Bit3)
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_0_TXCHET_MASK                                                   (Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_0_TXCHET_SHIFT                                                  (0)


#define I2S_MASTER_RECEIVE_FIFO_FLUSH_REGISTER_0                                                                        (I2S_MASTER_BASE + 0x50)
#define I2S_MASTER_RECEIVE_FIFO_FLUSH_REGISTER_0_DEFAULT                                                                0x0
#define I2S_MASTER_RECEIVE_FIFO_FLUSH_REGISTER_0_RXCHFR                                                                 (Bit0)


#define I2S_MASTER_TRANSMIT_FIFO_FLUSH_REGISTER_0                                                                       (I2S_MASTER_BASE + 0x54)
#define I2S_MASTER_TRANSMIT_FIFO_FLUSH_REGISTER_0_DEFAULT                                                               0x0
#define I2S_MASTER_TRANSMIT_FIFO_FLUSH_REGISTER_0_TXCHFR                                                                (Bit0)


#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_1                                                                       (I2S_MASTER_BASE + 0x60)
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_1_DEFAULT                                                               0x0
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_1_LRBR1                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_1_LRBR1_MASK                                                            (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_LEFT_RECEIVE_BUFFER_REGISTER_1_LRBR1_SHIFT                                                           (0)


#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_1                                                                      (I2S_MASTER_BASE + 0x64)
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_1_DEFAULT                                                              0x0
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_1_RRBR1                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_1_RRBR1_MASK                                                           (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_RIGHT_RECEIVE_BUFFER_REGISTER_1_RRBR1_SHIFT                                                          (0)


#define I2S_MASTER_RECEIVE_ENABLE_REGISTER_1                                                                            (I2S_MASTER_BASE + 0x68)
#define I2S_MASTER_RECEIVE_ENABLE_REGISTER_1_DEFAULT                                                                    0x1
#define I2S_MASTER_RECEIVE_ENABLE_REGISTER_1_RXCHEN1                                                                    (Bit0)


#define I2S_MASTER_TRANSMIT_ENABLE_REGISTER_1                                                                           (I2S_MASTER_BASE + 0x6c)
#define I2S_MASTER_TRANSMIT_ENABLE_REGISTER_1_DEFAULT                                                                   0x1
#define I2S_MASTER_TRANSMIT_ENABLE_REGISTER_1_TXCHEN1                                                                   (Bit0)


#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_1                                                                     (I2S_MASTER_BASE + 0x70)
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_1_DEFAULT                                                             0x5
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_1_WLEN                                                                (Bit0+Bit1+Bit2)
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_1_WLEN_MASK                                                           (Bit2+Bit1+Bit0)
#define I2S_MASTER_RECEIVE_CONFIGURATION_REGISTER_1_WLEN_SHIFT                                                          (0)


#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_1                                                                    (I2S_MASTER_BASE + 0x74)
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_1_DEFAULT                                                            0x5
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_1_WLEN                                                               (Bit0+Bit1+Bit2)
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_1_WLEN_MASK                                                          (Bit2+Bit1+Bit0)
#define I2S_MASTER_TRANSMIT_CONFIGURATION_REGISTER_1_WLEN_SHIFT                                                         (0)


#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_1                                                                          (I2S_MASTER_BASE + 0x78)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_1_DEFAULT                                                                  0x0
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_1_RXDA                                                                     (Bit0)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_1_RXFO                                                                     (Bit1)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_1_TXFE                                                                     (Bit4)
#define I2S_MASTER_INTERRUPT_STATUS_REGISTER_1_TXFO                                                                     (Bit5)


#define I2S_MASTER_INTERRUPT_MASK_REGISTER_1                                                                            (I2S_MASTER_BASE + 0x7c)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_1_DEFAULT                                                                    0x33
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_1_RXDAM                                                                      (Bit0)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_1_RXFOM                                                                      (Bit1)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_1_TXFEM                                                                      (Bit4)
#define I2S_MASTER_INTERRUPT_MASK_REGISTER_1_TXFOM                                                                      (Bit5)


#define I2S_MASTER_RECEIVE_OVERRUN_REGISTER_1                                                                           (I2S_MASTER_BASE + 0x80)
#define I2S_MASTER_RECEIVE_OVERRUN_REGISTER_1_DEFAULT                                                                   0x0
#define I2S_MASTER_RECEIVE_OVERRUN_REGISTER_1_RXCHO                                                                     (Bit0)


#define I2S_MASTER_TRANSMIT_OVERRUN_REGISTER_1                                                                          (I2S_MASTER_BASE + 0x84)
#define I2S_MASTER_TRANSMIT_OVERRUN_REGISTER_1_DEFAULT                                                                  0x0
#define I2S_MASTER_TRANSMIT_OVERRUN_REGISTER_1_TXCHO                                                                    (Bit0)


#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_1                                                                (I2S_MASTER_BASE + 0x88)
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_1_DEFAULT                                                        0x3
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_1_RXCHDT                                                         (Bit0+Bit1+Bit2+Bit3)
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_1_RXCHDT_MASK                                                    (Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_RECEIVE_FIFO_CONFIGURATION_REGISTER_1_RXCHDT_SHIFT                                                   (0)


#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_1                                                               (I2S_MASTER_BASE + 0x8c)
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_1_DEFAULT                                                       0x3
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_1_TXCHET                                                        (Bit0+Bit1+Bit2+Bit3)
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_1_TXCHET_MASK                                                   (Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_TRANSMIT_FIFO_CONFIGURATION_REGISTER_1_TXCHET_SHIFT                                                  (0)


#define I2S_MASTER_RECEIVE_FIFO_FLUSH_REGISTER_1                                                                        (I2S_MASTER_BASE + 0x90)
#define I2S_MASTER_RECEIVE_FIFO_FLUSH_REGISTER_1_DEFAULT                                                                0x0
#define I2S_MASTER_RECEIVE_FIFO_FLUSH_REGISTER_1_RXCHFR                                                                 (Bit0)


#define I2S_MASTER_TRANSMIT_FIFO_FLUSH_REGISTER_1                                                                       (I2S_MASTER_BASE + 0x94)
#define I2S_MASTER_TRANSMIT_FIFO_FLUSH_REGISTER_1_DEFAULT                                                               0x0
#define I2S_MASTER_TRANSMIT_FIFO_FLUSH_REGISTER_1_TXCHFR                                                                (Bit0)


#define I2S_MASTER_RECEIVER_BLOCK_DMA_REGISTER                                                                          (I2S_MASTER_BASE + 0x1c0)
#define I2S_MASTER_RECEIVER_BLOCK_DMA_REGISTER_DEFAULT                                                                  0x0
#define I2S_MASTER_RECEIVER_BLOCK_DMA_REGISTER_RXDMA                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2S_MASTER_RECEIVER_BLOCK_DMA_REGISTER_RXDMA_MASK                                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_RECEIVER_BLOCK_DMA_REGISTER_RXDMA_SHIFT                                                              (0)


#define I2S_MASTER_RESET_RECEIVER_BLOCK_DMA_REGISTER                                                                    (I2S_MASTER_BASE + 0x1c4)
#define I2S_MASTER_RESET_RECEIVER_BLOCK_DMA_REGISTER_DEFAULT                                                            0x0
#define I2S_MASTER_RESET_RECEIVER_BLOCK_DMA_REGISTER_RRXDMA                                                             (Bit0)


#define I2S_MASTER_TRANSMITTER_BLOCK_DMA_REGISTER                                                                       (I2S_MASTER_BASE + 0x1c8)
#define I2S_MASTER_TRANSMITTER_BLOCK_DMA_REGISTER_DEFAULT                                                               0x0
#define I2S_MASTER_TRANSMITTER_BLOCK_DMA_REGISTER_TXDMA                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2S_MASTER_TRANSMITTER_BLOCK_DMA_REGISTER_TXDMA_MASK                                                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_TRANSMITTER_BLOCK_DMA_REGISTER_TXDMA_SHIFT                                                           (0)


#define I2S_MASTER_RESET_TRANSMITTER_BLOCK_DMA_REGISTER                                                                 (I2S_MASTER_BASE + 0x1cc)
#define I2S_MASTER_RESET_TRANSMITTER_BLOCK_DMA_REGISTER_DEFAULT                                                         0x0
#define I2S_MASTER_RESET_TRANSMITTER_BLOCK_DMA_REGISTER_RTXDMA                                                          (Bit0)


#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2                                                                       (I2S_MASTER_BASE + 0x1d0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_DEFAULT                                                               0x4A4
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_0                                                     (Bit0+Bit1+Bit2)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_0_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_0_SHIFT                                               (0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_1                                                     (Bit3+Bit4+Bit5)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_1_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_1_SHIFT                                               (3)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_RESERVED_BIT                                                          (Bit6)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_2                                                     (Bit7+Bit8+Bit9)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_2_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_2_SHIFT                                               (7)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_3                                                     (Bit10+Bit11+Bit12)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_3_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_2_I2S_RX_WORDSIZE_3_SHIFT                                               (10)


#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1                                                                       (I2S_MASTER_BASE + 0x1f4)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_DEFAULT                                                               0x26402FA
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_APB_DATA_WIDTH                                                        (Bit0+Bit1)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_APB_DATA_WIDTH_MASK                                                   (Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_APB_DATA_WIDTH_SHIFT                                                  (0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_FIFO_DEPTH_GLOBAL                                                 (Bit2+Bit3)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_FIFO_DEPTH_GLOBAL_MASK                                            (Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_FIFO_DEPTH_GLOBAL_SHIFT                                           (2)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_MODE_EN                                                           (Bit4)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TRANSMITTER_BLOCK                                                 (Bit5)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_RECEIVER_BLOCK                                                    (Bit6)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_RX_CHANNELS                                                       (Bit7+Bit8)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_RX_CHANNELS_MASK                                                  (Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_RX_CHANNELS_SHIFT                                                 (7)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_CHANNELS                                                       (Bit9+Bit10)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_CHANNELS_MASK                                                  (Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_CHANNELS_SHIFT                                                 (9)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_RESERVED_BITS                                                         (Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_RESERVED_BITS_MASK                                                    (Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_RESERVED_BITS_SHIFT                                                   (11)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_0                                                     (Bit16+Bit17+Bit18)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_0_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_0_SHIFT                                               (16)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_1                                                     (Bit19+Bit20+Bit21)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_1_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_1_SHIFT                                               (19)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_2                                                     (Bit22+Bit23+Bit24)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_2_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_2_SHIFT                                               (22)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_3                                                     (Bit25+Bit26+Bit27)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_3_MASK                                                (Bit2+Bit1+Bit0)
#define I2S_MASTER_COMPONENT_PARAMETER_REGISTER_1_I2S_TX_WORDSIZE_3_SHIFT                                               (25)


#define I2S_MASTER_I2S_COMPONENT_VERSION_REGISTER                                                                       (I2S_MASTER_BASE + 0x1f8)
#define I2S_MASTER_I2S_COMPONENT_VERSION_REGISTER_DEFAULT                                                               0x3130392A
#define I2S_MASTER_I2S_COMPONENT_VERSION_REGISTER_I2S_COMP_VERSION                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2S_MASTER_I2S_COMPONENT_VERSION_REGISTER_I2S_COMP_VERSION_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_I2S_COMPONENT_VERSION_REGISTER_I2S_COMP_VERSION_SHIFT                                                (0)


#define I2S_MASTER_I2S_COMPONENT_TYPE_REGISTER                                                                          (I2S_MASTER_BASE + 0x1fc)
#define I2S_MASTER_I2S_COMPONENT_TYPE_REGISTER_DEFAULT                                                                  0x445701A0
#define I2S_MASTER_I2S_COMPONENT_TYPE_REGISTER_I2S_COMP_TYPE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2S_MASTER_I2S_COMPONENT_TYPE_REGISTER_I2S_COMP_TYPE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2S_MASTER_I2S_COMPONENT_TYPE_REGISTER_I2S_COMP_TYPE_SHIFT                                                      (0)


#endif // _I2S_MASTER_DEFINES_H

