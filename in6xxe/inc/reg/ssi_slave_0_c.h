#ifndef _SSI_SLAVE_0_DEFINES_H
#define _SSI_SLAVE_0_DEFINES_H
/* **************************** */
#define SSI_SLAVE_0_CONTROL_REGISTER_0                                                      (SSI_SLAVE_0_BASE + 0x0)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_DEFAULT                                              0x70000
#define SSI_SLAVE_0_CONTROL_REGISTER_0_FRF                                                  (Bit4+Bit5)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_FRF_MASK                                             (Bit1+Bit0)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_FRF_SHIFT                                            (4)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_SCPH                                                 (Bit6)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_SCPOL                                                (Bit7)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_SLV_OE                                               (Bit10)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_SRL                                                  (Bit11)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_CFS                                                  (Bit12+Bit13+Bit14+Bit15)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_CFS_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_CFS_SHIFT                                            (12)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_DFS_32                                               (Bit16+Bit17+Bit18+Bit19+Bit20)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_DFS_32_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_CONTROL_REGISTER_0_DFS_32_SHIFT                                         (16)


#define SSI_SLAVE_0_SSI_ENABLE_REGISTER                                                     (SSI_SLAVE_0_BASE + 0x8)
#define SSI_SLAVE_0_SSI_ENABLE_REGISTER_DEFAULT                                             0x0
#define SSI_SLAVE_0_SSI_ENABLE_REGISTER_SSI_EN                                              (Bit0)


#define SSI_SLAVE_0_MICROWIRE_CONTROL_REGISTER                                              (SSI_SLAVE_0_BASE + 0xc)
#define SSI_SLAVE_0_MICROWIRE_CONTROL_REGISTER_DEFAULT                                      0x0
#define SSI_SLAVE_0_MICROWIRE_CONTROL_REGISTER_MWMOD                                        (Bit0)
#define SSI_SLAVE_0_MICROWIRE_CONTROL_REGISTER_MDD                                          (Bit1)


#define SSI_SLAVE_0_TRANSMIT_FIFO_THRESHOLD_LEVEL                                           (SSI_SLAVE_0_BASE + 0x18)
#define SSI_SLAVE_0_TRANSMIT_FIFO_THRESHOLD_LEVEL_DEFAULT                                   0x0
#define SSI_SLAVE_0_TRANSMIT_FIFO_THRESHOLD_LEVEL_TFT                                       (Bit0+Bit1+Bit2+Bit3)
#define SSI_SLAVE_0_TRANSMIT_FIFO_THRESHOLD_LEVEL_TFT_MASK                                  (Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_TRANSMIT_FIFO_THRESHOLD_LEVEL_TFT_SHIFT                                 (0)


#define SSI_SLAVE_0_RECEIVE_FIFO_THRESHOLD_LEVEL                                            (SSI_SLAVE_0_BASE + 0x1c)
#define SSI_SLAVE_0_RECEIVE_FIFO_THRESHOLD_LEVEL_DEFAULT                                    0x0
#define SSI_SLAVE_0_RECEIVE_FIFO_THRESHOLD_LEVEL_RFT                                        (Bit0+Bit1+Bit2+Bit3)
#define SSI_SLAVE_0_RECEIVE_FIFO_THRESHOLD_LEVEL_RFT_MASK                                   (Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_RECEIVE_FIFO_THRESHOLD_LEVEL_RFT_SHIFT                                  (0)


#define SSI_SLAVE_0_TRANSMIT_FIFO_LEVEL_REGISTER                                            (SSI_SLAVE_0_BASE + 0x20)
#define SSI_SLAVE_0_TRANSMIT_FIFO_LEVEL_REGISTER_DEFAULT                                    0x0
#define SSI_SLAVE_0_TRANSMIT_FIFO_LEVEL_REGISTER_TXTFL                                      (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SSI_SLAVE_0_TRANSMIT_FIFO_LEVEL_REGISTER_TXTFL_MASK                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_TRANSMIT_FIFO_LEVEL_REGISTER_TXTFL_SHIFT                                (0)


#define SSI_SLAVE_0_RECEIVE_FIFO_LEVEL_REGISTER                                             (SSI_SLAVE_0_BASE + 0x24)
#define SSI_SLAVE_0_RECEIVE_FIFO_LEVEL_REGISTER_DEFAULT                                     0x0
#define SSI_SLAVE_0_RECEIVE_FIFO_LEVEL_REGISTER_RXTFL                                       (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SSI_SLAVE_0_RECEIVE_FIFO_LEVEL_REGISTER_RXTFL_MASK                                  (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_RECEIVE_FIFO_LEVEL_REGISTER_RXTFL_SHIFT                                 (0)


#define SSI_SLAVE_0_STATUS_REGISTER                                                         (SSI_SLAVE_0_BASE + 0x28)
#define SSI_SLAVE_0_STATUS_REGISTER_DEFAULT                                                 0x6
#define SSI_SLAVE_0_STATUS_REGISTER_BUSY                                                    (Bit0)
#define SSI_SLAVE_0_STATUS_REGISTER_TFNF                                                    (Bit1)
#define SSI_SLAVE_0_STATUS_REGISTER_TFE                                                     (Bit2)
#define SSI_SLAVE_0_STATUS_REGISTER_RFNE                                                    (Bit3)
#define SSI_SLAVE_0_STATUS_REGISTER_RFF                                                     (Bit4)
#define SSI_SLAVE_0_STATUS_REGISTER_TXE                                                     (Bit5)


#define SSI_SLAVE_0_INTERRUPT_MASK_REGISTER                                                 (SSI_SLAVE_0_BASE + 0x2c)
#define SSI_SLAVE_0_INTERRUPT_MASK_REGISTER_DEFAULT                                         0x1F
#define SSI_SLAVE_0_INTERRUPT_MASK_REGISTER_TXEIM                                           (Bit0)
#define SSI_SLAVE_0_INTERRUPT_MASK_REGISTER_TXOIM                                           (Bit1)
#define SSI_SLAVE_0_INTERRUPT_MASK_REGISTER_RXUIM                                           (Bit2)
#define SSI_SLAVE_0_INTERRUPT_MASK_REGISTER_RXOIM                                           (Bit3)
#define SSI_SLAVE_0_INTERRUPT_MASK_REGISTER_RXFIM                                           (Bit4)


#define SSI_SLAVE_0_INTERRUPT_STATUS_REGISTER                                               (SSI_SLAVE_0_BASE + 0x30)
#define SSI_SLAVE_0_INTERRUPT_STATUS_REGISTER_DEFAULT                                       0x0
#define SSI_SLAVE_0_INTERRUPT_STATUS_REGISTER_TXEIS                                         (Bit0)
#define SSI_SLAVE_0_INTERRUPT_STATUS_REGISTER_TXOIS                                         (Bit1)
#define SSI_SLAVE_0_INTERRUPT_STATUS_REGISTER_RXUIS                                         (Bit2)
#define SSI_SLAVE_0_INTERRUPT_STATUS_REGISTER_RXOIS                                         (Bit3)
#define SSI_SLAVE_0_INTERRUPT_STATUS_REGISTER_RXFIS                                         (Bit4)


#define SSI_SLAVE_0_RAW_INTERRUPT_STATUS_REGISTER                                           (SSI_SLAVE_0_BASE + 0x34)
#define SSI_SLAVE_0_RAW_INTERRUPT_STATUS_REGISTER_DEFAULT                                   0x0
#define SSI_SLAVE_0_RAW_INTERRUPT_STATUS_REGISTER_TXEIS                                     (Bit0)
#define SSI_SLAVE_0_RAW_INTERRUPT_STATUS_REGISTER_TXOIR                                     (Bit1)
#define SSI_SLAVE_0_RAW_INTERRUPT_STATUS_REGISTER_RXUIR                                     (Bit2)
#define SSI_SLAVE_0_RAW_INTERRUPT_STATUS_REGISTER_RXOIR                                     (Bit3)
#define SSI_SLAVE_0_RAW_INTERRUPT_STATUS_REGISTER_RXFIR                                     (Bit4)


#define SSI_SLAVE_0_TRANSMIT_FIFO_OVERFLOW_INTERRUPT_CLEAR_REGISTER                         (SSI_SLAVE_0_BASE + 0x38)
#define SSI_SLAVE_0_TRANSMIT_FIFO_OVERFLOW_INTERRUPT_CLEAR_REGISTER_DEFAULT                 0x0
#define SSI_SLAVE_0_TRANSMIT_FIFO_OVERFLOW_INTERRUPT_CLEAR_REGISTER_TXOICR                  (Bit0)


#define SSI_SLAVE_0_RECEIVE_FIFO_OVERFLOW_INTERRUPT_CLEAR_REGISTER                          (SSI_SLAVE_0_BASE + 0x3c)
#define SSI_SLAVE_0_RECEIVE_FIFO_OVERFLOW_INTERRUPT_CLEAR_REGISTER_DEFAULT                  0x0
#define SSI_SLAVE_0_RECEIVE_FIFO_OVERFLOW_INTERRUPT_CLEAR_REGISTER_RXOICR                   (Bit0)


#define SSI_SLAVE_0_RECEIVE_FIFO_UNDERFLOW_INTERRUPT_CLEAR_REGISTER                         (SSI_SLAVE_0_BASE + 0x40)
#define SSI_SLAVE_0_RECEIVE_FIFO_UNDERFLOW_INTERRUPT_CLEAR_REGISTER_DEFAULT                 0x0
#define SSI_SLAVE_0_RECEIVE_FIFO_UNDERFLOW_INTERRUPT_CLEAR_REGISTER_RXUICR                  (Bit0)


#define SSI_SLAVE_0_INTERRUPT_CLEAR_REGISTER                                                (SSI_SLAVE_0_BASE + 0x48)
#define SSI_SLAVE_0_INTERRUPT_CLEAR_REGISTER_DEFAULT                                        0x0
#define SSI_SLAVE_0_INTERRUPT_CLEAR_REGISTER_ICR                                            (Bit0)


#define SSI_SLAVE_0_DMA_CONTROL_REGISTER                                                    (SSI_SLAVE_0_BASE + 0x4c)
#define SSI_SLAVE_0_DMA_CONTROL_REGISTER_DEFAULT                                            0x0
#define SSI_SLAVE_0_DMA_CONTROL_REGISTER_RDMAE                                              (Bit0)
#define SSI_SLAVE_0_DMA_CONTROL_REGISTER_TDMAE                                              (Bit1)


#define SSI_SLAVE_0_DMA_TRANSMIT_DATA_LEVEL                                                 (SSI_SLAVE_0_BASE + 0x50)
#define SSI_SLAVE_0_DMA_TRANSMIT_DATA_LEVEL_DEFAULT                                         0x0
#define SSI_SLAVE_0_DMA_TRANSMIT_DATA_LEVEL_DMATDL                                          (Bit0+Bit1+Bit2+Bit3)
#define SSI_SLAVE_0_DMA_TRANSMIT_DATA_LEVEL_DMATDL_MASK                                     (Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_DMA_TRANSMIT_DATA_LEVEL_DMATDL_SHIFT                                    (0)


#define SSI_SLAVE_0_DMA_RECEIVE_DATA_LEVEL                                                  (SSI_SLAVE_0_BASE + 0x54)
#define SSI_SLAVE_0_DMA_RECEIVE_DATA_LEVEL_DEFAULT                                          0x0
#define SSI_SLAVE_0_DMA_RECEIVE_DATA_LEVEL_DMARDL                                           (Bit0+Bit1+Bit2+Bit3)
#define SSI_SLAVE_0_DMA_RECEIVE_DATA_LEVEL_DMARDL_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_DMA_RECEIVE_DATA_LEVEL_DMARDL_SHIFT                                     (0)


#define SSI_SLAVE_0_IDENTIFICATION_REGISTER                                                 (SSI_SLAVE_0_BASE + 0x58)
#define SSI_SLAVE_0_IDENTIFICATION_REGISTER_DEFAULT                                         0xFFFFFFF3
#define SSI_SLAVE_0_IDENTIFICATION_REGISTER_IDCODE                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SSI_SLAVE_0_IDENTIFICATION_REGISTER_IDCODE_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_IDENTIFICATION_REGISTER_IDCODE_SHIFT                                    (0)


#define SSI_SLAVE_0_COREKIT_VERSION_ID_REGISTER                                             (SSI_SLAVE_0_BASE + 0x5c)
#define SSI_SLAVE_0_COREKIT_VERSION_ID_REGISTER_DEFAULT                                     0x3430302A
#define SSI_SLAVE_0_COREKIT_VERSION_ID_REGISTER_SSI_COMP_VERSION                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SSI_SLAVE_0_COREKIT_VERSION_ID_REGISTER_SSI_COMP_VERSION_MASK                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_COREKIT_VERSION_ID_REGISTER_SSI_COMP_VERSION_SHIFT                      (0)


#define SSI_SLAVE_0_DATA_REGISTER                                                           (SSI_SLAVE_0_BASE + 0xec)
#define SSI_SLAVE_0_DATA_REGISTER_DEFAULT                                                   0x0
#define SSI_SLAVE_0_DATA_REGISTER_DR                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SSI_SLAVE_0_DATA_REGISTER_DR_MASK                                                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SSI_SLAVE_0_DATA_REGISTER_DR_SHIFT                                                  (0)


#endif // _SSI_SLAVE_0_DEFINES_H

