#ifndef _FRONTEND_REGS_DEFINES_H
#define _FRONTEND_REGS_DEFINES_H
/* **************************** */
#define FRONTEND_REGS_FIFO_FLOW_STATUS                                                                           (FRONTEND_REGS_BASE + 0x0)
#define FRONTEND_REGS_FIFO_FLOW_STATUS_DEFAULT                                                                   0x0
#define FRONTEND_REGS_FIFO_FLOW_STATUS_STS_RX_AFIFO_OVERFLOW                                                     (Bit0)
#define FRONTEND_REGS_FIFO_FLOW_STATUS_STS_RX_AFIFO_UNDERFLOW                                                    (Bit1)
#define FRONTEND_REGS_FIFO_FLOW_STATUS_STS_TX_AFIFO_OVERFLOW                                                     (Bit2)
#define FRONTEND_REGS_FIFO_FLOW_STATUS_STS_TX_AFIFO_UNDERFLOW                                                    (Bit3)


#define FRONTEND_REGS_FIFO_FLOW_CTRL                                                                             (FRONTEND_REGS_BASE + 0x4)
#define FRONTEND_REGS_FIFO_FLOW_CTRL_DEFAULT                                                                     0x0
#define FRONTEND_REGS_FIFO_FLOW_CTRL_CTLT_RX_AFIFO_CLEAR_FLOW                                                    (Bit0)
#define FRONTEND_REGS_FIFO_FLOW_CTRL_CTLT_TX_AFIFO_CLEAR_FLOW                                                    (Bit1)


#define FRONTEND_REGS_MISC_CTRL0                                                                                 (FRONTEND_REGS_BASE + 0x40)
#define FRONTEND_REGS_MISC_CTRL0_DEFAULT                                                                         0x8B0B
#define FRONTEND_REGS_MISC_CTRL0_CTLT_RX_AFIFO_EN_WR                                                             (Bit0)
#define FRONTEND_REGS_MISC_CTRL0_CTLT_RX_AFIFO_EN_RD                                                             (Bit1)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_AFIFO_READ_START                                                        (Bit2+Bit3+Bit4)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_AFIFO_READ_START_MASK                                                   (Bit2+Bit1+Bit0)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_AFIFO_READ_START_SHIFT                                                  (2)
#define FRONTEND_REGS_MISC_CTRL0_CTLT_RX_SRESET_CICDEC4                                                          (Bit5)
#define FRONTEND_REGS_MISC_CTRL0_CTLT_RX_SRESET_DDFS                                                             (Bit6)
#define FRONTEND_REGS_MISC_CTRL0_CTLT_RX_SRESET_CICDEC2                                                          (Bit7)
#define FRONTEND_REGS_MISC_CTRL0_CTLT_TX_AFIFO_EN_WR                                                             (Bit8)
#define FRONTEND_REGS_MISC_CTRL0_CTLT_TX_AFIFO_EN_RD                                                             (Bit9)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_TX_AFIFO_READ_START                                                        (Bit10+Bit11+Bit12)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_TX_AFIFO_READ_START_MASK                                                   (Bit2+Bit1+Bit0)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_TX_AFIFO_READ_START_SHIFT                                                  (10)
#define FRONTEND_REGS_MISC_CTRL0_CTLT_TX_SRESET_INT                                                              (Bit13)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_SWAP_IQ_INPUT                                                           (Bit14)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_SWAP_IQ_OUTPUT                                                          (Bit15)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_READ_NUM                                                                (Bit16+Bit17+Bit18+Bit19)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_READ_NUM_MASK                                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_READ_NUM_SHIFT                                                          (16)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_READ_DEN                                                                (Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_READ_DEN_MASK                                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_READ_DEN_SHIFT                                                          (20)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_INV_I_IN                                                                (Bit24)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_INV_Q_IN                                                                (Bit25)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_TX_DAC_NEG_LP                                                              (Bit26)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_TX_DAC_NEG_HP                                                              (Bit27)
#define FRONTEND_REGS_MISC_CTRL0_STS_RX_READING                                                                  (Bit28)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_SAMP_NEG_I                                                              (Bit29)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_SAMP_NEG_Q                                                              (Bit30)
#define FRONTEND_REGS_MISC_CTRL0_CTLQ_RX_DDFS_BYP                                                                (Bit31)


#define FRONTEND_REGS_RX_DC_CTRL0                                                                                (FRONTEND_REGS_BASE + 0x44)
#define FRONTEND_REGS_RX_DC_CTRL0_DEFAULT                                                                        0x10
#define FRONTEND_REGS_RX_DC_CTRL0_CTL_DEC4_DC_OFFSET_GAIN_ADAPT                                                  (Bit0)
#define FRONTEND_REGS_RX_DC_CTRL0_CTL_DEC2_DC_OFFSET_BYPASS                                                      (Bit4)


#define FRONTEND_REGS_RX_FIFO_STAT0                                                                              (FRONTEND_REGS_BASE + 0x48)
#define FRONTEND_REGS_RX_FIFO_STAT0_DEFAULT                                                                      0x0
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_WR_PNT_RCK                                                      (Bit0+Bit1+Bit2+Bit3)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_WR_PNT_RCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_WR_PNT_RCK_SHIFT                                                (0)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_RD_PNT_RCK                                                      (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_RD_PNT_RCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_RD_PNT_RCK_SHIFT                                                (4)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_WR_PNT_WCK                                                      (Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_WR_PNT_WCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_WR_PNT_WCK_SHIFT                                                (8)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_RD_PNT_WCK                                                      (Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_RD_PNT_WCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_RD_PNT_WCK_SHIFT                                                (12)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_FILL_RCK                                                        (Bit16+Bit17+Bit18+Bit19)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_FILL_RCK_MASK                                                   (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_FIFO_STAT0_STS_RX_AFIFO_FILL_RCK_SHIFT                                                  (16)
#define FRONTEND_REGS_RX_FIFO_STAT0_CTLT_RX_AFIFO_SNAP                                                           (Bit20)


#define FRONTEND_REGS_TX_FIFO_STAT0                                                                              (FRONTEND_REGS_BASE + 0x4c)
#define FRONTEND_REGS_TX_FIFO_STAT0_DEFAULT                                                                      0x0
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_WR_PNT_RCK                                                      (Bit0+Bit1+Bit2+Bit3)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_WR_PNT_RCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_WR_PNT_RCK_SHIFT                                                (0)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_RD_PNT_RCK                                                      (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_RD_PNT_RCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_RD_PNT_RCK_SHIFT                                                (4)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_WR_PNT_WCK                                                      (Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_WR_PNT_WCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_WR_PNT_WCK_SHIFT                                                (8)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_RD_PNT_WCK                                                      (Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_RD_PNT_WCK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_RD_PNT_WCK_SHIFT                                                (12)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_FILL_RCK                                                        (Bit16+Bit17+Bit18+Bit19)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_FILL_RCK_MASK                                                   (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_TX_FIFO_STAT0_STS_TX_AFIFO_FILL_RCK_SHIFT                                                  (16)
#define FRONTEND_REGS_TX_FIFO_STAT0_CTLT_TX_AFIFO_SNAP                                                           (Bit20)


#define FRONTEND_REGS_DC_ACC_CTRL                                                                                (FRONTEND_REGS_BASE + 0x50)
#define FRONTEND_REGS_DC_ACC_CTRL_DEFAULT                                                                        0x0
#define FRONTEND_REGS_DC_ACC_CTRL_CTLQ_DC_ACC_CNT                                                                (Bit0+Bit1+Bit2)
#define FRONTEND_REGS_DC_ACC_CTRL_CTLQ_DC_ACC_CNT_MASK                                                           (Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DC_ACC_CTRL_CTLQ_DC_ACC_CNT_SHIFT                                                          (0)


#define FRONTEND_REGS_DC_ACC_STAT0                                                                               (FRONTEND_REGS_BASE + 0x54)
#define FRONTEND_REGS_DC_ACC_STAT0_DEFAULT                                                                       0x0
#define FRONTEND_REGS_DC_ACC_STAT0_STS_DC_ACC_I                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_DC_ACC_STAT0_STS_DC_ACC_I_MASK                                                             (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DC_ACC_STAT0_STS_DC_ACC_I_SHIFT                                                            (0)
#define FRONTEND_REGS_DC_ACC_STAT0_STS_DC_ACC_DONE                                                               (Bit28)


#define FRONTEND_REGS_DC_ACC_STAT1                                                                               (FRONTEND_REGS_BASE + 0x58)
#define FRONTEND_REGS_DC_ACC_STAT1_DEFAULT                                                                       0x0
#define FRONTEND_REGS_DC_ACC_STAT1_STS_DC_ACC_Q                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_DC_ACC_STAT1_STS_DC_ACC_Q_MASK                                                             (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DC_ACC_STAT1_STS_DC_ACC_Q_SHIFT                                                            (0)


#define FRONTEND_REGS_MISC_CTRL1                                                                                 (FRONTEND_REGS_BASE + 0x5c)
#define FRONTEND_REGS_MISC_CTRL1_DEFAULT                                                                         0x0
#define FRONTEND_REGS_MISC_CTRL1_CTLT_TX_LP_FRC_EN                                                               (Bit0)
#define FRONTEND_REGS_MISC_CTRL1_CTLT_TX_HP_FRC_EN                                                               (Bit1)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_LP_FRC_DAT                                                              (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_LP_FRC_DAT_MASK                                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_LP_FRC_DAT_SHIFT                                                        (8)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_HP_FRC_DAT                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_HP_FRC_DAT_MASK                                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_HP_FRC_DAT_SHIFT                                                        (16)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_RATE_FRC                                                                (Bit26)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_RATE_VAL                                                                (Bit27)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_BAND_FRC                                                                (Bit28)
#define FRONTEND_REGS_MISC_CTRL1_CTLQ_TX_BAND_VAL                                                                (Bit29)


#define FRONTEND_REGS_RX_AGC_CTRL0                                                                               (FRONTEND_REGS_BASE + 0x60)
#define FRONTEND_REGS_RX_AGC_CTRL0_DEFAULT                                                                       0x81088090
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_INIT_GAIN_CODE                                                            (Bit0+Bit1+Bit2+Bit3)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_INIT_GAIN_CODE_MASK                                                       (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_INIT_GAIN_CODE_SHIFT                                                      (0)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_MAX_GAIN_CODE                                                             (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_MAX_GAIN_CODE_MASK                                                        (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_MAX_GAIN_CODE_SHIFT                                                       (4)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_MIN_GAIN_CODE                                                             (Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_MIN_GAIN_CODE_MASK                                                        (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_MIN_GAIN_CODE_SHIFT                                                       (8)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_WINDOW_TIMING                                                             (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_WINDOW_TIMING_MASK                                                        (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_WINDOW_TIMING_SHIFT                                                       (12)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_SETTLING_TIMING                                                           (Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_SETTLING_TIMING_MASK                                                      (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_SETTLING_TIMING_SHIFT                                                     (18)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_TOO_HIGH_TH                                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_TOO_HIGH_TH_MASK                                                          (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_TOO_HIGH_TH_SHIFT                                                         (24)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_AGC_SRESET                                                                (Bit30)
#define FRONTEND_REGS_RX_AGC_CTRL0_CTL_AGC_AUTO_SRESET                                                           (Bit31)


#define FRONTEND_REGS_RX_AGC_CTRL1                                                                               (FRONTEND_REGS_BASE + 0x64)
#define FRONTEND_REGS_RX_AGC_CTRL1_DEFAULT                                                                       0x85F789
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_HIGH_TH                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_HIGH_TH_MASK                                                        (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_HIGH_TH_SHIFT                                                       (0)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_TOO_LOW_TH                                                                (Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_TOO_LOW_TH_MASK                                                           (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_TOO_LOW_TH_SHIFT                                                          (6)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_LOW_TH                                                              (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_LOW_TH_MASK                                                         (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_LOW_TH_SHIFT                                                        (12)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_TOO_HIGH_GAIN_STEP                                                        (Bit18+Bit19+Bit20+Bit21)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_TOO_HIGH_GAIN_STEP_MASK                                                   (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_TOO_HIGH_GAIN_STEP_SHIFT                                                  (18)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_HIGH_GAIN_STEP                                                      (Bit22+Bit23+Bit24+Bit25)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_HIGH_GAIN_STEP_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_ULTRA_HIGH_GAIN_STEP_SHIFT                                                (22)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTLQ_AGC_SEL_IN                                                               (Bit28+Bit29)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTLQ_AGC_SEL_IN_MASK                                                          (Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTLQ_AGC_SEL_IN_SHIFT                                                         (28)
#define FRONTEND_REGS_RX_AGC_CTRL1_CTL_AGC_CLK_DISABLE_DURING_FREEZE                                             (Bit30)


#define FRONTEND_REGS_RX_AGC_CTRL2                                                                               (FRONTEND_REGS_BASE + 0x68)
#define FRONTEND_REGS_RX_AGC_CTRL2_DEFAULT                                                                       0x110421
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_TOO_LOW_GAIN_STEP                                                         (Bit0+Bit1+Bit2+Bit3)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_TOO_LOW_GAIN_STEP_MASK                                                    (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_TOO_LOW_GAIN_STEP_SHIFT                                                   (0)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_ULTRA_LOW_GAIN_STEP                                                       (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_ULTRA_LOW_GAIN_STEP_MASK                                                  (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_ULTRA_LOW_GAIN_STEP_SHIFT                                                 (4)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_OPPOSITE_GAIN_ADJUST                                                      (Bit8)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_GAIN_FREEZE                                                               (Bit9)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_GAIN_FREEZE_AFTER_SYNC                                                    (Bit10)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_SWAP_HIGH_LOW_INPUT                                                       (Bit11)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_RESET_TO_INIT_GAIN                                                        (Bit12)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_GAIN_CODE_CHANGE_PULSE_WIDTH                                              (Bit16+Bit17)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_GAIN_CODE_CHANGE_PULSE_WIDTH_MASK                                         (Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_GAIN_CODE_CHANGE_PULSE_WIDTH_SHIFT                                        (16)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_RX_AGC_GAIN_RESET_RX_DISABLE                                              (Bit20)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_RX_AGC_GAIN_RESET_RX_DISABLE_VAL                                          (Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_RX_AGC_GAIN_RESET_RX_DISABLE_VAL_MASK                                     (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_CTRL2_CTL_RX_AGC_GAIN_RESET_RX_DISABLE_VAL_SHIFT                                    (24)


#define FRONTEND_REGS_RX_AGC_STAT0                                                                               (FRONTEND_REGS_BASE + 0x6c)
#define FRONTEND_REGS_RX_AGC_STAT0_DEFAULT                                                                       0x0
#define FRONTEND_REGS_RX_AGC_STAT0_CTL_AGC_GAIN_CODE_FREEZE                                                      (Bit0)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_GAIN_CODE                                                             (Bit1+Bit2+Bit3+Bit4)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_GAIN_CODE_MASK                                                        (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_GAIN_CODE_SHIFT                                                       (1)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_THERMAL_GAIN_CODE                                                     (Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_THERMAL_GAIN_CODE_MASK                                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_THERMAL_GAIN_CODE_SHIFT                                               (5)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_BBA_ROUT_VAL                                                          (Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_BBA_ROUT_VAL_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_BBA_ROUT_VAL_SHIFT                                                    (16)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_BBA_2P4_INOUT_VAL                                                     (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_BBA_2P4_INOUT_VAL_MASK                                                (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_BBA_2P4_INOUT_VAL_SHIFT                                               (21)
#define FRONTEND_REGS_RX_AGC_STAT0_STS_AGC_FREEZE                                                                (Bit31)


#define FRONTEND_REGS_RSSI_CTRL0                                                                                 (FRONTEND_REGS_BASE + 0x84)
#define FRONTEND_REGS_RSSI_CTRL0_DEFAULT                                                                         0x600C3000
#define FRONTEND_REGS_RSSI_CTRL0_CTL_RSSI_OFFSET                                                                 (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define FRONTEND_REGS_RSSI_CTRL0_CTL_RSSI_OFFSET_MASK                                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL0_CTL_RSSI_OFFSET_SHIFT                                                           (9)
#define FRONTEND_REGS_RSSI_CTRL0_CTL_RSSI_MIN                                                                    (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define FRONTEND_REGS_RSSI_CTRL0_CTL_RSSI_MIN_MASK                                                               (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL0_CTL_RSSI_MIN_SHIFT                                                              (19)


#define FRONTEND_REGS_RSSI_CTRL1                                                                                 (FRONTEND_REGS_BASE + 0x88)
#define FRONTEND_REGS_RSSI_CTRL1_DEFAULT                                                                         0x67793F0
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT0                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT0_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT0_SHIFT                                                             (0)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT1                                                                   (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT1_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT1_SHIFT                                                             (9)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT2                                                                   (Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT2_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL1_CTL_RSSI_LUT2_SHIFT                                                             (18)


#define FRONTEND_REGS_RSSI_CTRL2                                                                                 (FRONTEND_REGS_BASE + 0x8c)
#define FRONTEND_REGS_RSSI_CTRL2_DEFAULT                                                                         0x4E6CB88
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT3                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT3_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT3_SHIFT                                                             (0)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT4                                                                   (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT4_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT4_SHIFT                                                             (9)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT5                                                                   (Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT5_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL2_CTL_RSSI_LUT5_SHIFT                                                             (18)


#define FRONTEND_REGS_RSSI_CTRL3                                                                                 (FRONTEND_REGS_BASE + 0x90)
#define FRONTEND_REGS_RSSI_CTRL3_DEFAULT                                                                         0x27DAD09
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT6                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT6_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT6_SHIFT                                                             (0)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT7                                                                   (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT7_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT7_SHIFT                                                             (9)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT8                                                                   (Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT8_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL3_CTL_RSSI_LUT8_SHIFT                                                             (18)


#define FRONTEND_REGS_RSSI_CTRL4                                                                                 (FRONTEND_REGS_BASE + 0x94)
#define FRONTEND_REGS_RSSI_CTRL4_DEFAULT                                                                         0x68
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT9                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT9_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT9_SHIFT                                                             (0)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT10                                                                  (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT10_MASK                                                             (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT10_SHIFT                                                            (9)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT11                                                                  (Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT11_MASK                                                             (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_CTRL4_CTL_RSSI_LUT11_SHIFT                                                            (18)


#define FRONTEND_REGS_RSSI_STAT0                                                                                 (FRONTEND_REGS_BASE + 0x98)
#define FRONTEND_REGS_RSSI_STAT0_DEFAULT                                                                         0x0
#define FRONTEND_REGS_RSSI_STAT0_CTL_RSSI_FREEZE                                                                 (Bit0)
#define FRONTEND_REGS_RSSI_STAT0_STS_RSSI                                                                        (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define FRONTEND_REGS_RSSI_STAT0_STS_RSSI_MASK                                                                   (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_STAT0_STS_RSSI_SHIFT                                                                  (4)
#define FRONTEND_REGS_RSSI_STAT0_STS_RSSI_LATCHED                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26)
#define FRONTEND_REGS_RSSI_STAT0_STS_RSSI_LATCHED_MASK                                                           (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_STAT0_STS_RSSI_LATCHED_SHIFT                                                          (16)
#define FRONTEND_REGS_RSSI_STAT0_STS_AGC_GAIN_CODE_LATCHED                                                       (Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_RSSI_STAT0_STS_AGC_GAIN_CODE_LATCHED_MASK                                                  (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RSSI_STAT0_STS_AGC_GAIN_CODE_LATCHED_SHIFT                                                 (28)


#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL                                                                      (FRONTEND_REGS_BASE + 0xa0)
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_DEFAULT                                                              0x60E1
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_CTLT_TX_AFIFO_AUTO_DISABLE                                           (Bit0)
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_CTLT_TX_AFIFO_AUTO_DISABLE_WR_DLY                                    (Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_CTLT_TX_AFIFO_AUTO_DISABLE_WR_DLY_MASK                               (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_CTLT_TX_AFIFO_AUTO_DISABLE_WR_DLY_SHIFT                              (4)
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_CTLT_TX_AFIFO_AUTO_DISABLE_RD_DLY                                    (Bit12+Bit13+Bit14+Bit15+Bit16)
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_CTLT_TX_AFIFO_AUTO_DISABLE_RD_DLY_MASK                               (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_TX_AFIFO_DISABLE_CTRL_CTLT_TX_AFIFO_AUTO_DISABLE_RD_DLY_SHIFT                              (12)


#define FRONTEND_REGS_RX_CIC_SNAP                                                                                (FRONTEND_REGS_BASE + 0xc0)
#define FRONTEND_REGS_RX_CIC_SNAP_DEFAULT                                                                        0x0
#define FRONTEND_REGS_RX_CIC_SNAP_STS_RX_CIC_SNAP_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_CIC_SNAP_STS_RX_CIC_SNAP_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_CIC_SNAP_STS_RX_CIC_SNAP_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_CIC_SNAP_STS_RX_CIC_SNAP_Q                                                              (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_RX_CIC_SNAP_STS_RX_CIC_SNAP_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_CIC_SNAP_STS_RX_CIC_SNAP_Q_SHIFT                                                        (9)


#define FRONTEND_REGS_RX_FILTER_SEL_CTRL                                                                         (FRONTEND_REGS_BASE + 0xd0)
#define FRONTEND_REGS_RX_FILTER_SEL_CTRL_DEFAULT                                                                 0x0
#define FRONTEND_REGS_RX_FILTER_SEL_CTRL_CTL_RX_FILTER_FORCE_2M                                                  (Bit0)
#define FRONTEND_REGS_RX_FILTER_SEL_CTRL_CTL_RX_FILTER_FORCE_2M_VAL                                              (Bit1)
#define FRONTEND_REGS_RX_FILTER_SEL_CTRL_CTL_RX_FILTER_FORCE_1M                                                  (Bit4)
#define FRONTEND_REGS_RX_FILTER_SEL_CTRL_CTL_RX_FILTER_FORCE_1M_VAL                                              (Bit5)
#define FRONTEND_REGS_RX_FILTER_SEL_CTRL_CTL_RX_FILTER_FORCE_LR                                                  (Bit8)
#define FRONTEND_REGS_RX_FILTER_SEL_CTRL_CTL_RX_FILTER_FORCE_LR_VAL                                              (Bit9)


#define FRONTEND_REGS_DPU_CTRL0                                                                                  (FRONTEND_REGS_BASE + 0xe0)
#define FRONTEND_REGS_DPU_CTRL0_DEFAULT                                                                          0xA000
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_RX_EN                                                                    (Bit0)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_TX_EN                                                                    (Bit1)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_MEM_REG_EN                                                               (Bit2)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_REG_TRIG                                                                 (Bit3)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_TRIG_SOURCE                                                              (Bit4+Bit5+Bit6)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_TRIG_SOURCE_MASK                                                         (Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_TRIG_SOURCE_SHIFT                                                        (4)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_CAPTURE_SEL                                                              (Bit8+Bit9)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_CAPTURE_SEL_MASK                                                         (Bit1+Bit0)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_CAPTURE_SEL_SHIFT                                                        (8)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_TX_STOP                                                                  (Bit10)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_CAPTURE_ACK                                                              (Bit11)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_POST_TRIG                                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_POST_TRIG_MASK                                                           (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_POST_TRIG_SHIFT                                                          (12)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_CAP_MSB_PER                                                              (Bit28+Bit29)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_CAP_MSB_PER_MASK                                                         (Bit1+Bit0)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_CAP_MSB_PER_SHIFT                                                        (28)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_PB_EN                                                                    (Bit30)
#define FRONTEND_REGS_DPU_CTRL0_CTL_DPU_SEL_ANT_RXDM                                                             (Bit31)


#define FRONTEND_REGS_DPU_MEM_ADDR                                                                               (FRONTEND_REGS_BASE + 0xe4)
#define FRONTEND_REGS_DPU_MEM_ADDR_DEFAULT                                                                       0x0
#define FRONTEND_REGS_DPU_MEM_ADDR_CTL_DPU_MEM_ADDR                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_DPU_MEM_ADDR_CTL_DPU_MEM_ADDR_MASK                                                         (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_MEM_ADDR_CTL_DPU_MEM_ADDR_SHIFT                                                        (0)


#define FRONTEND_REGS_DPU_MEM_ADDR_STAT0                                                                         (FRONTEND_REGS_BASE + 0xe8)
#define FRONTEND_REGS_DPU_MEM_ADDR_STAT0_DEFAULT                                                                 0x0
#define FRONTEND_REGS_DPU_MEM_ADDR_STAT0_STS_DPU_MEM_ADDR                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_DPU_MEM_ADDR_STAT0_STS_DPU_MEM_ADDR_MASK                                                   (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_MEM_ADDR_STAT0_STS_DPU_MEM_ADDR_SHIFT                                                  (0)


#define FRONTEND_REGS_DPU_MEM_WDATA                                                                              (FRONTEND_REGS_BASE + 0xec)
#define FRONTEND_REGS_DPU_MEM_WDATA_DEFAULT                                                                      0x0
#define FRONTEND_REGS_DPU_MEM_WDATA_CTL_DPU_MEM_WDATA                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_DPU_MEM_WDATA_CTL_DPU_MEM_WDATA_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_MEM_WDATA_CTL_DPU_MEM_WDATA_SHIFT                                                      (0)


#define FRONTEND_REGS_DPU_MEM_RDATA                                                                              (FRONTEND_REGS_BASE + 0xf0)
#define FRONTEND_REGS_DPU_MEM_RDATA_DEFAULT                                                                      0x0
#define FRONTEND_REGS_DPU_MEM_RDATA_STS_DPU_MEM_RDATA                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_DPU_MEM_RDATA_STS_DPU_MEM_RDATA_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_MEM_RDATA_STS_DPU_MEM_RDATA_SHIFT                                                      (0)


#define FRONTEND_REGS_DPU_CTRL1                                                                                  (FRONTEND_REGS_BASE + 0xf4)
#define FRONTEND_REGS_DPU_CTRL1_DEFAULT                                                                          0x0
#define FRONTEND_REGS_DPU_CTRL1_CTLQ_DPU_MEM_START_ADDR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_DPU_CTRL1_CTLQ_DPU_MEM_START_ADDR_MASK                                                     (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_CTRL1_CTLQ_DPU_MEM_START_ADDR_SHIFT                                                    (0)


#define FRONTEND_REGS_DPU_CTRL2                                                                                  (FRONTEND_REGS_BASE + 0xf8)
#define FRONTEND_REGS_DPU_CTRL2_DEFAULT                                                                          0x3FFF
#define FRONTEND_REGS_DPU_CTRL2_CTLQ_DPU_MEM_LAST_ADDR                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_DPU_CTRL2_CTLQ_DPU_MEM_LAST_ADDR_MASK                                                      (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_CTRL2_CTLQ_DPU_MEM_LAST_ADDR_SHIFT                                                     (0)


#define FRONTEND_REGS_DPU_STAT0                                                                                  (FRONTEND_REGS_BASE + 0xfc)
#define FRONTEND_REGS_DPU_STAT0_DEFAULT                                                                          0x0
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_RX_STATE                                                                 (Bit0+Bit1)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_RX_STATE_MASK                                                            (Bit1+Bit0)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_RX_STATE_SHIFT                                                           (0)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_TX_STATE                                                                 (Bit4+Bit5)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_TX_STATE_MASK                                                            (Bit1+Bit0)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_TX_STATE_SHIFT                                                           (4)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_CAP_ADDR                                                                 (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_CAP_ADDR_MASK                                                            (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_CAP_ADDR_SHIFT                                                           (8)
#define FRONTEND_REGS_DPU_STAT0_STS_DPU_CAP_WRAP                                                                 (Bit24)


#define FRONTEND_REGS_DPU_AFIFO_CTRL0                                                                            (FRONTEND_REGS_BASE + 0x104)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_DEFAULT                                                                    0x1
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_CTLQ_DPU_ADC_FIFO_RD_EMPTY_DEL                                             (Bit0+Bit1)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_CTLQ_DPU_ADC_FIFO_RD_EMPTY_DEL_MASK                                        (Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_CTLQ_DPU_ADC_FIFO_RD_EMPTY_DEL_SHIFT                                       (0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_CTLT_DPU_ADC_FIFO_SNAP                                                     (Bit2)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_CTLT_DPU_ADC_FIFO_CLEAR_FLOW                                               (Bit3)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_WR_PNT_RCK                                                (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_WR_PNT_RCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_WR_PNT_RCK_SHIFT                                          (4)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_RD_PNT_RCK                                                (Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_RD_PNT_RCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_RD_PNT_RCK_SHIFT                                          (8)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_WR_PNT_WCK                                                (Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_WR_PNT_WCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_WR_PNT_WCK_SHIFT                                          (12)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_RD_PNT_WCK                                                (Bit16+Bit17+Bit18+Bit19)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_RD_PNT_WCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_RD_PNT_WCK_SHIFT                                          (16)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_FILL_RCK                                                  (Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_FILL_RCK_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_FILL_RCK_SHIFT                                            (20)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_OVERFLOW                                                  (Bit24)
#define FRONTEND_REGS_DPU_AFIFO_CTRL0_STS_DPU_ADC_FIFO_UNDERFLOW                                                 (Bit25)


#define FRONTEND_REGS_DPU_AFIFO_CTRL1                                                                            (FRONTEND_REGS_BASE + 0x108)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_DEFAULT                                                                    0x1
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_CTLQ_DPU_RX_FIFO_RD_EMPTY_DEL                                              (Bit0+Bit1)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_CTLQ_DPU_RX_FIFO_RD_EMPTY_DEL_MASK                                         (Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_CTLQ_DPU_RX_FIFO_RD_EMPTY_DEL_SHIFT                                        (0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_CTLT_DPU_RX_FIFO_SNAP                                                      (Bit2)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_CTLT_DPU_RX_FIFO_CLEAR_FLOW                                                (Bit3)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_WR_PNT_RCK                                                 (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_WR_PNT_RCK_MASK                                            (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_WR_PNT_RCK_SHIFT                                           (4)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_RD_PNT_RCK                                                 (Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_RD_PNT_RCK_MASK                                            (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_RD_PNT_RCK_SHIFT                                           (8)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_WR_PNT_WCK                                                 (Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_WR_PNT_WCK_MASK                                            (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_WR_PNT_WCK_SHIFT                                           (12)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_RD_PNT_WCK                                                 (Bit16+Bit17+Bit18+Bit19)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_RD_PNT_WCK_MASK                                            (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_RD_PNT_WCK_SHIFT                                           (16)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_FILL_RCK                                                   (Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_FILL_RCK_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_FILL_RCK_SHIFT                                             (20)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_OVERFLOW                                                   (Bit24)
#define FRONTEND_REGS_DPU_AFIFO_CTRL1_STS_DPU_RX_FIFO_UNDERFLOW                                                  (Bit25)


#define FRONTEND_REGS_DPU_AFIFO_CTRL2                                                                            (FRONTEND_REGS_BASE + 0x10c)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_DEFAULT                                                                    0xC000001
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLQ_DPU_DAC_FIFO_RD_EMPTY_DEL                                             (Bit0+Bit1)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLQ_DPU_DAC_FIFO_RD_EMPTY_DEL_MASK                                        (Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLQ_DPU_DAC_FIFO_RD_EMPTY_DEL_SHIFT                                       (0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLT_DPU_DAC_FIFO_SNAP                                                     (Bit2)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLT_DPU_DAC_FIFO_CLEAR_FLOW                                               (Bit3)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_WR_PNT_RCK                                                (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_WR_PNT_RCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_WR_PNT_RCK_SHIFT                                          (4)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_RD_PNT_RCK                                                (Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_RD_PNT_RCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_RD_PNT_RCK_SHIFT                                          (8)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_WR_PNT_WCK                                                (Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_WR_PNT_WCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_WR_PNT_WCK_SHIFT                                          (12)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_RD_PNT_WCK                                                (Bit16+Bit17+Bit18+Bit19)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_RD_PNT_WCK_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_RD_PNT_WCK_SHIFT                                          (16)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_FILL_RCK                                                  (Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_FILL_RCK_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_FILL_RCK_SHIFT                                            (20)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_OVERFLOW                                                  (Bit24)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_STS_DPU_DAC_FIFO_UNDERFLOW                                                 (Bit25)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLQ_DPU_DAC_FILL_START                                                    (Bit26+Bit27+Bit28)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLQ_DPU_DAC_FILL_START_MASK                                               (Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DPU_AFIFO_CTRL2_CTLQ_DPU_DAC_FILL_START_SHIFT                                              (26)


#define FRONTEND_REGS_FPGA                                                                                       (FRONTEND_REGS_BASE + 0x140)
#define FRONTEND_REGS_FPGA_DEFAULT                                                                               0x7
#define FRONTEND_REGS_FPGA_CTLQ_FPGA_RW_INPLAY_SEL                                                               (Bit0)
#define FRONTEND_REGS_FPGA_CTLQ_FPGA_SEL_DAC                                                                     (Bit1)
#define FRONTEND_REGS_FPGA_CTLQ_FPGA_TX_RATE                                                                     (Bit2)


#define FRONTEND_REGS_ANTENNA_MISC_CTRL                                                                          (FRONTEND_REGS_BASE + 0x180)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_DEFAULT                                                                  0x0
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_CTL_EN                                                    (Bit0)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_INTR_CTRL_RESET                                              (Bit1)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_BIT_PATTERN_REQ                                           (Bit2)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_STORAGE_TYPE                                              (Bit3)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_TX_CTL_EN                                                    (Bit4)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_TX_SYNC_REQ                                                  (Bit5)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_DATA_AFTER_SYNC                                           (Bit6)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_DATA_AFTER_EXT                                            (Bit7)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_NUM_RX_PATTERN                                               (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_NUM_RX_PATTERN_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_NUM_RX_PATTERN_SHIFT                                         (8)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_NUM_TX_PATTERN                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_NUM_TX_PATTERN_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_NUM_TX_PATTERN_SHIFT                                         (16)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_0P5US_NUM_CYCLE                                           (Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_0P5US_NUM_CYCLE_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_RX_0P5US_NUM_CYCLE_SHIFT                                     (24)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_TX_0P5US_NUM_CYCLE                                           (Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_TX_0P5US_NUM_CYCLE_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_MISC_CTRL_CTL_ANTENNA_TX_0P5US_NUM_CYCLE_SHIFT                                     (28)


#define FRONTEND_REGS_ANTENNA_RX_CAPTURE                                                                         (FRONTEND_REGS_BASE + 0x184)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_DEFAULT                                                                 0xFF00
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_DOWN_SAMPLE                                              (Bit0+Bit1)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_DOWN_SAMPLE_MASK                                         (Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_DOWN_SAMPLE_SHIFT                                        (0)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_MEM_WR_NO_WRAP                                           (Bit2)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_DATA_CLR_MEM_CNT                                         (Bit4)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_PATTERN_LAST_IDX                                         (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_PATTERN_LAST_IDX_MASK                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_PATTERN_LAST_IDX_SHIFT                                   (8)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_START_DLY                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_START_DLY_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_CTL_ANTENNA_RX_START_DLY_SHIFT                                          (16)
#define FRONTEND_REGS_ANTENNA_RX_CAPTURE_STS_ANTENNA_RX_MEM_WRAP                                                 (Bit31)


#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST                                                                  (FRONTEND_REGS_BASE + 0x188)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_DEFAULT                                                          0x1000
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_0                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_0_MASK                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_0_SHIFT                                   (0)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_0_DURATION                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_0_DURATION_MASK                           (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_0_DURATION_SHIFT                          (8)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_LAST                                      (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_LAST_MASK                                 (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_PATTERN_0_LAST_CTL_ANTENNA_RX_PATTERN_LAST_SHIFT                                (20)


#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN                                                                     (FRONTEND_REGS_BASE + 0x18c)
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_DEFAULT                                                             0x0
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_CTL_ANTENNA_RX_BIT_PATTERN                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_CTL_ANTENNA_RX_BIT_PATTERN_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_CTL_ANTENNA_RX_BIT_PATTERN_SHIFT                                    (0)


#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_MASK                                                                (FRONTEND_REGS_BASE + 0x190)
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_MASK_DEFAULT                                                        0xFFFFFFFF
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_MASK_CTL_ANTENNA_RX_BIT_PATTERN_MASK                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_MASK_CTL_ANTENNA_RX_BIT_PATTERN_MASK_MASK                           (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_BIT_PATTERN_MASK_CTL_ANTENNA_RX_BIT_PATTERN_MASK_SHIFT                          (0)


#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST                                                                  (FRONTEND_REGS_BASE + 0x198)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_DEFAULT                                                          0x1000
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_0                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_0_MASK                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_0_SHIFT                                   (0)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_0_DURATION                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_0_DURATION_MASK                           (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_0_DURATION_SHIFT                          (8)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_LAST                                      (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_LAST_MASK                                 (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_TX_PATTERN_0_LAST_CTL_ANTENNA_TX_PATTERN_LAST_SHIFT                                (20)


#define FRONTEND_REGS_ANTENNA_PATTERN_CURR                                                                       (FRONTEND_REGS_BASE + 0x1a0)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_DEFAULT                                                               0x0
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_CURR                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_CURR_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_CURR_SHIFT                                        (0)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_CURR_DURATION                                     (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_CURR_DURATION_MASK                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_CURR_DURATION_SHIFT                               (8)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_IDX                                               (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_IDX_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_PATTERN_IDX_SHIFT                                         (20)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_IN_RX                                                     (Bit28)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_IN_TX                                                     (Bit29)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_SYNC_FOUND                                                (Bit30)
#define FRONTEND_REGS_ANTENNA_PATTERN_CURR_STS_ANTENNA_RX_BIT_PATTERN_MATCH                                      (Bit31)


#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR                                                                      (FRONTEND_REGS_BASE + 0x1a8)
#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR_DEFAULT                                                              0x1000000
#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR_CTL_ANTENNA_RX_PATTERN_ADDR                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR_CTL_ANTENNA_RX_PATTERN_ADDR_MASK                                     (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR_CTL_ANTENNA_RX_PATTERN_ADDR_SHIFT                                    (0)
#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR_CTL_ANTENNA_TX_PATTERN_ADDR                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR_CTL_ANTENNA_TX_PATTERN_ADDR_MASK                                     (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_CTRL_MEM_ADDR_CTL_ANTENNA_TX_PATTERN_ADDR_SHIFT                                    (16)


#define FRONTEND_REGS_ANTENNA_CTRL_PATTERN_MATCH_OFFSET                                                          (FRONTEND_REGS_BASE + 0x1ac)
#define FRONTEND_REGS_ANTENNA_CTRL_PATTERN_MATCH_OFFSET_DEFAULT                                                  0x0
#define FRONTEND_REGS_ANTENNA_CTRL_PATTERN_MATCH_OFFSET_CTL_ANTENNA_RX_BIT_PATTERN_MATCH_OFFSET                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_ANTENNA_CTRL_PATTERN_MATCH_OFFSET_CTL_ANTENNA_RX_BIT_PATTERN_MATCH_OFFSET_MASK             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_CTRL_PATTERN_MATCH_OFFSET_CTL_ANTENNA_RX_BIT_PATTERN_MATCH_OFFSET_SHIFT            (0)


#define FRONTEND_REGS_ANTENNA_RX_DATA_RD_ADDR                                                                    (FRONTEND_REGS_BASE + 0x1b0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_RD_ADDR_DEFAULT                                                            0x0
#define FRONTEND_REGS_ANTENNA_RX_DATA_RD_ADDR_CTL_ANTENNA_RX_DATA_RD_ADDR                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12)
#define FRONTEND_REGS_ANTENNA_RX_DATA_RD_ADDR_CTL_ANTENNA_RX_DATA_RD_ADDR_MASK                                   (Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_RD_ADDR_CTL_ANTENNA_RX_DATA_RD_ADDR_SHIFT                                  (0)


#define FRONTEND_REGS_ANTENNA_RX_NUM_DATA                                                                        (FRONTEND_REGS_BASE + 0x1c0)
#define FRONTEND_REGS_ANTENNA_RX_NUM_DATA_DEFAULT                                                                0x0
#define FRONTEND_REGS_ANTENNA_RX_NUM_DATA_STS_ANTENNA_RX_NUM_DATA                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define FRONTEND_REGS_ANTENNA_RX_NUM_DATA_STS_ANTENNA_RX_NUM_DATA_MASK                                           (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_NUM_DATA_STS_ANTENNA_RX_NUM_DATA_SHIFT                                          (0)
#define FRONTEND_REGS_ANTENNA_RX_NUM_DATA_STS_ANTENNA_RX_DATA_RDY                                                (Bit31)


#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX                                                                        (FRONTEND_REGS_BASE + 0x1c8)
#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX_DEFAULT                                                                0x0
#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX_STS_ANTENNA_RX_DATA_IDX_SYNC_FOUND                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12)
#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX_STS_ANTENNA_RX_DATA_IDX_SYNC_FOUND_MASK                                (Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX_STS_ANTENNA_RX_DATA_IDX_SYNC_FOUND_SHIFT                               (0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX_STS_ANTENNA_RX_DATA_IDX_PATTERN_MATCH                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX_STS_ANTENNA_RX_DATA_IDX_PATTERN_MATCH_MASK                             (Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_IDX_STS_ANTENNA_RX_DATA_IDX_PATTERN_MATCH_SHIFT                            (16)


#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR                                                                  (FRONTEND_REGS_BASE + 0x1cc)
#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR_DEFAULT                                                          0x0
#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR_STS_ANTENNA_RX_DATA_LAST_WR_DATA_ADDR                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12)
#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR_STS_ANTENNA_RX_DATA_LAST_WR_DATA_ADDR_MASK                       (Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR_STS_ANTENNA_RX_DATA_LAST_WR_DATA_ADDR_SHIFT                      (0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR_STS_ANTENNA_RX_MEM_WR_PHASE                                      (Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR_STS_ANTENNA_RX_MEM_WR_PHASE_MASK                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_LAST_ADDR_STS_ANTENNA_RX_MEM_WR_PHASE_SHIFT                                (16)


#define FRONTEND_REGS_ANTENNA_RX_DATA                                                                            (FRONTEND_REGS_BASE + 0x1d0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_DEFAULT                                                                    0x0
#define FRONTEND_REGS_ANTENNA_RX_DATA_STS_ANTENNA_RX_DATA                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_ANTENNA_RX_DATA_STS_ANTENNA_RX_DATA_MASK                                                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_STS_ANTENNA_RX_DATA_SHIFT                                                  (0)


#define FRONTEND_REGS_ANTENNA_FSM_STATUS                                                                         (FRONTEND_REGS_BASE + 0x1d4)
#define FRONTEND_REGS_ANTENNA_FSM_STATUS_DEFAULT                                                                 0x0
#define FRONTEND_REGS_ANTENNA_FSM_STATUS_STS_ANTENNA_RX_CTRL_ST                                                  (Bit0+Bit1+Bit2+Bit3)
#define FRONTEND_REGS_ANTENNA_FSM_STATUS_STS_ANTENNA_RX_CTRL_ST_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_FSM_STATUS_STS_ANTENNA_RX_CTRL_ST_SHIFT                                            (0)
#define FRONTEND_REGS_ANTENNA_FSM_STATUS_STS_ANTENNA_TX_CTRL_ST                                                  (Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_ANTENNA_FSM_STATUS_STS_ANTENNA_TX_CTRL_ST_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_FSM_STATUS_STS_ANTENNA_TX_CTRL_ST_SHIFT                                            (4)


#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR                                                              (FRONTEND_REGS_BASE + 0x1d8)
#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR_DEFAULT                                                      0x0
#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR_STS_ANTENNA_RX_DATA_MEM_CURR_WR_ADDR                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12)
#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR_STS_ANTENNA_RX_DATA_MEM_CURR_WR_ADDR_MASK                    (Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR_STS_ANTENNA_RX_DATA_MEM_CURR_WR_ADDR_SHIFT                   (0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR_STS_ANTENNA_RX_DATA_MEM_CURR_RD_ADDR                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR_STS_ANTENNA_RX_DATA_MEM_CURR_RD_ADDR_MASK                    (Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_DATA_CURR_MEM_ADDR_STS_ANTENNA_RX_DATA_MEM_CURR_RD_ADDR_SHIFT                   (16)


#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO                                                                     (FRONTEND_REGS_BASE + 0x1dc)
#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO_DEFAULT                                                             0x0
#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO_STS_ANTENNA_RX_NUM_CLK_BEFORE_1ST_RX                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO_STS_ANTENNA_RX_NUM_CLK_BEFORE_1ST_RX_MASK                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO_STS_ANTENNA_RX_NUM_CLK_BEFORE_1ST_RX_SHIFT                          (0)
#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO_STS_ANTENNA_RX_NUM_CLK_BEFORE_FE_RX_EN                              (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO_STS_ANTENNA_RX_NUM_CLK_BEFORE_FE_RX_EN_MASK                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_RX_TIMING_INFO_STS_ANTENNA_RX_NUM_CLK_BEFORE_FE_RX_EN_SHIFT                        (8)


#define FRONTEND_REGS_ANTENNA_IRQ_STATUS                                                                         (FRONTEND_REGS_BASE + 0x1e0)
#define FRONTEND_REGS_ANTENNA_IRQ_STATUS_DEFAULT                                                                 0x0
#define FRONTEND_REGS_ANTENNA_IRQ_STATUS_IRQ                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_IRQ_STATUS_IRQ_MASK                                                                (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_IRQ_STATUS_IRQ_SHIFT                                                               (0)


#define FRONTEND_REGS_ANTENNA_MASK_STATUS                                                                        (FRONTEND_REGS_BASE + 0x1e4)
#define FRONTEND_REGS_ANTENNA_MASK_STATUS_DEFAULT                                                                0x0
#define FRONTEND_REGS_ANTENNA_MASK_STATUS_IRQ                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_MASK_STATUS_IRQ_MASK                                                               (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_MASK_STATUS_IRQ_SHIFT                                                              (0)


#define FRONTEND_REGS_ANTENNA_IRQ_CLR                                                                            (FRONTEND_REGS_BASE + 0x1e8)
#define FRONTEND_REGS_ANTENNA_IRQ_CLR_DEFAULT                                                                    0x0
#define FRONTEND_REGS_ANTENNA_IRQ_CLR_IRQ                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_IRQ_CLR_IRQ_MASK                                                                   (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_IRQ_CLR_IRQ_SHIFT                                                                  (0)


#define FRONTEND_REGS_ANTENNA_IRQ_SET                                                                            (FRONTEND_REGS_BASE + 0x1ec)
#define FRONTEND_REGS_ANTENNA_IRQ_SET_DEFAULT                                                                    0x0
#define FRONTEND_REGS_ANTENNA_IRQ_SET_IRQ                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_IRQ_SET_IRQ_MASK                                                                   (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_IRQ_SET_IRQ_SHIFT                                                                  (0)


#define FRONTEND_REGS_ANTENNA_MASK_CLR                                                                           (FRONTEND_REGS_BASE + 0x1f0)
#define FRONTEND_REGS_ANTENNA_MASK_CLR_DEFAULT                                                                   0x0
#define FRONTEND_REGS_ANTENNA_MASK_CLR_IRQ                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_MASK_CLR_IRQ_MASK                                                                  (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_MASK_CLR_IRQ_SHIFT                                                                 (0)


#define FRONTEND_REGS_ANTENNA_MASK_SET                                                                           (FRONTEND_REGS_BASE + 0x1f4)
#define FRONTEND_REGS_ANTENNA_MASK_SET_DEFAULT                                                                   0x0
#define FRONTEND_REGS_ANTENNA_MASK_SET_IRQ                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define FRONTEND_REGS_ANTENNA_MASK_SET_IRQ_MASK                                                                  (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_ANTENNA_MASK_SET_IRQ_SHIFT                                                                 (0)


#define FRONTEND_REGS_DVRSTY_MISC_CTRL                                                                           (FRONTEND_REGS_BASE + 0x200)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_DEFAULT                                                                   0x203000D4
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_EN                                                             (Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_CLR_PREV_ANT_SEL                                            (Bit1)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_ANT_LOC                                                        (Bit2+Bit3)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_ANT_LOC_MASK                                                   (Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_ANT_LOC_SHIFT                                                  (2)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_NUM_ANTENNA                                                    (Bit4+Bit5)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_NUM_ANTENNA_MASK                                               (Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_NUM_ANTENNA_SHIFT                                              (4)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_AGC_RESET_DUR                                               (Bit6+Bit7)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_AGC_RESET_DUR_MASK                                          (Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_AGC_RESET_DUR_SHIFT                                         (6)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_TX_ANTENNA_SEL                                                 (Bit8+Bit9)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_TX_ANTENNA_SEL_MASK                                            (Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_TX_ANTENNA_SEL_SHIFT                                           (8)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_AGC_RST_USE_INIT_GAIN_CODE                                  (Bit10)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_DB_DIFF_ANT_SWITH                                       (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_DB_DIFF_ANT_SWITH_MASK                                  (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_DB_DIFF_ANT_SWITH_SHIFT                                 (12)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_LEAKY_NUM                                               (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_LEAKY_NUM_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_LEAKY_NUM_SHIFT                                         (20)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_LEAKY_COEF                                              (Bit28+Bit29+Bit30)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_LEAKY_COEF_MASK                                         (Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_CTL_DVRSTY_RX_MAG_LEAKY_COEF_SHIFT                                        (28)


#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2                                                                         (FRONTEND_REGS_BASE + 0x208)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2_DEFAULT                                                                 0x800080
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_0                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_0_MASK                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_0_SHIFT                                   (0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_1                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_1_MASK                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_2_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_1_SHIFT                                   (16)


#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3                                                                         (FRONTEND_REGS_BASE + 0x20c)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3_DEFAULT                                                                 0x800080
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_2                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_2_MASK                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_2_SHIFT                                   (0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_3                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_3_MASK                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_3_CTL_DVRSTY_RX_RF_GAIN_DUR_ANT_3_SHIFT                                   (16)


#define FRONTEND_REGS_DVRSTY_MISC_CTRL_4                                                                         (FRONTEND_REGS_BASE + 0x210)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_4_DEFAULT                                                                 0x80
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_4_CTL_DVRSTY_RX_DLY_AFTER_FRZ                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_4_CTL_DVRSTY_RX_DLY_AFTER_FRZ_MASK                                        (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_MISC_CTRL_4_CTL_DVRSTY_RX_DLY_AFTER_FRZ_SHIFT                                       (0)


#define FRONTEND_REGS_DVRSTY_STATUS                                                                              (FRONTEND_REGS_BASE + 0x218)
#define FRONTEND_REGS_DVRSTY_STATUS_DEFAULT                                                                      0x0
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_FSM                                                            (Bit0+Bit1+Bit2+Bit3)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_FSM_MASK                                                       (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_FSM_SHIFT                                                      (0)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_CURR_ANT_SEL                                                   (Bit4+Bit5)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_CURR_ANT_SEL_MASK                                              (Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_CURR_ANT_SEL_SHIFT                                             (4)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_PREV_ANT_SEL                                                   (Bit8+Bit9)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_PREV_ANT_SEL_MASK                                              (Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_STATUS_STS_DVRSTY_RX_PREV_ANT_SEL_SHIFT                                             (8)


#define FRONTEND_REGS_DVRSTY_RX_MAG_DB                                                                           (FRONTEND_REGS_BASE + 0x220)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_DEFAULT                                                                   0x0
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_0                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_0_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_0_SHIFT                                          (0)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_1                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_1_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_1_SHIFT                                          (8)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_2                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_2_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_2_SHIFT                                          (16)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_3                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_3_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_MAG_DB_STS_DVRSTY_RX_MAG_DB_ANT_3_SHIFT                                          (24)


#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE                                                                 (FRONTEND_REGS_BASE + 0x224)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_DEFAULT                                                         0x0
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_0                            (Bit0+Bit1+Bit2+Bit3)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_0_MASK                       (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_0_SHIFT                      (0)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_1                            (Bit8+Bit9+Bit10+Bit11)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_1_MASK                       (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_1_SHIFT                      (8)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_2                            (Bit16+Bit17+Bit18+Bit19)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_2_MASK                       (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_2_SHIFT                      (16)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_3                            (Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_3_MASK                       (Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_DVRSTY_RX_RF_AGC_GAIN_CODE_STS_DVRSTY_RX_RF_AGC_GAIN_CODE_ANT_3_SHIFT                      (24)


#define FRONTEND_REGS_AGC_GAIN_LUT_0                                                                             (FRONTEND_REGS_BASE + 0x240)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_DEFAULT                                                                     0x1CDE1FF
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_0_CTL_AGC_LUT_0_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_1                                                                             (FRONTEND_REGS_BASE + 0x244)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_DEFAULT                                                                     0x1CDE0FF
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_1_CTL_AGC_LUT_1_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_2                                                                             (FRONTEND_REGS_BASE + 0x248)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_DEFAULT                                                                     0x1CDE07F
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_2_CTL_AGC_LUT_2_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_3                                                                             (FRONTEND_REGS_BASE + 0x24c)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_DEFAULT                                                                     0x189A05F
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_3_CTL_AGC_LUT_3_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_4                                                                             (FRONTEND_REGS_BASE + 0x250)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_DEFAULT                                                                     0x65204F
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_4_CTL_AGC_LUT_4_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_5                                                                             (FRONTEND_REGS_BASE + 0x254)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_DEFAULT                                                                     0x22E047
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_5_CTL_AGC_LUT_5_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_6                                                                             (FRONTEND_REGS_BASE + 0x258)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_DEFAULT                                                                     0x2A043
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_6_CTL_AGC_LUT_6_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_7                                                                             (FRONTEND_REGS_BASE + 0x25c)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_DEFAULT                                                                     0xA041
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_7_CTL_AGC_LUT_7_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_8                                                                             (FRONTEND_REGS_BASE + 0x260)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_DEFAULT                                                                     0xA040
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_8_CTL_AGC_LUT_8_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_AGC_GAIN_LUT_9                                                                             (FRONTEND_REGS_BASE + 0x264)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_DEFAULT                                                                     0x5145000
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_THERMAL_GAIN_CODE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_THERMAL_GAIN_CODE_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_THERMAL_GAIN_CODE_SHIFT                                       (0)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_ROUT                                                      (Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_ROUT_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_ROUT_SHIFT                                                (9)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_2P4_INOUT_1M                                              (Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_2P4_INOUT_1M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_2P4_INOUT_1M_SHIFT                                        (14)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_2P4_INOUT_2M                                              (Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_2P4_INOUT_2M_MASK                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_AGC_GAIN_LUT_9_CTL_AGC_LUT_9_BBA_2P4_INOUT_2M_SHIFT                                        (21)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0                                                                (FRONTEND_REGS_BASE + 0x280)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_0_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1                                                                (FRONTEND_REGS_BASE + 0x284)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_1_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2                                                                (FRONTEND_REGS_BASE + 0x288)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_2_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3                                                                (FRONTEND_REGS_BASE + 0x28c)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_3_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4                                                                (FRONTEND_REGS_BASE + 0x290)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_4_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5                                                                (FRONTEND_REGS_BASE + 0x294)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_5_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6                                                                (FRONTEND_REGS_BASE + 0x298)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_6_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7                                                                (FRONTEND_REGS_BASE + 0x29c)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_7_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8                                                                (FRONTEND_REGS_BASE + 0x2a0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_8_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9                                                                (FRONTEND_REGS_BASE + 0x2a4)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9_DEFAULT                                                        0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9_I                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9_I_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9_I_SHIFT                                                        (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9_Q                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9_Q_MASK                                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_9_Q_SHIFT                                                        (16)


#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10                                                               (FRONTEND_REGS_BASE + 0x2a8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10_DEFAULT                                                       0x800080
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10_I                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10_I_MASK                                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10_I_SHIFT                                                       (0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10_Q                                                             (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10_Q_MASK                                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC4_DC_CTRL0_LUT_GAIN_10_Q_SHIFT                                                       (16)


#define FRONTEND_REGS_RX_DEC2_DC_CTRL                                                                            (FRONTEND_REGS_BASE + 0x2b0)
#define FRONTEND_REGS_RX_DEC2_DC_CTRL_DEFAULT                                                                    0x800080
#define FRONTEND_REGS_RX_DEC2_DC_CTRL_I                                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define FRONTEND_REGS_RX_DEC2_DC_CTRL_I_MASK                                                                     (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC2_DC_CTRL_I_SHIFT                                                                    (0)
#define FRONTEND_REGS_RX_DEC2_DC_CTRL_Q                                                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define FRONTEND_REGS_RX_DEC2_DC_CTRL_Q_MASK                                                                     (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define FRONTEND_REGS_RX_DEC2_DC_CTRL_Q_SHIFT                                                                    (16)


#endif // _FRONTEND_REGS_DEFINES_H

