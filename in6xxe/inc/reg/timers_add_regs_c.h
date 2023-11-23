#ifndef _TIMERS_ADD_REGS_DEFINES_H
#define _TIMERS_ADD_REGS_DEFINES_H
/* **************************** */
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_STATUS                                                (TIMERS_ADD_REGS_BASE + 0x0)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_STATUS_DEFAULT                                        0x0
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_STATUS_INTR                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_STATUS_INTR_MASK                                      (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_STATUS_INTR_SHIFT                                     (0)


#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_STATUS                                           (TIMERS_ADD_REGS_BASE + 0x4)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_STATUS_DEFAULT                                   0x0
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_STATUS_INTR                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_STATUS_INTR_MASK                                 (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_STATUS_INTR_SHIFT                                (0)


#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_CLEAR                                                 (TIMERS_ADD_REGS_BASE + 0x8)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_CLEAR_DEFAULT                                         0x0
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_CLEAR_INTR                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_CLEAR_INTR_MASK                                       (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_CLEAR_INTR_SHIFT                                      (0)


#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_SET                                                   (TIMERS_ADD_REGS_BASE + 0xc)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_SET_DEFAULT                                           0x0
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_SET_INTR                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_SET_INTR_MASK                                         (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_SET_INTR_SHIFT                                        (0)


#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_SET                                              (TIMERS_ADD_REGS_BASE + 0x10)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_SET_DEFAULT                                      0x0
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_SET_INTR                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_SET_INTR_MASK                                    (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_SET_INTR_SHIFT                                   (0)


#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_CLEAR                                            (TIMERS_ADD_REGS_BASE + 0x14)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_CLEAR_DEFAULT                                    0x0
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_CLEAR_INTR                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_CLEAR_INTR_MASK                                  (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER0_MISC_INTR_MASK_CLEAR_INTR_SHIFT                                 (0)


#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL                                                       (TIMERS_ADD_REGS_BASE + 0x40)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_DEFAULT                                               0x0
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_ENABLE                                     (Bit0)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INTR_RESET                                 (Bit1)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_SHM_IF_INTR_RESET                                 (Bit2)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INDIVIDUAL_EN                              (Bit4+Bit5+Bit6+Bit7)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INDIVIDUAL_EN_MASK                         (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INDIVIDUAL_EN_SHIFT                        (4)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_ORG_TIMERS_INDIVIDUAL_EN                          (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_ORG_TIMERS_INDIVIDUAL_EN_MASK                     (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_ORG_TIMERS_INDIVIDUAL_EN_SHIFT                    (8)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_MANUAL_MODE                                (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_MANUAL_MODE_MASK                           (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_MANUAL_MODE_SHIFT                          (16)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_AUTO_RELOAD                                (Bit24+Bit25+Bit26+Bit27)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_AUTO_RELOAD_MASK                           (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_AUTO_RELOAD_SHIFT                          (24)


#define TIMERS_ADD_REGS_MANUAL_TICK                                                            (TIMERS_ADD_REGS_BASE + 0x48)
#define TIMERS_ADD_REGS_MANUAL_TICK_DEFAULT                                                    0x0
#define TIMERS_ADD_REGS_MANUAL_TICK_CTL_TIMER_MANUAL_TICK                                      (Bit0+Bit1+Bit2+Bit3)
#define TIMERS_ADD_REGS_MANUAL_TICK_CTL_TIMER_MANUAL_TICK_MASK                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_MANUAL_TICK_CTL_TIMER_MANUAL_TICK_SHIFT                                (0)
#define TIMERS_ADD_REGS_MANUAL_TICK_CTL_ORG_TIMER_MANUAL_TICK                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_MANUAL_TICK_CTL_ORG_TIMER_MANUAL_TICK_MASK                             (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_MANUAL_TICK_CTL_ORG_TIMER_MANUAL_TICK_SHIFT                            (8)


#define TIMERS_ADD_REGS_TOUCH                                                                  (TIMERS_ADD_REGS_BASE + 0x50)
#define TIMERS_ADD_REGS_TOUCH_DEFAULT                                                          0x0
#define TIMERS_ADD_REGS_TOUCH_CTL_TIMER_TOUCH                                                  (Bit0+Bit1+Bit2+Bit3)
#define TIMERS_ADD_REGS_TOUCH_CTL_TIMER_TOUCH_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TOUCH_CTL_TIMER_TOUCH_SHIFT                                            (0)
#define TIMERS_ADD_REGS_TOUCH_CTL_ORG_TIMER_TOUCH                                              (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TOUCH_CTL_ORG_TIMER_TOUCH_MASK                                         (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TOUCH_CTL_ORG_TIMER_TOUCH_SHIFT                                        (8)


#define TIMERS_ADD_REGS_ADV_TIMER_EMIT_CLR                                                     (TIMERS_ADD_REGS_BASE + 0x54)
#define TIMERS_ADD_REGS_ADV_TIMER_EMIT_CLR_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER0_EMIT_CLR                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_ADD_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER0_EMIT_CLR_MASK                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER0_EMIT_CLR_SHIFT                           (0)


#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR                                                        (TIMERS_ADD_REGS_BASE + 0x58)
#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR_DEFAULT                                                0x0
#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR_CTL_TIMEOUT_IRQ_CLR                                    (Bit0+Bit1+Bit2+Bit3)
#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR_CTL_TIMEOUT_IRQ_CLR_MASK                               (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR_CTL_TIMEOUT_IRQ_CLR_SHIFT                              (0)
#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR_CTL_ORG_TIME_TIMEOUT_IRQ_CLR                           (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR_CTL_ORG_TIME_TIMEOUT_IRQ_CLR_MASK                      (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMEOUT_IRQ_CLR_CTL_ORG_TIME_TIMEOUT_IRQ_CLR_SHIFT                     (8)


#define TIMERS_ADD_REGS_TIMER_SNAPSHOT                                                         (TIMERS_ADD_REGS_BASE + 0x60)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_DEFAULT                                                 0x0
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_TIMER_SNAPSHOT                                      (Bit0+Bit1+Bit2+Bit3)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_TIMER_SNAPSHOT_MASK                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_TIMER_SNAPSHOT_SHIFT                                (0)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_ORG_TIMER_SNAPSHOT                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_ORG_TIMER_SNAPSHOT_MASK                             (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_ORG_TIMER_SNAPSHOT_SHIFT                            (8)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_0_CAP_OUTPUT_SEL                          (Bit16+Bit17+Bit18)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_0_CAP_OUTPUT_SEL_MASK                     (Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_0_CAP_OUTPUT_SEL_SHIFT                    (16)


#define TIMERS_ADD_REGS_MANUAL_CAP_TRIG                                                        (TIMERS_ADD_REGS_BASE + 0x68)
#define TIMERS_ADD_REGS_MANUAL_CAP_TRIG_DEFAULT                                                0x0
#define TIMERS_ADD_REGS_MANUAL_CAP_TRIG_CTL_MANUAL_CAP_TRIG                                    (Bit0+Bit1)
#define TIMERS_ADD_REGS_MANUAL_CAP_TRIG_CTL_MANUAL_CAP_TRIG_MASK                               (Bit1+Bit0)
#define TIMERS_ADD_REGS_MANUAL_CAP_TRIG_CTL_MANUAL_CAP_TRIG_SHIFT                              (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL                                                       (TIMERS_ADD_REGS_BASE + 0x80)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_DEFAULT                                               0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_ENABLE                                                (Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE                                      (Bit4+Bit5+Bit6+Bit7)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_MASK                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT                                (4)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE                                      (Bit8+Bit9+Bit10+Bit11)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_MASK                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT                                (8)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE                                           (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_MASK                                      (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_SHIFT                                     (12)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT                                        (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_SHIFT                                  (20)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2                                          (Bit28+Bit29)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_MASK                                     (Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_SHIFT                                    (28)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2                                       (Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2_MASK                                  (Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2_SHIFT                                 (30)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1                                                      (TIMERS_ADD_REGS_BASE + 0x84)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_DEFAULT                                              0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_EMIT_AUTO_CLR                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_EMIT_AUTO_CLR_MASK                                   (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_EMIT_AUTO_CLR_SHIFT                                  (0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_CAP_REDGE_AS_TOUCH                                   (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_CAP_REDGE_AS_TOUCH_MASK                              (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_CAP_REDGE_AS_TOUCH_SHIFT                             (12)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_CAP_FEDGE_AS_TOUCH                                   (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_CAP_FEDGE_AS_TOUCH_MASK                              (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CTRL1_CAP_FEDGE_AS_TOUCH_SHIFT                             (16)


#define TIMERS_ADD_REGS_ADV_TIMER_0_INIT_VAL                                                   (TIMERS_ADD_REGS_BASE + 0x88)
#define TIMERS_ADD_REGS_ADV_TIMER_0_INIT_VAL_DEFAULT                                           0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_INIT_VAL_VALUE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_INIT_VAL_VALUE_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_INIT_VAL_VALUE_SHIFT                                       (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CURR_VAL                                                   (TIMERS_ADD_REGS_BASE + 0x8c)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CURR_VAL_DEFAULT                                           0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CURR_VAL_VALUE                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CURR_VAL_VALUE_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CURR_VAL_VALUE_SHIFT                                       (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL                                                (TIMERS_ADD_REGS_BASE + 0x94)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_DEFAULT                                        0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_0                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_0_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_0_SHIFT                                    (0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_1                                          (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_1_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_1_SHIFT                                    (8)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_2                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_2_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_2_SHIFT                                    (16)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_3                                          (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_3_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_3_SHIFT                                    (24)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_0                                                  (TIMERS_ADD_REGS_BASE + 0x98)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_0_DEFAULT                                          0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_0_VALUE                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_0_VALUE_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_0_VALUE_SHIFT                                      (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_1                                                  (TIMERS_ADD_REGS_BASE + 0x9c)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_1_DEFAULT                                          0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_1_VALUE                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_1_VALUE_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_1_VALUE_SHIFT                                      (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_2                                                  (TIMERS_ADD_REGS_BASE + 0xa0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_2_DEFAULT                                          0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_2_VALUE                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_2_VALUE_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_2_VALUE_SHIFT                                      (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_3                                                  (TIMERS_ADD_REGS_BASE + 0xa4)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_3_DEFAULT                                          0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_3_VALUE                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_3_VALUE_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_CAP_VAL_3_VALUE_SHIFT                                      (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_0                                                     (TIMERS_ADD_REGS_BASE + 0xa8)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_0_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_0_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_0_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_0_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_1                                                     (TIMERS_ADD_REGS_BASE + 0xac)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_1_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_1_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_1_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_1_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_2                                                     (TIMERS_ADD_REGS_BASE + 0xb0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_2_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_2_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_2_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_2_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_3                                                     (TIMERS_ADD_REGS_BASE + 0xb4)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_3_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_3_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_3_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_3_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_4                                                     (TIMERS_ADD_REGS_BASE + 0xb8)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_4_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_4_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_4_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_4_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_5                                                     (TIMERS_ADD_REGS_BASE + 0xbc)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_5_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_5_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_5_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_5_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_6                                                     (TIMERS_ADD_REGS_BASE + 0xc0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_6_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_6_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_6_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_6_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_7                                                     (TIMERS_ADD_REGS_BASE + 0xc4)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_7_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_7_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_7_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_7_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS                                            (TIMERS_ADD_REGS_BASE + 0xc8)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_DEFAULT                                    0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_SIG                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_SIG_MASK                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_SIG_SHIFT                             (0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_TOG_SIG                               (Bit10+Bit11+Bit12+Bit13+Bit14)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_TOG_SIG_MASK                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_TOG_SIG_SHIFT                         (10)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CLR                                                   (TIMERS_ADD_REGS_BASE + 0xcc)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CLR_DEFAULT                                           0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CLR_CLR                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CLR_CLR_MASK                                          (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CLR_CLR_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_8                                                     (TIMERS_ADD_REGS_BASE + 0xd0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_8_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_8_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_8_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_8_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_9                                                     (TIMERS_ADD_REGS_BASE + 0xd4)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_9_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_9_VALUE                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_9_VALUE_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_9_VALUE_SHIFT                                         (0)


#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL                                                  (TIMERS_ADD_REGS_BASE + 0xd8)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_DEFAULT                                          0x0
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_DEFAULT                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_DEFAULT_MASK                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_DEFAULT_SHIFT                           (0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT                          (Bit10+Bit11+Bit12+Bit13+Bit14)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT_MASK                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT_SHIFT                    (10)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY                      (Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY_MASK                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY_SHIFT                (15)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_TOGGLE                                  (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_TOGGLE_MASK                             (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_TOGGLE_SHIFT                            (20)


#define TIMERS_ADD_REGS_BASIC_TIMER_1_CTRL                                                     (TIMERS_ADD_REGS_BASE + 0x100)
#define TIMERS_ADD_REGS_BASIC_TIMER_1_CTRL_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_1_CTRL_ENABLE                                              (Bit0)


#define TIMERS_ADD_REGS_BASIC_TIMER_1_INIT_VAL                                                 (TIMERS_ADD_REGS_BASE + 0x108)
#define TIMERS_ADD_REGS_BASIC_TIMER_1_INIT_VAL_DEFAULT                                         0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_1_INIT_VAL_VALUE                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_BASIC_TIMER_1_INIT_VAL_VALUE_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_BASIC_TIMER_1_INIT_VAL_VALUE_SHIFT                                     (0)


#define TIMERS_ADD_REGS_BASIC_TIMER_1_CURR_VAL                                                 (TIMERS_ADD_REGS_BASE + 0x10c)
#define TIMERS_ADD_REGS_BASIC_TIMER_1_CURR_VAL_DEFAULT                                         0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_1_CURR_VAL_VALUE                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_BASIC_TIMER_1_CURR_VAL_VALUE_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_BASIC_TIMER_1_CURR_VAL_VALUE_SHIFT                                     (0)


#define TIMERS_ADD_REGS_BASIC_TIMER_2_CTRL                                                     (TIMERS_ADD_REGS_BASE + 0x140)
#define TIMERS_ADD_REGS_BASIC_TIMER_2_CTRL_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_2_CTRL_ENABLE                                              (Bit0)


#define TIMERS_ADD_REGS_BASIC_TIMER_2_INIT_VAL                                                 (TIMERS_ADD_REGS_BASE + 0x148)
#define TIMERS_ADD_REGS_BASIC_TIMER_2_INIT_VAL_DEFAULT                                         0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_2_INIT_VAL_VALUE                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_BASIC_TIMER_2_INIT_VAL_VALUE_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_BASIC_TIMER_2_INIT_VAL_VALUE_SHIFT                                     (0)


#define TIMERS_ADD_REGS_BASIC_TIMER_2_CURR_VAL                                                 (TIMERS_ADD_REGS_BASE + 0x14c)
#define TIMERS_ADD_REGS_BASIC_TIMER_2_CURR_VAL_DEFAULT                                         0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_2_CURR_VAL_VALUE                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_BASIC_TIMER_2_CURR_VAL_VALUE_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_BASIC_TIMER_2_CURR_VAL_VALUE_SHIFT                                     (0)


#define TIMERS_ADD_REGS_BASIC_TIMER_3_CTRL                                                     (TIMERS_ADD_REGS_BASE + 0x180)
#define TIMERS_ADD_REGS_BASIC_TIMER_3_CTRL_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_3_CTRL_ENABLE                                              (Bit0)


#define TIMERS_ADD_REGS_BASIC_TIMER_3_INIT_VAL                                                 (TIMERS_ADD_REGS_BASE + 0x188)
#define TIMERS_ADD_REGS_BASIC_TIMER_3_INIT_VAL_DEFAULT                                         0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_3_INIT_VAL_VALUE                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_BASIC_TIMER_3_INIT_VAL_VALUE_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_BASIC_TIMER_3_INIT_VAL_VALUE_SHIFT                                     (0)


#define TIMERS_ADD_REGS_BASIC_TIMER_3_CURR_VAL                                                 (TIMERS_ADD_REGS_BASE + 0x18c)
#define TIMERS_ADD_REGS_BASIC_TIMER_3_CURR_VAL_DEFAULT                                         0x0
#define TIMERS_ADD_REGS_BASIC_TIMER_3_CURR_VAL_VALUE                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_BASIC_TIMER_3_CURR_VAL_VALUE_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_BASIC_TIMER_3_CURR_VAL_VALUE_SHIFT                                     (0)


#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL                                                       (TIMERS_ADD_REGS_BASE + 0x1c0)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_DEFAULT                                               0x0
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_EN                                    (Bit0)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_RESET                                 (Bit1)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1                        (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1_MASK                   (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1_SHIFT                  (4)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH                       (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH_MASK                  (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH_SHIFT                 (16)


#define TIMERS_ADD_REGS_EMIT_SHM_IF_VAL                                                        (TIMERS_ADD_REGS_BASE + 0x1c8)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_VAL_DEFAULT                                                0x0
#define TIMERS_ADD_REGS_EMIT_SHM_IF_VAL_CTL_EMIT_SHM_IF_VAL                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_VAL_CTL_EMIT_SHM_IF_VAL_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_EMIT_SHM_IF_VAL_CTL_EMIT_SHM_IF_VAL_SHIFT                              (0)


#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL                                                       (TIMERS_ADD_REGS_BASE + 0x1d0)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_DEFAULT                                               0x0
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM_MASK                  (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM_SHIFT                 (0)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO                  (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO_MASK             (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO_SHIFT            (12)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO                      (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO_MASK                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO_SHIFT                (16)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_FIFO_UDFL                             (Bit24)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_FIFO_OVFL                             (Bit25)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_REG_FIFO_UDFL                         (Bit26)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_REG_FIFO_OVFL                         (Bit27)
#define TIMERS_ADD_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_ALMOST_EMPTY                          (Bit29)


#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL                                                        (TIMERS_ADD_REGS_BASE + 0x1e0)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_DEFAULT                                                0x0
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_EN                                      (Bit0)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_RESET                                   (Bit1)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1                          (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1_MASK                     (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1_SHIFT                    (4)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH_MASK                     (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH_SHIFT                    (16)


#define TIMERS_ADD_REGS_CAP_SHM_IF_VAL                                                         (TIMERS_ADD_REGS_BASE + 0x1e8)
#define TIMERS_ADD_REGS_CAP_SHM_IF_VAL_DEFAULT                                                 0x0
#define TIMERS_ADD_REGS_CAP_SHM_IF_VAL_STS_CAP_SHM_IF_VAL                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_ADD_REGS_CAP_SHM_IF_VAL_STS_CAP_SHM_IF_VAL_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_CAP_SHM_IF_VAL_STS_CAP_SHM_IF_VAL_SHIFT                                (0)


#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL                                                        (TIMERS_ADD_REGS_BASE + 0x1f0)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_DEFAULT                                                0x0
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM_MASK                    (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM_SHIFT                   (0)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO                    (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO_MASK               (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO_SHIFT              (12)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO                        (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO_SHIFT                  (16)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_FIFO_UDFL                               (Bit24)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_FIFO_OVFL                               (Bit25)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_REG_FIFO_UDFL                           (Bit26)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_REG_FIFO_OVFL                           (Bit27)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_ALMOST_FULL                             (Bit29)
#define TIMERS_ADD_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_DATA_RDY                                (Bit31)


#define TIMERS_ADD_REGS_SHM_IF_INTR_STATUS                                                     (TIMERS_ADD_REGS_BASE + 0x200)
#define TIMERS_ADD_REGS_SHM_IF_INTR_STATUS_DEFAULT                                             0x0
#define TIMERS_ADD_REGS_SHM_IF_INTR_STATUS_INTR                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_ADD_REGS_SHM_IF_INTR_STATUS_INTR_MASK                                           (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_SHM_IF_INTR_STATUS_INTR_SHIFT                                          (0)


#define TIMERS_ADD_REGS_SHM_IF_INTR_CLEAR                                                      (TIMERS_ADD_REGS_BASE + 0x208)
#define TIMERS_ADD_REGS_SHM_IF_INTR_CLEAR_DEFAULT                                              0x0
#define TIMERS_ADD_REGS_SHM_IF_INTR_CLEAR_INTR                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_ADD_REGS_SHM_IF_INTR_CLEAR_INTR_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_ADD_REGS_SHM_IF_INTR_CLEAR_INTR_SHIFT                                           (0)


#endif // _TIMERS_ADD_REGS_DEFINES_H

