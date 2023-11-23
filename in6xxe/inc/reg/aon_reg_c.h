#ifndef _AON_REG_DEFINES_H
#define _AON_REG_DEFINES_H
/* **************************** */
#define AON_REG_CM4_CTRL                                                                           (AON_REG_BASE + 0x40)
#define AON_REG_CM4_CTRL_DEFAULT                                                                   0x0
#define AON_REG_CM4_CTRL_CTL_CM4_DISABLE_FPU                                                       (Bit1)
#define AON_REG_CM4_CTRL_CTL_CM4_DISABLE_MPU                                                       (Bit2)
#define AON_REG_CM4_CTRL_CTL_CACHE_MEM_AS_DC_RAM                                                   (Bit4)
#define AON_REG_CM4_CTRL_CTL_SHM_MEM_AS_DC_RAM                                                     (Bit5+Bit6)
#define AON_REG_CM4_CTRL_CTL_SHM_MEM_AS_DC_RAM_MASK                                                (Bit1+Bit0)
#define AON_REG_CM4_CTRL_CTL_SHM_MEM_AS_DC_RAM_SHIFT                                               (5)


#define AON_REG_PMU_AONPD_REG_1TO4                                                                 (AON_REG_BASE + 0x80)
#define AON_REG_PMU_AONPD_REG_1TO4_DEFAULT                                                         0x402416
#define AON_REG_PMU_AONPD_REG_1TO4_REG1                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_AONPD_REG_1TO4_REG1_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_REG1_SHIFT                                                      (0)
#define AON_REG_PMU_AONPD_REG_1TO4_REG2                                                            (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_AONPD_REG_1TO4_REG2_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_REG2_SHIFT                                                      (8)
#define AON_REG_PMU_AONPD_REG_1TO4_REG3                                                            (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_PMU_AONPD_REG_1TO4_REG3_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_REG3_SHIFT                                                      (16)
#define AON_REG_PMU_AONPD_REG_1TO4_REG4                                                            (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_PMU_AONPD_REG_1TO4_REG4_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_REG4_SHIFT                                                      (24)


#define AON_REG_PMU_AONPD_REG_1TO4_LV                                                              (AON_REG_BASE + 0x84)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_DEFAULT                                                      0x402416
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG1                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG1_MASK                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG1_SHIFT                                                   (0)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG2                                                         (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG2_MASK                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG2_SHIFT                                                   (8)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG3                                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG3_MASK                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG3_SHIFT                                                   (16)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG4                                                         (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG4_MASK                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_1TO4_LV_REG4_SHIFT                                                   (24)


#define AON_REG_PMU_AONPD_REG_5TO6                                                                 (AON_REG_BASE + 0x88)
#define AON_REG_PMU_AONPD_REG_5TO6_DEFAULT                                                         0x63F
#define AON_REG_PMU_AONPD_REG_5TO6_REG5                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_AONPD_REG_5TO6_REG5_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_5TO6_REG5_SHIFT                                                      (0)
#define AON_REG_PMU_AONPD_REG_5TO6_REG6                                                            (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_AONPD_REG_5TO6_REG6_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_AONPD_REG_5TO6_REG6_SHIFT                                                      (8)


#define AON_REG_PMU_DOOPD_REG_1TO4                                                                 (AON_REG_BASE + 0x90)
#define AON_REG_PMU_DOOPD_REG_1TO4_DEFAULT                                                         0x55140051
#define AON_REG_PMU_DOOPD_REG_1TO4_REG1                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG1_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG1_SHIFT                                                      (0)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG2                                                            (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG2_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG2_SHIFT                                                      (8)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG3                                                            (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG3_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG3_SHIFT                                                      (16)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG4                                                            (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG4_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_1TO4_REG4_SHIFT                                                      (24)


#define AON_REG_PMU_DOOPD_REG_5678                                                                 (AON_REG_BASE + 0x94)
#define AON_REG_PMU_DOOPD_REG_5678_DEFAULT                                                         0x50FFD00C
#define AON_REG_PMU_DOOPD_REG_5678_REG5                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_DOOPD_REG_5678_REG5_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_5678_REG5_SHIFT                                                      (0)
#define AON_REG_PMU_DOOPD_REG_5678_REG6                                                            (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_DOOPD_REG_5678_REG6_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_5678_REG6_SHIFT                                                      (8)
#define AON_REG_PMU_DOOPD_REG_5678_REG7                                                            (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_PMU_DOOPD_REG_5678_REG7_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_5678_REG7_SHIFT                                                      (16)
#define AON_REG_PMU_DOOPD_REG_5678_REG8                                                            (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_PMU_DOOPD_REG_5678_REG8_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_5678_REG8_SHIFT                                                      (24)


#define AON_REG_PMU_DOOPD_REG_910                                                                  (AON_REG_BASE + 0x98)
#define AON_REG_PMU_DOOPD_REG_910_DEFAULT                                                          0x52A
#define AON_REG_PMU_DOOPD_REG_910_REG9                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_DOOPD_REG_910_REG9_MASK                                                        (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_910_REG9_SHIFT                                                       (0)
#define AON_REG_PMU_DOOPD_REG_910_REG10                                                            (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_DOOPD_REG_910_REG10_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_910_REG10_SHIFT                                                      (8)


#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE                                                       (AON_REG_BASE + 0xa0)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_DEFAULT                                               0x2A5051
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG1                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG1_MASK                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG1_SHIFT                                            (0)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG8                                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG8_MASK                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG8_SHIFT                                            (8)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG9                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG9_MASK                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_PD1_ACTIVE_REG9_SHIFT                                            (16)


#define AON_REG_PMU_DOOPD_REG_189_TX                                                               (AON_REG_BASE + 0xa4)
#define AON_REG_PMU_DOOPD_REG_189_TX_DEFAULT                                                       0x2A5051
#define AON_REG_PMU_DOOPD_REG_189_TX_REG1                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG1_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG1_SHIFT                                                    (0)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG8                                                          (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG8_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG8_SHIFT                                                    (8)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG9                                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG9_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_TX_REG9_SHIFT                                                    (16)


#define AON_REG_PMU_DOOPD_REG_189_RX                                                               (AON_REG_BASE + 0xa8)
#define AON_REG_PMU_DOOPD_REG_189_RX_DEFAULT                                                       0x2A5051
#define AON_REG_PMU_DOOPD_REG_189_RX_REG1                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG1_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG1_SHIFT                                                    (0)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG8                                                          (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG8_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG8_SHIFT                                                    (8)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG9                                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG9_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_DOOPD_REG_189_RX_REG9_SHIFT                                                    (16)


#define AON_REG_PMU_TEST_MUX_CTRL                                                                  (AON_REG_BASE + 0xb0)
#define AON_REG_PMU_TEST_MUX_CTRL_DEFAULT                                                          0x0
#define AON_REG_PMU_TEST_MUX_CTRL_BLOCK                                                            (Bit0+Bit1+Bit2+Bit3)
#define AON_REG_PMU_TEST_MUX_CTRL_BLOCK_MASK                                                       (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_TEST_MUX_CTRL_BLOCK_SHIFT                                                      (0)
#define AON_REG_PMU_TEST_MUX_CTRL_NODE                                                             (Bit4+Bit5+Bit6+Bit7)
#define AON_REG_PMU_TEST_MUX_CTRL_NODE_MASK                                                        (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_PMU_TEST_MUX_CTRL_NODE_SHIFT                                                       (4)


#define AON_REG_PMU_MISC_CTRL                                                                      (AON_REG_BASE + 0xc0)
#define AON_REG_PMU_MISC_CTRL_DEFAULT                                                              0x40
#define AON_REG_PMU_MISC_CTRL_CTL_CLK_32K_RTC_EN                                                   (Bit4)
#define AON_REG_PMU_MISC_CTRL_CTL_CLK_XO_FOR_DCDC_EN                                               (Bit5)
#define AON_REG_PMU_MISC_CTRL_CTL_RET_LDO_EN                                                       (Bit6)


#define AON_REG_AON_TIMER_CLK_CTRL                                                                 (AON_REG_BASE + 0x100)
#define AON_REG_AON_TIMER_CLK_CTRL_DEFAULT                                                         0x10
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER0_CLK_EN                                           (Bit0)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER1_CLK_EN                                           (Bit1)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_CLK_EN                                           (Bit2)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER3_CLK_EN                                           (Bit3)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER_WDT_CLK_EN                                        (Bit4)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_EMIT_CLK_EN                                      (Bit5)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_CAP_CLK_EN                                       (Bit6)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER0_AUTO_RELOAD_EN                                   (Bit8)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER1_AUTO_RELOAD_EN                                   (Bit9)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER2_AUTO_RELOAD_EN                                   (Bit10)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER3_AUTO_RELOAD_EN                                   (Bit11)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_AON_TIMER_WDT_AUTO_RELOAD_EN                                (Bit12)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_0_EDGE_DETECT_CLK_EN                                   (Bit16)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_1_EDGE_DETECT_CLK_EN                                   (Bit17)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_2_EDGE_DETECT_CLK_EN                                   (Bit18)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_3_EDGE_DETECT_CLK_EN                                   (Bit19)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_4_EDGE_DETECT_CLK_EN                                   (Bit20)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_BOD_EDGE_DETECT_CLK_EN                                      (Bit21)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_0_EDGE_DETECT_DEB_CLK_EN                               (Bit22)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_1_EDGE_DETECT_DEB_CLK_EN                               (Bit23)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_2_EDGE_DETECT_DEB_CLK_EN                               (Bit24)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_3_EDGE_DETECT_DEB_CLK_EN                               (Bit25)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_GPIO_4_EDGE_DETECT_DEB_CLK_EN                               (Bit26)
#define AON_REG_AON_TIMER_CLK_CTRL_CTL_BOD_EDGE_DETECT_DEB_CLK_EN                                  (Bit27)


#define AON_REG_AON_TIMER2_MISC_CTRL                                                               (AON_REG_BASE + 0x110)
#define AON_REG_AON_TIMER2_MISC_CTRL_DEFAULT                                                       0x0
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_REDGE_EN                               (Bit0+Bit1)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_REDGE_EN_MASK                          (Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_REDGE_EN_SHIFT                         (0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_FEDGE_EN                               (Bit2+Bit3)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_FEDGE_EN_MASK                          (Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_FEDGE_EN_SHIFT                         (2)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_EN                                        (Bit4+Bit5)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_EN_MASK                                   (Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_EN_SHIFT                                  (4)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_AUTO_CLR                                  (Bit6+Bit7)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_AUTO_CLR_MASK                             (Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_AUTO_CLR_SHIFT                            (6)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOUCH_CLR_EMIT                            (Bit8+Bit9)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOUCH_CLR_EMIT_MASK                       (Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOUCH_CLR_EMIT_SHIFT                      (8)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_DEFAULT                                   (Bit10+Bit11)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_DEFAULT_MASK                              (Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_DEFAULT_SHIFT                             (10)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOGGLE                                    (Bit12+Bit13)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOGGLE_MASK                               (Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOGGLE_SHIFT                              (12)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_EMIT_TOG_DEFAULT                               (Bit14)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_0_SEL                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_0_SEL_MASK                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_0_SEL_SHIFT                            (16)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_1_SEL                                  (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_1_SEL_MASK                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_TIMER2_MISC_CTRL_CTL_AON_TIMER2_CAP_SIG_1_SEL_SHIFT                            (24)


#define AON_REG_AON_TIMER2_EMIT_VAL_0                                                              (AON_REG_BASE + 0x114)
#define AON_REG_AON_TIMER2_EMIT_VAL_0_DEFAULT                                                      0x0
#define AON_REG_AON_TIMER2_EMIT_VAL_0_CTL_AON_TIMER2_EMIT_VAL_0                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_AON_TIMER2_EMIT_VAL_0_CTL_AON_TIMER2_EMIT_VAL_0_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_TIMER2_EMIT_VAL_0_CTL_AON_TIMER2_EMIT_VAL_0_SHIFT                              (0)


#define AON_REG_AON_TIMER2_EMIT_VAL_1                                                              (AON_REG_BASE + 0x118)
#define AON_REG_AON_TIMER2_EMIT_VAL_1_DEFAULT                                                      0x0
#define AON_REG_AON_TIMER2_EMIT_VAL_1_CTL_AON_TIMER2_EMIT_VAL_1                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_AON_TIMER2_EMIT_VAL_1_CTL_AON_TIMER2_EMIT_VAL_1_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_TIMER2_EMIT_VAL_1_CTL_AON_TIMER2_EMIT_VAL_1_SHIFT                              (0)


#define AON_REG_AON_TIMER_WDT_CTRL                                                                 (AON_REG_BASE + 0x140)
#define AON_REG_AON_TIMER_WDT_CTRL_DEFAULT                                                         0xF21000
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_RESET_PD1                                     (Bit11)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_RESET_PD0                                     (Bit12)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_WDT_RST_OUTPUT_POLARITY                                     (Bit14)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD0_RESET_DLY                                 (Bit16+Bit17+Bit18+Bit19)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD0_RESET_DLY_MASK                            (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD0_RESET_DLY_SHIFT                           (16)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD1_RESET_DLY                                 (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD1_RESET_DLY_MASK                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_TIMER_WDT_CTRL_CTL_AON_TIMER_WDT_PD1_RESET_DLY_SHIFT                           (20)


#define AON_REG_AON_TIMER_WAKE_UP_SEL                                                              (AON_REG_BASE + 0x148)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_DEFAULT                                                      0x0
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER0_WAKEUP_EN                                     (Bit0)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER1_WAKEUP_EN                                     (Bit1)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER2_WAKEUP_EN                                     (Bit2)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER3_WAKEUP_EN                                     (Bit3)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER2_EMIT_0_WAKEUP_EN                              (Bit4)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER2_EMIT_1_WAKEUP_EN                              (Bit5)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER_WDT_WAKEUP_EN                                  (Bit8)
#define AON_REG_AON_TIMER_WAKE_UP_SEL_CTL_AON_TIMER_SYSTICK_EMIT_WAKEUP_EN                         (Bit12)


#define AON_REG_DOOPD_REG1_MUX_CONTROL                                                             (AON_REG_BASE + 0x150)
#define AON_REG_DOOPD_REG1_MUX_CONTROL_DEFAULT                                                     0x0
#define AON_REG_DOOPD_REG1_MUX_CONTROL_CTL_TRIG_TO_CTRL_DCDC_DURING_TRX_ONLY                       (Bit0)
#define AON_REG_DOOPD_REG1_MUX_CONTROL_CTL_TRIG_TO_CTRL_DCDC                                       (Bit1)


#define AON_REG_BOD_WAKEUP_MASK                                                                    (AON_REG_BASE + 0x178)
#define AON_REG_BOD_WAKEUP_MASK_DEFAULT                                                            0x0
#define AON_REG_BOD_WAKEUP_MASK_CTL_BOD_WAKEUP_MASK                                                (Bit12)
#define AON_REG_BOD_WAKEUP_MASK_CTL_BOD2_WAKEUP_MASK                                               (Bit13)


#define AON_REG_BOD_WAKEUP_POLARITY                                                                (AON_REG_BASE + 0x17c)
#define AON_REG_BOD_WAKEUP_POLARITY_DEFAULT                                                        0x0
#define AON_REG_BOD_WAKEUP_POLARITY_CTL_BOD_WAKEUP_POLARITY                                        (Bit12)
#define AON_REG_BOD_WAKEUP_POLARITY_CTL_BOD2_WAKEUP_POLARITY                                       (Bit13)


#define AON_REG_GPIO_EDGE_RISING_EN                                                                (AON_REG_BASE + 0x180)
#define AON_REG_GPIO_EDGE_RISING_EN_DEFAULT                                                        0x0
#define AON_REG_GPIO_EDGE_RISING_EN_CTL_GPIO_REDGE_DETECT_1                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define AON_REG_GPIO_EDGE_RISING_EN_CTL_GPIO_REDGE_DETECT_1_MASK                                   (Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_RISING_EN_CTL_GPIO_REDGE_DETECT_1_SHIFT                                  (0)


#define AON_REG_GPIO_EDGE_RISING_EN_2                                                              (AON_REG_BASE + 0x184)
#define AON_REG_GPIO_EDGE_RISING_EN_2_DEFAULT                                                      0x0
#define AON_REG_GPIO_EDGE_RISING_EN_2_CTL_GPIO_REDGE_DETECT_2                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_EDGE_RISING_EN_2_CTL_GPIO_REDGE_DETECT_2_MASK                                 (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_RISING_EN_2_CTL_GPIO_REDGE_DETECT_2_SHIFT                                (0)
#define AON_REG_GPIO_EDGE_RISING_EN_2_CTL_BOD_REDGE_DETECT                                         (Bit30)
#define AON_REG_GPIO_EDGE_RISING_EN_2_CTL_BOD2_REDGE_DETECT                                        (Bit31)


#define AON_REG_GPIO_EDGE_FALLING_EN                                                               (AON_REG_BASE + 0x18c)
#define AON_REG_GPIO_EDGE_FALLING_EN_DEFAULT                                                       0x0
#define AON_REG_GPIO_EDGE_FALLING_EN_CTL_GPIO_FEDGE_DETECT_1                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define AON_REG_GPIO_EDGE_FALLING_EN_CTL_GPIO_FEDGE_DETECT_1_MASK                                  (Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FALLING_EN_CTL_GPIO_FEDGE_DETECT_1_SHIFT                                 (0)


#define AON_REG_GPIO_EDGE_FALLING_EN_2                                                             (AON_REG_BASE + 0x190)
#define AON_REG_GPIO_EDGE_FALLING_EN_2_DEFAULT                                                     0x0
#define AON_REG_GPIO_EDGE_FALLING_EN_2_CTL_GPIO_FEDGE_DETECT_2                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_EDGE_FALLING_EN_2_CTL_GPIO_FEDGE_DETECT_2_MASK                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FALLING_EN_2_CTL_GPIO_FEDGE_DETECT_2_SHIFT                               (0)
#define AON_REG_GPIO_EDGE_FALLING_EN_2_CTL_BOD_FEDGE_DETECT                                        (Bit30)
#define AON_REG_GPIO_EDGE_FALLING_EN_2_CTL_BOD2_FEDGE_DETECT                                       (Bit31)


#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP                                                      (AON_REG_BASE + 0x198)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_DEFAULT                                              0x0
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_CTL_AON_GPIO_AUTO_CLR_ON_SLP_1                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_CTL_AON_GPIO_AUTO_CLR_ON_SLP_1_MASK                  (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_CTL_AON_GPIO_AUTO_CLR_ON_SLP_1_SHIFT                 (0)


#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2                                                    (AON_REG_BASE + 0x19c)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2_DEFAULT                                            0x0
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2_CTL_AON_GPIO_AUTO_CLR_ON_SLP_2                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2_CTL_AON_GPIO_AUTO_CLR_ON_SLP_2_MASK                (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2_CTL_AON_GPIO_AUTO_CLR_ON_SLP_2_SHIFT               (0)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2_CTL_AON_BOD_AUTO_CLR_ON_SLP                        (Bit30)
#define AON_REG_GPIO_EDGE_AUTO_CLEAR_ON_SLEEP_2_CTL_AON_BOD2_AUTO_CLR_ON_SLP                       (Bit31)


#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY                                                        (AON_REG_BASE + 0x1a4)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_DEFAULT                                                0x0
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_CTL_GPIO_EDGE_DETECT_SLEEP_ONLY_1                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_CTL_GPIO_EDGE_DETECT_SLEEP_ONLY_1_MASK                 (Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_CTL_GPIO_EDGE_DETECT_SLEEP_ONLY_1_SHIFT                (0)


#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2                                                      (AON_REG_BASE + 0x1a8)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2_DEFAULT                                              0x0
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2_CTL_GPIO_EDGE_DETECT_SLEEP_ONLY_2                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2_CTL_GPIO_EDGE_DETECT_SLEEP_ONLY_2_MASK               (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2_CTL_GPIO_EDGE_DETECT_SLEEP_ONLY_2_SHIFT              (0)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2_CTL_BOD_EDGE_DETECT_SLEEP_ONLY                       (Bit30)
#define AON_REG_GPIO_EDGE_DETECT_SLEEP_ONLY_2_CTL_BOD2_EDGE_DETECT_SLEEP_ONLY                      (Bit31)


#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP                                                     (AON_REG_BASE + 0x1b0)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_DEFAULT                                             0x0
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_CTL_GPIO_LATCH_DURING_SLEEP_1                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_CTL_GPIO_LATCH_DURING_SLEEP_1_MASK                  (Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_CTL_GPIO_LATCH_DURING_SLEEP_1_SHIFT                 (0)


#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2                                                   (AON_REG_BASE + 0x1b4)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2_DEFAULT                                           0x0
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2_CTL_GPIO_LATCH_DURING_SLEEP_2                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2_CTL_GPIO_LATCH_DURING_SLEEP_2_MASK                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2_CTL_GPIO_LATCH_DURING_SLEEP_2_SHIFT               (0)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2_CTL_BOD_LATCH_DURING_SLEEP                        (Bit30)
#define AON_REG_GPIO_LATCH_SIGNAL_DURING_SLEEP_2_CTL_BOD2_LATCH_DURING_SLEEP                       (Bit31)


#define AON_REG_AON_BOD_MANUAL_CLR                                                                 (AON_REG_BASE + 0x1c0)
#define AON_REG_AON_BOD_MANUAL_CLR_DEFAULT                                                         0x0
#define AON_REG_AON_BOD_MANUAL_CLR_CTL_AON_BOD_MANUAL_CLR                                          (Bit30)
#define AON_REG_AON_BOD_MANUAL_CLR_CTL_AON_BOD2_MANUAL_CLR                                         (Bit31)


#define AON_REG_AON_GPIO_DEBOUNCE_LMT                                                              (AON_REG_BASE + 0x1c4)
#define AON_REG_AON_GPIO_DEBOUNCE_LMT_DEFAULT                                                      0x0
#define AON_REG_AON_GPIO_DEBOUNCE_LMT_CTL_GPIO_DEBOUNCE_LMT                                        (Bit0+Bit1+Bit2+Bit3)
#define AON_REG_AON_GPIO_DEBOUNCE_LMT_CTL_GPIO_DEBOUNCE_LMT_MASK                                   (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_GPIO_DEBOUNCE_LMT_CTL_GPIO_DEBOUNCE_LMT_SHIFT                                  (0)
#define AON_REG_AON_GPIO_DEBOUNCE_LMT_CTL_BOD_DEBOUNCE_LMT                                         (Bit16+Bit17+Bit18+Bit19)
#define AON_REG_AON_GPIO_DEBOUNCE_LMT_CTL_BOD_DEBOUNCE_LMT_MASK                                    (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_AON_GPIO_DEBOUNCE_LMT_CTL_BOD_DEBOUNCE_LMT_SHIFT                                   (16)


#define AON_REG_CPU_STACK_POINTER                                                                  (AON_REG_BASE + 0x1cc)
#define AON_REG_CPU_STACK_POINTER_DEFAULT                                                          0x0
#define AON_REG_CPU_STACK_POINTER_VALUE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_CPU_STACK_POINTER_VALUE_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPU_STACK_POINTER_VALUE_SHIFT                                                      (0)


#define AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT                                                      (AON_REG_BASE + 0x1d0)
#define AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT_DEFAULT                                              0x0
#define AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT_VALUE                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT_VALUE_MASK                                           (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT_VALUE_SHIFT                                          (0)
#define AON_REG_CPU_PROGRAM_COUNTER_COLD_BOOT_COLD_BOOT                                            (Bit31)


#define AON_REG_SPARE_CTRL_REG0                                                                    (AON_REG_BASE + 0x1dc)
#define AON_REG_SPARE_CTRL_REG0_DEFAULT                                                            0x0
#define AON_REG_SPARE_CTRL_REG0_VALUE                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_SPARE_CTRL_REG0_VALUE_MASK                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_SPARE_CTRL_REG0_VALUE_SHIFT                                                        (0)


#define AON_REG_SPARE_CTRL_REG1                                                                    (AON_REG_BASE + 0x1e0)
#define AON_REG_SPARE_CTRL_REG1_DEFAULT                                                            0x0
#define AON_REG_SPARE_CTRL_REG1_VALUE                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_SPARE_CTRL_REG1_VALUE_MASK                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_SPARE_CTRL_REG1_VALUE_SHIFT                                                        (0)


#define AON_REG_GPIO_01_AON_SEL                                                                    (AON_REG_BASE + 0x200)
#define AON_REG_GPIO_01_AON_SEL_DEFAULT                                                            0x0
#define AON_REG_GPIO_01_AON_SEL_CTL_GPIO_0_AON_SEL                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define AON_REG_GPIO_01_AON_SEL_CTL_GPIO_0_AON_SEL_MASK                                            (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_SEL_CTL_GPIO_0_AON_SEL_SHIFT                                           (0)
#define AON_REG_GPIO_01_AON_SEL_CTL_GPIO_1_AON_SEL                                                 (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define AON_REG_GPIO_01_AON_SEL_CTL_GPIO_1_AON_SEL_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_SEL_CTL_GPIO_1_AON_SEL_SHIFT                                           (16)


#define AON_REG_GPIO_3_AON_SEL                                                                     (AON_REG_BASE + 0x204)
#define AON_REG_GPIO_3_AON_SEL_DEFAULT                                                             0x0
#define AON_REG_GPIO_3_AON_SEL_CTL_GPIO_3_AON_SEL                                                  (Bit2+Bit3+Bit4+Bit5)
#define AON_REG_GPIO_3_AON_SEL_CTL_GPIO_3_AON_SEL_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_3_AON_SEL_CTL_GPIO_3_AON_SEL_SHIFT                                            (2)
#define AON_REG_GPIO_3_AON_SEL_CTL_GPIO_4_AON_SEL                                                  (Bit8+Bit9+Bit10+Bit11)
#define AON_REG_GPIO_3_AON_SEL_CTL_GPIO_4_AON_SEL_MASK                                             (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_3_AON_SEL_CTL_GPIO_4_AON_SEL_SHIFT                                            (8)


#define AON_REG_GPIO_01_AON_OUTPUT_SEL                                                             (AON_REG_BASE + 0x210)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_DEFAULT                                                     0x0
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_0_PINMUX_SEL                                 (Bit0+Bit1+Bit2)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_0_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_0_PINMUX_SEL_SHIFT                           (0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_1_PINMUX_SEL                                 (Bit4+Bit5+Bit6)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_1_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_1_PINMUX_SEL_SHIFT                           (4)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_2_PINMUX_SEL                                 (Bit8+Bit9+Bit10)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_2_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_2_PINMUX_SEL_SHIFT                           (8)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_3_PINMUX_SEL                                 (Bit12+Bit13+Bit14)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_3_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_3_PINMUX_SEL_SHIFT                           (12)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_4_PINMUX_SEL                                 (Bit16+Bit17+Bit18)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_4_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_4_PINMUX_SEL_SHIFT                           (16)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_5_PINMUX_SEL                                 (Bit20+Bit21+Bit22)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_5_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_5_PINMUX_SEL_SHIFT                           (20)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_6_PINMUX_SEL                                 (Bit24+Bit25+Bit26)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_6_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_6_PINMUX_SEL_SHIFT                           (24)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_7_PINMUX_SEL                                 (Bit28+Bit29+Bit30)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_7_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_CTL_AON_GPIO_0_7_PINMUX_SEL_SHIFT                           (28)


#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2                                                           (AON_REG_BASE + 0x214)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_DEFAULT                                                   0x0
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_0_8_PINMUX_SEL                               (Bit0+Bit1+Bit2)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_0_8_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_0_8_PINMUX_SEL_SHIFT                         (0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_0_PINMUX_SEL                               (Bit4+Bit5+Bit6)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_0_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_0_PINMUX_SEL_SHIFT                         (4)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_1_PINMUX_SEL                               (Bit8+Bit9+Bit10)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_1_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_1_PINMUX_SEL_SHIFT                         (8)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_2_PINMUX_SEL                               (Bit12+Bit13+Bit14)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_2_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_2_PINMUX_SEL_SHIFT                         (12)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_3_PINMUX_SEL                               (Bit16+Bit17+Bit18)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_3_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_3_PINMUX_SEL_SHIFT                         (16)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_4_PINMUX_SEL                               (Bit20+Bit21+Bit22)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_4_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_4_PINMUX_SEL_SHIFT                         (20)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_5_PINMUX_SEL                               (Bit24+Bit25+Bit26)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_5_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_5_PINMUX_SEL_SHIFT                         (24)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_6_PINMUX_SEL                               (Bit28+Bit29+Bit30)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_6_PINMUX_SEL_MASK                          (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_01_AON_OUTPUT_SEL_2_CTL_AON_GPIO_1_6_PINMUX_SEL_SHIFT                         (28)


#define AON_REG_GPIO_13_AON_OUTPUT_SEL                                                             (AON_REG_BASE + 0x218)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_DEFAULT                                                     0x0
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_7_PINMUX_SEL                                 (Bit0+Bit1+Bit2)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_7_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_7_PINMUX_SEL_SHIFT                           (0)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_8_PINMUX_SEL                                 (Bit4+Bit5+Bit6)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_8_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_8_PINMUX_SEL_SHIFT                           (4)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_9_PINMUX_SEL                                 (Bit8+Bit9+Bit10)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_9_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_1_9_PINMUX_SEL_SHIFT                           (8)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_2_PINMUX_SEL                                 (Bit20+Bit21+Bit22)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_2_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_2_PINMUX_SEL_SHIFT                           (20)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_3_PINMUX_SEL                                 (Bit24+Bit25+Bit26)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_3_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_3_PINMUX_SEL_SHIFT                           (24)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_4_PINMUX_SEL                                 (Bit28+Bit29+Bit30)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_4_PINMUX_SEL_MASK                            (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_13_AON_OUTPUT_SEL_CTL_AON_GPIO_3_4_PINMUX_SEL_SHIFT                           (28)


#define AON_REG_GPIO_3_AON_OUTPUT_SEL                                                              (AON_REG_BASE + 0x21c)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_DEFAULT                                                      0x0
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_3_5_PINMUX_SEL                                  (Bit0+Bit1+Bit2)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_3_5_PINMUX_SEL_MASK                             (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_3_5_PINMUX_SEL_SHIFT                            (0)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_0_PINMUX_SEL                                  (Bit4+Bit5+Bit6)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_0_PINMUX_SEL_MASK                             (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_0_PINMUX_SEL_SHIFT                            (4)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_1_PINMUX_SEL                                  (Bit8+Bit9+Bit10)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_1_PINMUX_SEL_MASK                             (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_1_PINMUX_SEL_SHIFT                            (8)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_2_PINMUX_SEL                                  (Bit12+Bit13+Bit14)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_2_PINMUX_SEL_MASK                             (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_2_PINMUX_SEL_SHIFT                            (12)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_3_PINMUX_SEL                                  (Bit16+Bit17+Bit18)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_3_PINMUX_SEL_MASK                             (Bit2+Bit1+Bit0)
#define AON_REG_GPIO_3_AON_OUTPUT_SEL_CTL_AON_GPIO_4_3_PINMUX_SEL_SHIFT                            (16)


#define AON_REG_GPIO_23_ANA_ON                                                                     (AON_REG_BASE + 0x220)
#define AON_REG_GPIO_23_ANA_ON_DEFAULT                                                             0x0
#define AON_REG_GPIO_23_ANA_ON_CTL_GPIO_2_ANA_ON                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_23_ANA_ON_CTL_GPIO_2_ANA_ON_MASK                                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_23_ANA_ON_CTL_GPIO_2_ANA_ON_SHIFT                                             (0)
#define AON_REG_GPIO_23_ANA_ON_CTL_GPIO_3_ANA_ON                                                   (Bit16+Bit17)
#define AON_REG_GPIO_23_ANA_ON_CTL_GPIO_3_ANA_ON_MASK                                              (Bit1+Bit0)
#define AON_REG_GPIO_23_ANA_ON_CTL_GPIO_3_ANA_ON_SHIFT                                             (16)


#define AON_REG_QSPI_AON_SEL                                                                       (AON_REG_BASE + 0x228)
#define AON_REG_QSPI_AON_SEL_DEFAULT                                                               0x0
#define AON_REG_QSPI_AON_SEL_CTL_QSPI_AON_SEL                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define AON_REG_QSPI_AON_SEL_CTL_QSPI_AON_SEL_MASK                                                 (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_QSPI_AON_SEL_CTL_QSPI_AON_SEL_SHIFT                                                (0)
#define AON_REG_QSPI_AON_SEL_CTL_QSPI_DO_AON                                                       (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define AON_REG_QSPI_AON_SEL_CTL_QSPI_DO_AON_MASK                                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_QSPI_AON_SEL_CTL_QSPI_DO_AON_SHIFT                                                 (8)


#define AON_REG_QSPI_LE_MASKB                                                                      (AON_REG_BASE + 0x22c)
#define AON_REG_QSPI_LE_MASKB_DEFAULT                                                              0x0
#define AON_REG_QSPI_LE_MASKB_CTL_QSPI_LE                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define AON_REG_QSPI_LE_MASKB_CTL_QSPI_LE_MASK                                                     (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_QSPI_LE_MASKB_CTL_QSPI_LE_SHIFT                                                    (0)
#define AON_REG_QSPI_LE_MASKB_CTL_QSPI_MASKB                                                       (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define AON_REG_QSPI_LE_MASKB_CTL_QSPI_MASKB_MASK                                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_QSPI_LE_MASKB_CTL_QSPI_MASKB_SHIFT                                                 (16)


#define AON_REG_XO_REG                                                                             (AON_REG_BASE + 0x250)
#define AON_REG_XO_REG_DEFAULT                                                                     0x22211F33
#define AON_REG_XO_REG_REG1                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_XO_REG_REG1_MASK                                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_REG_REG1_SHIFT                                                                  (0)
#define AON_REG_XO_REG_REG2                                                                        (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_XO_REG_REG2_MASK                                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_REG_REG2_SHIFT                                                                  (8)
#define AON_REG_XO_REG_REG3                                                                        (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_XO_REG_REG3_MASK                                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_REG_REG3_SHIFT                                                                  (16)
#define AON_REG_XO_REG_REG4                                                                        (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_XO_REG_REG4_MASK                                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_REG_REG4_SHIFT                                                                  (24)


#define AON_REG_XO_REG5                                                                            (AON_REG_BASE + 0x254)
#define AON_REG_XO_REG5_DEFAULT                                                                    0x8
#define AON_REG_XO_REG5_REG5                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_XO_REG5_REG5_MASK                                                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_REG5_REG5_SHIFT                                                                 (0)


#define AON_REG_XO_STAGE_1_REG                                                                     (AON_REG_BASE + 0x258)
#define AON_REG_XO_STAGE_1_REG_DEFAULT                                                             0x22211F33
#define AON_REG_XO_STAGE_1_REG_REG1                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_XO_STAGE_1_REG_REG1_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_STAGE_1_REG_REG1_SHIFT                                                          (0)
#define AON_REG_XO_STAGE_1_REG_REG2                                                                (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_XO_STAGE_1_REG_REG2_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_STAGE_1_REG_REG2_SHIFT                                                          (8)
#define AON_REG_XO_STAGE_1_REG_REG3                                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_XO_STAGE_1_REG_REG3_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_STAGE_1_REG_REG3_SHIFT                                                          (16)
#define AON_REG_XO_STAGE_1_REG_REG4                                                                (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_XO_STAGE_1_REG_REG4_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_STAGE_1_REG_REG4_SHIFT                                                          (24)


#define AON_REG_XO_STAGE_1_REG5                                                                    (AON_REG_BASE + 0x25c)
#define AON_REG_XO_STAGE_1_REG5_DEFAULT                                                            0x8
#define AON_REG_XO_STAGE_1_REG5_REG5                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define AON_REG_XO_STAGE_1_REG5_REG5_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_STAGE_1_REG5_REG5_SHIFT                                                         (0)


#define AON_REG_XO_EN_CTRL                                                                         (AON_REG_BASE + 0x260)
#define AON_REG_XO_EN_CTRL_DEFAULT                                                                 0x108
#define AON_REG_XO_EN_CTRL_CTL_XO_ADDITIONAL_CTRL                                                  (Bit0)
#define AON_REG_XO_EN_CTRL_CTL_XO_EN_OSC_EN                                                        (Bit2)
#define AON_REG_XO_EN_CTRL_CTL_XO_EN_OSC_EN_ADD_DLY                                                (Bit3)
#define AON_REG_XO_EN_CTRL_CTL_XO_EN_OSC_EN_ADD_DLY_VAL                                            (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define AON_REG_XO_EN_CTRL_CTL_XO_EN_OSC_EN_ADD_DLY_VAL_MASK                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_EN_CTRL_CTL_XO_EN_OSC_EN_ADD_DLY_VAL_SHIFT                                      (4)


#define AON_REG_XO_EN_STAGE_CTRL                                                                   (AON_REG_BASE + 0x264)
#define AON_REG_XO_EN_STAGE_CTRL_DEFAULT                                                           0xE078
#define AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION_MASK                                       (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION_SHIFT                                      (0)
#define AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION                                            (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION_MASK                                       (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION_SHIFT                                      (12)


#define AON_REG_AON_MISC_CTRL                                                                      (AON_REG_BASE + 0x288)
#define AON_REG_AON_MISC_CTRL_DEFAULT                                                              0x50
#define AON_REG_AON_MISC_CTRL_USE_AON_PS_VALS_FOR_XO_REG3_BITS                                     (Bit0)
#define AON_REG_AON_MISC_CTRL_AON_MISC_CTRL_SEL_AON_32K_CLK                                        (Bit1)
#define AON_REG_AON_MISC_CTRL_CTL_SEL_TIMER_WDT_32K_CLK                                            (Bit2)
#define AON_REG_AON_MISC_CTRL_CTL_BLE_EXT_WAKEUP_ENABLE                                            (Bit4)
#define AON_REG_AON_MISC_CTRL_CTL_WDT_RST_SWITCH_RC_CLK                                            (Bit6)


#define AON_REG_AON_RESET_CTRL                                                                     (AON_REG_BASE + 0x28c)
#define AON_REG_AON_RESET_CTRL_DEFAULT                                                             0xF3F
#define AON_REG_AON_RESET_CTRL_AON_RESET_CTRL_AON_MUX_CLK_RSTN_REG                                 (Bit0)
#define AON_REG_AON_RESET_CTRL_AON_RESET_CTRL_AON_BLE_RSTN_REG                                     (Bit1)
#define AON_REG_AON_RESET_CTRL_AON_RESET_CTRL_AON_TIMER0_RSTN_REG                                  (Bit2)
#define AON_REG_AON_RESET_CTRL_AON_RESET_CTRL_AON_TIMER1_RSTN_REG                                  (Bit3)
#define AON_REG_AON_RESET_CTRL_AON_RESET_CTRL_AON_TIMER2_RSTN_REG                                  (Bit4)
#define AON_REG_AON_RESET_CTRL_AON_RESET_CTRL_AON_TIMER3_RSTN_REG                                  (Bit5)
#define AON_REG_AON_RESET_CTRL_AON_RESET_CTRL_TIMER_WDT_RSTN_REG                                   (Bit8)
#define AON_REG_AON_RESET_CTRL_CTL_PD1_MANUAL_RST_N                                                (Bit9)
#define AON_REG_AON_RESET_CTRL_CTL_SYSTICK_AON_RSTN                                                (Bit10)
#define AON_REG_AON_RESET_CTRL_CTL_GPIO_PD1_RST_RSTN                                               (Bit11)


#define AON_REG_AON_GLOBAL_RESET_CTRL                                                              (AON_REG_BASE + 0x290)
#define AON_REG_AON_GLOBAL_RESET_CTRL_DEFAULT                                                      0x1
#define AON_REG_AON_GLOBAL_RESET_CTRL_AON_GLOBAL_RESET_CTRL_GLOBAL_RESETN_REG                      (Bit0)


#define AON_REG_SENSOR_FLASH_POWER_SW_CTL                                                          (AON_REG_BASE + 0x2b0)
#define AON_REG_SENSOR_FLASH_POWER_SW_CTL_DEFAULT                                                  0x0
#define AON_REG_SENSOR_FLASH_POWER_SW_CTL_CTL_SENSOR_POWER_SW_FORCE                                (Bit0)
#define AON_REG_SENSOR_FLASH_POWER_SW_CTL_CTL_SENSOR_POWER_SW                                      (Bit1)
#define AON_REG_SENSOR_FLASH_POWER_SW_CTL_CTL_FLASH_POWER_SW_FORCE                                 (Bit4)
#define AON_REG_SENSOR_FLASH_POWER_SW_CTL_CTL_FLASH_POWER_SW                                       (Bit5)


#define AON_REG_HW_TIMING_CORR_CTRL_0                                                              (AON_REG_BASE + 0x2d0)
#define AON_REG_HW_TIMING_CORR_CTRL_0_DEFAULT                                                      0x2710011
#define AON_REG_HW_TIMING_CORR_CTRL_0_CTL_USE_HW_CORRECTION                                        (Bit0)
#define AON_REG_HW_TIMING_CORR_CTRL_0_CTL_HW_CORR_FINECNT_OFFSET                                   (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define AON_REG_HW_TIMING_CORR_CTRL_0_CTL_HW_CORR_FINECNT_OFFSET_MASK                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_HW_TIMING_CORR_CTRL_0_CTL_HW_CORR_FINECNT_OFFSET_SHIFT                             (4)
#define AON_REG_HW_TIMING_CORR_CTRL_0_CTL_HALF_SLOT_DURATION                                       (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define AON_REG_HW_TIMING_CORR_CTRL_0_CTL_HALF_SLOT_DURATION_MASK                                  (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_HW_TIMING_CORR_CTRL_0_CTL_HALF_SLOT_DURATION_SHIFT                                 (16)


#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL                                                       (AON_REG_BASE + 0x2e0)
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_DEFAULT                                               0x2
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_CTL_WAKEUP_SRC_CLR                                    (Bit0)
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_CTL_WAKEUP_SRC_AUTO_CLR                               (Bit1)
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_CTL_WAKE_SRC_USE_DCDC_FOR_SLEEP                       (Bit2)
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_CTL_PD1_RESET_CNT_CLR                                 (Bit8)
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_CTL_PD1_RESET_SOURCE_MASK                             (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_CTL_PD1_RESET_SOURCE_MASK_MASK                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_WAKEUP_SOURCE_PD1_RESET_CTRL_CTL_PD1_RESET_SOURCE_MASK_SHIFT                       (16)


#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0                                                       (AON_REG_BASE + 0x2f0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_DEFAULT                                               0x3F0
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_EN_0                        (Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_CLK_EN                      (Bit1)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_0                       (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_0_MASK                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_0_SHIFT                 (4)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_EDGE_SEL_0                  (Bit12)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_0                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_0_MASK              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_0_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_0_SHIFT             (16)


#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1                                                       (AON_REG_BASE + 0x2f4)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_DEFAULT                                               0x3F0
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_EN_1                        (Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_1                       (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_1_MASK                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_1_SHIFT                 (4)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_EDGE_SEL_1                  (Bit12)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_1                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_1_MASK              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_1_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_1_SHIFT             (16)


#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2                                                       (AON_REG_BASE + 0x2f8)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_DEFAULT                                               0x3F0
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_EN_2                        (Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_2                       (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_2_MASK                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_SEL_2_SHIFT                 (4)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_EDGE_SEL_2                  (Bit12)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_2                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_2_MASK              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_PD1_RST_CTRL_2_CTL_GPIO_EDGE_FOR_PD1_RST_DEB_LMT_2_SHIFT             (16)


#define AON_REG_GPIO_EDGE_FOR_CM4_RST                                                              (AON_REG_BASE + 0x2fc)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_DEFAULT                                                      0x3F0
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_EN                                 (Bit0)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_SEL                                (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_SEL_MASK                           (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_SEL_SHIFT                          (4)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_EDGE_SEL                           (Bit12)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_DEB_LMT                            (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_DEB_LMT_MASK                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_DEB_LMT_SHIFT                      (16)
#define AON_REG_GPIO_EDGE_FOR_CM4_RST_CTL_GPIO_EDGE_FOR_CM4_RST_FUNC_SEL                           (Bit24)


#define AON_REG_TRIG_SQUARE_WAVE_CTRL                                                              (AON_REG_BASE + 0x310)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_DEFAULT                                                      0xFFFF8000
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_ENABLE                                           (Bit0)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_ENABLE_CLK                                       (Bit1)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_FUNC_SEL                                         (Bit3)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_LVL_POLARITY                                     (Bit4)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_PERIOD                                           (Bit8+Bit9+Bit10+Bit11)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_PERIOD_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_PERIOD_SHIFT                                     (8)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_TRIG_MASK                                        (Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_TRIG_MASK_MASK                                   (Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_TRIG_SQUARE_WAVE_CTRL_CTL_SQ_WAVE_TRIG_MASK_SHIFT                                  (15)


#define AON_REG_TRIG_SQUARE_WAVE_MANUAL_TRIG                                                       (AON_REG_BASE + 0x314)
#define AON_REG_TRIG_SQUARE_WAVE_MANUAL_TRIG_DEFAULT                                               0x0
#define AON_REG_TRIG_SQUARE_WAVE_MANUAL_TRIG_CTL_SQ_WAVE_MANUAL_TRIG                               (Bit0)


#define AON_REG_TRIG_SQUARE_WAVE_STOP                                                              (AON_REG_BASE + 0x318)
#define AON_REG_TRIG_SQUARE_WAVE_STOP_DEFAULT                                                      0x0
#define AON_REG_TRIG_SQUARE_WAVE_STOP_CTL_SQ_WAVE_STOP                                             (Bit0)


#define AON_REG_SYSTICK_AON_CTRL                                                                   (AON_REG_BASE + 0x340)
#define AON_REG_SYSTICK_AON_CTRL_DEFAULT                                                           0x0
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_EN                                                (Bit0)
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_CAP_SIG_SEL                                       (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_CAP_SIG_SEL_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_CAP_SIG_SEL_SHIFT                                 (4)
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_CAP_SIG_REDGE_EN                                  (Bit12)
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_CAP_SIG_FEDGE_EN                                  (Bit13)
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_EMIT_EN                                           (Bit16)
#define AON_REG_SYSTICK_AON_CTRL_CTL_SYSTICK_AON_CAP_SW_TRIG                                       (Bit20)


#define AON_REG_SYSTICK_AON_EMIT_VAL                                                               (AON_REG_BASE + 0x344)
#define AON_REG_SYSTICK_AON_EMIT_VAL_DEFAULT                                                       0x0
#define AON_REG_SYSTICK_AON_EMIT_VAL_CTL_SYSTICK_AON_EMIT_VAL                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_SYSTICK_AON_EMIT_VAL_CTL_SYSTICK_AON_EMIT_VAL_MASK                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_SYSTICK_AON_EMIT_VAL_CTL_SYSTICK_AON_EMIT_VAL_SHIFT                                (0)


#define AON_REG_SYSTICK_AON_EMIT_CLR                                                               (AON_REG_BASE + 0x348)
#define AON_REG_SYSTICK_AON_EMIT_CLR_DEFAULT                                                       0x0
#define AON_REG_SYSTICK_AON_EMIT_CLR_CTL_SYSTICK_AON_EMIT_CLR                                      (Bit0)


#define AON_REG_CPLL_CTRL                                                                          (AON_REG_BASE + 0x360)
#define AON_REG_CPLL_CTRL_DEFAULT                                                                  0xF0800
#define AON_REG_CPLL_CTRL_CTL_CPLL_EN                                                              (Bit0)
#define AON_REG_CPLL_CTRL_CTL_CPLL_FORCE_EN                                                        (Bit1)
#define AON_REG_CPLL_CTRL_CTL_BGR_EN                                                               (Bit2)
#define AON_REG_CPLL_CTRL_CTL_BGR_FORCE_EN                                                         (Bit3)
#define AON_REG_CPLL_CTRL_CTL_CPLL_FREQ_SEL                                                        (Bit4)
#define AON_REG_CPLL_CTRL_CTL_CPLL_RESETN_TOGGLE_DLY                                               (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_CPLL_CTRL_CTL_CPLL_RESETN_TOGGLE_DLY_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPLL_CTRL_CTL_CPLL_RESETN_TOGGLE_DLY_SHIFT                                         (8)
#define AON_REG_CPLL_CTRL_CTL_CPLL_RESETN_TOGGLE_DURATION                                          (Bit16+Bit17+Bit18+Bit19)
#define AON_REG_CPLL_CTRL_CTL_CPLL_RESETN_TOGGLE_DURATION_MASK                                     (Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPLL_CTRL_CTL_CPLL_RESETN_TOGGLE_DURATION_SHIFT                                    (16)
#define AON_REG_CPLL_CTRL_CTL_CPLL_RESETN_TOGGLE_POLARITY                                          (Bit20)


#define AON_REG_CPLL_REG1TO4_FREQ0                                                                 (AON_REG_BASE + 0x364)
#define AON_REG_CPLL_REG1TO4_FREQ0_DEFAULT                                                         0xC4C48D0
#define AON_REG_CPLL_REG1TO4_FREQ0_REG1TO4                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_CPLL_REG1TO4_FREQ0_REG1TO4_MASK                                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPLL_REG1TO4_FREQ0_REG1TO4_SHIFT                                                   (0)


#define AON_REG_CPLL_REG5TO6_FREQ0                                                                 (AON_REG_BASE + 0x368)
#define AON_REG_CPLL_REG5TO6_FREQ0_DEFAULT                                                         0x4C00
#define AON_REG_CPLL_REG5TO6_FREQ0_REG5TO6                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_CPLL_REG5TO6_FREQ0_REG5TO6_MASK                                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPLL_REG5TO6_FREQ0_REG5TO6_SHIFT                                                   (0)


#define AON_REG_CPLL_REG1TO4_FREQ1                                                                 (AON_REG_BASE + 0x370)
#define AON_REG_CPLL_REG1TO4_FREQ1_DEFAULT                                                         0xC4C4290
#define AON_REG_CPLL_REG1TO4_FREQ1_REG1TO4                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define AON_REG_CPLL_REG1TO4_FREQ1_REG1TO4_MASK                                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPLL_REG1TO4_FREQ1_REG1TO4_SHIFT                                                   (0)


#define AON_REG_CPLL_REG5TO6_FREQ1                                                                 (AON_REG_BASE + 0x374)
#define AON_REG_CPLL_REG5TO6_FREQ1_DEFAULT                                                         0x4C00
#define AON_REG_CPLL_REG5TO6_FREQ1_REG5TO6                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define AON_REG_CPLL_REG5TO6_FREQ1_REG5TO6_MASK                                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define AON_REG_CPLL_REG5TO6_FREQ1_REG5TO6_SHIFT                                                   (0)


#endif // _AON_REG_DEFINES_H

