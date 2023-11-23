#ifndef _D2_REG_DEFINES_H
#define _D2_REG_DEFINES_H
/* **************************** */
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL                                                          (D2_REG_BASE + 0x0)
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL_DEFAULT                                                  0x440
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL_CTL_CLK_FORCE_ON_EH2H_CM4_TO_D0_CLK                      (Bit4)
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL_CTL_CLK_FORCE_OFF_EH2H_CM4_TO_D0_CLK                     (Bit5)
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL_CTL_DIS_CLK_WFI_EH2H_CM4_TO_D0_CLK                       (Bit6)
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL_CTL_CLK_FORCE_ON_EH2H_CM4_TO_D0_HCLK                     (Bit8)
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL_CTL_CLK_FORCE_OFF_EH2H_CM4_TO_D0_HCLK                    (Bit9)
#define D2_REG_CM4S_TO_D0_BRIDGE_CTRL_CTL_DIS_CLK_WFI_EH2H_CM4_TO_D0_HCLK                      (Bit10)


#define D2_REG_MISC_CTRL                                                                       (D2_REG_BASE + 0x8)
#define D2_REG_MISC_CTRL_DEFAULT                                                               0xC11
#define D2_REG_MISC_CTRL_CTL_ROOT_D0_CLK_EN                                                    (Bit0)
#define D2_REG_MISC_CTRL_CTL_D0_AHB_RSTN                                                       (Bit4)
#define D2_REG_MISC_CTRL_CTL_FORCE_ON_D0_AHB_HCLK                                              (Bit8)
#define D2_REG_MISC_CTRL_CTL_FORCE_OFF_D0_AHB_HCLK                                             (Bit9)
#define D2_REG_MISC_CTRL_CTL_DIS_CLK_WFI_D0_AHB_HCLK                                           (Bit10)
#define D2_REG_MISC_CTRL_CTL_D0_CPU_HRESETN_REG                                                (Bit11)


#define D2_REG_CLK_CTRL                                                                        (D2_REG_BASE + 0xc)
#define D2_REG_CLK_CTRL_DEFAULT                                                                0x103
#define D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XOX2_OR_XO                                      (Bit0)
#define D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_CPLL_OR_CPLL_DIV2                               (Bit1)
#define D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL                                      (Bit2)
#define D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_D0_CLK                                          (Bit8)


#define D2_REG_RC_CLOCK_SEL                                                                    (D2_REG_BASE + 0x10)
#define D2_REG_RC_CLOCK_SEL_DEFAULT                                                            0x0
#define D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC                             (Bit4)
#define D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_AUTO_SWITCH_TO_RC_XO_GT_TARGET                  (Bit8)
#define D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_AUTO_SWITCH_TO_RC_CPLL_LOCK                     (Bit9)
#define D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_AUTO_SWITCH_CLK_EN                              (Bit10)
#define D2_REG_RC_CLOCK_SEL_STS_ROOT_CLK_SWITCHED_TO_RC                                        (Bit12)
#define D2_REG_RC_CLOCK_SEL_STS_CURR_ROOT_CLOCK_SEL                                            (Bit13)


#define D2_REG_AON_CPU_SP                                                                      (D2_REG_BASE + 0x20)
#define D2_REG_AON_CPU_SP_DEFAULT                                                              0x0
#define D2_REG_AON_CPU_SP_STS_AON_CPU_SP                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define D2_REG_AON_CPU_SP_STS_AON_CPU_SP_MASK                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_AON_CPU_SP_STS_AON_CPU_SP_SHIFT                                                 (0)


#define D2_REG_AON_CPU_PC_COLD_WARM_BOOT                                                       (D2_REG_BASE + 0x24)
#define D2_REG_AON_CPU_PC_COLD_WARM_BOOT_DEFAULT                                               0x0
#define D2_REG_AON_CPU_PC_COLD_WARM_BOOT_STS_AON_CPU_PC                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define D2_REG_AON_CPU_PC_COLD_WARM_BOOT_STS_AON_CPU_PC_MASK                                   (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_AON_CPU_PC_COLD_WARM_BOOT_STS_AON_CPU_PC_SHIFT                                  (0)
#define D2_REG_AON_CPU_PC_COLD_WARM_BOOT_STS_AON_BOOT_COLDWARM                                 (Bit31)


#define D2_REG_AON_CPU_SPARE0                                                                  (D2_REG_BASE + 0x28)
#define D2_REG_AON_CPU_SPARE0_DEFAULT                                                          0x0
#define D2_REG_AON_CPU_SPARE0_STS_AON_CPU_SPARE0                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define D2_REG_AON_CPU_SPARE0_STS_AON_CPU_SPARE0_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_AON_CPU_SPARE0_STS_AON_CPU_SPARE0_SHIFT                                         (0)


#define D2_REG_SYSTICK_CUR_FINE_CNT                                                            (D2_REG_BASE + 0x30)
#define D2_REG_SYSTICK_CUR_FINE_CNT_DEFAULT                                                    0x0
#define D2_REG_SYSTICK_CUR_FINE_CNT_STS_SYSTICK_CUR_FINECNT_VAL                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define D2_REG_SYSTICK_CUR_FINE_CNT_STS_SYSTICK_CUR_FINECNT_VAL_MASK                           (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_SYSTICK_CUR_FINE_CNT_STS_SYSTICK_CUR_FINECNT_VAL_SHIFT                          (0)


#define D2_REG_SYSTICK_CUR_COARSE_CNT                                                          (D2_REG_BASE + 0x34)
#define D2_REG_SYSTICK_CUR_COARSE_CNT_DEFAULT                                                  0x0
#define D2_REG_SYSTICK_CUR_COARSE_CNT_STS_SYSTICK_CUR_COARSECNT_VAL                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define D2_REG_SYSTICK_CUR_COARSE_CNT_STS_SYSTICK_CUR_COARSECNT_VAL_MASK                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_SYSTICK_CUR_COARSE_CNT_STS_SYSTICK_CUR_COARSECNT_VAL_SHIFT                      (0)


#define D2_REG_SYSTICK_FINE_CNT_SNAPSHOT                                                       (D2_REG_BASE + 0x40)
#define D2_REG_SYSTICK_FINE_CNT_SNAPSHOT_DEFAULT                                               0x0
#define D2_REG_SYSTICK_FINE_CNT_SNAPSHOT_STS_SYSTICK_FINECNT_VAL_SNAPSHOT                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define D2_REG_SYSTICK_FINE_CNT_SNAPSHOT_STS_SYSTICK_FINECNT_VAL_SNAPSHOT_MASK                 (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_SYSTICK_FINE_CNT_SNAPSHOT_STS_SYSTICK_FINECNT_VAL_SNAPSHOT_SHIFT                (0)


#define D2_REG_SYSTICK_COARSE_CNT_SNAPSHOT                                                     (D2_REG_BASE + 0x44)
#define D2_REG_SYSTICK_COARSE_CNT_SNAPSHOT_DEFAULT                                             0x0
#define D2_REG_SYSTICK_COARSE_CNT_SNAPSHOT_STS_SYSTICK_COARSECNT_SNAPSHOT                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define D2_REG_SYSTICK_COARSE_CNT_SNAPSHOT_STS_SYSTICK_COARSECNT_SNAPSHOT_MASK                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_SYSTICK_COARSE_CNT_SNAPSHOT_STS_SYSTICK_COARSECNT_SNAPSHOT_SHIFT                (0)


#define D2_REG_WAKEUP_SOURCE                                                                   (D2_REG_BASE + 0x50)
#define D2_REG_WAKEUP_SOURCE_DEFAULT                                                           0x0
#define D2_REG_WAKEUP_SOURCE_STS_WAKEUP_SRC                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define D2_REG_WAKEUP_SOURCE_STS_WAKEUP_SRC_MASK                                               (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_WAKEUP_SOURCE_STS_WAKEUP_SRC_SHIFT                                              (0)
#define D2_REG_WAKEUP_SOURCE_STS_WAKEUP_SRC_RDY                                                (Bit8)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_SRC                                                   (Bit16+Bit17+Bit18+Bit19)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_SRC_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_SRC_SHIFT                                             (16)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_PREV_SRC                                              (Bit20+Bit21+Bit22+Bit23)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_PREV_SRC_MASK                                         (Bit3+Bit2+Bit1+Bit0)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_PREV_SRC_SHIFT                                        (20)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_CNT                                                   (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_CNT_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define D2_REG_WAKEUP_SOURCE_STS_PD1_RST_CNT_SHIFT                                             (24)


#endif // _D2_REG_DEFINES_H

