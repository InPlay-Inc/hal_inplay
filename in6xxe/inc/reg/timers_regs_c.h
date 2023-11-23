#ifndef _TIMERS_REGS_DEFINES_H
#define _TIMERS_REGS_DEFINES_H
/* **************************** */
#define TIMERS_REGS_TIMER0_MISC_INTR_STATUS                                                                (TIMERS_REGS_BASE + 0x0)
#define TIMERS_REGS_TIMER0_MISC_INTR_STATUS_DEFAULT                                                        0x0
#define TIMERS_REGS_TIMER0_MISC_INTR_STATUS_INTR                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER0_MISC_INTR_STATUS_INTR_MASK                                                      (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER0_MISC_INTR_STATUS_INTR_SHIFT                                                     (0)


#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_STATUS                                                           (TIMERS_REGS_BASE + 0x4)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_STATUS_DEFAULT                                                   0x0
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_STATUS_INTR                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_STATUS_INTR_MASK                                                 (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_STATUS_INTR_SHIFT                                                (0)


#define TIMERS_REGS_TIMER0_MISC_INTR_CLEAR                                                                 (TIMERS_REGS_BASE + 0x8)
#define TIMERS_REGS_TIMER0_MISC_INTR_CLEAR_DEFAULT                                                         0x0
#define TIMERS_REGS_TIMER0_MISC_INTR_CLEAR_INTR                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER0_MISC_INTR_CLEAR_INTR_MASK                                                       (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER0_MISC_INTR_CLEAR_INTR_SHIFT                                                      (0)


#define TIMERS_REGS_TIMER0_MISC_INTR_SET                                                                   (TIMERS_REGS_BASE + 0xc)
#define TIMERS_REGS_TIMER0_MISC_INTR_SET_DEFAULT                                                           0x0
#define TIMERS_REGS_TIMER0_MISC_INTR_SET_INTR                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER0_MISC_INTR_SET_INTR_MASK                                                         (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER0_MISC_INTR_SET_INTR_SHIFT                                                        (0)


#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET                                                              (TIMERS_REGS_BASE + 0x10)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET_DEFAULT                                                      0x0
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET_INTR                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET_INTR_MASK                                                    (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_SET_INTR_SHIFT                                                   (0)


#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_CLEAR                                                            (TIMERS_REGS_BASE + 0x14)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_CLEAR_DEFAULT                                                    0x0
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_CLEAR_INTR                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_CLEAR_INTR_MASK                                                  (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER0_MISC_INTR_MASK_CLEAR_INTR_SHIFT                                                 (0)


#define TIMERS_REGS_TIMER1_MISC_INTR_STATUS                                                                (TIMERS_REGS_BASE + 0x20)
#define TIMERS_REGS_TIMER1_MISC_INTR_STATUS_DEFAULT                                                        0x0
#define TIMERS_REGS_TIMER1_MISC_INTR_STATUS_INTR                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER1_MISC_INTR_STATUS_INTR_MASK                                                      (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER1_MISC_INTR_STATUS_INTR_SHIFT                                                     (0)


#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_STATUS                                                           (TIMERS_REGS_BASE + 0x24)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_STATUS_DEFAULT                                                   0x0
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_STATUS_INTR                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_STATUS_INTR_MASK                                                 (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_STATUS_INTR_SHIFT                                                (0)


#define TIMERS_REGS_TIMER1_MISC_INTR_CLEAR                                                                 (TIMERS_REGS_BASE + 0x28)
#define TIMERS_REGS_TIMER1_MISC_INTR_CLEAR_DEFAULT                                                         0x0
#define TIMERS_REGS_TIMER1_MISC_INTR_CLEAR_INTR                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER1_MISC_INTR_CLEAR_INTR_MASK                                                       (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER1_MISC_INTR_CLEAR_INTR_SHIFT                                                      (0)


#define TIMERS_REGS_TIMER1_MISC_INTR_SET                                                                   (TIMERS_REGS_BASE + 0x2c)
#define TIMERS_REGS_TIMER1_MISC_INTR_SET_DEFAULT                                                           0x0
#define TIMERS_REGS_TIMER1_MISC_INTR_SET_INTR                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER1_MISC_INTR_SET_INTR_MASK                                                         (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER1_MISC_INTR_SET_INTR_SHIFT                                                        (0)


#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET                                                              (TIMERS_REGS_BASE + 0x30)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET_DEFAULT                                                      0x0
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET_INTR                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET_INTR_MASK                                                    (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_SET_INTR_SHIFT                                                   (0)


#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_CLEAR                                                            (TIMERS_REGS_BASE + 0x34)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_CLEAR_DEFAULT                                                    0x0
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_CLEAR_INTR                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_CLEAR_INTR_MASK                                                  (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER1_MISC_INTR_MASK_CLEAR_INTR_SHIFT                                                 (0)


#define TIMERS_REGS_TIMERS_MISC_CTRL                                                                       (TIMERS_REGS_BASE + 0x80)
#define TIMERS_REGS_TIMERS_MISC_CTRL_DEFAULT                                                               0x0
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_ENABLE                                                     (Bit0)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INTR_RESET                                                 (Bit1)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_SHM_IF_INTR_RESET                                                 (Bit2)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INDIVIDUAL_EN                                              (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INDIVIDUAL_EN_MASK                                         (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_INDIVIDUAL_EN_SHIFT                                        (4)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_ADD_TIMERS_INDIVIDUAL_EN                                          (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_ADD_TIMERS_INDIVIDUAL_EN_MASK                                     (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_ADD_TIMERS_INDIVIDUAL_EN_SHIFT                                    (12)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_MANUAL_MODE                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_MANUAL_MODE_MASK                                           (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_MANUAL_MODE_SHIFT                                          (16)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_AUTO_RELOAD                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_AUTO_RELOAD_MASK                                           (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMERS_MISC_CTRL_CTL_TIMERS_AUTO_RELOAD_SHIFT                                          (24)


#define TIMERS_REGS_MANUAL_TICK                                                                            (TIMERS_REGS_BASE + 0x88)
#define TIMERS_REGS_MANUAL_TICK_DEFAULT                                                                    0x0
#define TIMERS_REGS_MANUAL_TICK_CTL_TIMER_MANUAL_TICK                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define TIMERS_REGS_MANUAL_TICK_CTL_TIMER_MANUAL_TICK_MASK                                                 (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_MANUAL_TICK_CTL_TIMER_MANUAL_TICK_SHIFT                                                (0)
#define TIMERS_REGS_MANUAL_TICK_CTL_ADD_TIMER_MANUAL_TICK                                                  (Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_MANUAL_TICK_CTL_ADD_TIMER_MANUAL_TICK_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_MANUAL_TICK_CTL_ADD_TIMER_MANUAL_TICK_SHIFT                                            (8)


#define TIMERS_REGS_TOUCH                                                                                  (TIMERS_REGS_BASE + 0x90)
#define TIMERS_REGS_TOUCH_DEFAULT                                                                          0x0
#define TIMERS_REGS_TOUCH_CTL_TIMER_TOUCH                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define TIMERS_REGS_TOUCH_CTL_TIMER_TOUCH_MASK                                                             (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TOUCH_CTL_TIMER_TOUCH_SHIFT                                                            (0)
#define TIMERS_REGS_TOUCH_CTL_ADD_TIMER_TOUCH                                                              (Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_TOUCH_CTL_ADD_TIMER_TOUCH_MASK                                                         (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TOUCH_CTL_ADD_TIMER_TOUCH_SHIFT                                                        (8)


#define TIMERS_REGS_ADV_TIMER_EMIT_CLR                                                                     (TIMERS_REGS_BASE + 0x94)
#define TIMERS_REGS_ADV_TIMER_EMIT_CLR_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER0_EMIT_CLR                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER0_EMIT_CLR_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER0_EMIT_CLR_SHIFT                                           (0)
#define TIMERS_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER1_EMIT_CLR                                                 (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define TIMERS_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER1_EMIT_CLR_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_EMIT_CLR_CTL_TIMER1_EMIT_CLR_SHIFT                                           (12)


#define TIMERS_REGS_TIMEOUT_IRQ_CLR                                                                        (TIMERS_REGS_BASE + 0x98)
#define TIMERS_REGS_TIMEOUT_IRQ_CLR_DEFAULT                                                                0x0
#define TIMERS_REGS_TIMEOUT_IRQ_CLR_CTL_TIMEOUT_IRQ_CLR                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define TIMERS_REGS_TIMEOUT_IRQ_CLR_CTL_TIMEOUT_IRQ_CLR_MASK                                               (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMEOUT_IRQ_CLR_CTL_TIMEOUT_IRQ_CLR_SHIFT                                              (0)
#define TIMERS_REGS_TIMEOUT_IRQ_CLR_CTL_ADD_TIME_TIMEOUT_IRQ_CLR                                           (Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_TIMEOUT_IRQ_CLR_CTL_ADD_TIME_TIMEOUT_IRQ_CLR_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMEOUT_IRQ_CLR_CTL_ADD_TIME_TIMEOUT_IRQ_CLR_SHIFT                                     (8)


#define TIMERS_REGS_TIMER_SNAPSHOT                                                                         (TIMERS_REGS_BASE + 0xa0)
#define TIMERS_REGS_TIMER_SNAPSHOT_DEFAULT                                                                 0x0
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_TIMER_SNAPSHOT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_TIMER_SNAPSHOT_MASK                                                 (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_TIMER_SNAPSHOT_SHIFT                                                (0)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADD_TIMER_SNAPSHOT                                                  (Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADD_TIMER_SNAPSHOT_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADD_TIMER_SNAPSHOT_SHIFT                                            (8)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_0_CAP_OUTPUT_SEL                                          (Bit12+Bit13+Bit14)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_0_CAP_OUTPUT_SEL_MASK                                     (Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_0_CAP_OUTPUT_SEL_SHIFT                                    (12)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_1_CAP_OUTPUT_SEL                                          (Bit16+Bit17+Bit18)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_1_CAP_OUTPUT_SEL_MASK                                     (Bit2+Bit1+Bit0)
#define TIMERS_REGS_TIMER_SNAPSHOT_CTL_ADV_TIMER_1_CAP_OUTPUT_SEL_SHIFT                                    (16)


#define TIMERS_REGS_MANUAL_CAP_TRIG                                                                        (TIMERS_REGS_BASE + 0xa8)
#define TIMERS_REGS_MANUAL_CAP_TRIG_DEFAULT                                                                0x0
#define TIMERS_REGS_MANUAL_CAP_TRIG_CTL_MANUAL_CAP_TRIG                                                    (Bit0+Bit1)
#define TIMERS_REGS_MANUAL_CAP_TRIG_CTL_MANUAL_CAP_TRIG_MASK                                               (Bit1+Bit0)
#define TIMERS_REGS_MANUAL_CAP_TRIG_CTL_MANUAL_CAP_TRIG_SHIFT                                              (0)


#define TIMERS_REGS_ADV_TIMER_0_CTRL                                                                       (TIMERS_REGS_BASE + 0x100)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_DEFAULT                                                               0x0
#define TIMERS_REGS_ADV_TIMER_0_CTRL_ENABLE                                                                (Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE                                                      (Bit4+Bit5+Bit6+Bit7)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_REDGE_ENABLE_SHIFT                                                (4)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE                                                      (Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_CAP_FEDGE_ENABLE_SHIFT                                                (8)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE                                                           (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_MASK                                                      (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE_SHIFT                                                     (12)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT                                                        (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT_SHIFT                                                  (20)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2                                                          (Bit28+Bit29)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_MASK                                                     (Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_EMIT_ENABLE2_SHIFT                                                    (28)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2                                                       (Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2_MASK                                                  (Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL_TOUCH_CLR_EMIT2_SHIFT                                                 (30)


#define TIMERS_REGS_ADV_TIMER_0_CTRL1                                                                      (TIMERS_REGS_BASE + 0x104)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_DEFAULT                                                              0x0
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_EMIT_AUTO_CLR                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_EMIT_AUTO_CLR_MASK                                                   (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_EMIT_AUTO_CLR_SHIFT                                                  (0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_CAP_REDGE_AS_TOUCH                                                   (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_CAP_REDGE_AS_TOUCH_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_CAP_REDGE_AS_TOUCH_SHIFT                                             (12)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_CAP_FEDGE_AS_TOUCH                                                   (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_CAP_FEDGE_AS_TOUCH_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CTRL1_CAP_FEDGE_AS_TOUCH_SHIFT                                             (16)


#define TIMERS_REGS_ADV_TIMER_0_INIT_VAL                                                                   (TIMERS_REGS_BASE + 0x108)
#define TIMERS_REGS_ADV_TIMER_0_INIT_VAL_DEFAULT                                                           0x0
#define TIMERS_REGS_ADV_TIMER_0_INIT_VAL_VALUE                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_INIT_VAL_VALUE_MASK                                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_INIT_VAL_VALUE_SHIFT                                                       (0)


#define TIMERS_REGS_ADV_TIMER_0_CURR_VAL                                                                   (TIMERS_REGS_BASE + 0x10c)
#define TIMERS_REGS_ADV_TIMER_0_CURR_VAL_DEFAULT                                                           0x0
#define TIMERS_REGS_ADV_TIMER_0_CURR_VAL_VALUE                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_CURR_VAL_VALUE_MASK                                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CURR_VAL_VALUE_SHIFT                                                       (0)


#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL                                                                (TIMERS_REGS_BASE + 0x114)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_DEFAULT                                                        0x0
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_0                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_0_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_0_SHIFT                                                    (0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_1                                                          (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_1_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_1_SHIFT                                                    (8)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_2                                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_2_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_2_SHIFT                                                    (16)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_3                                                          (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_3_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_SIG_SEL_SEL_3_SHIFT                                                    (24)


#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_0                                                                  (TIMERS_REGS_BASE + 0x118)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_0_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_0_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_0_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_0_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_1                                                                  (TIMERS_REGS_BASE + 0x11c)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_1_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_1_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_1_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_1_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_2                                                                  (TIMERS_REGS_BASE + 0x120)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_2_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_2_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_2_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_2_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_3                                                                  (TIMERS_REGS_BASE + 0x124)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_3_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_3_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_3_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_CAP_VAL_3_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_0                                                                     (TIMERS_REGS_BASE + 0x128)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_0_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_0_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_0_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_0_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_1                                                                     (TIMERS_REGS_BASE + 0x12c)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_1_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_1_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_1_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_1_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_2                                                                     (TIMERS_REGS_BASE + 0x130)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_2_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_2_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_2_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_2_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_3                                                                     (TIMERS_REGS_BASE + 0x134)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_3_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_3_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_3_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_3_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_4                                                                     (TIMERS_REGS_BASE + 0x138)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_4_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_4_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_4_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_4_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_5                                                                     (TIMERS_REGS_BASE + 0x13c)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_5_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_5_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_5_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_5_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_6                                                                     (TIMERS_REGS_BASE + 0x140)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_6_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_6_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_6_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_6_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_7                                                                     (TIMERS_REGS_BASE + 0x144)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_7_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_7_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_7_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_7_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS                                                            (TIMERS_REGS_BASE + 0x148)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_DEFAULT                                                    0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_SIG                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_SIG_MASK                                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_SIG_SHIFT                                             (0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_TOG_SIG                                               (Bit10+Bit11+Bit12+Bit13+Bit14)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_TOG_SIG_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_SIG_STATUS_EMIT_TOG_SIG_SHIFT                                         (10)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_CLR                                                                   (TIMERS_REGS_BASE + 0x14c)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CLR_DEFAULT                                                           0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CLR_CLR                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CLR_CLR_MASK                                                          (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CLR_CLR_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_8                                                                     (TIMERS_REGS_BASE + 0x150)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_8_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_8_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_8_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_8_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_9                                                                     (TIMERS_REGS_BASE + 0x154)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_9_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_9_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_9_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_9_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL                                                                  (TIMERS_REGS_BASE + 0x158)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_DEFAULT                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_DEFAULT_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_DEFAULT_SHIFT                                           (0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT                                          (Bit10+Bit11+Bit12+Bit13+Bit14)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT_MASK                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT_SHIFT                                    (10)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY                                      (Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY_MASK                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY_SHIFT                                (15)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_TOGGLE                                                  (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_TOGGLE_MASK                                             (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_0_EMIT_CTRL_EMIT_SIG_TOGGLE_SHIFT                                            (20)


#define TIMERS_REGS_ADV_TIMER_1_CTRL                                                                       (TIMERS_REGS_BASE + 0x180)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_DEFAULT                                                               0x0
#define TIMERS_REGS_ADV_TIMER_1_CTRL_ENABLE                                                                (Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_CAP_REDGE_ENABLE                                                      (Bit4+Bit5+Bit6+Bit7)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_CAP_REDGE_ENABLE_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_CAP_REDGE_ENABLE_SHIFT                                                (4)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_CAP_FEDGE_ENABLE                                                      (Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_CAP_FEDGE_ENABLE_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_CAP_FEDGE_ENABLE_SHIFT                                                (8)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE                                                           (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE_MASK                                                      (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE_SHIFT                                                     (12)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT                                                        (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT_SHIFT                                                  (20)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE2                                                          (Bit28+Bit29)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE2_MASK                                                     (Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_EMIT_ENABLE2_SHIFT                                                    (28)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT2                                                       (Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT2_MASK                                                  (Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL_TOUCH_CLR_EMIT2_SHIFT                                                 (30)


#define TIMERS_REGS_ADV_TIMER_1_CTRL1                                                                      (TIMERS_REGS_BASE + 0x184)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_DEFAULT                                                              0x0
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_EMIT_AUTO_CLR                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_EMIT_AUTO_CLR_MASK                                                   (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_EMIT_AUTO_CLR_SHIFT                                                  (0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_CAP_REDGE_AS_TOUCH                                                   (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_CAP_REDGE_AS_TOUCH_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_CAP_REDGE_AS_TOUCH_SHIFT                                             (12)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_CAP_FEDGE_AS_TOUCH                                                   (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_CAP_FEDGE_AS_TOUCH_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CTRL1_CAP_FEDGE_AS_TOUCH_SHIFT                                             (16)


#define TIMERS_REGS_ADV_TIMER_1_INIT_VAL                                                                   (TIMERS_REGS_BASE + 0x188)
#define TIMERS_REGS_ADV_TIMER_1_INIT_VAL_DEFAULT                                                           0x0
#define TIMERS_REGS_ADV_TIMER_1_INIT_VAL_VALUE                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_INIT_VAL_VALUE_MASK                                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_INIT_VAL_VALUE_SHIFT                                                       (0)


#define TIMERS_REGS_ADV_TIMER_1_CURR_VAL                                                                   (TIMERS_REGS_BASE + 0x18c)
#define TIMERS_REGS_ADV_TIMER_1_CURR_VAL_DEFAULT                                                           0x0
#define TIMERS_REGS_ADV_TIMER_1_CURR_VAL_VALUE                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_CURR_VAL_VALUE_MASK                                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CURR_VAL_VALUE_SHIFT                                                       (0)


#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL                                                                (TIMERS_REGS_BASE + 0x194)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_DEFAULT                                                        0x0
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_0                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_0_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_0_SHIFT                                                    (0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_1                                                          (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_1_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_1_SHIFT                                                    (8)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_2                                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_2_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_2_SHIFT                                                    (16)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_3                                                          (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_3_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_SIG_SEL_SEL_3_SHIFT                                                    (24)


#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_0                                                                  (TIMERS_REGS_BASE + 0x198)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_0_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_0_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_0_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_0_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_1                                                                  (TIMERS_REGS_BASE + 0x19c)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_1_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_1_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_1_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_1_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_2                                                                  (TIMERS_REGS_BASE + 0x1a0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_2_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_2_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_2_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_2_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_3                                                                  (TIMERS_REGS_BASE + 0x1a4)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_3_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_3_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_3_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_CAP_VAL_3_VALUE_SHIFT                                                      (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_0                                                                     (TIMERS_REGS_BASE + 0x1a8)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_0_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_0_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_0_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_0_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_1                                                                     (TIMERS_REGS_BASE + 0x1ac)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_1_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_1_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_1_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_1_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_2                                                                     (TIMERS_REGS_BASE + 0x1b0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_2_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_2_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_2_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_2_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_3                                                                     (TIMERS_REGS_BASE + 0x1b4)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_3_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_3_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_3_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_3_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_4                                                                     (TIMERS_REGS_BASE + 0x1b8)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_4_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_4_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_4_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_4_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_5                                                                     (TIMERS_REGS_BASE + 0x1bc)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_5_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_5_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_5_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_5_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_6                                                                     (TIMERS_REGS_BASE + 0x1c0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_6_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_6_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_6_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_6_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_7                                                                     (TIMERS_REGS_BASE + 0x1c4)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_7_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_7_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_7_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_7_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS                                                            (TIMERS_REGS_BASE + 0x1c8)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS_DEFAULT                                                    0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS_EMIT_SIG                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS_EMIT_SIG_MASK                                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS_EMIT_SIG_SHIFT                                             (0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS_EMIT_TOG_SIG                                               (Bit10+Bit11+Bit12+Bit13+Bit14)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS_EMIT_TOG_SIG_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_SIG_STATUS_EMIT_TOG_SIG_SHIFT                                         (10)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_CLR                                                                   (TIMERS_REGS_BASE + 0x1cc)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CLR_DEFAULT                                                           0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CLR_CLR                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CLR_CLR_MASK                                                          (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CLR_CLR_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_8                                                                     (TIMERS_REGS_BASE + 0x1d0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_8_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_8_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_8_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_8_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_9                                                                     (TIMERS_REGS_BASE + 0x1d4)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_9_DEFAULT                                                             0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_9_VALUE                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_9_VALUE_MASK                                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_9_VALUE_SHIFT                                                         (0)


#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL                                                                  (TIMERS_REGS_BASE + 0x1d8)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_DEFAULT                                                          0x0
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_SIG_DEFAULT                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_SIG_DEFAULT_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_SIG_DEFAULT_SHIFT                                           (0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT                                          (Bit10+Bit11+Bit12+Bit13+Bit14)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT_MASK                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_TOGGLE_SIG_DEFAULT_SHIFT                                    (10)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY                                      (Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY_MASK                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_TOG_SIG_FIXED_POLARITY_SHIFT                                (15)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_SIG_TOGGLE                                                  (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_SIG_TOGGLE_MASK                                             (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_ADV_TIMER_1_EMIT_CTRL_EMIT_SIG_TOGGLE_SHIFT                                            (20)


#define TIMERS_REGS_BASIC_TIMER_2_CTRL                                                                     (TIMERS_REGS_BASE + 0x200)
#define TIMERS_REGS_BASIC_TIMER_2_CTRL_DEFAULT                                                             0x0
#define TIMERS_REGS_BASIC_TIMER_2_CTRL_ENABLE                                                              (Bit0)


#define TIMERS_REGS_BASIC_TIMER_2_INIT_VAL                                                                 (TIMERS_REGS_BASE + 0x208)
#define TIMERS_REGS_BASIC_TIMER_2_INIT_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_2_INIT_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_2_INIT_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_2_INIT_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_BASIC_TIMER_2_CURR_VAL                                                                 (TIMERS_REGS_BASE + 0x20c)
#define TIMERS_REGS_BASIC_TIMER_2_CURR_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_2_CURR_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_2_CURR_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_2_CURR_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_BASIC_TIMER_3_CTRL                                                                     (TIMERS_REGS_BASE + 0x240)
#define TIMERS_REGS_BASIC_TIMER_3_CTRL_DEFAULT                                                             0x0
#define TIMERS_REGS_BASIC_TIMER_3_CTRL_ENABLE                                                              (Bit0)


#define TIMERS_REGS_BASIC_TIMER_3_INIT_VAL                                                                 (TIMERS_REGS_BASE + 0x248)
#define TIMERS_REGS_BASIC_TIMER_3_INIT_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_3_INIT_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_3_INIT_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_3_INIT_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_BASIC_TIMER_3_CURR_VAL                                                                 (TIMERS_REGS_BASE + 0x24c)
#define TIMERS_REGS_BASIC_TIMER_3_CURR_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_3_CURR_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_3_CURR_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_3_CURR_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_BASIC_TIMER_4_CTRL                                                                     (TIMERS_REGS_BASE + 0x280)
#define TIMERS_REGS_BASIC_TIMER_4_CTRL_DEFAULT                                                             0x0
#define TIMERS_REGS_BASIC_TIMER_4_CTRL_ENABLE                                                              (Bit0)


#define TIMERS_REGS_BASIC_TIMER_4_INIT_VAL                                                                 (TIMERS_REGS_BASE + 0x288)
#define TIMERS_REGS_BASIC_TIMER_4_INIT_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_4_INIT_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_4_INIT_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_4_INIT_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_BASIC_TIMER_4_CURR_VAL                                                                 (TIMERS_REGS_BASE + 0x28c)
#define TIMERS_REGS_BASIC_TIMER_4_CURR_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_4_CURR_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_4_CURR_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_4_CURR_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_BASIC_TIMER_5_CTRL                                                                     (TIMERS_REGS_BASE + 0x2c0)
#define TIMERS_REGS_BASIC_TIMER_5_CTRL_DEFAULT                                                             0x0
#define TIMERS_REGS_BASIC_TIMER_5_CTRL_ENABLE                                                              (Bit0)


#define TIMERS_REGS_BASIC_TIMER_5_INIT_VAL                                                                 (TIMERS_REGS_BASE + 0x2c8)
#define TIMERS_REGS_BASIC_TIMER_5_INIT_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_5_INIT_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_5_INIT_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_5_INIT_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_BASIC_TIMER_5_CURR_VAL                                                                 (TIMERS_REGS_BASE + 0x2cc)
#define TIMERS_REGS_BASIC_TIMER_5_CURR_VAL_DEFAULT                                                         0x0
#define TIMERS_REGS_BASIC_TIMER_5_CURR_VAL_VALUE                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_BASIC_TIMER_5_CURR_VAL_VALUE_MASK                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_BASIC_TIMER_5_CURR_VAL_VALUE_SHIFT                                                     (0)


#define TIMERS_REGS_EMIT_SHM_IF_CTRL                                                                       (TIMERS_REGS_BASE + 0x300)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_DEFAULT                                                               0x0
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_EN                                                    (Bit0)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_RESET                                                 (Bit1)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1                                        (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1_MASK                                   (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_NUM_ENTRIES_M1_SHIFT                                  (4)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH                                       (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH_MASK                                  (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_EMIT_SHM_IF_CTRL_CTL_EMIT_SHM_IF_ALMOST_EMPTY_TH_SHIFT                                 (16)


#define TIMERS_REGS_EMIT_SHM_IF_VAL                                                                        (TIMERS_REGS_BASE + 0x308)
#define TIMERS_REGS_EMIT_SHM_IF_VAL_DEFAULT                                                                0x0
#define TIMERS_REGS_EMIT_SHM_IF_VAL_CTL_EMIT_SHM_IF_VAL                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_EMIT_SHM_IF_VAL_CTL_EMIT_SHM_IF_VAL_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_EMIT_SHM_IF_VAL_CTL_EMIT_SHM_IF_VAL_SHIFT                                              (0)


#define TIMERS_REGS_EMIT_SHM_NUM_VAL                                                                       (TIMERS_REGS_BASE + 0x310)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_DEFAULT                                                               0x0
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM_MASK                                  (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_SHM_SHIFT                                 (0)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO                                  (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO_MASK                             (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_REG_FIFO_SHIFT                            (12)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO                                      (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO_MASK                                 (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_NUM_DATA_IN_FIFO_SHIFT                                (16)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_FIFO_UDFL                                             (Bit24)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_FIFO_OVFL                                             (Bit25)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_REG_FIFO_UDFL                                         (Bit26)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_REG_FIFO_OVFL                                         (Bit27)
#define TIMERS_REGS_EMIT_SHM_NUM_VAL_STS_EMIT_SHM_IF_ALMOST_EMPTY                                          (Bit29)


#define TIMERS_REGS_CAP_SHM_IF_CTRL                                                                        (TIMERS_REGS_BASE + 0x320)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_DEFAULT                                                                0x0
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_EN                                                      (Bit0)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_RESET                                                   (Bit1)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1                                          (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1_MASK                                     (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_NUM_ENTRIES_M1_SHIFT                                    (4)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH_MASK                                     (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_CAP_SHM_IF_CTRL_CTL_CAP_SHM_IF_ALMOST_FULL_TH_SHIFT                                    (16)


#define TIMERS_REGS_CAP_SHM_IF_VAL                                                                         (TIMERS_REGS_BASE + 0x328)
#define TIMERS_REGS_CAP_SHM_IF_VAL_DEFAULT                                                                 0x0
#define TIMERS_REGS_CAP_SHM_IF_VAL_STS_CAP_SHM_IF_VAL                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_CAP_SHM_IF_VAL_STS_CAP_SHM_IF_VAL_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_CAP_SHM_IF_VAL_STS_CAP_SHM_IF_VAL_SHIFT                                                (0)


#define TIMERS_REGS_CAP_SHM_NUM_VAL                                                                        (TIMERS_REGS_BASE + 0x330)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_DEFAULT                                                                0x0
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM_MASK                                    (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_SHM_SHIFT                                   (0)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO                                    (Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO_MASK                               (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_REG_FIFO_SHIFT                              (12)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO                                        (Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO_MASK                                   (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_NUM_DATA_IN_FIFO_SHIFT                                  (16)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_FIFO_UDFL                                               (Bit24)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_FIFO_OVFL                                               (Bit25)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_REG_FIFO_UDFL                                           (Bit26)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_REG_FIFO_OVFL                                           (Bit27)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_ALMOST_FULL                                             (Bit29)
#define TIMERS_REGS_CAP_SHM_NUM_VAL_STS_CAP_SHM_IF_DATA_RDY                                                (Bit31)


#define TIMERS_REGS_SHM_IF_INTR_STATUS                                                                     (TIMERS_REGS_BASE + 0x340)
#define TIMERS_REGS_SHM_IF_INTR_STATUS_DEFAULT                                                             0x0
#define TIMERS_REGS_SHM_IF_INTR_STATUS_INTR                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_SHM_IF_INTR_STATUS_INTR_MASK                                                           (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SHM_IF_INTR_STATUS_INTR_SHIFT                                                          (0)


#define TIMERS_REGS_SHM_IF_INTR_MASK_STATUS                                                                (TIMERS_REGS_BASE + 0x344)
#define TIMERS_REGS_SHM_IF_INTR_MASK_STATUS_DEFAULT                                                        0x0
#define TIMERS_REGS_SHM_IF_INTR_MASK_STATUS_INTR                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_SHM_IF_INTR_MASK_STATUS_INTR_MASK                                                      (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SHM_IF_INTR_MASK_STATUS_INTR_SHIFT                                                     (0)


#define TIMERS_REGS_SHM_IF_INTR_CLEAR                                                                      (TIMERS_REGS_BASE + 0x348)
#define TIMERS_REGS_SHM_IF_INTR_CLEAR_DEFAULT                                                              0x0
#define TIMERS_REGS_SHM_IF_INTR_CLEAR_INTR                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_SHM_IF_INTR_CLEAR_INTR_MASK                                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SHM_IF_INTR_CLEAR_INTR_SHIFT                                                           (0)


#define TIMERS_REGS_SHM_IF_INTR_SET                                                                        (TIMERS_REGS_BASE + 0x34c)
#define TIMERS_REGS_SHM_IF_INTR_SET_DEFAULT                                                                0x0
#define TIMERS_REGS_SHM_IF_INTR_SET_INTR                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_SHM_IF_INTR_SET_INTR_MASK                                                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SHM_IF_INTR_SET_INTR_SHIFT                                                             (0)


#define TIMERS_REGS_SHM_IF_INTR_MASK_SET                                                                   (TIMERS_REGS_BASE + 0x350)
#define TIMERS_REGS_SHM_IF_INTR_MASK_SET_DEFAULT                                                           0x0
#define TIMERS_REGS_SHM_IF_INTR_MASK_SET_INTR                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_SHM_IF_INTR_MASK_SET_INTR_MASK                                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SHM_IF_INTR_MASK_SET_INTR_SHIFT                                                        (0)


#define TIMERS_REGS_SHM_IF_INTR_MASK_CLEAR                                                                 (TIMERS_REGS_BASE + 0x354)
#define TIMERS_REGS_SHM_IF_INTR_MASK_CLEAR_DEFAULT                                                         0x0
#define TIMERS_REGS_SHM_IF_INTR_MASK_CLEAR_INTR                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define TIMERS_REGS_SHM_IF_INTR_MASK_CLEAR_INTR_MASK                                                       (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SHM_IF_INTR_MASK_CLEAR_INTR_SHIFT                                                      (0)


#define TIMERS_REGS_SYSTICK_INTR_STATUS                                                                    (TIMERS_REGS_BASE + 0x380)
#define TIMERS_REGS_SYSTICK_INTR_STATUS_DEFAULT                                                            0x0
#define TIMERS_REGS_SYSTICK_INTR_STATUS_INTR                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TIMERS_REGS_SYSTICK_INTR_STATUS_INTR_MASK                                                          (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_INTR_STATUS_INTR_SHIFT                                                         (0)


#define TIMERS_REGS_SYSTICK_INTR_MASK_STATUS                                                               (TIMERS_REGS_BASE + 0x384)
#define TIMERS_REGS_SYSTICK_INTR_MASK_STATUS_DEFAULT                                                       0x0
#define TIMERS_REGS_SYSTICK_INTR_MASK_STATUS_INTR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TIMERS_REGS_SYSTICK_INTR_MASK_STATUS_INTR_MASK                                                     (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_INTR_MASK_STATUS_INTR_SHIFT                                                    (0)


#define TIMERS_REGS_SYSTICK_INTR_CLEAR                                                                     (TIMERS_REGS_BASE + 0x388)
#define TIMERS_REGS_SYSTICK_INTR_CLEAR_DEFAULT                                                             0x0
#define TIMERS_REGS_SYSTICK_INTR_CLEAR_INTR                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TIMERS_REGS_SYSTICK_INTR_CLEAR_INTR_MASK                                                           (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_INTR_CLEAR_INTR_SHIFT                                                          (0)


#define TIMERS_REGS_SYSTICK_INTR_SET                                                                       (TIMERS_REGS_BASE + 0x38c)
#define TIMERS_REGS_SYSTICK_INTR_SET_DEFAULT                                                               0x0
#define TIMERS_REGS_SYSTICK_INTR_SET_INTR                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TIMERS_REGS_SYSTICK_INTR_SET_INTR_MASK                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_INTR_SET_INTR_SHIFT                                                            (0)


#define TIMERS_REGS_SYSTICK_INTR_MASK_SET                                                                  (TIMERS_REGS_BASE + 0x390)
#define TIMERS_REGS_SYSTICK_INTR_MASK_SET_DEFAULT                                                          0x0
#define TIMERS_REGS_SYSTICK_INTR_MASK_SET_INTR                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TIMERS_REGS_SYSTICK_INTR_MASK_SET_INTR_MASK                                                        (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_INTR_MASK_SET_INTR_SHIFT                                                       (0)


#define TIMERS_REGS_SYSTICK_INTR_MASK_CLEAR                                                                (TIMERS_REGS_BASE + 0x394)
#define TIMERS_REGS_SYSTICK_INTR_MASK_CLEAR_DEFAULT                                                        0x0
#define TIMERS_REGS_SYSTICK_INTR_MASK_CLEAR_INTR                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define TIMERS_REGS_SYSTICK_INTR_MASK_CLEAR_INTR_MASK                                                      (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_INTR_MASK_CLEAR_INTR_SHIFT                                                     (0)


#define TIMERS_REGS_SYSTICK_MISC_CTRL                                                                      (TIMERS_REGS_BASE + 0x3a0)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_DEFAULT                                                              0x3E8000
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_EN                                                       (Bit0)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_GO_TO_SLEEP                                              (Bit1)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_WAKEUP                                                   (Bit2)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_RESET                                                    (Bit3)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_CAPTURE_REDGE_EN                                         (Bit5)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_CAPTURE_FEDGE_EN                                         (Bit6)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_EMIT_EN                                                  (Bit8)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_INTR_RESET                                               (Bit9)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_FINECNT_LMT                                              (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_FINECNT_LMT_MASK                                         (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_MISC_CTRL_CTL_SYSTICK_FINECNT_LMT_SHIFT                                        (12)


#define TIMERS_REGS_SYSTICK_DURATION                                                                       (TIMERS_REGS_BASE + 0x3a4)
#define TIMERS_REGS_SYSTICK_DURATION_DEFAULT                                                               0x1
#define TIMERS_REGS_SYSTICK_DURATION_CTL_SYSTICK_DURATION                                                  (Bit0+Bit1+Bit2+Bit3)
#define TIMERS_REGS_SYSTICK_DURATION_CTL_SYSTICK_DURATION_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_DURATION_CTL_SYSTICK_DURATION_SHIFT                                            (0)


#define TIMERS_REGS_SYSTICK_CURR_FINECNT                                                                   (TIMERS_REGS_BASE + 0x3b0)
#define TIMERS_REGS_SYSTICK_CURR_FINECNT_DEFAULT                                                           0x0
#define TIMERS_REGS_SYSTICK_CURR_FINECNT_STS_SYSTICK_CURR_FINECNT_VAL                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_SYSTICK_CURR_FINECNT_STS_SYSTICK_CURR_FINECNT_VAL_MASK                                 (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_CURR_FINECNT_STS_SYSTICK_CURR_FINECNT_VAL_SHIFT                                (0)


#define TIMERS_REGS_SYSTICK_CURR_COARSECNT                                                                 (TIMERS_REGS_BASE + 0x3b4)
#define TIMERS_REGS_SYSTICK_CURR_COARSECNT_DEFAULT                                                         0x0
#define TIMERS_REGS_SYSTICK_CURR_COARSECNT_STS_SYSTICK_CURR_COARSECNT_VAL                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_CURR_COARSECNT_STS_SYSTICK_CURR_COARSECNT_VAL_MASK                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_CURR_COARSECNT_STS_SYSTICK_CURR_COARSECNT_VAL_SHIFT                            (0)


#define TIMERS_REGS_SYSTICK_CAPTURE_COARSE_VAL                                                             (TIMERS_REGS_BASE + 0x3b8)
#define TIMERS_REGS_SYSTICK_CAPTURE_COARSE_VAL_DEFAULT                                                     0x0
#define TIMERS_REGS_SYSTICK_CAPTURE_COARSE_VAL_STS_SYSTICK_CAPTURE_COARSE_VAL                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_CAPTURE_COARSE_VAL_STS_SYSTICK_CAPTURE_COARSE_VAL_MASK                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_CAPTURE_COARSE_VAL_STS_SYSTICK_CAPTURE_COARSE_VAL_SHIFT                        (0)


#define TIMERS_REGS_SYSTICK_CAPTURE_FINE_VAL                                                               (TIMERS_REGS_BASE + 0x3bc)
#define TIMERS_REGS_SYSTICK_CAPTURE_FINE_VAL_DEFAULT                                                       0x0
#define TIMERS_REGS_SYSTICK_CAPTURE_FINE_VAL_STS_SYSTICK_CAPTURE_FINE_VAL                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_SYSTICK_CAPTURE_FINE_VAL_STS_SYSTICK_CAPTURE_FINE_VAL_MASK                             (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_CAPTURE_FINE_VAL_STS_SYSTICK_CAPTURE_FINE_VAL_SHIFT                            (0)


#define TIMERS_REGS_SYSTICK_EMIT_COARSE_VAL                                                                (TIMERS_REGS_BASE + 0x3c0)
#define TIMERS_REGS_SYSTICK_EMIT_COARSE_VAL_DEFAULT                                                        0x0
#define TIMERS_REGS_SYSTICK_EMIT_COARSE_VAL_CTL_SYSTICK_EMIT_COARSE_VAL                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_EMIT_COARSE_VAL_CTL_SYSTICK_EMIT_COARSE_VAL_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_EMIT_COARSE_VAL_CTL_SYSTICK_EMIT_COARSE_VAL_SHIFT                              (0)


#define TIMERS_REGS_SYSTICK_EMIT_FINE_VAL                                                                  (TIMERS_REGS_BASE + 0x3c4)
#define TIMERS_REGS_SYSTICK_EMIT_FINE_VAL_DEFAULT                                                          0x0
#define TIMERS_REGS_SYSTICK_EMIT_FINE_VAL_CTL_SYSTICK_EMIT_FINE_VAL                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_SYSTICK_EMIT_FINE_VAL_CTL_SYSTICK_EMIT_FINE_VAL_MASK                                   (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_EMIT_FINE_VAL_CTL_SYSTICK_EMIT_FINE_VAL_SHIFT                                  (0)


#define TIMERS_REGS_SYSTICK_CLK_RATIO                                                                      (TIMERS_REGS_BASE + 0x3cc)
#define TIMERS_REGS_SYSTICK_CLK_RATIO_DEFAULT                                                              0x0
#define TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_FRAC_SYSCLK_IN_SLPCLK                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_FRAC_SYSCLK_IN_SLPCLK_MASK                                       (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_FRAC_SYSCLK_IN_SLPCLK_SHIFT                                      (0)
#define TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_INT_SYSCLK_IN_SLPCLK                                             (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_INT_SYSCLK_IN_SLPCLK_MASK                                        (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_CLK_RATIO_CTL_INT_SYSCLK_IN_SLPCLK_SHIFT                                       (12)


#define TIMERS_REGS_SYSTICK_SLP_CLK_CNT                                                                    (TIMERS_REGS_BASE + 0x3d4)
#define TIMERS_REGS_SYSTICK_SLP_CLK_CNT_DEFAULT                                                            0x0
#define TIMERS_REGS_SYSTICK_SLP_CLK_CNT_STS_SYSTICK_SLP_CLK_CNT                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_SLP_CLK_CNT_STS_SYSTICK_SLP_CLK_CNT_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_SLP_CLK_CNT_STS_SYSTICK_SLP_CLK_CNT_SHIFT                                      (0)


#define TIMERS_REGS_SYSTICK_SLP_FINE_CNT                                                                   (TIMERS_REGS_BASE + 0x3dc)
#define TIMERS_REGS_SYSTICK_SLP_FINE_CNT_DEFAULT                                                           0x0
#define TIMERS_REGS_SYSTICK_SLP_FINE_CNT_STS_SYSTICK_SLP_FINE_CNT                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_SYSTICK_SLP_FINE_CNT_STS_SYSTICK_SLP_FINE_CNT_MASK                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_SLP_FINE_CNT_STS_SYSTICK_SLP_FINE_CNT_SHIFT                                    (0)


#define TIMERS_REGS_SYSTICK_SLP_COARSE_CNT                                                                 (TIMERS_REGS_BASE + 0x3e0)
#define TIMERS_REGS_SYSTICK_SLP_COARSE_CNT_DEFAULT                                                         0x0
#define TIMERS_REGS_SYSTICK_SLP_COARSE_CNT_STS_SYSTICK_SLP_COARSE_CNT                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_SLP_COARSE_CNT_STS_SYSTICK_SLP_COARSE_CNT_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_SLP_COARSE_CNT_STS_SYSTICK_SLP_COARSE_CNT_SHIFT                                (0)


#define TIMERS_REGS_SYSTICK_STORED_FINE_CNT                                                                (TIMERS_REGS_BASE + 0x3ec)
#define TIMERS_REGS_SYSTICK_STORED_FINE_CNT_DEFAULT                                                        0x0
#define TIMERS_REGS_SYSTICK_STORED_FINE_CNT_STS_SYSTICK_STORED_FINE_CNT                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_SYSTICK_STORED_FINE_CNT_STS_SYSTICK_STORED_FINE_CNT_MASK                               (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_STORED_FINE_CNT_STS_SYSTICK_STORED_FINE_CNT_SHIFT                              (0)


#define TIMERS_REGS_SYSTICK_STORED_COARSE_CNT                                                              (TIMERS_REGS_BASE + 0x3f0)
#define TIMERS_REGS_SYSTICK_STORED_COARSE_CNT_DEFAULT                                                      0x0
#define TIMERS_REGS_SYSTICK_STORED_COARSE_CNT_STS_SYSTICK_STORED_COARSE_CNT                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_STORED_COARSE_CNT_STS_SYSTICK_STORED_COARSE_CNT_MASK                           (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_STORED_COARSE_CNT_STS_SYSTICK_STORED_COARSE_CNT_SHIFT                          (0)


#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT                                                                 (TIMERS_REGS_BASE + 0x3f8)
#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT_DEFAULT                                                         0x2100
#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT_CTL_SYSTICK_CAP_SIG_SEL                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT_CTL_SYSTICK_CAP_SIG_SEL_MASK                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT_CTL_SYSTICK_CAP_SIG_SEL_SHIFT                                   (0)
#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT_CTL_SYSTICK_ADDITIONAL_NUM_CLK                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT_CTL_SYSTICK_ADDITIONAL_NUM_CLK_MASK                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_ADDITIONAL_CNT_CTL_SYSTICK_ADDITIONAL_NUM_CLK_SHIFT                            (8)


#define TIMERS_REGS_SYSTICK_AON_ADDITIONAL_CNT                                                             (TIMERS_REGS_BASE + 0x3fc)
#define TIMERS_REGS_SYSTICK_AON_ADDITIONAL_CNT_DEFAULT                                                     0x0
#define TIMERS_REGS_SYSTICK_AON_ADDITIONAL_CNT_CTL_SYSTICK_AON_TIMER_NUM_ADDITIONAL_CYCLE                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_AON_ADDITIONAL_CNT_CTL_SYSTICK_AON_TIMER_NUM_ADDITIONAL_CYCLE_MASK             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_AON_ADDITIONAL_CNT_CTL_SYSTICK_AON_TIMER_NUM_ADDITIONAL_CYCLE_SHIFT            (0)


#define TIMERS_REGS_SYSTICK_FSM_ST                                                                         (TIMERS_REGS_BASE + 0x40c)
#define TIMERS_REGS_SYSTICK_FSM_ST_DEFAULT                                                                 0x0
#define TIMERS_REGS_SYSTICK_FSM_ST_STS_SYSTICK_ST                                                          (Bit0+Bit1+Bit2+Bit3)
#define TIMERS_REGS_SYSTICK_FSM_ST_STS_SYSTICK_ST_MASK                                                     (Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_FSM_ST_STS_SYSTICK_ST_SHIFT                                                    (0)


#define TIMERS_REGS_SYSTICK_SNAPSHOT                                                                       (TIMERS_REGS_BASE + 0x418)
#define TIMERS_REGS_SYSTICK_SNAPSHOT_DEFAULT                                                               0x0
#define TIMERS_REGS_SYSTICK_SNAPSHOT_CTL_SYSTICK_SNAPSHOT                                                  (Bit0)


#define TIMERS_REGS_SYSTICK_SNAPSHOT_FINE                                                                  (TIMERS_REGS_BASE + 0x41c)
#define TIMERS_REGS_SYSTICK_SNAPSHOT_FINE_DEFAULT                                                          0x0
#define TIMERS_REGS_SYSTICK_SNAPSHOT_FINE_STS_SYSTICK_FINECNT_SNAPSHOT_VAL                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define TIMERS_REGS_SYSTICK_SNAPSHOT_FINE_STS_SYSTICK_FINECNT_SNAPSHOT_VAL_MASK                            (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_SNAPSHOT_FINE_STS_SYSTICK_FINECNT_SNAPSHOT_VAL_SHIFT                           (0)


#define TIMERS_REGS_SYSTICK_SNAPSHOT_COARSE                                                                (TIMERS_REGS_BASE + 0x420)
#define TIMERS_REGS_SYSTICK_SNAPSHOT_COARSE_DEFAULT                                                        0x0
#define TIMERS_REGS_SYSTICK_SNAPSHOT_COARSE_STS_SYSTICK_COARSECNT_SNAPSHOT_VAL                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define TIMERS_REGS_SYSTICK_SNAPSHOT_COARSE_STS_SYSTICK_COARSECNT_SNAPSHOT_VAL_MASK                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define TIMERS_REGS_SYSTICK_SNAPSHOT_COARSE_STS_SYSTICK_COARSECNT_SNAPSHOT_VAL_SHIFT                       (0)


#endif // _TIMERS_REGS_DEFINES_H

