#ifndef _PWM_REGS_DEFINES_H
#define _PWM_REGS_DEFINES_H
/* **************************** */
#define PWM_REGS_INTR_STATUS                                                  (PWM_REGS_BASE + 0x0)
#define PWM_REGS_INTR_STATUS_DEFAULT                                          0x0
#define PWM_REGS_INTR_STATUS_INTR                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define PWM_REGS_INTR_STATUS_INTR_MASK                                        (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_INTR_STATUS_INTR_SHIFT                                       (0)


#define PWM_REGS_INTR_MASK_STATUS                                             (PWM_REGS_BASE + 0x4)
#define PWM_REGS_INTR_MASK_STATUS_DEFAULT                                     0x0
#define PWM_REGS_INTR_MASK_STATUS_INTR                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define PWM_REGS_INTR_MASK_STATUS_INTR_MASK                                   (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_INTR_MASK_STATUS_INTR_SHIFT                                  (0)


#define PWM_REGS_INTR_CLEAR                                                   (PWM_REGS_BASE + 0x8)
#define PWM_REGS_INTR_CLEAR_DEFAULT                                           0x0
#define PWM_REGS_INTR_CLEAR_INTR                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define PWM_REGS_INTR_CLEAR_INTR_MASK                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_INTR_CLEAR_INTR_SHIFT                                        (0)


#define PWM_REGS_INTR_SET                                                     (PWM_REGS_BASE + 0xc)
#define PWM_REGS_INTR_SET_DEFAULT                                             0x0
#define PWM_REGS_INTR_SET_INTR                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define PWM_REGS_INTR_SET_INTR_MASK                                           (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_INTR_SET_INTR_SHIFT                                          (0)


#define PWM_REGS_INTR_MASK_SET                                                (PWM_REGS_BASE + 0x10)
#define PWM_REGS_INTR_MASK_SET_DEFAULT                                        0x0
#define PWM_REGS_INTR_MASK_SET_INTR                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define PWM_REGS_INTR_MASK_SET_INTR_MASK                                      (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_INTR_MASK_SET_INTR_SHIFT                                     (0)


#define PWM_REGS_INTR_MASK_CLEAR                                              (PWM_REGS_BASE + 0x14)
#define PWM_REGS_INTR_MASK_CLEAR_DEFAULT                                      0x0
#define PWM_REGS_INTR_MASK_CLEAR_INTR                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define PWM_REGS_INTR_MASK_CLEAR_INTR_MASK                                    (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_INTR_MASK_CLEAR_INTR_SHIFT                                   (0)


#define PWM_REGS_MISC_CTRL                                                    (PWM_REGS_BASE + 0x40)
#define PWM_REGS_MISC_CTRL_DEFAULT                                            0xFF000000
#define PWM_REGS_MISC_CTRL_CTL_PWM_EN                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define PWM_REGS_MISC_CTRL_CTL_PWM_EN_MASK                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_MISC_CTRL_CTL_PWM_EN_SHIFT                                   (0)
#define PWM_REGS_MISC_CTRL_CTL_PWM_PAUSE                                      (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define PWM_REGS_MISC_CTRL_CTL_PWM_PAUSE_MASK                                 (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_MISC_CTRL_CTL_PWM_PAUSE_SHIFT                                (8)
#define PWM_REGS_MISC_CTRL_CTL_PWM_POLARITY                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define PWM_REGS_MISC_CTRL_CTL_PWM_POLARITY_MASK                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_MISC_CTRL_CTL_PWM_POLARITY_SHIFT                             (16)
#define PWM_REGS_MISC_CTRL_CTL_PWM_DURATION_LOAD_INST                         (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_MISC_CTRL_CTL_PWM_DURATION_LOAD_INST_MASK                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_MISC_CTRL_CTL_PWM_DURATION_LOAD_INST_SHIFT                   (24)


#define PWM_REGS_DUR_LOAD                                                     (PWM_REGS_BASE + 0x44)
#define PWM_REGS_DUR_LOAD_DEFAULT                                             0x0
#define PWM_REGS_DUR_LOAD_CTL_PWM_DURATION_LOAD                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define PWM_REGS_DUR_LOAD_CTL_PWM_DURATION_LOAD_MASK                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_DUR_LOAD_CTL_PWM_DURATION_LOAD_SHIFT                         (0)


#define PWM_REGS_RESET_INTR                                                   (PWM_REGS_BASE + 0x48)
#define PWM_REGS_RESET_INTR_DEFAULT                                           0x0
#define PWM_REGS_RESET_INTR_CTL_PWM_INTR_SRESET                               (Bit0)


#define PWM_REGS_PWM_DURATION_0                                               (PWM_REGS_BASE + 0x50)
#define PWM_REGS_PWM_DURATION_0_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_0_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_0_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_0_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_0                                          (PWM_REGS_BASE + 0x54)
#define PWM_REGS_PWM_HIGH_DURATION_0_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_0_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_0_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_0_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_0                                                 (PWM_REGS_BASE + 0x58)
#define PWM_REGS_PWM_OUTPUT_0_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_0_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_0                                                   (PWM_REGS_BASE + 0x5c)
#define PWM_REGS_PWM_INIT_0_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_0_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_0_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_0_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_PWM_DURATION_1                                               (PWM_REGS_BASE + 0x60)
#define PWM_REGS_PWM_DURATION_1_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_1_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_1_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_1_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_1                                          (PWM_REGS_BASE + 0x64)
#define PWM_REGS_PWM_HIGH_DURATION_1_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_1_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_1_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_1_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_1                                                 (PWM_REGS_BASE + 0x68)
#define PWM_REGS_PWM_OUTPUT_1_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_1_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_1                                                   (PWM_REGS_BASE + 0x6c)
#define PWM_REGS_PWM_INIT_1_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_1_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_1_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_1_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_PWM_DURATION_2                                               (PWM_REGS_BASE + 0x70)
#define PWM_REGS_PWM_DURATION_2_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_2_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_2_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_2_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_2                                          (PWM_REGS_BASE + 0x74)
#define PWM_REGS_PWM_HIGH_DURATION_2_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_2_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_2_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_2_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_2                                                 (PWM_REGS_BASE + 0x78)
#define PWM_REGS_PWM_OUTPUT_2_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_2_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_2                                                   (PWM_REGS_BASE + 0x7c)
#define PWM_REGS_PWM_INIT_2_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_2_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_2_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_2_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_PWM_DURATION_3                                               (PWM_REGS_BASE + 0x80)
#define PWM_REGS_PWM_DURATION_3_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_3_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_3_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_3_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_3                                          (PWM_REGS_BASE + 0x84)
#define PWM_REGS_PWM_HIGH_DURATION_3_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_3_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_3_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_3_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_3                                                 (PWM_REGS_BASE + 0x88)
#define PWM_REGS_PWM_OUTPUT_3_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_3_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_3                                                   (PWM_REGS_BASE + 0x8c)
#define PWM_REGS_PWM_INIT_3_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_3_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_3_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_3_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_PWM_DURATION_4                                               (PWM_REGS_BASE + 0x90)
#define PWM_REGS_PWM_DURATION_4_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_4_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_4_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_4_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_4                                          (PWM_REGS_BASE + 0x94)
#define PWM_REGS_PWM_HIGH_DURATION_4_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_4_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_4_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_4_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_4                                                 (PWM_REGS_BASE + 0x98)
#define PWM_REGS_PWM_OUTPUT_4_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_4_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_4                                                   (PWM_REGS_BASE + 0x9c)
#define PWM_REGS_PWM_INIT_4_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_4_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_4_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_4_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_PWM_DURATION_5                                               (PWM_REGS_BASE + 0xa0)
#define PWM_REGS_PWM_DURATION_5_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_5_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_5_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_5_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_5                                          (PWM_REGS_BASE + 0xa4)
#define PWM_REGS_PWM_HIGH_DURATION_5_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_5_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_5_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_5_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_5                                                 (PWM_REGS_BASE + 0xa8)
#define PWM_REGS_PWM_OUTPUT_5_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_5_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_5                                                   (PWM_REGS_BASE + 0xac)
#define PWM_REGS_PWM_INIT_5_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_5_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_5_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_5_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_PWM_DURATION_6                                               (PWM_REGS_BASE + 0xb0)
#define PWM_REGS_PWM_DURATION_6_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_6_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_6_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_6_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_6                                          (PWM_REGS_BASE + 0xb4)
#define PWM_REGS_PWM_HIGH_DURATION_6_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_6_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_6_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_6_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_6                                                 (PWM_REGS_BASE + 0xb8)
#define PWM_REGS_PWM_OUTPUT_6_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_6_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_6                                                   (PWM_REGS_BASE + 0xbc)
#define PWM_REGS_PWM_INIT_6_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_6_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_6_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_6_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_PWM_DURATION_7                                               (PWM_REGS_BASE + 0xc0)
#define PWM_REGS_PWM_DURATION_7_DEFAULT                                       0x1
#define PWM_REGS_PWM_DURATION_7_DURATION                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_DURATION_7_DURATION_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_DURATION_7_DURATION_SHIFT                                (0)


#define PWM_REGS_PWM_HIGH_DURATION_7                                          (PWM_REGS_BASE + 0xc4)
#define PWM_REGS_PWM_HIGH_DURATION_7_DEFAULT                                  0x1
#define PWM_REGS_PWM_HIGH_DURATION_7_DURATION                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_HIGH_DURATION_7_DURATION_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_HIGH_DURATION_7_DURATION_SHIFT                           (0)


#define PWM_REGS_PWM_OUTPUT_7                                                 (PWM_REGS_BASE + 0xc8)
#define PWM_REGS_PWM_OUTPUT_7_DEFAULT                                         0x0
#define PWM_REGS_PWM_OUTPUT_7_OUTPUT                                          (Bit0)


#define PWM_REGS_PWM_INIT_7                                                   (PWM_REGS_BASE + 0xcc)
#define PWM_REGS_PWM_INIT_7_DEFAULT                                           0x0
#define PWM_REGS_PWM_INIT_7_INIT_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_PWM_INIT_7_INIT_VAL_MASK                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_PWM_INIT_7_INIT_VAL_SHIFT                                    (0)


#define PWM_REGS_CRC_MISC_CTRL                                                (PWM_REGS_BASE + 0x180)
#define PWM_REGS_CRC_MISC_CTRL_DEFAULT                                        0x100
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_CLK_ENABLE                             (Bit0)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_ENABLE                                 (Bit1)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_START                                  (Bit2)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_STOP                                   (Bit3)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_SHIFTIN_BIT_ORDER                      (Bit4)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_SHIFTIN_BYTE_ORDER                     (Bit5)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_FINAL_BIT_REVERSE                      (Bit6)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_FINAL_BYTE_REVERSE                     (Bit7)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_FINAL_APPEND_ZERO                      (Bit8)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_DMA_ENABLE                             (Bit9)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_UNKNOWN_INPUT_LENGTH                   (Bit10)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_CLR_TOTAL_BYTE_CNT                     (Bit11)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_POLY_ORDER                             (Bit16+Bit17)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_POLY_ORDER_MASK                        (Bit1+Bit0)
#define PWM_REGS_CRC_MISC_CTRL_CTL_CRC_POLY_ORDER_SHIFT                       (16)


#define PWM_REGS_CRC_POLY                                                     (PWM_REGS_BASE + 0x190)
#define PWM_REGS_CRC_POLY_DEFAULT                                             0x0
#define PWM_REGS_CRC_POLY_CTL_CRC_POLY                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_POLY_CTL_CRC_POLY_MASK                                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_POLY_CTL_CRC_POLY_SHIFT                                  (0)


#define PWM_REGS_CRC_INIT_VAL                                                 (PWM_REGS_BASE + 0x194)
#define PWM_REGS_CRC_INIT_VAL_DEFAULT                                         0x0
#define PWM_REGS_CRC_INIT_VAL_CTL_CRC_INIT_VAL                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_INIT_VAL_CTL_CRC_INIT_VAL_MASK                           (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_INIT_VAL_CTL_CRC_INIT_VAL_SHIFT                          (0)


#define PWM_REGS_CRC_INIT_XOR_VAL                                             (PWM_REGS_BASE + 0x198)
#define PWM_REGS_CRC_INIT_XOR_VAL_DEFAULT                                     0x0
#define PWM_REGS_CRC_INIT_XOR_VAL_CTL_CRC_INIT_XOR_VAL                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_INIT_XOR_VAL_CTL_CRC_INIT_XOR_VAL_MASK                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_INIT_XOR_VAL_CTL_CRC_INIT_XOR_VAL_SHIFT                  (0)


#define PWM_REGS_CRC_FINAL_XOR_VAL                                            (PWM_REGS_BASE + 0x19c)
#define PWM_REGS_CRC_FINAL_XOR_VAL_DEFAULT                                    0x0
#define PWM_REGS_CRC_FINAL_XOR_VAL_CTL_CRC_FINAL_XOR_VAL                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_FINAL_XOR_VAL_CTL_CRC_FINAL_XOR_VAL_MASK                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_FINAL_XOR_VAL_CTL_CRC_FINAL_XOR_VAL_SHIFT                (0)


#define PWM_REGS_CRC_INPUT_INFO                                               (PWM_REGS_BASE + 0x1c0)
#define PWM_REGS_CRC_INPUT_INFO_DEFAULT                                       0x0
#define PWM_REGS_CRC_INPUT_INFO_CTL_CRC_INPUT_NUM_BYTE                        (Bit0+Bit1)
#define PWM_REGS_CRC_INPUT_INFO_CTL_CRC_INPUT_NUM_BYTE_MASK                   (Bit1+Bit0)
#define PWM_REGS_CRC_INPUT_INFO_CTL_CRC_INPUT_NUM_BYTE_SHIFT                  (0)
#define PWM_REGS_CRC_INPUT_INFO_CTL_CRC_INPUT_LAST                            (Bit2)
#define PWM_REGS_CRC_INPUT_INFO_STS_CRC_WAIT_INPUT                            (Bit3)
#define PWM_REGS_CRC_INPUT_INFO_CTL_CRC_INPUT_TOTAL_NUM_BYTE                  (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_INPUT_INFO_CTL_CRC_INPUT_TOTAL_NUM_BYTE_MASK             (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_INPUT_INFO_CTL_CRC_INPUT_TOTAL_NUM_BYTE_SHIFT            (4)


#define PWM_REGS_CRC_INPUT                                                    (PWM_REGS_BASE + 0x1c4)
#define PWM_REGS_CRC_INPUT_DEFAULT                                            0x0
#define PWM_REGS_CRC_INPUT_CTL_CRC_INPUT_DATA                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_INPUT_CTL_CRC_INPUT_DATA_MASK                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_INPUT_CTL_CRC_INPUT_DATA_SHIFT                           (0)


#define PWM_REGS_CRC_STATUS                                                   (PWM_REGS_BASE + 0x1e0)
#define PWM_REGS_CRC_STATUS_DEFAULT                                           0x0
#define PWM_REGS_CRC_STATUS_STS_CRC_CURR_STATUS                               (Bit0+Bit1+Bit2+Bit3)
#define PWM_REGS_CRC_STATUS_STS_CRC_CURR_STATUS_MASK                          (Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_STATUS_STS_CRC_CURR_STATUS_SHIFT                         (0)
#define PWM_REGS_CRC_STATUS_STS_CRC_DONE                                      (Bit8)


#define PWM_REGS_CRC_BYTE_CNT                                                 (PWM_REGS_BASE + 0x1e4)
#define PWM_REGS_CRC_BYTE_CNT_DEFAULT                                         0x0
#define PWM_REGS_CRC_BYTE_CNT_STS_CRC_CURR_BYTE_CNT                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define PWM_REGS_CRC_BYTE_CNT_STS_CRC_CURR_BYTE_CNT_MASK                      (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_BYTE_CNT_STS_CRC_CURR_BYTE_CNT_SHIFT                     (0)


#define PWM_REGS_CRC_LFSR                                                     (PWM_REGS_BASE + 0x1e8)
#define PWM_REGS_CRC_LFSR_DEFAULT                                             0x0
#define PWM_REGS_CRC_LFSR_STS_CRC_CURR_LFSR_VAL                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_LFSR_STS_CRC_CURR_LFSR_VAL_MASK                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_LFSR_STS_CRC_CURR_LFSR_VAL_SHIFT                         (0)


#define PWM_REGS_CRC_VALUE                                                    (PWM_REGS_BASE + 0x1f0)
#define PWM_REGS_CRC_VALUE_DEFAULT                                            0x0
#define PWM_REGS_CRC_VALUE_STS_CRC_VAL                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define PWM_REGS_CRC_VALUE_STS_CRC_VAL_MASK                                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define PWM_REGS_CRC_VALUE_STS_CRC_VAL_SHIFT                                  (0)


#endif // _PWM_REGS_DEFINES_H

