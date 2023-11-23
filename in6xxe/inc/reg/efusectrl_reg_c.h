#ifndef _EFUSECTRL_REG_DEFINES_H
#define _EFUSECTRL_REG_DEFINES_H
/* **************************** */
#define EFUSECTRL_REG_INTR_STATUS                                                             (EFUSECTRL_REG_BASE + 0x0)
#define EFUSECTRL_REG_INTR_STATUS_DEFAULT                                                     0x0
#define EFUSECTRL_REG_INTR_STATUS_READ_DONE                                                   (Bit0)
#define EFUSECTRL_REG_INTR_STATUS_PROG_DONE                                                   (Bit1)
#define EFUSECTRL_REG_INTR_STATUS_PROG_BLOCKED                                                (Bit2)


#define EFUSECTRL_REG_INTR_MASK_STATUS                                                        (EFUSECTRL_REG_BASE + 0x4)
#define EFUSECTRL_REG_INTR_MASK_STATUS_DEFAULT                                                0x0
#define EFUSECTRL_REG_INTR_MASK_STATUS_READ_DONE                                              (Bit0)
#define EFUSECTRL_REG_INTR_MASK_STATUS_PROG_DONE                                              (Bit1)
#define EFUSECTRL_REG_INTR_MASK_STATUS_PROG_BLOCKED                                           (Bit2)


#define EFUSECTRL_REG_INTR_CLR                                                                (EFUSECTRL_REG_BASE + 0x8)
#define EFUSECTRL_REG_INTR_CLR_DEFAULT                                                        0x0
#define EFUSECTRL_REG_INTR_CLR_READ_DONE                                                      (Bit0)
#define EFUSECTRL_REG_INTR_CLR_PROG_DONE                                                      (Bit1)
#define EFUSECTRL_REG_INTR_CLR_PROG_BLOCKED                                                   (Bit2)


#define EFUSECTRL_REG_INTR_SET                                                                (EFUSECTRL_REG_BASE + 0xc)
#define EFUSECTRL_REG_INTR_SET_DEFAULT                                                        0x0
#define EFUSECTRL_REG_INTR_SET_READ_DONE                                                      (Bit0)
#define EFUSECTRL_REG_INTR_SET_PROG_DONE                                                      (Bit1)
#define EFUSECTRL_REG_INTR_SET_PROG_BLOCKED                                                   (Bit2)


#define EFUSECTRL_REG_INTR_MASK_SET                                                           (EFUSECTRL_REG_BASE + 0x10)
#define EFUSECTRL_REG_INTR_MASK_SET_DEFAULT                                                   0x0
#define EFUSECTRL_REG_INTR_MASK_SET_READ_DONE                                                 (Bit0)
#define EFUSECTRL_REG_INTR_MASK_SET_PROG_DONE                                                 (Bit1)
#define EFUSECTRL_REG_INTR_MASK_SET_PROG_BLOCKED                                              (Bit2)


#define EFUSECTRL_REG_INTR_MASK_CLR                                                           (EFUSECTRL_REG_BASE + 0x14)
#define EFUSECTRL_REG_INTR_MASK_CLR_DEFAULT                                                   0x0
#define EFUSECTRL_REG_INTR_MASK_CLR_READ_DONE                                                 (Bit0)
#define EFUSECTRL_REG_INTR_MASK_CLR_PROG_DONE                                                 (Bit1)
#define EFUSECTRL_REG_INTR_MASK_CLR_PROG_BLOCKED                                              (Bit2)


#define EFUSECTRL_REG_MISC_CTRL                                                               (EFUSECTRL_REG_BASE + 0x20)
#define EFUSECTRL_REG_MISC_CTRL_DEFAULT                                                       0x0
#define EFUSECTRL_REG_MISC_CTRL_CTL_EFUSE_EN                                                  (Bit0)
#define EFUSECTRL_REG_MISC_CTRL_CTL_EFUSE_INTR_CLR                                            (Bit1)
#define EFUSECTRL_REG_MISC_CTRL_CTL_EFUSE_PROG_EN                                             (Bit4)


#define EFUSECTRL_REG_MISC_STS                                                                (EFUSECTRL_REG_BASE + 0x28)
#define EFUSECTRL_REG_MISC_STS_DEFAULT                                                        0x0
#define EFUSECTRL_REG_MISC_STS_STS_EFUSE_PROG_BLK_0                                           (Bit0)
#define EFUSECTRL_REG_MISC_STS_STS_EFUSE_PROG_BLK_1                                           (Bit1)
#define EFUSECTRL_REG_MISC_STS_STS_EFUSE_INIT_RD_BYP_0                                        (Bit20)
#define EFUSECTRL_REG_MISC_STS_STS_EFUSE_INIT_RD_BYP_1                                        (Bit21)
#define EFUSECTRL_REG_MISC_STS_STS_EFUSE_CURR_STATE                                           (Bit24+Bit25+Bit26+Bit27)
#define EFUSECTRL_REG_MISC_STS_STS_EFUSE_CURR_STATE_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_MISC_STS_STS_EFUSE_CURR_STATE_SHIFT                                     (24)


#define EFUSECTRL_REG_READ_CTRL                                                               (EFUSECTRL_REG_BASE + 0x40)
#define EFUSECTRL_REG_READ_CTRL_DEFAULT                                                       0x0
#define EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_REQ                                            (Bit0)
#define EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_ADDR                                           (Bit4+Bit5+Bit6+Bit7+Bit8)
#define EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_ADDR_MASK                                      (Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_ADDR_SHIFT                                     (4)
#define EFUSECTRL_REG_READ_CTRL_CTL_EFUSE_READ_MODE                                           (Bit16)


#define EFUSECTRL_REG_READ_VAL                                                                (EFUSECTRL_REG_BASE + 0x44)
#define EFUSECTRL_REG_READ_VAL_DEFAULT                                                        0x0
#define EFUSECTRL_REG_READ_VAL_STS_EFUSE_READ_VAL                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_READ_VAL_STS_EFUSE_READ_VAL_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_READ_VAL_STS_EFUSE_READ_VAL_SHIFT                                       (0)


#define EFUSECTRL_REG_PROG_CTRL                                                               (EFUSECTRL_REG_BASE + 0x50)
#define EFUSECTRL_REG_PROG_CTRL_DEFAULT                                                       0x0
#define EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_REQ                                            (Bit0)
#define EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_BIT_ADDR                                       (Bit4+Bit5+Bit6+Bit7)
#define EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_BIT_ADDR_MASK                                  (Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_BIT_ADDR_SHIFT                                 (4)
#define EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_ADDR                                           (Bit8+Bit9+Bit10+Bit11+Bit12)
#define EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_ADDR_MASK                                      (Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_PROG_CTRL_CTL_EFUSE_PROG_ADDR_SHIFT                                     (8)


#define EFUSECTRL_REG_COUNTER_CTRL_0                                                          (EFUSECTRL_REG_BASE + 0x60)
#define EFUSECTRL_REG_COUNTER_CTRL_0_DEFAULT                                                  0x100120
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_INIT                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_INIT_MASK                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_INIT_SHIFT                                 (0)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_TRDS                                       (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_TRDS_MASK                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_TRDS_SHIFT                                 (8)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_TFS                                        (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_TFS_MASK                                   (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_0_CTL_EFUSE_CNT_TFS_SHIFT                                  (16)


#define EFUSECTRL_REG_COUNTER_CTRL_1                                                          (EFUSECTRL_REG_BASE + 0x64)
#define EFUSECTRL_REG_COUNTER_CTRL_1_DEFAULT                                                  0x201028
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TPP                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TPP_MASK                                   (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TPP_SHIFT                                  (0)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TEH                                        (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TEH_MASK                                   (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TEH_SHIFT                                  (12)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TESR                                       (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TESR_MASK                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_1_CTL_EFUSE_CNT_TESR_SHIFT                                 (20)


#define EFUSECTRL_REG_COUNTER_CTRL_2                                                          (EFUSECTRL_REG_BASE + 0x68)
#define EFUSECTRL_REG_COUNTER_CTRL_2_DEFAULT                                                  0xA05
#define EFUSECTRL_REG_COUNTER_CTRL_2_CTL_EFUSE_CNT_TRPW                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define EFUSECTRL_REG_COUNTER_CTRL_2_CTL_EFUSE_CNT_TRPW_MASK                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_2_CTL_EFUSE_CNT_TRPW_SHIFT                                 (0)
#define EFUSECTRL_REG_COUNTER_CTRL_2_CTL_EFUSE_CNT_TRC_MOD                                    (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define EFUSECTRL_REG_COUNTER_CTRL_2_CTL_EFUSE_CNT_TRC_MOD_MASK                               (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_COUNTER_CTRL_2_CTL_EFUSE_CNT_TRC_MOD_SHIFT                              (8)


#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0                                                   (EFUSECTRL_REG_BASE + 0xc0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_DEFAULT                                           0x0
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_EFUSE_LOCK                             (Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_SPIFLASH_PRESENT                              (Bit1)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_PN_CONFIG_0                            (Bit2+Bit3+Bit4+Bit5)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_PN_CONFIG_0_MASK                       (Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_PN_CONFIG_0_SHIFT                      (2)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_SECURITY_KEY_SEL                       (Bit6+Bit7+Bit8+Bit9)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_SECURITY_KEY_SEL_MASK                  (Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_SECURITY_KEY_SEL_SHIFT                 (6)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_SECURITY_KEY_ALG                       (Bit10+Bit11+Bit12)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_SECURITY_KEY_ALG_MASK                  (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_SECURITY_KEY_ALG_SHIFT                 (10)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_0_PIN_MUX_SEL                            (Bit13+Bit14+Bit15)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_0_PIN_MUX_SEL_MASK                       (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_0_PIN_MUX_SEL_SHIFT                      (13)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_2_PIN_MUX_SEL                            (Bit16+Bit17+Bit18)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_2_PIN_MUX_SEL_MASK                       (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_2_PIN_MUX_SEL_SHIFT                      (16)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_3_PIN_MUX_SEL                            (Bit19+Bit20+Bit21)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_3_PIN_MUX_SEL_MASK                       (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_3_PIN_MUX_SEL_SHIFT                      (19)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_4_PIN_MUX_SEL                            (Bit22+Bit23+Bit24)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_4_PIN_MUX_SEL_MASK                       (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_4_PIN_MUX_SEL_SHIFT                      (22)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_5_PIN_MUX_SEL                            (Bit25+Bit26+Bit27)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_5_PIN_MUX_SEL_MASK                       (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_5_PIN_MUX_SEL_SHIFT                      (25)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_INPLAY_W0_RSV                                 (Bit28)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_TVSL                                     (Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_TVSL_MASK                                (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W0_STS_QSPI_TVSL_SHIFT                               (29)


#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W1                                                   (EFUSECTRL_REG_BASE + 0xc4)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W1_DEFAULT                                           0x0
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W1_STS_UUID_31_0                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W1_STS_UUID_31_0_MASK                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W1_STS_UUID_31_0_SHIFT                               (0)


#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W2                                                   (EFUSECTRL_REG_BASE + 0xc8)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W2_DEFAULT                                           0x0
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W2_STS_UUID_63_32                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W2_STS_UUID_63_32_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W2_STS_UUID_63_32_SHIFT                              (0)


#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W3                                                   (EFUSECTRL_REG_BASE + 0xcc)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W3_DEFAULT                                           0x0
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W3_STS_UUID_95_64                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W3_STS_UUID_95_64_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W3_STS_UUID_95_64_SHIFT                              (0)


#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4                                                   (EFUSECTRL_REG_BASE + 0xd0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_DEFAULT                                           0x0
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_PN_CONFIG_1                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_PN_CONFIG_1_MASK                       (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_PN_CONFIG_1_SHIFT                      (0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_RSV_0                                  (Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_RSV_0_MASK                             (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_RSV_0_SHIFT                            (10)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_SW_FEATURE_SEL                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_SW_FEATURE_SEL_MASK                    (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_SW_FEATURE_SEL_SHIFT                   (16)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_RSV_1                                  (Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_RSV_1_MASK                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W4_STS_INPLAY_RSV_1_SHIFT                            (25)


#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5                                                   (EFUSECTRL_REG_BASE + 0xd4)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5_DEFAULT                                           0x0
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5_STS_INPLAY_VBAT_KQ0                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5_STS_INPLAY_VBAT_KQ0_MASK                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5_STS_INPLAY_VBAT_KQ0_SHIFT                         (0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5_STS_INPLAY_VBAT_BQ                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5_STS_INPLAY_VBAT_BQ_MASK                           (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W5_STS_INPLAY_VBAT_BQ_SHIFT                          (16)


#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6                                                   (EFUSECTRL_REG_BASE + 0xd8)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_DEFAULT                                           0x0
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_TEMP_OFFSET0                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_TEMP_OFFSET0_MASK                      (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_TEMP_OFFSET0_SHIFT                     (0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_DCDC_DRF                               (Bit16+Bit17+Bit18+Bit19)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_DCDC_DRF_MASK                          (Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_DCDC_DRF_SHIFT                         (16)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_DCDC_DRF_VALID                         (Bit20)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_VREF_DBV                               (Bit21+Bit22+Bit23+Bit24+Bit25)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_VREF_DBV_MASK                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_VREF_DBV_SHIFT                         (21)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_VREF_DBV_VALID                         (Bit26)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_W6_RSV                                 (Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_W6_RSV_MASK                            (Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_INPLAY_INIT_RD_VAL_W6_STS_INPLAY_W6_RSV_SHIFT                           (27)


#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0                                               (EFUSECTRL_REG_BASE + 0x100)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_DEFAULT                                       0x0
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_CUSTOMER_EFUSE_LOCK                       (Bit0)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_CM4_DBG_DISABLE                           (Bit1)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_FLASH_ENCRYPTION_ENABLE                   (Bit2)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_FLASH_SECURE_BOOT_ENABLE                  (Bit3)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_ECC_LEN_SECURE_BOOT                       (Bit4)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_DEFAULT_IF_EN                             (Bit5)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_DEFAULT_IF_SEL                            (Bit6+Bit7+Bit8)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_DEFAULT_IF_SEL_MASK                       (Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_DEFAULT_IF_SEL_SHIFT                      (6)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_RAM_SECURE_BOOT_ENABLE                    (Bit9)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_HOST_AUTHEN_EN                            (Bit10)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_SPI_INIT_SPEED                            (Bit11+Bit12)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_SPI_INIT_SPEED_MASK                       (Bit1+Bit0)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_SPI_INIT_SPEED_SHIFT                      (11)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_CUST_INIT_W0_RSV                          (Bit13)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_XO_COLD_BOOT_DLY                          (Bit14+Bit15)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_XO_COLD_BOOT_DLY_MASK                     (Bit1+Bit0)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_XO_COLD_BOOT_DLY_SHIFT                    (14)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_COLD_BOOT_CPLL_EN                         (Bit16)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_CUST_INIT_W0_RSV1                         (Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_CUST_INIT_W0_RSV1_MASK                    (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define EFUSECTRL_REG_CUSTOMER_INIT_RD_VALUE_W0_STS_CUST_INIT_W0_RSV1_SHIFT                   (17)


#define EFUSECTRL_REG_FPGA_CTRL                                                               (EFUSECTRL_REG_BASE + 0x180)
#define EFUSECTRL_REG_FPGA_CTRL_DEFAULT                                                       0x0
#define EFUSECTRL_REG_FPGA_CTRL_CTL_FPGA_EFUSE_RESET                                          (Bit0)


#endif // _EFUSECTRL_REG_DEFINES_H

