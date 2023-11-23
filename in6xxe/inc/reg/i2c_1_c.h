#ifndef _I2C_1_DEFINES_H
#define _I2C_1_DEFINES_H
/* **************************** */
#define I2C_1_I2C_CONTROL_REGISTER                                                                          (I2C_1_BASE + 0x0)
#define I2C_1_I2C_CONTROL_REGISTER_DEFAULT                                                                  0x45
#define I2C_1_I2C_CONTROL_REGISTER_MASTER_MODE                                                              (Bit0)
#define I2C_1_I2C_CONTROL_REGISTER_SPEED                                                                    (Bit1+Bit2)
#define I2C_1_I2C_CONTROL_REGISTER_SPEED_MASK                                                               (Bit1+Bit0)
#define I2C_1_I2C_CONTROL_REGISTER_SPEED_SHIFT                                                              (1)
#define I2C_1_I2C_CONTROL_REGISTER_IC_10BITADDR_SLAVE                                                       (Bit3)
#define I2C_1_I2C_CONTROL_REGISTER_IC_10BITADDR_MASTER                                                      (Bit4)
#define I2C_1_I2C_CONTROL_REGISTER_IC_RESTART_EN                                                            (Bit5)
#define I2C_1_I2C_CONTROL_REGISTER_IC_SLAVE_DISABLE                                                         (Bit6)
#define I2C_1_I2C_CONTROL_REGISTER_STOP_DET_IFADDRESSED                                                     (Bit7)
#define I2C_1_I2C_CONTROL_REGISTER_TX_EMPTY_CTRL                                                            (Bit8)
#define I2C_1_I2C_CONTROL_REGISTER_RX_FIFO_FULL_HLD_CTRL                                                    (Bit9)
#define I2C_1_I2C_CONTROL_REGISTER_STOP_DET_IF_MASTER_ACTIVE                                                (Bit10)
#define I2C_1_I2C_CONTROL_REGISTER_BUS_CLEAR_FEATURE_CTRL                                                   (Bit11)
#define I2C_1_I2C_CONTROL_REGISTER_OPTIONAL_SAR_CTRL                                                        (Bit16)
#define I2C_1_I2C_CONTROL_REGISTER_SMBUS_SLAVE_QUICK_CMD_EN                                                 (Bit17)
#define I2C_1_I2C_CONTROL_REGISTER_SMBUS_ARP_EN                                                             (Bit18)
#define I2C_1_I2C_CONTROL_REGISTER_SMBUS_PERSISTANT_SLV_ADDR_                                               (Bit19)


#define I2C_1_I2C_TARGET_ADDRESS_REGISTER                                                                   (I2C_1_BASE + 0x4)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_DEFAULT                                                           0x0
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_IC_TAR                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_IC_TAR_MASK                                                       (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_IC_TAR_SHIFT                                                      (0)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_GC_OR_START                                                       (Bit10)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_SPECIAL                                                           (Bit11)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_IC_10BITADDR_MASTER                                               (Bit12)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_DEVICE_ID                                                         (Bit13)
#define I2C_1_I2C_TARGET_ADDRESS_REGISTER_SMBUS_QUICK_CMD                                                   (Bit16)


#define I2C_1_I2C_SLAVE_ADDRESS_REGISTER                                                                    (I2C_1_BASE + 0x8)
#define I2C_1_I2C_SLAVE_ADDRESS_REGISTER_DEFAULT                                                            0x0
#define I2C_1_I2C_SLAVE_ADDRESS_REGISTER_IC_SAR                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define I2C_1_I2C_SLAVE_ADDRESS_REGISTER_IC_SAR_MASK                                                        (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SLAVE_ADDRESS_REGISTER_IC_SAR_SHIFT                                                       (0)


#define I2C_1_I2C_HIGH_SPEED_MASTER_MODE_CODE_ADDRESS_REGISTER                                              (I2C_1_BASE + 0xc)
#define I2C_1_I2C_HIGH_SPEED_MASTER_MODE_CODE_ADDRESS_REGISTER_DEFAULT                                      0x0
#define I2C_1_I2C_HIGH_SPEED_MASTER_MODE_CODE_ADDRESS_REGISTER_IC_HS_MAR                                    (Bit0+Bit1+Bit2)
#define I2C_1_I2C_HIGH_SPEED_MASTER_MODE_CODE_ADDRESS_REGISTER_IC_HS_MAR_MASK                               (Bit2+Bit1+Bit0)
#define I2C_1_I2C_HIGH_SPEED_MASTER_MODE_CODE_ADDRESS_REGISTER_IC_HS_MAR_SHIFT                              (0)


#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER                                                     (I2C_1_BASE + 0x10)
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_DEFAULT                                             0x0
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_DAT                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_DAT_MASK                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_DAT_SHIFT                                           (0)
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_CMD                                                 (Bit8)
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_STOP                                                (Bit9)
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_RESTART                                             (Bit10)
#define I2C_1_I2C_RXTX_DATA_BUFFER_AND_COMMAND_REGISTER_FIRST_DATA_BYTE                                     (Bit11)


#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER                                              (I2C_1_BASE + 0x14)
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_DEFAULT                                      0x0
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_SS_SCL_HCNT                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_SS_SCL_HCNT_MASK                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_SS_SCL_HCNT_SHIFT                         (0)


#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER                                               (I2C_1_BASE + 0x18)
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_DEFAULT                                       0x0
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_SS_SCL_LCNT                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_SS_SCL_LCNT_MASK                           (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_STANDARD_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_SS_SCL_LCNT_SHIFT                          (0)


#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER                                 (I2C_1_BASE + 0x1c)
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_DEFAULT                         0x13
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_FS_SCL_HCNT                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_FS_SCL_HCNT_MASK             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_FS_SCL_HCNT_SHIFT            (0)


#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_LOW_COUNT_REGISTER                                  (I2C_1_BASE + 0x20)
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_DEFAULT                          0x29
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_FS_SCL_LCNT                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_FS_SCL_LCNT_MASK              (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_FAST_MODE_OR_FAST_MODE_PLUS_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_FS_SCL_LCNT_SHIFT             (0)


#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER                                                  (I2C_1_BASE + 0x24)
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_DEFAULT                                          0x6
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_HS_SCL_HCNT                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_HS_SCL_HCNT_MASK                              (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_HIGH_COUNT_REGISTER_IC_HS_SCL_HCNT_SHIFT                             (0)


#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER                                                   (I2C_1_BASE + 0x28)
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_DEFAULT                                           0x8
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_HS_SCL_LCNT                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_HS_SCL_LCNT_MASK                               (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_HIGH_SPEED_I2C_CLOCK_SCL_LOW_COUNT_REGISTER_IC_HS_SCL_LCNT_SHIFT                              (0)


#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER                                                                 (I2C_1_BASE + 0x2c)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_DEFAULT                                                         0x0
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_RX_UNDER                                                      (Bit0)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_RX_OVER                                                       (Bit1)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_RX_FULL                                                       (Bit2)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_TX_OVER                                                       (Bit3)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_TX_EMPTY                                                      (Bit4)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_RD_REQ                                                        (Bit5)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_TX_ABRT                                                       (Bit6)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_RX_DONE                                                       (Bit7)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_ACTIVITY                                                      (Bit8)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_STOP_DET                                                      (Bit9)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_START_DET                                                     (Bit10)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_GEN_CALL                                                      (Bit11)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_RESTART_DET                                                   (Bit12)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_MST_ON_HOLD                                                   (Bit13)
#define I2C_1_I2C_INTERRUPT_STATUS_REGISTER_R_SCL_STUCK_AT_LOW                                              (Bit14)


#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR                                                              (I2C_1_BASE + 0x30)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_DEFAULT                                                      0x7FFF
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_RX_UNDER                                                   (Bit0)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_RX_OVER                                                    (Bit1)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_RX_FULL                                                    (Bit2)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_TX_OVER                                                    (Bit3)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_TX_EMPTY                                                   (Bit4)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_RD_REQ                                                     (Bit5)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_TX_ABRT                                                    (Bit6)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_RX_DONE                                                    (Bit7)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_ACTIVITY                                                   (Bit8)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_STOP_DET                                                   (Bit9)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_START_DET                                                  (Bit10)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_GEN_CALL                                                   (Bit11)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_RESTART_DET                                                (Bit12)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_MST_ON_HOLD                                                (Bit13)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_INTR_M_SCL_STUCK_AT_LOW                                           (Bit14)


#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER                                                             (I2C_1_BASE + 0x34)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_DEFAULT                                                     0x0
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_RX_UNDER                                                    (Bit0)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_RX_OVER                                                     (Bit1)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_RX_FULL                                                     (Bit2)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_TX_OVER                                                     (Bit3)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_TX_EMPTY                                                    (Bit4)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_RD_REQ                                                      (Bit5)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_TX_ABRT                                                     (Bit6)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_RX_DONE                                                     (Bit7)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_ACTIVITY                                                    (Bit8)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_STOP_DET                                                    (Bit9)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_START_DET                                                   (Bit10)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_GEN_CALL                                                    (Bit11)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_RESTART_DET                                                 (Bit12)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_MST_ON_HOLD                                                 (Bit13)
#define I2C_1_I2C_RAW_INTERRUPT_STATUS_REGISTER_SCL_STUCK_AT_LOW                                            (Bit14)


#define I2C_1_I2C_RECEIVE_FIFO_THRESHOLD_REGISTER                                                           (I2C_1_BASE + 0x38)
#define I2C_1_I2C_RECEIVE_FIFO_THRESHOLD_REGISTER_DEFAULT                                                   0x0
#define I2C_1_I2C_RECEIVE_FIFO_THRESHOLD_REGISTER_RX_TL                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define I2C_1_I2C_RECEIVE_FIFO_THRESHOLD_REGISTER_RX_TL_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_RECEIVE_FIFO_THRESHOLD_REGISTER_RX_TL_SHIFT                                               (0)


#define I2C_1_I2C_TRANSMIT_FIFO_THRESHOLD_REGISTER                                                          (I2C_1_BASE + 0x3c)
#define I2C_1_I2C_TRANSMIT_FIFO_THRESHOLD_REGISTER_DEFAULT                                                  0x0
#define I2C_1_I2C_TRANSMIT_FIFO_THRESHOLD_REGISTER_TX_TL                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define I2C_1_I2C_TRANSMIT_FIFO_THRESHOLD_REGISTER_TX_TL_MASK                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_TRANSMIT_FIFO_THRESHOLD_REGISTER_TX_TL_SHIFT                                              (0)


#define I2C_1_CLEAR_COMBINED_AND_INDIVIDUAL_INTERRUPT_REGISTER                                              (I2C_1_BASE + 0x40)
#define I2C_1_CLEAR_COMBINED_AND_INDIVIDUAL_INTERRUPT_REGISTER_DEFAULT                                      0x0
#define I2C_1_CLEAR_COMBINED_AND_INDIVIDUAL_INTERRUPT_REGISTER_CLR_INTR                                     (Bit0)


#define I2C_1_CLEAR_RX_UNDER_INTERRUPT_REGISTER                                                             (I2C_1_BASE + 0x44)
#define I2C_1_CLEAR_RX_UNDER_INTERRUPT_REGISTER_DEFAULT                                                     0x0
#define I2C_1_CLEAR_RX_UNDER_INTERRUPT_REGISTER_CLR_RX_UNDER                                                (Bit0)


#define I2C_1_CLEAR_RX_OVER_INTERRUPT_REGISTER                                                              (I2C_1_BASE + 0x48)
#define I2C_1_CLEAR_RX_OVER_INTERRUPT_REGISTER_DEFAULT                                                      0x0
#define I2C_1_CLEAR_RX_OVER_INTERRUPT_REGISTER_CLR_RX_OVER                                                  (Bit0)


#define I2C_1_CLEAR_TX_OVER_INTERRUPT_REGISTER                                                              (I2C_1_BASE + 0x4c)
#define I2C_1_CLEAR_TX_OVER_INTERRUPT_REGISTER_DEFAULT                                                      0x0
#define I2C_1_CLEAR_TX_OVER_INTERRUPT_REGISTER_CLR_TX_OVER                                                  (Bit0)


#define I2C_1_CLEAR_RD_REQ_INTERRUPT_REGISTER                                                               (I2C_1_BASE + 0x50)
#define I2C_1_CLEAR_RD_REQ_INTERRUPT_REGISTER_DEFAULT                                                       0x0
#define I2C_1_CLEAR_RD_REQ_INTERRUPT_REGISTER_CLR_RD_REQ                                                    (Bit0)


#define I2C_1_CLEAR_TX_ABRT_INTERRUPT_REGISTER                                                              (I2C_1_BASE + 0x54)
#define I2C_1_CLEAR_TX_ABRT_INTERRUPT_REGISTER_DEFAULT                                                      0x0
#define I2C_1_CLEAR_TX_ABRT_INTERRUPT_REGISTER_CLR_RD_REQ                                                   (Bit0)


#define I2C_1_CLEAR_RX_DONE_INTERRUPT_REGISTER                                                              (I2C_1_BASE + 0x58)
#define I2C_1_CLEAR_RX_DONE_INTERRUPT_REGISTER_DEFAULT                                                      0x0
#define I2C_1_CLEAR_RX_DONE_INTERRUPT_REGISTER_CLR_RX_DONE                                                  (Bit0)


#define I2C_1_CLEAR_ACTIVITY_INTERRUPT_REGISTER                                                             (I2C_1_BASE + 0x5c)
#define I2C_1_CLEAR_ACTIVITY_INTERRUPT_REGISTER_DEFAULT                                                     0x0
#define I2C_1_CLEAR_ACTIVITY_INTERRUPT_REGISTER_CLR_ACTIVITY                                                (Bit0)


#define I2C_1_CLEAR_STOP_DET_INTERRUPT_REGISTER                                                             (I2C_1_BASE + 0x60)
#define I2C_1_CLEAR_STOP_DET_INTERRUPT_REGISTER_DEFAULT                                                     0x0
#define I2C_1_CLEAR_STOP_DET_INTERRUPT_REGISTER_CLR_STOP_DET                                                (Bit0)


#define I2C_1_CLEAR_START_DET_INTERRUPT_REGISTER                                                            (I2C_1_BASE + 0x64)
#define I2C_1_CLEAR_START_DET_INTERRUPT_REGISTER_DEFAULT                                                    0x0
#define I2C_1_CLEAR_START_DET_INTERRUPT_REGISTER_CLR_START_DET                                              (Bit0)


#define I2C_1_CLEAR_GEN_CALL_INTERRUPT_REGISTER                                                             (I2C_1_BASE + 0x68)
#define I2C_1_CLEAR_GEN_CALL_INTERRUPT_REGISTER_DEFAULT                                                     0x0
#define I2C_1_CLEAR_GEN_CALL_INTERRUPT_REGISTER_CLR_GEN_CALL                                                (Bit0)


#define I2C_1_I2C_ENABLE_REGISTER                                                                           (I2C_1_BASE + 0x6c)
#define I2C_1_I2C_ENABLE_REGISTER_DEFAULT                                                                   0x0
#define I2C_1_I2C_ENABLE_REGISTER_ENABLE                                                                    (Bit0)
#define I2C_1_I2C_ENABLE_REGISTER_ABORT                                                                     (Bit1)
#define I2C_1_I2C_ENABLE_REGISTER_TX_CMD_BLOCK                                                              (Bit2)
#define I2C_1_I2C_ENABLE_REGISTER_SDA_STUCK_RECO                                                            (Bit3)
#define I2C_1_I2C_ENABLE_REGISTER_SMBUS_CLK_RESE                                                            (Bit16)
#define I2C_1_I2C_ENABLE_REGISTER_SMBUS_SUSPEND_                                                            (Bit17)
#define I2C_1_I2C_ENABLE_REGISTER_SMBUS_ALERT_EN                                                            (Bit18)


#define I2C_1_I2C_STATUS_REGISTER                                                                           (I2C_1_BASE + 0x70)
#define I2C_1_I2C_STATUS_REGISTER_DEFAULT                                                                   0x6
#define I2C_1_I2C_STATUS_REGISTER_ACTIVITY                                                                  (Bit0)
#define I2C_1_I2C_STATUS_REGISTER_TFNF                                                                      (Bit1)
#define I2C_1_I2C_STATUS_REGISTER_TFE                                                                       (Bit2)
#define I2C_1_I2C_STATUS_REGISTER_RFNE                                                                      (Bit3)
#define I2C_1_I2C_STATUS_REGISTER_RFF                                                                       (Bit4)
#define I2C_1_I2C_STATUS_REGISTER_MST_ACTIVITY                                                              (Bit5)
#define I2C_1_I2C_STATUS_REGISTER_SLV_ACTIVITY                                                              (Bit6)
#define I2C_1_I2C_STATUS_REGISTER_MST_HOLD_TX_FIFO_EMPTY                                                    (Bit7)
#define I2C_1_I2C_STATUS_REGISTER_MST_HOLD_RX_FIFO_FULL                                                     (Bit8)
#define I2C_1_I2C_STATUS_REGISTER_SLV_HOLD_TX_FIFO_EMPTY                                                    (Bit9)
#define I2C_1_I2C_STATUS_REGISTER_SLV_HOLD_RX_FIFO_FULL                                                     (Bit10)
#define I2C_1_I2C_STATUS_REGISTER_SDA_STUCK_NOT_RECOVERED                                                   (Bit11)
#define I2C_1_I2C_STATUS_REGISTER_RESERVED                                                                  (Bit12+Bit13+Bit14+Bit15)
#define I2C_1_I2C_STATUS_REGISTER_RESERVED_MASK                                                             (Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_STATUS_REGISTER_RESERVED_SHIFT                                                            (12)
#define I2C_1_I2C_STATUS_REGISTER_SMBUS_QUICK_CMD_BIT                                                       (Bit16)
#define I2C_1_I2C_STATUS_REGISTER_SMBUS_SLAVE_ADDR_VALID                                                    (Bit17)
#define I2C_1_I2C_STATUS_REGISTER_SMBUS_SLAVE_ADDR_RESOLVED                                                 (Bit18)
#define I2C_1_I2C_STATUS_REGISTER_SMBUS_SUSPEND_STATUS                                                      (Bit19)
#define I2C_1_I2C_STATUS_REGISTER_SMBUS_ALERT_STATUS                                                        (Bit20)


#define I2C_1_I2C_TRANSMIT_FIFO_LEVEL_REGISTER                                                              (I2C_1_BASE + 0x74)
#define I2C_1_I2C_TRANSMIT_FIFO_LEVEL_REGISTER_DEFAULT                                                      0x0
#define I2C_1_I2C_TRANSMIT_FIFO_LEVEL_REGISTER_TXFLR                                                        (Bit0+Bit1+Bit2+Bit3)
#define I2C_1_I2C_TRANSMIT_FIFO_LEVEL_REGISTER_TXFLR_MASK                                                   (Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_TRANSMIT_FIFO_LEVEL_REGISTER_TXFLR_SHIFT                                                  (0)


#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER                                                               (I2C_1_BASE + 0x78)
#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER_DEFAULT                                                       0x0
#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER_RXFLR                                                         (Bit0+Bit1+Bit2+Bit3)
#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER_RXFLR_MASK                                                    (Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER_RXFLR_SHIFT                                                   (0)
#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER_RESERVED                                                      (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER_RESERVED_MASK                                                 (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_RECEIVE_FIFO_LEVEL_REGISTER_RESERVED_SHIFT                                                (4)


#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER                                                             (I2C_1_BASE + 0x7c)
#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER_DEFAULT                                                     0x10001
#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER_IC_SDA_TX_HOLD                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER_IC_SDA_TX_HOLD_MASK                                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER_IC_SDA_TX_HOLD_SHIFT                                        (0)
#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER_IC_SDA_RX_HOLD                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER_IC_SDA_RX_HOLD_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SDA_HOLD_TIME_LENGTH_REGISTER_IC_SDA_RX_HOLD_SHIFT                                        (16)


#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER                                                            (I2C_1_BASE + 0x80)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_DEFAULT                                                    0x0
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_7B_ADDR_NOACK                                         (Bit0)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_10ADDR1_NOACK                                         (Bit1)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_10ADDR2_NOACK                                         (Bit2)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_TXDATA_NOACK                                          (Bit3)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_GCALL_NOACK                                           (Bit4)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_GCALL_READ                                            (Bit5)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_HS_ACKDET                                             (Bit6)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_SBYTE_ACKDET                                          (Bit7)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_HS_NORSTRT                                            (Bit8)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_SBYTE_NORSTRT                                         (Bit9)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_10B_RD_NORSTRT                                        (Bit10)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_MASTER_DIS                                            (Bit11)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ARB_LOST                                                   (Bit12)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_SLVFLUSH_TXFIFO                                       (Bit13)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_SLV_ARBLOST                                           (Bit14)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_SLVRD_INTX                                            (Bit15)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_USER_ABRT                                             (Bit16)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_SDA_STUCK_AT_LOW                                      (Bit17)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_DEVICE_NOACK                                          (Bit18)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_DEVICE_SLVADDR_NOACK                                  (Bit19)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_ABRT_DEVICE_WRITE                                          (Bit20)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_RESERVED                                                   (Bit21+Bit22)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_RESERVED_MASK                                              (Bit1+Bit0)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_RESERVED_SHIFT                                             (21)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_TX_FLUSH_CNT                                               (Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_TX_FLUSH_CNT_MASK                                          (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_TRANSMIT_ABORT_SOURCE_REGISTER_TX_FLUSH_CNT_SHIFT                                         (23)


#define I2C_1_GENERATE_SLAVE_DATA_NACK_REGISTER                                                             (I2C_1_BASE + 0x84)
#define I2C_1_GENERATE_SLAVE_DATA_NACK_REGISTER_DEFAULT                                                     0x0
#define I2C_1_GENERATE_SLAVE_DATA_NACK_REGISTER_NACK                                                        (Bit0)


#define I2C_1_DMA_CONTROL_REGISTER                                                                          (I2C_1_BASE + 0x88)
#define I2C_1_DMA_CONTROL_REGISTER_DEFAULT                                                                  0x0
#define I2C_1_DMA_CONTROL_REGISTER_RDMAE                                                                    (Bit0)
#define I2C_1_DMA_CONTROL_REGISTER_TDMAE                                                                    (Bit1)
#define I2C_1_DMA_CONTROL_REGISTER_RESERVED                                                                 (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_DMA_CONTROL_REGISTER_RESERVED_MASK                                                            (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_DMA_CONTROL_REGISTER_RESERVED_SHIFT                                                           (2)


#define I2C_1_DMA_TRANSMIT_DATA_LEVEL_REGISTER                                                              (I2C_1_BASE + 0x8c)
#define I2C_1_DMA_TRANSMIT_DATA_LEVEL_REGISTER_DEFAULT                                                      0x0
#define I2C_1_DMA_TRANSMIT_DATA_LEVEL_REGISTER_DMATDL                                                       (Bit0+Bit1+Bit2)
#define I2C_1_DMA_TRANSMIT_DATA_LEVEL_REGISTER_DMATDL_MASK                                                  (Bit2+Bit1+Bit0)
#define I2C_1_DMA_TRANSMIT_DATA_LEVEL_REGISTER_DMATDL_SHIFT                                                 (0)


#define I2C_1_I2C_RECEIVE_DATA_LEVEL_REGISTER                                                               (I2C_1_BASE + 0x90)
#define I2C_1_I2C_RECEIVE_DATA_LEVEL_REGISTER_DEFAULT                                                       0x0
#define I2C_1_I2C_RECEIVE_DATA_LEVEL_REGISTER_DMARDL                                                        (Bit0+Bit1+Bit2)
#define I2C_1_I2C_RECEIVE_DATA_LEVEL_REGISTER_DMARDL_MASK                                                   (Bit2+Bit1+Bit0)
#define I2C_1_I2C_RECEIVE_DATA_LEVEL_REGISTER_DMARDL_SHIFT                                                  (0)


#define I2C_1_I2C_SDA_SETUP_REGISTER                                                                        (I2C_1_BASE + 0x94)
#define I2C_1_I2C_SDA_SETUP_REGISTER_DEFAULT                                                                0x0
#define I2C_1_I2C_SDA_SETUP_REGISTER_SDA_SETUP                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define I2C_1_I2C_SDA_SETUP_REGISTER_SDA_SETUP_MASK                                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SDA_SETUP_REGISTER_SDA_SETUP_SHIFT                                                        (0)


#define I2C_1_I2C_ACK_GENERAL_CALL_REGISTER                                                                 (I2C_1_BASE + 0x98)
#define I2C_1_I2C_ACK_GENERAL_CALL_REGISTER_DEFAULT                                                         0x0
#define I2C_1_I2C_ACK_GENERAL_CALL_REGISTER_ACK_GEN_CALL                                                    (Bit0)


#define I2C_1_I2C_ENABLE_STATUS_REGISTER                                                                    (I2C_1_BASE + 0x9c)
#define I2C_1_I2C_ENABLE_STATUS_REGISTER_DEFAULT                                                            0x0
#define I2C_1_I2C_ENABLE_STATUS_REGISTER_IC_EN                                                              (Bit0)
#define I2C_1_I2C_ENABLE_STATUS_REGISTER_SLV_DISABLED_WHILE_BUSY                                            (Bit1)
#define I2C_1_I2C_ENABLE_STATUS_REGISTER_SLV_RX_DATA_LOST                                                   (Bit2)


#define I2C_1_I2C_SS_AND_FS_SPIKE_SUPPRESSION_LIMIT_REGISTER                                                (I2C_1_BASE + 0xa0)
#define I2C_1_I2C_SS_AND_FS_SPIKE_SUPPRESSION_LIMIT_REGISTER_DEFAULT                                        0x200
#define I2C_1_I2C_SS_AND_FS_SPIKE_SUPPRESSION_LIMIT_REGISTER_IC_FS_SPKLEN                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_SS_AND_FS_SPIKE_SUPPRESSION_LIMIT_REGISTER_IC_FS_SPKLEN_MASK                              (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SS_AND_FS_SPIKE_SUPPRESSION_LIMIT_REGISTER_IC_FS_SPKLEN_SHIFT                             (8)


#define I2C_1_I2C_HS_SPIKE_SUPPRESSION_LIMIT_REGISTER                                                       (I2C_1_BASE + 0xa4)
#define I2C_1_I2C_HS_SPIKE_SUPPRESSION_LIMIT_REGISTER_DEFAULT                                               0x100
#define I2C_1_I2C_HS_SPIKE_SUPPRESSION_LIMIT_REGISTER_IC_HS_SPKLEN                                          (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_HS_SPIKE_SUPPRESSION_LIMIT_REGISTER_IC_HS_SPKLEN_MASK                                     (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_HS_SPIKE_SUPPRESSION_LIMIT_REGISTER_IC_HS_SPKLEN_SHIFT                                    (8)


#define I2C_1_CLEAR_RESTART_DET_INTERRUPT_REGISTER                                                          (I2C_1_BASE + 0xa8)
#define I2C_1_CLEAR_RESTART_DET_INTERRUPT_REGISTER_DEFAULT                                                  0x0
#define I2C_1_CLEAR_RESTART_DET_INTERRUPT_REGISTER_CLR_RESTART_DET                                          (Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_CLEAR_RESTART_DET_INTERRUPT_REGISTER_CLR_RESTART_DET_MASK                                     (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_CLEAR_RESTART_DET_INTERRUPT_REGISTER_CLR_RESTART_DET_SHIFT                                    (1)


#define I2C_1_I2C_SCL_STUCK_AT_LOW_TIMEOUT                                                                  (I2C_1_BASE + 0xac)
#define I2C_1_I2C_SCL_STUCK_AT_LOW_TIMEOUT_DEFAULT                                                          0xFFFFFFFF
#define I2C_1_I2C_SCL_STUCK_AT_LOW_TIMEOUT_IC_SCL_STUCK_LOW_TIME                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_SCL_STUCK_AT_LOW_TIMEOUT_IC_SCL_STUCK_LOW_TIME_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SCL_STUCK_AT_LOW_TIMEOUT_IC_SCL_STUCK_LOW_TIME_SHIFT                                      (0)


#define I2C_1_I2C_SDA_STUCK_AT_LOW_TIMEOUT                                                                  (I2C_1_BASE + 0xb0)
#define I2C_1_I2C_SDA_STUCK_AT_LOW_TIMEOUT_DEFAULT                                                          0xFFFFFFFF
#define I2C_1_I2C_SDA_STUCK_AT_LOW_TIMEOUT_IC_SDA_STUCK_LOW_TIME                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_SDA_STUCK_AT_LOW_TIMEOUT_IC_SDA_STUCK_LOW_TIME_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SDA_STUCK_AT_LOW_TIMEOUT_IC_SDA_STUCK_LOW_TIME_SHIFT                                      (0)


#define I2C_1_CLEAR_SCL_STUCK_AT_LOW_DETECT_INTERRUPT_REGISTER                                              (I2C_1_BASE + 0xb4)
#define I2C_1_CLEAR_SCL_STUCK_AT_LOW_DETECT_INTERRUPT_REGISTER_DEFAULT                                      0x0
#define I2C_1_CLEAR_SCL_STUCK_AT_LOW_DETECT_INTERRUPT_REGISTER_CLR_SCL_STUCK                                (Bit0)


#define I2C_1_I2C_DEVICE_ID                                                                                 (I2C_1_BASE + 0xb8)
#define I2C_1_I2C_DEVICE_ID_DEFAULT                                                                         0x0
#define I2C_1_I2C_DEVICE_ID_DEVICE_ID                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define I2C_1_I2C_DEVICE_ID_DEVICE_ID_MASK                                                                  (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_DEVICE_ID_DEVICE_ID_SHIFT                                                                 (0)
#define I2C_1_I2C_DEVICE_ID_RESERVED                                                                        (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_DEVICE_ID_RESERVED_MASK                                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_DEVICE_ID_RESERVED_SHIFT                                                                  (24)


#define I2C_1_SMBUS_SLAVE_CLOCK_EXTEND_TIMEOUT_REGISTER                                                     (I2C_1_BASE + 0xbc)
#define I2C_1_SMBUS_SLAVE_CLOCK_EXTEND_TIMEOUT_REGISTER_DEFAULT                                             0xFFFFFFFF
#define I2C_1_SMBUS_SLAVE_CLOCK_EXTEND_TIMEOUT_REGISTER_SMBUS_CLK_LOW_SEXT_TI                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_SMBUS_SLAVE_CLOCK_EXTEND_TIMEOUT_REGISTER_SMBUS_CLK_LOW_SEXT_TI_MASK                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_SMBUS_SLAVE_CLOCK_EXTEND_TIMEOUT_REGISTER_SMBUS_CLK_LOW_SEXT_TI_SHIFT                         (0)


#define I2C_1_SMBUS_MASTER_EXTEND_CLOCK_TIMEOUT_REGISTER                                                    (I2C_1_BASE + 0xc0)
#define I2C_1_SMBUS_MASTER_EXTEND_CLOCK_TIMEOUT_REGISTER_DEFAULT                                            0xFFFFFFFF
#define I2C_1_SMBUS_MASTER_EXTEND_CLOCK_TIMEOUT_REGISTER_SMBUS_CLK_LOW_MEXT_TIMEOUT                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_SMBUS_MASTER_EXTEND_CLOCK_TIMEOUT_REGISTER_SMBUS_CLK_LOW_MEXT_TIMEOUT_MASK                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_SMBUS_MASTER_EXTEND_CLOCK_TIMEOUT_REGISTER_SMBUS_CLK_LOW_MEXT_TIMEOUT_SHIFT                   (0)


#define I2C_1_SMBUS_THIGH_MAX_BUS_IDLE_COUNT_REGISTER                                                       (I2C_1_BASE + 0xc4)
#define I2C_1_SMBUS_THIGH_MAX_BUS_IDLE_COUNT_REGISTER_DEFAULT                                               0xFFFF
#define I2C_1_SMBUS_THIGH_MAX_BUS_IDLE_COUNT_REGISTER_SMBUS_THIGH_MAX_BUS_IDLE_CNT                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_SMBUS_THIGH_MAX_BUS_IDLE_COUNT_REGISTER_SMBUS_THIGH_MAX_BUS_IDLE_CNT_MASK                     (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_SMBUS_THIGH_MAX_BUS_IDLE_COUNT_REGISTER_SMBUS_THIGH_MAX_BUS_IDLE_CNT_SHIFT                    (0)


#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER                                                           (I2C_1_BASE + 0xc8)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_DEFAULT                                                   0x0
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_SLV_CLOCK_EXTND_TIMEOUT                                 (Bit0)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_MST_CLOCK_EXTND_TIMEOUT                                 (Bit1)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_QUICK_CMD_DET                                           (Bit2)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_HOST_NOTIFY_MST_DET                                     (Bit3)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_ARP_PREPARE_CMD_DET                                     (Bit4)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_ARP_RST_CMD_DET                                         (Bit5)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_ARP_GET_UDID_CMD_DET                                    (Bit6)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_ARP_ASSGN_ADDR_CMD_DET                                  (Bit7)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_SLV_RX_PEC_NACK                                         (Bit8)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_SMBUS_SUSPEND_DET                                       (Bit9)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_R_SMBUS_ALERT_DET                                         (Bit10)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_RESERVED                                                  (Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_RESERVED_MASK                                             (Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_SMBUS_INTERRUPT_STATUS_REGISTER_RESERVED_SHIFT                                            (11)


#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS                                                             (I2C_1_BASE + 0xcc)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_DEFAULT                                                     0x0
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_SLV_CLOCK_EXTND_TIMEOUT                                   (Bit0)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_MST_CLOCK_EXTND_TIMEOUT                                   (Bit1)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_QUICK_CMD_DET                                             (Bit2)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_HOST_NOTIFY_MST_DET                                       (Bit3)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_ARP_PREPARE_CMD_DET                                       (Bit4)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_ARP_RST_CMD_DET                                           (Bit5)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_ARP_GET_UDID_CMD_DET                                      (Bit6)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_ARP_ASSGN_ADDR_CMD                                        (Bit7)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_SLV_RX_PEC_NACK                                           (Bit8)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_SMBUS_SUSPEND_DET                                         (Bit9)
#define I2C_1_I2C_INTERRUPT_MASK_REGISTER_SMBUS_M_SMBUS_ALERT_DET                                           (Bit10)


#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER                                                       (I2C_1_BASE + 0xd0)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_DEFAULT                                               0x0
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_SLV_CLOCK_EXTND_TIMEOUT                               (Bit0)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_MST_CLOCK_EXTND_TIMEOUT                               (Bit1)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_QUICK_CMD_DET                                         (Bit2)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_HOST_NTFY_MST_DET                                     (Bit3)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_ARP_PREPARE_CMD_DE                                    (Bit4)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_ARP_RST_CMD_DET                                       (Bit5)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_ARP_GET_UDID_CMD_DET                                  (Bit6)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_ARP_ASSGN_ADDR_CMD_DET                                (Bit7)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_SLV_RX_PEC_NACK                                       (Bit8)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_SMBUS_SUSPEND_DET                                     (Bit9)
#define I2C_1_I2C_SMBUS_RAW_INTERRUPT_STATUS_REGISTER_SMBUS_ALERT_DET                                       (Bit10)


#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER                                                                (I2C_1_BASE + 0xd4)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_DEFAULT                                                        0x0
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_SLV_CLOCK_EXTND_TIMEOUT                                    (Bit0)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_MST_CLOCK_EXTND_TIMEOUT                                    (Bit1)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_QUICK_CMD_DET                                              (Bit2)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_HOST_NTFY_MST_DET                                          (Bit3)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_ARP_PREPARE_CMD_DE                                         (Bit4)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_ARP_RST_CMD_DET                                            (Bit5)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_ARP_GET_UDID_CMD_DET                                       (Bit6)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_ARP_ASSGN_ADDR_CMD_DET                                     (Bit7)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_SLV_RX_PEC_NACK                                            (Bit8)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_SMBUS_SUSPEND_DET                                          (Bit9)
#define I2C_1_CLEAR_SMBUS_INTERRUPT_REGISTER_CLR_SMBUS_ALERT_DET                                            (Bit10)


#define I2C_1_I2C_OPTIONAL_SLAVE_ADDRESS_REGISTER                                                           (I2C_1_BASE + 0xd8)
#define I2C_1_I2C_OPTIONAL_SLAVE_ADDRESS_REGISTER_DEFAULT                                                   0x0
#define I2C_1_I2C_OPTIONAL_SLAVE_ADDRESS_REGISTER_IC_OPTIONAL_SAR                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define I2C_1_I2C_OPTIONAL_SLAVE_ADDRESS_REGISTER_IC_OPTIONAL_SAR_MASK                                      (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_OPTIONAL_SLAVE_ADDRESS_REGISTER_IC_OPTIONAL_SAR_SHIFT                                     (0)


#define I2C_1_SMBUS_ARP_UDID_LSB_REGISTER                                                                   (I2C_1_BASE + 0xdc)
#define I2C_1_SMBUS_ARP_UDID_LSB_REGISTER_DEFAULT                                                           0xFFFFFFFF
#define I2C_1_SMBUS_ARP_UDID_LSB_REGISTER_IC_SMBUS_ARP_UDID_LSB                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_SMBUS_ARP_UDID_LSB_REGISTER_IC_SMBUS_ARP_UDID_LSB_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_SMBUS_ARP_UDID_LSB_REGISTER_IC_SMBUS_ARP_UDID_LSB_SHIFT                                       (0)


#define I2C_1_COMPONENT_PARAMETER_REGISTER_1                                                                (I2C_1_BASE + 0xf4)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_DEFAULT                                                        0x0
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_APB_DATA_WIDTH                                                 (Bit0+Bit1)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_APB_DATA_WIDTH_MASK                                            (Bit1+Bit0)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_APB_DATA_WIDTH_SHIFT                                           (0)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_MAX_SPEED_MODE                                                 (Bit2+Bit3)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_MAX_SPEED_MODE_MASK                                            (Bit1+Bit0)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_MAX_SPEED_MODE_SHIFT                                           (2)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_HC_COUNT_VALUES                                                (Bit4)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_INTR_IO                                                        (Bit5)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_HAS_DMA                                                        (Bit6)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_ADD_ENCODED_PARAMS                                             (Bit7)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_RX_BUFFER_DEPTH                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_RX_BUFFER_DEPTH_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_RX_BUFFER_DEPTH_SHIFT                                          (8)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_TX_BUFFER_DEPTH                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_TX_BUFFER_DEPTH_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_COMPONENT_PARAMETER_REGISTER_1_TX_BUFFER_DEPTH_SHIFT                                          (16)


#define I2C_1_I2C_COMPONENT_VERSION_REGISTER                                                                (I2C_1_BASE + 0xf8)
#define I2C_1_I2C_COMPONENT_VERSION_REGISTER_DEFAULT                                                        0x0
#define I2C_1_I2C_COMPONENT_VERSION_REGISTER_IC_COMP_VERSION                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_COMPONENT_VERSION_REGISTER_IC_COMP_VERSION_MASK                                           (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_COMPONENT_VERSION_REGISTER_IC_COMP_VERSION_SHIFT                                          (0)


#define I2C_1_I2C_COMPONENT_TYPE_REGISTER                                                                   (I2C_1_BASE + 0xfc)
#define I2C_1_I2C_COMPONENT_TYPE_REGISTER_DEFAULT                                                           0x0
#define I2C_1_I2C_COMPONENT_TYPE_REGISTER_IC_COMP_TYPE                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define I2C_1_I2C_COMPONENT_TYPE_REGISTER_IC_COMP_TYPE_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define I2C_1_I2C_COMPONENT_TYPE_REGISTER_IC_COMP_TYPE_SHIFT                                                (0)


#endif // _I2C_1_DEFINES_H

