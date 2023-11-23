#ifndef _TRIG_HANDLER_REGS_DEFINES_H
#define _TRIG_HANDLER_REGS_DEFINES_H
/* **************************** */
#define TRIG_HANDLER_REGS_INTR_STATUS                                                                                          (TRIG_HANDLER_REGS_BASE + 0x0)
#define TRIG_HANDLER_REGS_INTR_STATUS_DEFAULT                                                                                  0x0
#define TRIG_HANDLER_REGS_INTR_STATUS_HP_INTR                                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_INTR_STATUS_HP_INTR_MASK                                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_STATUS_HP_INTR_SHIFT                                                                            (0)
#define TRIG_HANDLER_REGS_INTR_STATUS_MP_INTR                                                                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define TRIG_HANDLER_REGS_INTR_STATUS_MP_INTR_MASK                                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_STATUS_MP_INTR_SHIFT                                                                            (8)
#define TRIG_HANDLER_REGS_INTR_STATUS_LP_INTR                                                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_INTR_STATUS_LP_INTR_MASK                                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_STATUS_LP_INTR_SHIFT                                                                            (16)


#define TRIG_HANDLER_REGS_INTR_MASK_STATUS                                                                                     (TRIG_HANDLER_REGS_BASE + 0x4)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_DEFAULT                                                                             0x0
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_HP_INTR                                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_HP_INTR_MASK                                                                        (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_HP_INTR_SHIFT                                                                       (0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_MP_INTR                                                                             (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_MP_INTR_MASK                                                                        (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_MP_INTR_SHIFT                                                                       (8)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_LP_INTR                                                                             (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_LP_INTR_MASK                                                                        (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_LP_INTR_SHIFT                                                                       (16)


#define TRIG_HANDLER_REGS_INTR_CLEAR                                                                                           (TRIG_HANDLER_REGS_BASE + 0x8)
#define TRIG_HANDLER_REGS_INTR_CLEAR_DEFAULT                                                                                   0x0
#define TRIG_HANDLER_REGS_INTR_CLEAR_HP_INTR                                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_INTR_CLEAR_HP_INTR_MASK                                                                              (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_HP_INTR_SHIFT                                                                             (0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_MP_INTR                                                                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define TRIG_HANDLER_REGS_INTR_CLEAR_MP_INTR_MASK                                                                              (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_MP_INTR_SHIFT                                                                             (8)
#define TRIG_HANDLER_REGS_INTR_CLEAR_LP_INTR                                                                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_INTR_CLEAR_LP_INTR_MASK                                                                              (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_LP_INTR_SHIFT                                                                             (16)


#define TRIG_HANDLER_REGS_INTR_SET                                                                                             (TRIG_HANDLER_REGS_BASE + 0xc)
#define TRIG_HANDLER_REGS_INTR_SET_DEFAULT                                                                                     0x0
#define TRIG_HANDLER_REGS_INTR_SET_HP_INTR                                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_INTR_SET_HP_INTR_MASK                                                                                (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_SET_HP_INTR_SHIFT                                                                               (0)
#define TRIG_HANDLER_REGS_INTR_SET_MP_INTR                                                                                     (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define TRIG_HANDLER_REGS_INTR_SET_MP_INTR_MASK                                                                                (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_SET_MP_INTR_SHIFT                                                                               (8)
#define TRIG_HANDLER_REGS_INTR_SET_LP_INTR                                                                                     (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_INTR_SET_LP_INTR_MASK                                                                                (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_SET_LP_INTR_SHIFT                                                                               (16)


#define TRIG_HANDLER_REGS_INTR_MASK_SET                                                                                        (TRIG_HANDLER_REGS_BASE + 0x10)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_DEFAULT                                                                                0x0
#define TRIG_HANDLER_REGS_INTR_MASK_SET_HP_INTR                                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_HP_INTR_MASK                                                                           (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_HP_INTR_SHIFT                                                                          (0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_MP_INTR                                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_MP_INTR_MASK                                                                           (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_MP_INTR_SHIFT                                                                          (8)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_LP_INTR                                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_LP_INTR_MASK                                                                           (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_LP_INTR_SHIFT                                                                          (16)


#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR                                                                                      (TRIG_HANDLER_REGS_BASE + 0x14)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_DEFAULT                                                                              0x0
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_HP_INTR                                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_HP_INTR_MASK                                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_HP_INTR_SHIFT                                                                        (0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_MP_INTR                                                                              (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_MP_INTR_MASK                                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_MP_INTR_SHIFT                                                                        (8)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_LP_INTR                                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_LP_INTR_MASK                                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_LP_INTR_SHIFT                                                                        (16)


#define TRIG_HANDLER_REGS_INTR_STATUS_1                                                                                        (TRIG_HANDLER_REGS_BASE + 0x18)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_DEFAULT                                                                                0x0
#define TRIG_HANDLER_REGS_INTR_STATUS_1_HP_INTR                                                                                (Bit0+Bit1)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_HP_INTR_MASK                                                                           (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_HP_INTR_SHIFT                                                                          (0)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_MP_INTR                                                                                (Bit8+Bit9)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_MP_INTR_MASK                                                                           (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_MP_INTR_SHIFT                                                                          (8)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_LP_INTR                                                                                (Bit16+Bit17)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_LP_INTR_MASK                                                                           (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_STATUS_1_LP_INTR_SHIFT                                                                          (16)


#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1                                                                                   (TRIG_HANDLER_REGS_BASE + 0x1c)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_DEFAULT                                                                           0x0
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_HP_INTR                                                                           (Bit0+Bit1)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_HP_INTR_MASK                                                                      (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_HP_INTR_SHIFT                                                                     (0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_MP_INTR                                                                           (Bit8+Bit9)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_MP_INTR_MASK                                                                      (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_MP_INTR_SHIFT                                                                     (8)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_LP_INTR                                                                           (Bit16+Bit17)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_LP_INTR_MASK                                                                      (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_STATUS_1_LP_INTR_SHIFT                                                                     (16)


#define TRIG_HANDLER_REGS_INTR_CLEAR_1                                                                                         (TRIG_HANDLER_REGS_BASE + 0x20)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_DEFAULT                                                                                 0x0
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_HP_INTR                                                                                 (Bit0+Bit1)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_HP_INTR_MASK                                                                            (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_HP_INTR_SHIFT                                                                           (0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_MP_INTR                                                                                 (Bit8+Bit9)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_MP_INTR_MASK                                                                            (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_MP_INTR_SHIFT                                                                           (8)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_LP_INTR                                                                                 (Bit16+Bit17)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_LP_INTR_MASK                                                                            (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_CLEAR_1_LP_INTR_SHIFT                                                                           (16)


#define TRIG_HANDLER_REGS_INTR_SET_1                                                                                           (TRIG_HANDLER_REGS_BASE + 0x24)
#define TRIG_HANDLER_REGS_INTR_SET_1_DEFAULT                                                                                   0x0
#define TRIG_HANDLER_REGS_INTR_SET_1_HP_INTR                                                                                   (Bit0+Bit1)
#define TRIG_HANDLER_REGS_INTR_SET_1_HP_INTR_MASK                                                                              (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_SET_1_HP_INTR_SHIFT                                                                             (0)
#define TRIG_HANDLER_REGS_INTR_SET_1_MP_INTR                                                                                   (Bit8+Bit9)
#define TRIG_HANDLER_REGS_INTR_SET_1_MP_INTR_MASK                                                                              (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_SET_1_MP_INTR_SHIFT                                                                             (8)
#define TRIG_HANDLER_REGS_INTR_SET_1_LP_INTR                                                                                   (Bit16+Bit17)
#define TRIG_HANDLER_REGS_INTR_SET_1_LP_INTR_MASK                                                                              (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_SET_1_LP_INTR_SHIFT                                                                             (16)


#define TRIG_HANDLER_REGS_INTR_MASK_SET_1                                                                                      (TRIG_HANDLER_REGS_BASE + 0x28)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_DEFAULT                                                                              0x0
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_HP_INTR                                                                              (Bit0+Bit1)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_HP_INTR_MASK                                                                         (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_HP_INTR_SHIFT                                                                        (0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_MP_INTR                                                                              (Bit8+Bit9)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_MP_INTR_MASK                                                                         (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_MP_INTR_SHIFT                                                                        (8)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_LP_INTR                                                                              (Bit16+Bit17)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_LP_INTR_MASK                                                                         (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_SET_1_LP_INTR_SHIFT                                                                        (16)


#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1                                                                                    (TRIG_HANDLER_REGS_BASE + 0x2c)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_DEFAULT                                                                            0x0
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_HP_INTR                                                                            (Bit0+Bit1)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_HP_INTR_MASK                                                                       (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_HP_INTR_SHIFT                                                                      (0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_MP_INTR                                                                            (Bit8+Bit9)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_MP_INTR_MASK                                                                       (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_MP_INTR_SHIFT                                                                      (8)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_LP_INTR                                                                            (Bit16+Bit17)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_LP_INTR_MASK                                                                       (Bit1+Bit0)
#define TRIG_HANDLER_REGS_INTR_MASK_CLEAR_1_LP_INTR_SHIFT                                                                      (16)


#define TRIG_HANDLER_REGS_MISC_CTRL                                                                                            (TRIG_HANDLER_REGS_BASE + 0x40)
#define TRIG_HANDLER_REGS_MISC_CTRL_DEFAULT                                                                                    0x0
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_TRIG_HANDLER_EN                                                                        (Bit0)
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_HP_QUEUE_EN                                                                            (Bit1)
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_MP_QUEUE_EN                                                                            (Bit2)
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_LP_QUEUE_EN                                                                            (Bit3)
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_DEDM_SW_ACCESS_EN                                                                      (Bit4)
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_HP_INVALID_CMD_CONT                                                                    (Bit5)
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_MP_INVALID_CMD_CONT                                                                    (Bit6)
#define TRIG_HANDLER_REGS_MISC_CTRL_CTL_LP_INVALID_CMD_CONT                                                                    (Bit7)


#define TRIG_HANDLER_REGS_RESET_INTR                                                                                           (TRIG_HANDLER_REGS_BASE + 0x48)
#define TRIG_HANDLER_REGS_RESET_INTR_DEFAULT                                                                                   0x0
#define TRIG_HANDLER_REGS_RESET_INTR_CTL_TRIG_HANDLER_INTR_SRESET                                                              (Bit0)


#define TRIG_HANDLER_REGS_DEDM_INI_ADDR                                                                                        (TRIG_HANDLER_REGS_BASE + 0x50)
#define TRIG_HANDLER_REGS_DEDM_INI_ADDR_DEFAULT                                                                                0x0
#define TRIG_HANDLER_REGS_DEDM_INI_ADDR_CTL_DEDM_WR_INI_ADDR                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define TRIG_HANDLER_REGS_DEDM_INI_ADDR_CTL_DEDM_WR_INI_ADDR_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_DEDM_INI_ADDR_CTL_DEDM_WR_INI_ADDR_SHIFT                                                             (0)
#define TRIG_HANDLER_REGS_DEDM_INI_ADDR_CTL_DEDM_RD_INI_ADDR                                                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define TRIG_HANDLER_REGS_DEDM_INI_ADDR_CTL_DEDM_RD_INI_ADDR_MASK                                                              (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_DEDM_INI_ADDR_CTL_DEDM_RD_INI_ADDR_SHIFT                                                             (16)


#define TRIG_HANDLER_REGS_DEDM_WDATA                                                                                           (TRIG_HANDLER_REGS_BASE + 0x54)
#define TRIG_HANDLER_REGS_DEDM_WDATA_DEFAULT                                                                                   0x0
#define TRIG_HANDLER_REGS_DEDM_WDATA_CTL_DEDM_WDATA                                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_DEDM_WDATA_CTL_DEDM_WDATA_MASK                                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_DEDM_WDATA_CTL_DEDM_WDATA_SHIFT                                                                      (0)


#define TRIG_HANDLER_REGS_DEDM_RDATA                                                                                           (TRIG_HANDLER_REGS_BASE + 0x58)
#define TRIG_HANDLER_REGS_DEDM_RDATA_DEFAULT                                                                                   0x0
#define TRIG_HANDLER_REGS_DEDM_RDATA_STS_DEDM_RDATA                                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_DEDM_RDATA_STS_DEDM_RDATA_MASK                                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_DEDM_RDATA_STS_DEDM_RDATA_SHIFT                                                                      (0)


#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR                                                                                       (TRIG_HANDLER_REGS_BASE + 0x5c)
#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR_DEFAULT                                                                               0x0
#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR_STS_DEDM_WR_CURR_ADDR                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR_STS_DEDM_WR_CURR_ADDR_MASK                                                            (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR_STS_DEDM_WR_CURR_ADDR_SHIFT                                                           (0)
#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR_STS_DEDM_RD_CURR_ADDR                                                                 (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR_STS_DEDM_RD_CURR_ADDR_MASK                                                            (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_DEDM_CURR_ADDR_STS_DEDM_RD_CURR_ADDR_SHIFT                                                           (16)


#define TRIG_HANDLER_REGS_SW_TRIG                                                                                              (TRIG_HANDLER_REGS_BASE + 0x60)
#define TRIG_HANDLER_REGS_SW_TRIG_DEFAULT                                                                                      0x0
#define TRIG_HANDLER_REGS_SW_TRIG_CTL_SW_TRIG                                                                                  (Bit0+Bit1+Bit2)
#define TRIG_HANDLER_REGS_SW_TRIG_CTL_SW_TRIG_MASK                                                                             (Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_SW_TRIG_CTL_SW_TRIG_SHIFT                                                                            (0)


#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET                                                                                (TRIG_HANDLER_REGS_BASE + 0x68)
#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET_DEFAULT                                                                        0x200
#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET_CTL_LP_MEM_ADDR_OFFSET                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET_CTL_LP_MEM_ADDR_OFFSET_MASK                                                    (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET_CTL_LP_MEM_ADDR_OFFSET_SHIFT                                                   (0)
#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET_CTL_MP_MEM_ADDR_OFFSET                                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET_CTL_MP_MEM_ADDR_OFFSET_MASK                                                    (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_LP_MEM_ADDR_OFFSET_CTL_MP_MEM_ADDR_OFFSET_SHIFT                                                   (16)


#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0                                                                                  (TRIG_HANDLER_REGS_BASE + 0x80)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_0                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_0_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_0_SHIFT                                                          (0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_1                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_1_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_1_SHIFT                                                          (8)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_2                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_2_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_2_SHIFT                                                          (16)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_3                                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_3_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_0_CTL_HP_TRIG_IDX_3_SHIFT                                                          (24)


#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1                                                                                  (TRIG_HANDLER_REGS_BASE + 0x84)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_4                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_4_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_4_SHIFT                                                          (0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_5                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_5_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_5_SHIFT                                                          (8)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_6                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_6_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_6_SHIFT                                                          (16)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_7                                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_7_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_TRIG_IDX_GROUP_1_CTL_HP_TRIG_IDX_7_SHIFT                                                          (24)


#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0                                                                                  (TRIG_HANDLER_REGS_BASE + 0x90)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_0                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_0_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_0_SHIFT                                                          (0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_1                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_1_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_1_SHIFT                                                          (8)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_2                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_2_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_2_SHIFT                                                          (16)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_3                                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_3_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_0_CTL_MP_TRIG_IDX_3_SHIFT                                                          (24)


#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1                                                                                  (TRIG_HANDLER_REGS_BASE + 0x94)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_4                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_4_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_4_SHIFT                                                          (0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_5                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_5_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_5_SHIFT                                                          (8)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_6                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_6_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_6_SHIFT                                                          (16)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_7                                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_7_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_TRIG_IDX_GROUP_1_CTL_MP_TRIG_IDX_7_SHIFT                                                          (24)


#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0                                                                                  (TRIG_HANDLER_REGS_BASE + 0xa0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_0                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_0_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_0_SHIFT                                                          (0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_1                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_1_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_1_SHIFT                                                          (8)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_2                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_2_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_2_SHIFT                                                          (16)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_3                                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_3_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_0_CTL_LP_TRIG_IDX_3_SHIFT                                                          (24)


#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1                                                                                  (TRIG_HANDLER_REGS_BASE + 0xa4)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_4                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_4_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_4_SHIFT                                                          (0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_5                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_5_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_5_SHIFT                                                          (8)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_6                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_6_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_6_SHIFT                                                          (16)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_7                                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_7_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_1_CTL_LP_TRIG_IDX_7_SHIFT                                                          (24)


#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2                                                                                  (TRIG_HANDLER_REGS_BASE + 0xa8)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_8                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_8_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_8_SHIFT                                                          (0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_9                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_9_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_9_SHIFT                                                          (8)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_10                                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_10_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_10_SHIFT                                                         (16)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_11                                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_11_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_2_CTL_LP_TRIG_IDX_11_SHIFT                                                         (24)


#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3                                                                                  (TRIG_HANDLER_REGS_BASE + 0xac)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_DEFAULT                                                                          0xFFFFFFFF
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_12                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_12_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_12_SHIFT                                                         (0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_13                                                               (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_13_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_13_SHIFT                                                         (8)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_14                                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_14_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_14_SHIFT                                                         (16)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_15                                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_15_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_TRIG_IDX_GROUP_3_CTL_LP_TRIG_IDX_15_SHIFT                                                         (24)


#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET                                                                                (TRIG_HANDLER_REGS_BASE + 0xc0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_DEFAULT                                                                        0x0
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_HP_TRIG_FALL_EDGE_EN_SET                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_HP_TRIG_FALL_EDGE_EN_SET_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_HP_TRIG_FALL_EDGE_EN_SET_SHIFT                                             (0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_MP_TRIG_FALL_EDGE_EN_SET                                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_MP_TRIG_FALL_EDGE_EN_SET_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_MP_TRIG_FALL_EDGE_EN_SET_SHIFT                                             (8)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_LP_TRIG_FALL_EDGE_EN_SET                                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_LP_TRIG_FALL_EDGE_EN_SET_MASK                                              (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_SET_CTL_LP_TRIG_FALL_EDGE_EN_SET_SHIFT                                             (16)


#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR                                                                                (TRIG_HANDLER_REGS_BASE + 0xc4)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_DEFAULT                                                                        0x0
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_HP_TRIG_FALL_EDGE_EN_CLR                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_HP_TRIG_FALL_EDGE_EN_CLR_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_HP_TRIG_FALL_EDGE_EN_CLR_SHIFT                                             (0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_MP_TRIG_FALL_EDGE_EN_CLR                                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_MP_TRIG_FALL_EDGE_EN_CLR_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_MP_TRIG_FALL_EDGE_EN_CLR_SHIFT                                             (8)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_LP_TRIG_FALL_EDGE_EN_CLR                                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_LP_TRIG_FALL_EDGE_EN_CLR_MASK                                              (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_FALL_EDGE_EN_CLR_CTL_LP_TRIG_FALL_EDGE_EN_CLR_SHIFT                                             (16)


#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET                                                                                (TRIG_HANDLER_REGS_BASE + 0xc8)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_DEFAULT                                                                        0x0
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_HP_TRIG_RISE_EDGE_EN_SET                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_HP_TRIG_RISE_EDGE_EN_SET_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_HP_TRIG_RISE_EDGE_EN_SET_SHIFT                                             (0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_MP_TRIG_RISE_EDGE_EN_SET                                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_MP_TRIG_RISE_EDGE_EN_SET_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_MP_TRIG_RISE_EDGE_EN_SET_SHIFT                                             (8)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_LP_TRIG_RISE_EDGE_EN_SET                                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_LP_TRIG_RISE_EDGE_EN_SET_MASK                                              (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_SET_CTL_LP_TRIG_RISE_EDGE_EN_SET_SHIFT                                             (16)


#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR                                                                                (TRIG_HANDLER_REGS_BASE + 0xcc)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_DEFAULT                                                                        0x0
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_HP_TRIG_RISE_EDGE_EN_CLR                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_HP_TRIG_RISE_EDGE_EN_CLR_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_HP_TRIG_RISE_EDGE_EN_CLR_SHIFT                                             (0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_MP_TRIG_RISE_EDGE_EN_CLR                                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_MP_TRIG_RISE_EDGE_EN_CLR_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_MP_TRIG_RISE_EDGE_EN_CLR_SHIFT                                             (8)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_LP_TRIG_RISE_EDGE_EN_CLR                                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_LP_TRIG_RISE_EDGE_EN_CLR_MASK                                              (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_RISE_EDGE_EN_CLR_CTL_LP_TRIG_RISE_EDGE_EN_CLR_SHIFT                                             (16)


#define TRIG_HANDLER_REGS_ODC_INI_VAL                                                                                          (TRIG_HANDLER_REGS_BASE + 0xd0)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_DEFAULT                                                                                  0x7F007F
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_IDX_0                                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_IDX_0_MASK                                                                       (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_IDX_0_SHIFT                                                                      (0)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_INI_VAL_0                                                                        (Bit15)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_IDX_1                                                                            (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_IDX_1_MASK                                                                       (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_IDX_1_SHIFT                                                                      (16)
#define TRIG_HANDLER_REGS_ODC_INI_VAL_CTL_ODC_INI_VAL_1                                                                        (Bit31)


#define TRIG_HANDLER_REGS_TRIG_CLR                                                                                             (TRIG_HANDLER_REGS_BASE + 0xd8)
#define TRIG_HANDLER_REGS_TRIG_CLR_DEFAULT                                                                                     0x0
#define TRIG_HANDLER_REGS_TRIG_CLR_CTL_HP_CURR_TRIG_CLR                                                                        (Bit0)
#define TRIG_HANDLER_REGS_TRIG_CLR_CTL_MP_CURR_TRIG_CLR                                                                        (Bit1)
#define TRIG_HANDLER_REGS_TRIG_CLR_CTL_LP_CURR_TRIG_CLR                                                                        (Bit2)


#define TRIG_HANDLER_REGS_TRIG_IN_QUE                                                                                          (TRIG_HANDLER_REGS_BASE + 0xe0)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_DEFAULT                                                                                  0x0
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_HP_TRIG_IN_QUE                                                                       (Bit0+Bit1+Bit2)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_HP_TRIG_IN_QUE_MASK                                                                  (Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_HP_TRIG_IN_QUE_SHIFT                                                                 (0)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_MP_TRIG_IN_QUE                                                                       (Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_MP_TRIG_IN_QUE_MASK                                                                  (Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_MP_TRIG_IN_QUE_SHIFT                                                                 (4)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_LP_TRIG_IN_QUE                                                                       (Bit8+Bit9+Bit10+Bit11)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_LP_TRIG_IN_QUE_MASK                                                                  (Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_TRIG_IN_QUE_STS_LP_TRIG_IN_QUE_SHIFT                                                                 (8)


#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC                                                                              (TRIG_HANDLER_REGS_BASE + 0xe8)
#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC_DEFAULT                                                                      0x0
#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC_STS_HP_INVALID_CMD_LOC                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC_STS_HP_INVALID_CMD_LOC_MASK                                                  (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC_STS_HP_INVALID_CMD_LOC_SHIFT                                                 (0)
#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC_STS_HP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC                                     (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC_STS_HP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC_MASK                                (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_QUE_ABNORMAL_CMD_LOC_STS_HP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC_SHIFT                               (16)


#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC                                                                              (TRIG_HANDLER_REGS_BASE + 0xec)
#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC_DEFAULT                                                                      0x0
#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC_STS_MP_INVALID_CMD_LOC                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC_STS_MP_INVALID_CMD_LOC_MASK                                                  (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC_STS_MP_INVALID_CMD_LOC_SHIFT                                                 (0)
#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC_STS_MP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC                                     (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC_STS_MP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC_MASK                                (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_QUE_ABNORMAL_CMD_LOC_STS_MP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC_SHIFT                               (16)


#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC                                                                              (TRIG_HANDLER_REGS_BASE + 0xf0)
#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC_DEFAULT                                                                      0x0
#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC_STS_LP_INVALID_CMD_LOC                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC_STS_LP_INVALID_CMD_LOC_MASK                                                  (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC_STS_LP_INVALID_CMD_LOC_SHIFT                                                 (0)
#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC_STS_LP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC                                     (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC_STS_LP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC_MASK                                (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_QUE_ABNORMAL_CMD_LOC_STS_LP_RD_CMP_FAIL_REACH_MAX_NUM_CMD_LOC_SHIFT                               (16)


#define TRIG_HANDLER_REGS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE                                                              (TRIG_HANDLER_REGS_BASE + 0x100)
#define TRIG_HANDLER_REGS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_DEFAULT                                                      0x0
#define TRIG_HANDLER_REGS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_MASK             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_HP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_SHIFT            (0)


#define TRIG_HANDLER_REGS_HP_CURR_SRC_REG_RVALUE                                                                               (TRIG_HANDLER_REGS_BASE + 0x104)
#define TRIG_HANDLER_REGS_HP_CURR_SRC_REG_RVALUE_DEFAULT                                                                       0x0
#define TRIG_HANDLER_REGS_HP_CURR_SRC_REG_RVALUE_STS_HP_CURR_SRC_REG_RVALUE                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_HP_CURR_SRC_REG_RVALUE_STS_HP_CURR_SRC_REG_RVALUE_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_CURR_SRC_REG_RVALUE_STS_HP_CURR_SRC_REG_RVALUE_SHIFT                                              (0)


#define TRIG_HANDLER_REGS_HP_CURR_DEST_REG_RVALUE                                                                              (TRIG_HANDLER_REGS_BASE + 0x108)
#define TRIG_HANDLER_REGS_HP_CURR_DEST_REG_RVALUE_DEFAULT                                                                      0x0
#define TRIG_HANDLER_REGS_HP_CURR_DEST_REG_RVALUE_STS_HP_CURR_DEST_REG_RVALUE                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_HP_CURR_DEST_REG_RVALUE_STS_HP_CURR_DEST_REG_RVALUE_MASK                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_CURR_DEST_REG_RVALUE_STS_HP_CURR_DEST_REG_RVALUE_SHIFT                                            (0)


#define TRIG_HANDLER_REGS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE                                                              (TRIG_HANDLER_REGS_BASE + 0x110)
#define TRIG_HANDLER_REGS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_DEFAULT                                                      0x0
#define TRIG_HANDLER_REGS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_MASK             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_MP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_SHIFT            (0)


#define TRIG_HANDLER_REGS_MP_CURR_SRC_REG_RVALUE                                                                               (TRIG_HANDLER_REGS_BASE + 0x114)
#define TRIG_HANDLER_REGS_MP_CURR_SRC_REG_RVALUE_DEFAULT                                                                       0x0
#define TRIG_HANDLER_REGS_MP_CURR_SRC_REG_RVALUE_STS_MP_CURR_SRC_REG_RVALUE                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_MP_CURR_SRC_REG_RVALUE_STS_MP_CURR_SRC_REG_RVALUE_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_CURR_SRC_REG_RVALUE_STS_MP_CURR_SRC_REG_RVALUE_SHIFT                                              (0)


#define TRIG_HANDLER_REGS_MP_CURR_DEST_REG_RVALUE                                                                              (TRIG_HANDLER_REGS_BASE + 0x118)
#define TRIG_HANDLER_REGS_MP_CURR_DEST_REG_RVALUE_DEFAULT                                                                      0x0
#define TRIG_HANDLER_REGS_MP_CURR_DEST_REG_RVALUE_STS_MP_CURR_DEST_REG_RVALUE                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_MP_CURR_DEST_REG_RVALUE_STS_MP_CURR_DEST_REG_RVALUE_MASK                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_CURR_DEST_REG_RVALUE_STS_MP_CURR_DEST_REG_RVALUE_SHIFT                                            (0)


#define TRIG_HANDLER_REGS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE                                                              (TRIG_HANDLER_REGS_BASE + 0x120)
#define TRIG_HANDLER_REGS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_DEFAULT                                                      0x0
#define TRIG_HANDLER_REGS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_MASK             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_STS_LP_RD_CMP_FAIL_REACH_MAX_NUM_REG_RVALUE_SHIFT            (0)


#define TRIG_HANDLER_REGS_LP_CURR_SRC_REG_RVALUE                                                                               (TRIG_HANDLER_REGS_BASE + 0x124)
#define TRIG_HANDLER_REGS_LP_CURR_SRC_REG_RVALUE_DEFAULT                                                                       0x0
#define TRIG_HANDLER_REGS_LP_CURR_SRC_REG_RVALUE_STS_LP_CURR_SRC_REG_RVALUE                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_LP_CURR_SRC_REG_RVALUE_STS_LP_CURR_SRC_REG_RVALUE_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_CURR_SRC_REG_RVALUE_STS_LP_CURR_SRC_REG_RVALUE_SHIFT                                              (0)


#define TRIG_HANDLER_REGS_LP_CURR_DEST_REG_RVALUE                                                                              (TRIG_HANDLER_REGS_BASE + 0x128)
#define TRIG_HANDLER_REGS_LP_CURR_DEST_REG_RVALUE_DEFAULT                                                                      0x0
#define TRIG_HANDLER_REGS_LP_CURR_DEST_REG_RVALUE_STS_LP_CURR_DEST_REG_RVALUE                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TRIG_HANDLER_REGS_LP_CURR_DEST_REG_RVALUE_STS_LP_CURR_DEST_REG_RVALUE_MASK                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_CURR_DEST_REG_RVALUE_STS_LP_CURR_DEST_REG_RVALUE_SHIFT                                            (0)


#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_0                                                                                   (TRIG_HANDLER_REGS_BASE + 0x140)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_0_DEFAULT                                                                           0x10000
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_0_STS_HP_CURR_CMD_LOC                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_0_STS_HP_CURR_CMD_LOC_MASK                                                          (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_0_STS_HP_CURR_CMD_LOC_SHIFT                                                         (0)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_0_STS_HP_IDLE                                                                       (Bit16)


#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_0                                                                                   (TRIG_HANDLER_REGS_BASE + 0x144)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_0_DEFAULT                                                                           0x10000
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_0_STS_MP_CURR_CMD_LOC                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_0_STS_MP_CURR_CMD_LOC_MASK                                                          (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_0_STS_MP_CURR_CMD_LOC_SHIFT                                                         (0)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_0_STS_MP_IDLE                                                                       (Bit16)


#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_0                                                                                   (TRIG_HANDLER_REGS_BASE + 0x148)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_0_DEFAULT                                                                           0x10000
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_0_STS_LP_CURR_CMD_LOC                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_0_STS_LP_CURR_CMD_LOC_MASK                                                          (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_0_STS_LP_CURR_CMD_LOC_SHIFT                                                         (0)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_0_STS_LP_IDLE                                                                       (Bit16)


#define TRIG_HANDLER_REGS_CURR_STS_INFO_1                                                                                      (TRIG_HANDLER_REGS_BASE + 0x14c)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_DEFAULT                                                                              0x0
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_HP_CURR_TRIG                                                                     (Bit0+Bit1+Bit2)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_HP_CURR_TRIG_MASK                                                                (Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_HP_CURR_TRIG_SHIFT                                                               (0)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_MP_CURR_TRIG                                                                     (Bit4+Bit5+Bit6)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_MP_CURR_TRIG_MASK                                                                (Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_MP_CURR_TRIG_SHIFT                                                               (4)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_LP_CURR_TRIG                                                                     (Bit8+Bit9+Bit10+Bit11)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_LP_CURR_TRIG_MASK                                                                (Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_LP_CURR_TRIG_SHIFT                                                               (8)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_HP_LAST_TRIG                                                                     (Bit16+Bit17+Bit18)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_HP_LAST_TRIG_MASK                                                                (Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_HP_LAST_TRIG_SHIFT                                                               (16)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_MP_LAST_TRIG                                                                     (Bit20+Bit21+Bit22)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_MP_LAST_TRIG_MASK                                                                (Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_MP_LAST_TRIG_SHIFT                                                               (20)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_LP_LAST_TRIG                                                                     (Bit24+Bit25+Bit26+Bit27)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_LP_LAST_TRIG_MASK                                                                (Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_CURR_STS_INFO_1_STS_LP_LAST_TRIG_SHIFT                                                               (24)


#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_2                                                                                   (TRIG_HANDLER_REGS_BASE + 0x150)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_2_DEFAULT                                                                           0x0
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_2_STS_HP_CURR_TIMER_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_2_STS_HP_CURR_TIMER_VALUE_MASK                                                      (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_2_STS_HP_CURR_TIMER_VALUE_SHIFT                                                     (0)


#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_2                                                                                   (TRIG_HANDLER_REGS_BASE + 0x154)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_2_DEFAULT                                                                           0x0
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_2_STS_MP_CURR_TIMER_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_2_STS_MP_CURR_TIMER_VALUE_MASK                                                      (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_2_STS_MP_CURR_TIMER_VALUE_SHIFT                                                     (0)


#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_2                                                                                   (TRIG_HANDLER_REGS_BASE + 0x158)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_2_DEFAULT                                                                           0x0
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_2_STS_LP_CURR_TIMER_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_2_STS_LP_CURR_TIMER_VALUE_MASK                                                      (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_2_STS_LP_CURR_TIMER_VALUE_SHIFT                                                     (0)


#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_3                                                                                   (TRIG_HANDLER_REGS_BASE + 0x15c)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_3_DEFAULT                                                                           0x0
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_3_STS_HP_CURR_CMD_NUM_OP                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_3_STS_HP_CURR_CMD_NUM_OP_MASK                                                       (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_CURR_STS_INFO_3_STS_HP_CURR_CMD_NUM_OP_SHIFT                                                      (0)


#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_3                                                                                   (TRIG_HANDLER_REGS_BASE + 0x160)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_3_DEFAULT                                                                           0x0
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_3_STS_MP_CURR_CMD_NUM_OP                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_3_STS_MP_CURR_CMD_NUM_OP_MASK                                                       (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_CURR_STS_INFO_3_STS_MP_CURR_CMD_NUM_OP_SHIFT                                                      (0)


#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_3                                                                                   (TRIG_HANDLER_REGS_BASE + 0x164)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_3_DEFAULT                                                                           0x0
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_3_STS_LP_CURR_CMD_NUM_OP                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_3_STS_LP_CURR_CMD_NUM_OP_MASK                                                       (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_CURR_STS_INFO_3_STS_LP_CURR_CMD_NUM_OP_SHIFT                                                      (0)


#define TRIG_HANDLER_REGS_HP_INI_TIMER_VALUE                                                                                   (TRIG_HANDLER_REGS_BASE + 0x168)
#define TRIG_HANDLER_REGS_HP_INI_TIMER_VALUE_DEFAULT                                                                           0xFFFFFF
#define TRIG_HANDLER_REGS_HP_INI_TIMER_VALUE_CTL_HP_INI_TIMER_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_HP_INI_TIMER_VALUE_CTL_HP_INI_TIMER_VALUE_MASK                                                       (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_INI_TIMER_VALUE_CTL_HP_INI_TIMER_VALUE_SHIFT                                                      (0)


#define TRIG_HANDLER_REGS_MP_INI_TIMER_VALUE                                                                                   (TRIG_HANDLER_REGS_BASE + 0x16c)
#define TRIG_HANDLER_REGS_MP_INI_TIMER_VALUE_DEFAULT                                                                           0xFFFFFF
#define TRIG_HANDLER_REGS_MP_INI_TIMER_VALUE_CTL_MP_INI_TIMER_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_MP_INI_TIMER_VALUE_CTL_MP_INI_TIMER_VALUE_MASK                                                       (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_INI_TIMER_VALUE_CTL_MP_INI_TIMER_VALUE_SHIFT                                                      (0)


#define TRIG_HANDLER_REGS_LP_INI_TIMER_VALUE                                                                                   (TRIG_HANDLER_REGS_BASE + 0x170)
#define TRIG_HANDLER_REGS_LP_INI_TIMER_VALUE_DEFAULT                                                                           0xFFFFFF
#define TRIG_HANDLER_REGS_LP_INI_TIMER_VALUE_CTL_LP_INI_TIMER_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_LP_INI_TIMER_VALUE_CTL_LP_INI_TIMER_VALUE_MASK                                                       (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_INI_TIMER_VALUE_CTL_LP_INI_TIMER_VALUE_SHIFT                                                      (0)


#define TRIG_HANDLER_REGS_HP_RELOAD_TIMER_VALUE                                                                                (TRIG_HANDLER_REGS_BASE + 0x174)
#define TRIG_HANDLER_REGS_HP_RELOAD_TIMER_VALUE_DEFAULT                                                                        0xFFFFFF
#define TRIG_HANDLER_REGS_HP_RELOAD_TIMER_VALUE_CTL_HP_RELOAD_TIMER_VALUE                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_HP_RELOAD_TIMER_VALUE_CTL_HP_RELOAD_TIMER_VALUE_MASK                                                 (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_HP_RELOAD_TIMER_VALUE_CTL_HP_RELOAD_TIMER_VALUE_SHIFT                                                (0)


#define TRIG_HANDLER_REGS_MP_RELOAD_TIMER_VALUE                                                                                (TRIG_HANDLER_REGS_BASE + 0x178)
#define TRIG_HANDLER_REGS_MP_RELOAD_TIMER_VALUE_DEFAULT                                                                        0xFFFFFF
#define TRIG_HANDLER_REGS_MP_RELOAD_TIMER_VALUE_CTL_MP_RELOAD_TIMER_VALUE                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_MP_RELOAD_TIMER_VALUE_CTL_MP_RELOAD_TIMER_VALUE_MASK                                                 (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_MP_RELOAD_TIMER_VALUE_CTL_MP_RELOAD_TIMER_VALUE_SHIFT                                                (0)


#define TRIG_HANDLER_REGS_LP_RELOAD_TIMER_VALUE                                                                                (TRIG_HANDLER_REGS_BASE + 0x17c)
#define TRIG_HANDLER_REGS_LP_RELOAD_TIMER_VALUE_DEFAULT                                                                        0xFFFFFF
#define TRIG_HANDLER_REGS_LP_RELOAD_TIMER_VALUE_CTL_LP_RELOAD_TIMER_VALUE                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_LP_RELOAD_TIMER_VALUE_CTL_LP_RELOAD_TIMER_VALUE_MASK                                                 (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_LP_RELOAD_TIMER_VALUE_CTL_LP_RELOAD_TIMER_VALUE_SHIFT                                                (0)


#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX                                                                                   (TRIG_HANDLER_REGS_BASE + 0x180)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_DEFAULT                                                                           0xFFFFFF
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_HP_SPECIFIED_TRIG_IDX                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_HP_SPECIFIED_TRIG_IDX_MASK                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_HP_SPECIFIED_TRIG_IDX_SHIFT                                                   (0)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_MP_SPECIFIED_TRIG_IDX                                                         (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_MP_SPECIFIED_TRIG_IDX_MASK                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_MP_SPECIFIED_TRIG_IDX_SHIFT                                                   (8)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_LP_SPECIFIED_TRIG_IDX                                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_LP_SPECIFIED_TRIG_IDX_MASK                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TRIG_HANDLER_REGS_SPECIFIED_TRIG_IDX_CTL_LP_SPECIFIED_TRIG_IDX_SHIFT                                                   (16)


#endif // _TRIG_HANDLER_REGS_DEFINES_H

