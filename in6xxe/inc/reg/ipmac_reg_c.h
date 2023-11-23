#ifndef _IPMAC_REG_DEFINES_H
#define _IPMAC_REG_DEFINES_H
/* **************************** */
#define IPMAC_REG_IPM_INTR_STATUS                                                                                        (IPMAC_REG_BASE + 0x0)
#define IPMAC_REG_IPM_INTR_STATUS_DEFAULT                                                                                0x0
#define IPMAC_REG_IPM_INTR_STATUS_IRQ                                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPM_INTR_STATUS_IRQ_MASK                                                                               (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPM_INTR_STATUS_IRQ_SHIFT                                                                              (0)


#define IPMAC_REG_IPM_INTR_MASK_STATUS                                                                                   (IPMAC_REG_BASE + 0x4)
#define IPMAC_REG_IPM_INTR_MASK_STATUS_DEFAULT                                                                           0x0
#define IPMAC_REG_IPM_INTR_MASK_STATUS_IRQ                                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPM_INTR_MASK_STATUS_IRQ_MASK                                                                          (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPM_INTR_MASK_STATUS_IRQ_SHIFT                                                                         (0)


#define IPMAC_REG_IPM_INTR_CLR                                                                                           (IPMAC_REG_BASE + 0x8)
#define IPMAC_REG_IPM_INTR_CLR_DEFAULT                                                                                   0x0
#define IPMAC_REG_IPM_INTR_CLR_IRQ                                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPM_INTR_CLR_IRQ_MASK                                                                                  (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPM_INTR_CLR_IRQ_SHIFT                                                                                 (0)


#define IPMAC_REG_IPM_INTR_SET                                                                                           (IPMAC_REG_BASE + 0xc)
#define IPMAC_REG_IPM_INTR_SET_DEFAULT                                                                                   0x0
#define IPMAC_REG_IPM_INTR_SET_IRQ                                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPM_INTR_SET_IRQ_MASK                                                                                  (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPM_INTR_SET_IRQ_SHIFT                                                                                 (0)


#define IPMAC_REG_IPM_INTR_MASK_SET                                                                                      (IPMAC_REG_BASE + 0x10)
#define IPMAC_REG_IPM_INTR_MASK_SET_DEFAULT                                                                              0x0
#define IPMAC_REG_IPM_INTR_MASK_SET_IRQ                                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPM_INTR_MASK_SET_IRQ_MASK                                                                             (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPM_INTR_MASK_SET_IRQ_SHIFT                                                                            (0)


#define IPMAC_REG_IPM_INTR_MASK_CLR                                                                                      (IPMAC_REG_BASE + 0x14)
#define IPMAC_REG_IPM_INTR_MASK_CLR_DEFAULT                                                                              0x0
#define IPMAC_REG_IPM_INTR_MASK_CLR_IRQ                                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPM_INTR_MASK_CLR_IRQ_MASK                                                                             (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPM_INTR_MASK_CLR_IRQ_SHIFT                                                                            (0)


#define IPMAC_REG_IPM_INTR_MASK_DURING_SUSPEND                                                                           (IPMAC_REG_BASE + 0x18)
#define IPMAC_REG_IPM_INTR_MASK_DURING_SUSPEND_DEFAULT                                                                   0x0
#define IPMAC_REG_IPM_INTR_MASK_DURING_SUSPEND_IRQ                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPM_INTR_MASK_DURING_SUSPEND_IRQ_MASK                                                                  (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPM_INTR_MASK_DURING_SUSPEND_IRQ_SHIFT                                                                 (0)


#define IPMAC_REG_SDR_MISC_CTRL                                                                                          (IPMAC_REG_BASE + 0x200)
#define IPMAC_REG_SDR_MISC_CTRL_DEFAULT                                                                                  0x1110300
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_EN                                                                               (Bit0)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_IGNORE_TIMESTAMP                                                                 (Bit4)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_IGNORE_TIMESTAMP_FINE                                                            (Bit5)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_MATCHING_DEST_ADDR                                                               (Bit8)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_MATCHING_SRC_ADDR                                                                (Bit9)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_SLV_ABORT_EVT_SINGLE_CRCERR                                                      (Bit12)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_MSTR_ABORT_EVT_SINGLE_CRCERR                                                     (Bit13)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_BLE_SLV_ABORT_EVT_SINGLE_CRCERR                                                      (Bit14)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_BLE_MSTR_ABORT_EVT_SINGLE_CRCERR                                                     (Bit15)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_DISABLE_MASK_AFTER_FIRST_MATCH                                                   (Bit16)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SCHDL_APFM_ERROR_MODE                                                                (Bit20)
#define IPMAC_REG_SDR_MISC_CTRL_CTL_SDR_SLV_DEFAULT_TX_DESCPTR_0                                                         (Bit24)


#define IPMAC_REG_SDR_MISC_STS                                                                                           (IPMAC_REG_BASE + 0x208)
#define IPMAC_REG_SDR_MISC_STS_DEFAULT                                                                                   0x0
#define IPMAC_REG_SDR_MISC_STS_STS_DISABLE_SDR                                                                           (Bit0)
#define IPMAC_REG_SDR_MISC_STS_STS_DISABLE_IPM                                                                           (Bit1)
#define IPMAC_REG_SDR_MISC_STS_STS_DISABLE_LR                                                                            (Bit2)
#define IPMAC_REG_SDR_MISC_STS_STS_DISABLE_2M                                                                            (Bit3)


#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH                                                                                 (IPMAC_REG_BASE + 0x210)
#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH_DEFAULT                                                                         0xFFFF0000
#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH_CTL_SDR_DEST_ADDR                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH_CTL_SDR_DEST_ADDR_MASK                                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH_CTL_SDR_DEST_ADDR_SHIFT                                                         (0)
#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH_CTL_SDR_DEST_ADDR_MATCH_MASK                                                    (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH_CTL_SDR_DEST_ADDR_MATCH_MASK_MASK                                               (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_DEST_ADDR_TO_MATCH_CTL_SDR_DEST_ADDR_MATCH_MASK_SHIFT                                              (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0                                                                                (IPMAC_REG_BASE + 0x220)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0_CTL_SDR_SRC_ADDR_0                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0_CTL_SDR_SRC_ADDR_0_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0_CTL_SDR_SRC_ADDR_0_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0_CTL_SDR_SRC_ADDR_0_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0_CTL_SDR_SRC_ADDR_0_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_0_CTL_SDR_SRC_ADDR_0_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1                                                                                (IPMAC_REG_BASE + 0x224)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1_CTL_SDR_SRC_ADDR_1                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1_CTL_SDR_SRC_ADDR_1_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1_CTL_SDR_SRC_ADDR_1_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1_CTL_SDR_SRC_ADDR_1_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1_CTL_SDR_SRC_ADDR_1_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_1_CTL_SDR_SRC_ADDR_1_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2                                                                                (IPMAC_REG_BASE + 0x228)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2_CTL_SDR_SRC_ADDR_2                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2_CTL_SDR_SRC_ADDR_2_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2_CTL_SDR_SRC_ADDR_2_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2_CTL_SDR_SRC_ADDR_2_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2_CTL_SDR_SRC_ADDR_2_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_2_CTL_SDR_SRC_ADDR_2_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3                                                                                (IPMAC_REG_BASE + 0x22c)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3_CTL_SDR_SRC_ADDR_3                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3_CTL_SDR_SRC_ADDR_3_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3_CTL_SDR_SRC_ADDR_3_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3_CTL_SDR_SRC_ADDR_3_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3_CTL_SDR_SRC_ADDR_3_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_3_CTL_SDR_SRC_ADDR_3_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4                                                                                (IPMAC_REG_BASE + 0x230)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4_CTL_SDR_SRC_ADDR_4                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4_CTL_SDR_SRC_ADDR_4_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4_CTL_SDR_SRC_ADDR_4_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4_CTL_SDR_SRC_ADDR_4_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4_CTL_SDR_SRC_ADDR_4_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_4_CTL_SDR_SRC_ADDR_4_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5                                                                                (IPMAC_REG_BASE + 0x234)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5_CTL_SDR_SRC_ADDR_5                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5_CTL_SDR_SRC_ADDR_5_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5_CTL_SDR_SRC_ADDR_5_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5_CTL_SDR_SRC_ADDR_5_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5_CTL_SDR_SRC_ADDR_5_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_5_CTL_SDR_SRC_ADDR_5_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6                                                                                (IPMAC_REG_BASE + 0x238)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6_CTL_SDR_SRC_ADDR_6                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6_CTL_SDR_SRC_ADDR_6_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6_CTL_SDR_SRC_ADDR_6_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6_CTL_SDR_SRC_ADDR_6_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6_CTL_SDR_SRC_ADDR_6_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_6_CTL_SDR_SRC_ADDR_6_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7                                                                                (IPMAC_REG_BASE + 0x23c)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7_DEFAULT                                                                        0xFFFF0000
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7_CTL_SDR_SRC_ADDR_7                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7_CTL_SDR_SRC_ADDR_7_MASK                                                        (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7_CTL_SDR_SRC_ADDR_7_SHIFT                                                       (0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7_CTL_SDR_SRC_ADDR_7_MATCH_MASK                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7_CTL_SDR_SRC_ADDR_7_MATCH_MASK_MASK                                             (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_SRC_ADDR_TO_MATCH_7_CTL_SDR_SRC_ADDR_7_MATCH_MASK_SHIFT                                            (16)


#define IPMAC_REG_SDR_ADDR_MATCH_STS                                                                                     (IPMAC_REG_BASE + 0x240)
#define IPMAC_REG_SDR_ADDR_MATCH_STS_DEFAULT                                                                             0x0
#define IPMAC_REG_SDR_ADDR_MATCH_STS_STS_SDR_DEST_ADDR_MATCH                                                             (Bit0)
#define IPMAC_REG_SDR_ADDR_MATCH_STS_STS_SDR_SRC_ADDR_MATCH                                                              (Bit4)
#define IPMAC_REG_SDR_ADDR_MATCH_STS_STS_SDR_SRC_ADDR_MATCH_SEL                                                          (Bit8+Bit9+Bit10)
#define IPMAC_REG_SDR_ADDR_MATCH_STS_STS_SDR_SRC_ADDR_MATCH_SEL_MASK                                                     (Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_ADDR_MATCH_STS_STS_SDR_SRC_ADDR_MATCH_SEL_SHIFT                                                    (8)


#define IPMAC_REG_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH                                                                    (IPMAC_REG_BASE + 0x244)
#define IPMAC_REG_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_DEFAULT                                                            0x103
#define IPMAC_REG_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_CTL_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH                            (Bit0)
#define IPMAC_REG_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_CTL_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_SINGLE                     (Bit1)
#define IPMAC_REG_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_CTL_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_IDLE_LMT                   (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define IPMAC_REG_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_CTL_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_IDLE_LMT_MASK              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_CTL_SDR_RESTART_DUE_TO_RX_ADDR_MISMATCH_IDLE_LMT_SHIFT             (4)


#define IPMAC_REG_SDR_BROADCAST_MODE_CTL                                                                                 (IPMAC_REG_BASE + 0x250)
#define IPMAC_REG_SDR_BROADCAST_MODE_CTL_DEFAULT                                                                         0x33
#define IPMAC_REG_SDR_BROADCAST_MODE_CTL_CTL_SDR_BROADCAST_MODE_ET_VALUE                                                 (Bit0+Bit1+Bit2)
#define IPMAC_REG_SDR_BROADCAST_MODE_CTL_CTL_SDR_BROADCAST_MODE_ET_VALUE_MASK                                            (Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_BROADCAST_MODE_CTL_CTL_SDR_BROADCAST_MODE_ET_VALUE_SHIFT                                           (0)
#define IPMAC_REG_SDR_BROADCAST_MODE_CTL_CTL_SDR_BROADCAST_MODE_RFU_VALUE                                                (Bit4+Bit5+Bit6)
#define IPMAC_REG_SDR_BROADCAST_MODE_CTL_CTL_SDR_BROADCAST_MODE_RFU_VALUE_MASK                                           (Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_BROADCAST_MODE_CTL_CTL_SDR_BROADCAST_MODE_RFU_VALUE_SHIFT                                          (4)


#define IPMAC_REG_SDR_PRIVATE_MODE_CTL                                                                                   (IPMAC_REG_BASE + 0x254)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_DEFAULT                                                                           0x466
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_ET_VALUE                                                     (Bit0+Bit1+Bit2)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_ET_VALUE_MASK                                                (Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_ET_VALUE_SHIFT                                               (0)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_RFU_VALUE                                                    (Bit4+Bit5+Bit6)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_RFU_VALUE_MASK                                               (Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_RFU_VALUE_SHIFT                                              (4)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_ACK_RFU_VALUE                                                (Bit8+Bit9+Bit10)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_ACK_RFU_VALUE_MASK                                           (Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_PRIVATE_MODE_CTL_CTL_SDR_PRIVATE_MODE_ACK_RFU_VALUE_SHIFT                                          (8)


#define IPMAC_REG_SDR_RX_ADDR                                                                                            (IPMAC_REG_BASE + 0x268)
#define IPMAC_REG_SDR_RX_ADDR_DEFAULT                                                                                    0x0
#define IPMAC_REG_SDR_RX_ADDR_STS_SDR_RX_SRC_ADDR                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_RX_ADDR_STS_SDR_RX_SRC_ADDR_MASK                                                                   (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_RX_ADDR_STS_SDR_RX_SRC_ADDR_SHIFT                                                                  (0)
#define IPMAC_REG_SDR_RX_ADDR_STS_SDR_RX_DEST_ADDR                                                                       (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_RX_ADDR_STS_SDR_RX_DEST_ADDR_MASK                                                                  (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_RX_ADDR_STS_SDR_RX_DEST_ADDR_SHIFT                                                                 (16)


#define IPMAC_REG_SDR_TX_ADDR                                                                                            (IPMAC_REG_BASE + 0x26c)
#define IPMAC_REG_SDR_TX_ADDR_DEFAULT                                                                                    0x0
#define IPMAC_REG_SDR_TX_ADDR_STS_SDR_TX_SRC_ADDR                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SDR_TX_ADDR_STS_SDR_TX_SRC_ADDR_MASK                                                                   (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_TX_ADDR_STS_SDR_TX_SRC_ADDR_SHIFT                                                                  (0)
#define IPMAC_REG_SDR_TX_ADDR_STS_SDR_TX_DEST_ADDR                                                                       (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_TX_ADDR_STS_SDR_TX_DEST_ADDR_MASK                                                                  (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_TX_ADDR_STS_SDR_TX_DEST_ADDR_SHIFT                                                                 (16)


#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL                                                                            (IPMAC_REG_BASE + 0x280)
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_DEFAULT                                                                    0x0
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_CTL_SDR_TX_CUSDEF_HEADER_EN                                                (Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_CTL_SDR_TX_CUSDEF_HEADER_LEN_M1                                            (Bit4+Bit5+Bit6+Bit7+Bit8)
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_CTL_SDR_TX_CUSDEF_HEADER_LEN_M1_MASK                                       (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_CTL_SDR_TX_CUSDEF_HEADER_LEN_M1_SHIFT                                      (4)
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_CTL_SDR_TX_CUSDEF_HEADER_PAYLOAD_LEN                                       (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_CTL_SDR_TX_CUSDEF_HEADER_PAYLOAD_LEN_MASK                                  (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_TX_MISC_CTRL_CTL_SDR_TX_CUSDEF_HEADER_PAYLOAD_LEN_SHIFT                                 (12)


#define IPMAC_REG_SDR_CUS_HEADER_TX_VALUE                                                                                (IPMAC_REG_BASE + 0x284)
#define IPMAC_REG_SDR_CUS_HEADER_TX_VALUE_DEFAULT                                                                        0x0
#define IPMAC_REG_SDR_CUS_HEADER_TX_VALUE_CTL_SDR_TX_CUSDEF_HEADER_VAL                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_CUS_HEADER_TX_VALUE_CTL_SDR_TX_CUSDEF_HEADER_VAL_MASK                                              (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_TX_VALUE_CTL_SDR_TX_CUSDEF_HEADER_VAL_SHIFT                                             (0)


#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL                                                                            (IPMAC_REG_BASE + 0x2a0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_DEFAULT                                                                    0x0
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_EN                                                (Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_FORCE_PAYLOAD_LENGTH                                     (Bit1)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_LSB0MSB1_FIRST                        (Bit2)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_LEN_M1                                            (Bit4+Bit5+Bit6+Bit7+Bit8)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_LEN_M1_MASK                                       (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_LEN_M1_SHIFT                                      (4)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_ADDITIONAL_LEN                            (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_ADDITIONAL_LEN_MASK                       (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_ADDITIONAL_LEN_SHIFT                      (12)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_FORCE_PAYLOAD_LENGTH_VAL                                 (Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_FORCE_PAYLOAD_LENGTH_VAL_MASK                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_CTL_SDR_RX_CUSDEF_FORCE_PAYLOAD_LENGTH_VAL_SHIFT                           (22)


#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2                                                                          (IPMAC_REG_BASE + 0x2a4)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2_DEFAULT                                                                  0x0
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_1ST_BIT_OFFSET                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_1ST_BIT_OFFSET_MASK                 (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_1ST_BIT_OFFSET_SHIFT                (0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_LAST_BIT_OFFSET                     (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_LAST_BIT_OFFSET_MASK                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_MISC_CTRL_2_CTL_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_LAST_BIT_OFFSET_SHIFT               (12)


#define IPMAC_REG_SDR_CUS_HEADER_RX_VALUE                                                                                (IPMAC_REG_BASE + 0x2b0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_VALUE_DEFAULT                                                                        0x0
#define IPMAC_REG_SDR_CUS_HEADER_RX_VALUE_STS_SDR_RX_CUSDEF_HEADER_VAL                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SDR_CUS_HEADER_RX_VALUE_STS_SDR_RX_CUSDEF_HEADER_VAL_MASK                                              (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_RX_VALUE_STS_SDR_RX_CUSDEF_HEADER_VAL_SHIFT                                             (0)


#define IPMAC_REG_SDR_CUS_HEADER_PAYLOAD_LEN_VAL                                                                         (IPMAC_REG_BASE + 0x2b4)
#define IPMAC_REG_SDR_CUS_HEADER_PAYLOAD_LEN_VAL_DEFAULT                                                                 0x0
#define IPMAC_REG_SDR_CUS_HEADER_PAYLOAD_LEN_VAL_STS_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define IPMAC_REG_SDR_CUS_HEADER_PAYLOAD_LEN_VAL_STS_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_MASK                               (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SDR_CUS_HEADER_PAYLOAD_LEN_VAL_STS_SDR_RX_CUSDEF_HEADER_PAYLOAD_LEN_SHIFT                              (0)


#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT                                                                               (IPMAC_REG_BASE + 0x2bc)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_DEFAULT                                                                       0x200020
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_PKT_LEN_LIMIT                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_PKT_LEN_LIMIT_MASK                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_PKT_LEN_LIMIT_SHIFT                                            (0)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_PKT_LEN_LIMIT_EN                                               (Bit8)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_ADV_PKT_LEN_LIMIT                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_ADV_PKT_LEN_LIMIT_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_ADV_PKT_LEN_LIMIT_SHIFT                                        (16)
#define IPMAC_REG_BLE_SDR_RX_PKT_LEN_LIMIT_CTL_BLE_SDR_RX_ADV_PKT_LEN_LIMIT_EN                                           (Bit24)


#define IPMAC_REG_MDM_PE_TH_2M                                                                                           (IPMAC_REG_BASE + 0x500)
#define IPMAC_REG_MDM_PE_TH_2M_DEFAULT                                                                                   0x0
#define IPMAC_REG_MDM_PE_TH_2M_CTL_PE_POWERTHR_2M                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define IPMAC_REG_MDM_PE_TH_2M_CTL_PE_POWERTHR_2M_MASK                                                                   (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MDM_PE_TH_2M_CTL_PE_POWERTHR_2M_SHIFT                                                                  (0)
#define IPMAC_REG_MDM_PE_TH_2M_CTL_PE_POWERRAISETH_2M                                                                    (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define IPMAC_REG_MDM_PE_TH_2M_CTL_PE_POWERRAISETH_2M_MASK                                                               (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MDM_PE_TH_2M_CTL_PE_POWERRAISETH_2M_SHIFT                                                              (8)
#define IPMAC_REG_MDM_PE_TH_2M_CTL_PE_2M_USE_1M_TH                                                                       (Bit16)


#define IPMAC_REG_MDM_POES_SYNC_PULSE_DELAY                                                                              (IPMAC_REG_BASE + 0x508)
#define IPMAC_REG_MDM_POES_SYNC_PULSE_DELAY_DEFAULT                                                                      0x40
#define IPMAC_REG_MDM_POES_SYNC_PULSE_DELAY_CTL_POES_SYNC_PULSE_DELAY                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_MDM_POES_SYNC_PULSE_DELAY_CTL_POES_SYNC_PULSE_DELAY_MASK                                               (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MDM_POES_SYNC_PULSE_DELAY_CTL_POES_SYNC_PULSE_DELAY_SHIFT                                              (0)
#define IPMAC_REG_MDM_POES_SYNC_PULSE_DELAY_CTL_POES_SYNC_PULSE_OFF                                                      (Bit16)


#define IPMAC_REG_BLE_ADDITION                                                                                           (IPMAC_REG_BASE + 0x600)
#define IPMAC_REG_BLE_ADDITION_DEFAULT                                                                                   0x0
#define IPMAC_REG_BLE_ADDITION_CTL_BLE_CNTL_TIMER_USE_RXPATHDLY                                                          (Bit0)


#define IPMAC_REG_BLE_ABORT_REQ                                                                                          (IPMAC_REG_BASE + 0x604)
#define IPMAC_REG_BLE_ABORT_REQ_DEFAULT                                                                                  0x4040
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_ABORT_REQ                                                                        (Bit0)
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_MAIN_WAIT4TS_SKIP                                                                (Bit1)
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_ABORT_PULSE_DUR                                                                  (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_ABORT_PULSE_DUR_MASK                                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_ABORT_PULSE_DUR_SHIFT                                                            (4)
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_ABORT_ERROR_FLAG_SET                                                             (Bit12+Bit13+Bit14+Bit15+Bit16)
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_ABORT_ERROR_FLAG_SET_MASK                                                        (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_ABORT_REQ_CTL_BLE_ABORT_ERROR_FLAG_SET_SHIFT                                                       (12)
#define IPMAC_REG_BLE_ABORT_REQ_STS_BLE_ABORT_PACKET_CNTL_STATE                                                          (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define IPMAC_REG_BLE_ABORT_REQ_STS_BLE_ABORT_PACKET_CNTL_STATE_MASK                                                     (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_ABORT_REQ_STS_BLE_ABORT_PACKET_CNTL_STATE_SHIFT                                                    (20)


#define IPMAC_REG_BLE_WLAN_TRX_CTRL                                                                                      (IPMAC_REG_BASE + 0x608)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_DEFAULT                                                                              0x0
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_RX_CTRL                                                                 (Bit0+Bit1)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_RX_CTRL_MASK                                                            (Bit1+Bit0)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_RX_CTRL_SHIFT                                                           (0)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_TX_CTRL                                                                 (Bit2+Bit3)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_TX_CTRL_MASK                                                            (Bit1+Bit0)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_TX_CTRL_SHIFT                                                           (2)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_RX_FORCE                                                                (Bit4)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_CTL_BLE_WLAN_TX_FORCE                                                                (Bit5)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_STS_BLE_WLAN_RX                                                                      (Bit28)
#define IPMAC_REG_BLE_WLAN_TRX_CTRL_STS_BLE_WLAN_TX                                                                      (Bit29)


#define IPMAC_REG_BLE_FORCE_TRX                                                                                          (IPMAC_REG_BASE + 0x610)
#define IPMAC_REG_BLE_FORCE_TRX_DEFAULT                                                                                  0x0
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX                                                                        (Bit0)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_TX_EN                                                                  (Bit1)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_RX_EN                                                                  (Bit2)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_TX_BIT_VALID                                                           (Bit3)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_TX_BIT_DATA_PATTERN                                                    (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_TX_BIT_DATA_PATTERN_MASK                                               (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_TX_BIT_DATA_PATTERN_SHIFT                                              (4)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_RATE                                                                   (Bit20+Bit21)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_RATE_MASK                                                              (Bit1+Bit0)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_RATE_SHIFT                                                             (20)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_FREQ_WORD                                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_FREQ_WORD_MASK                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_FREQ_WORD_SHIFT                                                        (24)
#define IPMAC_REG_BLE_FORCE_TRX_CTL_FORCE_BLE_TRX_FREQ_BAND                                                              (Bit31)


#define IPMAC_REG_RX_EXTENSION                                                                                           (IPMAC_REG_BASE + 0x618)
#define IPMAC_REG_RX_EXTENSION_DEFAULT                                                                                   0x0
#define IPMAC_REG_RX_EXTENSION_CTL_RX_EXT_EN                                                                             (Bit0)
#define IPMAC_REG_RX_EXTENSION_CTL_RX_EXT_NUM                                                                            (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define IPMAC_REG_RX_EXTENSION_CTL_RX_EXT_NUM_MASK                                                                       (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_EXTENSION_CTL_RX_EXT_NUM_SHIFT                                                                      (4)


#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL                                                                                  (IPMAC_REG_BASE + 0x640)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL_DEFAULT                                                                          0x10007
#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL_CTL_EVNT_TIMEOUT_EN                                                              (Bit0)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL_CTL_EVNT_TIMEOUT_RST_BY_RX_EN                                                    (Bit1)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL_CTL_EVNT_TIMEOUT_RST_BY_TX_EN                                                    (Bit2)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL_CTL_EVNT_TIMEOUT_LMT                                                             (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL_CTL_EVNT_TIMEOUT_LMT_MASK                                                        (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_CTRL_CTL_EVNT_TIMEOUT_LMT_SHIFT                                                       (4)


#define IPMAC_REG_BLE_EVNT_TIMEOUT_STS                                                                                   (IPMAC_REG_BASE + 0x648)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_STS_DEFAULT                                                                           0x1000
#define IPMAC_REG_BLE_EVNT_TIMEOUT_STS_STS_EVNT_TIMEOUT                                                                  (Bit0)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_STS_STS_EVNT_TIME_IN_US                                                               (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_STS_STS_EVNT_TIME_IN_US_MASK                                                          (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_EVNT_TIMEOUT_STS_STS_EVNT_TIME_IN_US_SHIFT                                                         (4)


#define IPMAC_REG_BLE_PREV_EVNT_TIME_STS                                                                                 (IPMAC_REG_BASE + 0x650)
#define IPMAC_REG_BLE_PREV_EVNT_TIME_STS_DEFAULT                                                                         0x0
#define IPMAC_REG_BLE_PREV_EVNT_TIME_STS_STS_PREV_EVNT_TIME_IN_US                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define IPMAC_REG_BLE_PREV_EVNT_TIME_STS_STS_PREV_EVNT_TIME_IN_US_MASK                                                   (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_PREV_EVNT_TIME_STS_STS_PREV_EVNT_TIME_IN_US_SHIFT                                                  (0)


#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL                                                                           (IPMAC_REG_BASE + 0x660)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_DEFAULT                                                                   0x80073
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_SCHLR_STATE_TIMEOUT_EN                                                (Bit0)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_EVT_SKIP_HIGH_PRIORITY                                                (Bit1)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_SCHLR_STATE_TIMEOUT_STATE                                             (Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_SCHLR_STATE_TIMEOUT_STATE_MASK                                        (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_SCHLR_STATE_TIMEOUT_STATE_SHIFT                                       (4)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_SCHLR_STATE_TIMEOUT_LMT                                               (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_SCHLR_STATE_TIMEOUT_LMT_MASK                                          (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_CTRL_CTL_SCHLR_STATE_TIMEOUT_LMT_SHIFT                                         (8)


#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_STS                                                                            (IPMAC_REG_BASE + 0x668)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_STS_DEFAULT                                                                    0x0
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_STS_STS_SCHLR_STATE_TIMEOUT                                                    (Bit0)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_STS_STS_SCHLR_STATE_TIME_IN_US                                                 (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_STS_STS_SCHLR_STATE_TIME_IN_US_MASK                                            (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_SCHLR_STATE_TIMEOUT_STS_STS_SCHLR_STATE_TIME_IN_US_SHIFT                                           (8)


#define IPMAC_REG_BLE_SCHLR_STATE_PREV_TIME_STS                                                                          (IPMAC_REG_BASE + 0x670)
#define IPMAC_REG_BLE_SCHLR_STATE_PREV_TIME_STS_DEFAULT                                                                  0x0
#define IPMAC_REG_BLE_SCHLR_STATE_PREV_TIME_STS_STS_SCHLR_STATE_PREV_TIME_IN_US                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_BLE_SCHLR_STATE_PREV_TIME_STS_STS_SCHLR_STATE_PREV_TIME_IN_US_MASK                                     (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_SCHLR_STATE_PREV_TIME_STS_STS_SCHLR_STATE_PREV_TIME_IN_US_SHIFT                                    (0)


#define IPMAC_REG_BLE_ABORT_DELAY_CTRL                                                                                   (IPMAC_REG_BASE + 0x678)
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_DEFAULT                                                                           0x13
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_CTL_EVT_CNTL_IMMEDIATE_ABORT_MASK_INT_COND_EN                                     (Bit0+Bit1)
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_CTL_EVT_CNTL_IMMEDIATE_ABORT_MASK_INT_COND_EN_MASK                                (Bit1+Bit0)
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_CTL_EVT_CNTL_IMMEDIATE_ABORT_MASK_INT_COND_EN_SHIFT                               (0)
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_CTL_EVT_CNTL_IMMEDIATE_ABORT_MASK_EXT_COND_EN                                     (Bit4)
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_STS_EVT_CNTL_IMMEDIATE_ABORT_MASKED                                               (Bit8+Bit9)
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_STS_EVT_CNTL_IMMEDIATE_ABORT_MASKED_MASK                                          (Bit1+Bit0)
#define IPMAC_REG_BLE_ABORT_DELAY_CTRL_STS_EVT_CNTL_IMMEDIATE_ABORT_MASKED_SHIFT                                         (8)


#define IPMAC_REG_BLE_TIME_STAMP_CTRL                                                                                    (IPMAC_REG_BASE + 0x680)
#define IPMAC_REG_BLE_TIME_STAMP_CTRL_DEFAULT                                                                            0x11
#define IPMAC_REG_BLE_TIME_STAMP_CTRL_CTL_BLE_FREE_TIMER_EN                                                              (Bit0)
#define IPMAC_REG_BLE_TIME_STAMP_CTRL_CTL_BLE_CLR_RX_SYNC_TIME_STAMP_VALID                                               (Bit1)
#define IPMAC_REG_BLE_TIME_STAMP_CTRL_CTL_BLE_FREE_TIME_BIT_RANGE_SEL                                                    (Bit4+Bit5)
#define IPMAC_REG_BLE_TIME_STAMP_CTRL_CTL_BLE_FREE_TIME_BIT_RANGE_SEL_MASK                                               (Bit1+Bit0)
#define IPMAC_REG_BLE_TIME_STAMP_CTRL_CTL_BLE_FREE_TIME_BIT_RANGE_SEL_SHIFT                                              (4)


#define IPMAC_REG_BLE_TX_TIME_STAMP                                                                                      (IPMAC_REG_BASE + 0x688)
#define IPMAC_REG_BLE_TX_TIME_STAMP_DEFAULT                                                                              0x0
#define IPMAC_REG_BLE_TX_TIME_STAMP_STS_BLE_TX_SYNC_TIME_STAMP                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_BLE_TX_TIME_STAMP_STS_BLE_TX_SYNC_TIME_STAMP_MASK                                                      (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_TX_TIME_STAMP_STS_BLE_TX_SYNC_TIME_STAMP_SHIFT                                                     (0)
#define IPMAC_REG_BLE_TX_TIME_STAMP_STS_BLE_TX_SYNC_TS_CLKN                                                              (Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BLE_TX_TIME_STAMP_STS_BLE_TX_SYNC_TS_CLKN_MASK                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_TX_TIME_STAMP_STS_BLE_TX_SYNC_TS_CLKN_SHIFT                                                        (25)


#define IPMAC_REG_BLE_RX_TIME_STAMP                                                                                      (IPMAC_REG_BASE + 0x68c)
#define IPMAC_REG_BLE_RX_TIME_STAMP_DEFAULT                                                                              0x0
#define IPMAC_REG_BLE_RX_TIME_STAMP_STS_BLE_RX_SYNC_TIME_STAMP                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_BLE_RX_TIME_STAMP_STS_BLE_RX_SYNC_TIME_STAMP_MASK                                                      (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_RX_TIME_STAMP_STS_BLE_RX_SYNC_TIME_STAMP_SHIFT                                                     (0)
#define IPMAC_REG_BLE_RX_TIME_STAMP_STS_BLE_RX_SYNC_TS_VALID                                                             (Bit24)
#define IPMAC_REG_BLE_RX_TIME_STAMP_STS_BLE_RX_SYNC_TS_CLKN                                                              (Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BLE_RX_TIME_STAMP_STS_BLE_RX_SYNC_TS_CLKN_MASK                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_RX_TIME_STAMP_STS_BLE_RX_SYNC_TS_CLKN_SHIFT                                                        (25)


#define IPMAC_REG_BLE_EVTST_CLKN_MISS_CLKN                                                                               (IPMAC_REG_BASE + 0x698)
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_CLKN_DEFAULT                                                                       0x0
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_CLKN_STS_BLE_EVNT_CLKN_MISS_CLKN_VAL                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_CLKN_STS_BLE_EVNT_CLKN_MISS_CLKN_VAL_MASK                                          (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_CLKN_STS_BLE_EVNT_CLKN_MISS_CLKN_VAL_SHIFT                                         (0)


#define IPMAC_REG_BLE_EVTST_CLKN_MISS_EVT_START_CLKN                                                                     (IPMAC_REG_BASE + 0x69c)
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_EVT_START_CLKN_DEFAULT                                                             0x0
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_EVT_START_CLKN_STS_BLE_EVNT_CLKN_MISS_CLKN_EVT_START_VAL                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_EVT_START_CLKN_STS_BLE_EVNT_CLKN_MISS_CLKN_EVT_START_VAL_MASK                      (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_EVTST_CLKN_MISS_EVT_START_CLKN_STS_BLE_EVNT_CLKN_MISS_CLKN_EVT_START_VAL_SHIFT                     (0)


#define IPMAC_REG_BLE_CLKN_MATCH_VAL0                                                                                    (IPMAC_REG_BASE + 0x6a8)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_DEFAULT                                                                            0x0
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_CTL_BLE_CLKNCNT_MATCH_FINE_VAL_0                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_CTL_BLE_CLKNCNT_MATCH_FINE_VAL_0_MASK                                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_CTL_BLE_CLKNCNT_MATCH_FINE_VAL_0_SHIFT                                             (0)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_CTL_BLE_CLKNCNT_MATCH_VAL_0                                                        (Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_CTL_BLE_CLKNCNT_MATCH_VAL_0_MASK                                                   (Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_CTL_BLE_CLKNCNT_MATCH_VAL_0_SHIFT                                                  (10)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL0_CTL_BLE_CLKNCNT_MATCH_VAL_0_VALID                                                  (Bit31)


#define IPMAC_REG_BLE_CLKN_MATCH_VAL1                                                                                    (IPMAC_REG_BASE + 0x6ac)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_DEFAULT                                                                            0x0
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_CTL_BLE_CLKNCNT_MATCH_FINE_VAL_1                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_CTL_BLE_CLKNCNT_MATCH_FINE_VAL_1_MASK                                              (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_CTL_BLE_CLKNCNT_MATCH_FINE_VAL_1_SHIFT                                             (0)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_CTL_BLE_CLKNCNT_MATCH_VAL_1                                                        (Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_CTL_BLE_CLKNCNT_MATCH_VAL_1_MASK                                                   (Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_CTL_BLE_CLKNCNT_MATCH_VAL_1_SHIFT                                                  (10)
#define IPMAC_REG_BLE_CLKN_MATCH_VAL1_CTL_BLE_CLKNCNT_MATCH_VAL_1_VALID                                                  (Bit31)


#define IPMAC_REG_SPARE                                                                                                  (IPMAC_REG_BASE + 0x7fc)
#define IPMAC_REG_SPARE_DEFAULT                                                                                          0x0
#define IPMAC_REG_SPARE_CTL_RW_BLE_BB_SPARE                                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_SPARE_CTL_RW_BLE_BB_SPARE_MASK                                                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SPARE_CTL_RW_BLE_BB_SPARE_SHIFT                                                                        (0)
#define IPMAC_REG_SPARE_CTL_RW_MDM_SPARE                                                                                 (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_SPARE_CTL_RW_MDM_SPARE_MASK                                                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SPARE_CTL_RW_MDM_SPARE_SHIFT                                                                           (8)
#define IPMAC_REG_SPARE_CTL_IPMAC_SPARE                                                                                  (Bit16+Bit17+Bit18+Bit19)
#define IPMAC_REG_SPARE_CTL_IPMAC_SPARE_MASK                                                                             (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SPARE_CTL_IPMAC_SPARE_SHIFT                                                                            (16)
#define IPMAC_REG_SPARE_STS_IPMAC_SPARE                                                                                  (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define IPMAC_REG_SPARE_STS_IPMAC_SPARE_MASK                                                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SPARE_STS_IPMAC_SPARE_SHIFT                                                                            (20)


#define IPMAC_REG_IPMAC_MISC_CNTL                                                                                        (IPMAC_REG_BASE + 0x800)
#define IPMAC_REG_IPMAC_MISC_CNTL_DEFAULT                                                                                0x8010
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_EN                                                                           (Bit0)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_SUSPEND                                                                      (Bit1)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_MODE_MSTR0SLV1                                                               (Bit2)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_SOFT_RST                                                                     (Bit3)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_CRC_EN                                                                       (Bit4)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_WHIT_EN                                                                      (Bit5)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_WHIT_INIT_VALUE_FORCE                                                        (Bit6)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_INTR_SOFT_RESET                                                              (Bit7)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_RATE                                                                         (Bit8+Bit9)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_RATE_MASK                                                                    (Bit1+Bit0)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_RATE_SHIFT                                                                   (8)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_BCN_HEADER_TS_EN                                                             (Bit10)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_FREE_TIMER_EN                                                                (Bit11)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_AUTO_SUSPEND                                                                 (Bit12+Bit13)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_AUTO_SUSPEND_MASK                                                            (Bit1+Bit0)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_AUTO_SUSPEND_SHIFT                                                           (12)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_AUTO_SUSPEND_IRQ_MASK                                                        (Bit14)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_SUSPEND_RX_VALID_INTERVAL                                                    (Bit15)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_EX_TABLE_ADDR_OFFSET                                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_EX_TABLE_ADDR_OFFSET_MASK                                                    (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MISC_CNTL_CTL_IPMAC_EX_TABLE_ADDR_OFFSET_SHIFT                                                   (16)


#define IPMAC_REG_IPMAC_SUSPEND_STATUS                                                                                   (IPMAC_REG_BASE + 0x804)
#define IPMAC_REG_IPMAC_SUSPEND_STATUS_DEFAULT                                                                           0x0
#define IPMAC_REG_IPMAC_SUSPEND_STATUS_STS_IPMAC_AUTO_SUSPENDED                                                          (Bit0)
#define IPMAC_REG_IPMAC_SUSPEND_STATUS_STS_IPMAC_SUSPENDED                                                               (Bit1)


#define IPMAC_REG_IPMAC_TIMING_CTRL                                                                                      (IPMAC_REG_BASE + 0x808)
#define IPMAC_REG_IPMAC_TIMING_CTRL_DEFAULT                                                                              0x4010
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_US_CNT_LMT                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_US_CNT_LMT_MASK                                                            (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_US_CNT_LMT_SHIFT                                                           (0)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_FINE_CNT_LMT                                                               (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_FINE_CNT_LMT_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_FINE_CNT_LMT_SHIFT                                                         (8)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_SF_CNT_INIT_VAL                                                            (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_SF_CNT_INIT_VAL_MASK                                                       (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_SF_CNT_INIT_VAL_SHIFT                                                      (24)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_EXT_SUSPEND_ALLOWED                                                        (Bit30)
#define IPMAC_REG_IPMAC_TIMING_CTRL_CTL_IPMAC_EXT_EN_ALLOWED                                                             (Bit31)


#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL                                                                               (IPMAC_REG_BASE + 0x80c)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_DEFAULT                                                                       0x20010
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_CTL_IPMAC_SF_EVNT_PRE_START_GAP                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_CTL_IPMAC_SF_EVNT_PRE_START_GAP_MASK                                          (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_CTL_IPMAC_SF_EVNT_PRE_START_GAP_SHIFT                                         (0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_CTL_IPMAC_SF_EVNT_PRE_START_GAP_FINE                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_CTL_IPMAC_SF_EVNT_PRE_START_GAP_FINE_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_CTL_IPMAC_SF_EVNT_PRE_START_GAP_FINE_SHIFT                                    (16)


#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2                                                                             (IPMAC_REG_BASE + 0x810)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2_DEFAULT                                                                     0x100000
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2_CTL_IPMAC_SLV_SF_EVNT_PRE_START_GAP_INC_STEP                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2_CTL_IPMAC_SLV_SF_EVNT_PRE_START_GAP_INC_STEP_MASK                           (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2_CTL_IPMAC_SLV_SF_EVNT_PRE_START_GAP_INC_STEP_SHIFT                          (0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2_CTL_IPMAC_SLV_SF_EVNT_PRE_START_GAP_FINE_INC_STEP                           (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2_CTL_IPMAC_SLV_SF_EVNT_PRE_START_GAP_FINE_INC_STEP_MASK                      (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_2_CTL_IPMAC_SLV_SF_EVNT_PRE_START_GAP_FINE_INC_STEP_SHIFT                     (16)


#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_3                                                                             (IPMAC_REG_BASE + 0x814)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_3_DEFAULT                                                                     0x10
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_3_CTL_IPMAC_SLV_SF_EVNT_PRE_START_VAL_GAP_MAX                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_3_CTL_IPMAC_SLV_SF_EVNT_PRE_START_VAL_GAP_MAX_MASK                            (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_CTRL_3_CTL_IPMAC_SLV_SF_EVNT_PRE_START_VAL_GAP_MAX_SHIFT                           (0)


#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL                                                                           (IPMAC_REG_BASE + 0x818)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_DEFAULT                                                                   0x1020001
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_CTL_IPMAC_SLV_BEACON_SYNC_FOUND_SF_DURATION_CNT_INIT_VAL                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_CTL_IPMAC_SLV_BEACON_SYNC_FOUND_SF_DURATION_CNT_INIT_VAL_MASK             (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_CTL_IPMAC_SLV_BEACON_SYNC_FOUND_SF_DURATION_CNT_INIT_VAL_SHIFT            (0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_CTL_IPMAC_SLV_BEACON_SYNC_FOUND_FINE_CNT_INIT_VAL                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_CTL_IPMAC_SLV_BEACON_SYNC_FOUND_FINE_CNT_INIT_VAL_MASK                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_CTL_IPMAC_SLV_BEACON_SYNC_FOUND_FINE_CNT_INIT_VAL_SHIFT                   (16)
#define IPMAC_REG_IPMAC_TIMING_ADJUST_SLV_CTRL_CTL_IPMAC_SLV_BEACON_SYNC_FOUND_ADJUST_US_CNT                             (Bit24)


#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST                                                                  (IPMAC_REG_BASE + 0x81c)
#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST_DEFAULT                                                          0x1F0000
#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_TX_PRE_CNT                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_TX_PRE_CNT_MASK                              (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_TX_PRE_CNT_SHIFT                             (0)
#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_TX_PRE_FINE_CNT                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_TX_PRE_FINE_CNT_MASK                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_RESP_TX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_TX_PRE_FINE_CNT_SHIFT                        (16)


#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST                                                                  (IPMAC_REG_BASE + 0x820)
#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST_DEFAULT                                                          0x1F0000
#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_RX_PRE_CNT                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_RX_PRE_CNT_MASK                              (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_RX_PRE_CNT_SHIFT                             (0)
#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_RX_PRE_FINE_CNT                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_RX_PRE_FINE_CNT_MASK                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_TIMING_RESP_RX_SF_OFFSET_ADJUST_CTL_IPMAC_SF_OFFSET_RX_PRE_FINE_CNT_SHIFT                        (16)


#define IPMAC_REG_EVNT_CNTL_STS                                                                                          (IPMAC_REG_BASE + 0x824)
#define IPMAC_REG_EVNT_CNTL_STS_DEFAULT                                                                                  0x0
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_MSTR_MAIN_CURR_STATE                                                 (Bit0+Bit1+Bit2+Bit3)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_MSTR_MAIN_CURR_STATE_MASK                                            (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_MSTR_MAIN_CURR_STATE_SHIFT                                           (0)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_MSTR_MAIN_CURR_SLV_IDX                                               (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_MSTR_MAIN_CURR_SLV_IDX_MASK                                          (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_MSTR_MAIN_CURR_SLV_IDX_SHIFT                                         (4)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_SLV_MAIN_CURR_STATE                                                  (Bit12+Bit13+Bit14+Bit15+Bit16)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_SLV_MAIN_CURR_STATE_MASK                                             (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_SLV_MAIN_CURR_STATE_SHIFT                                            (12)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_SLV_MAIN_SLV_IDX                                                     (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_SLV_MAIN_SLV_IDX_MASK                                                (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_EVNT_CNTL_STS_STS_IPMAC_EVNT_CNTL_SLV_MAIN_SLV_IDX_SHIFT                                               (20)


#define IPMAC_REG_PREAMBLE_VALUE_LR                                                                                      (IPMAC_REG_BASE + 0x830)
#define IPMAC_REG_PREAMBLE_VALUE_LR_DEFAULT                                                                              0x0
#define IPMAC_REG_PREAMBLE_VALUE_LR_CTL_IPMAC_PREAMBLE_LRANGE                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_PREAMBLE_VALUE_LR_CTL_IPMAC_PREAMBLE_LRANGE_MASK                                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_PREAMBLE_VALUE_LR_CTL_IPMAC_PREAMBLE_LRANGE_SHIFT                                                      (0)


#define IPMAC_REG_PREAMBLE_VALUE_1M2M                                                                                    (IPMAC_REG_BASE + 0x834)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_DEFAULT                                                                            0x0
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_1M_SYNC0                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_1M_SYNC0_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_1M_SYNC0_SHIFT                                                  (0)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_1M_SYNC1                                                        (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_1M_SYNC1_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_1M_SYNC1_SHIFT                                                  (8)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_2M_SYNC0                                                        (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_2M_SYNC0_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_2M_SYNC0_SHIFT                                                  (16)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_2M_SYNC1                                                        (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_2M_SYNC1_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_PREAMBLE_VALUE_1M2M_CTL_IPMAC_PREAMBLE_2M_SYNC1_SHIFT                                                  (24)


#define IPMAC_REG_TX_PWR_DELAY                                                                                           (IPMAC_REG_BASE + 0x838)
#define IPMAC_REG_TX_PWR_DELAY_DEFAULT                                                                                   0x10101010
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_1M                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_1M_MASK                                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_1M_SHIFT                                                           (0)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_2M                                                                 (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_2M_MASK                                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_2M_SHIFT                                                           (8)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_500K                                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_500K_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_500K_SHIFT                                                         (16)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_125K                                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_125K_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_TX_PWR_DELAY_CTL_IPMAC_TX_PWRUP_DLY_125K_SHIFT                                                         (24)


#define IPMAC_REG_PWRDN_TX_ANT_DELAY                                                                                     (IPMAC_REG_BASE + 0x83c)
#define IPMAC_REG_PWRDN_TX_ANT_DELAY_DEFAULT                                                                             0x810
#define IPMAC_REG_PWRDN_TX_ANT_DELAY_CTL_IPMAC_TX_ANT_DELAY                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_PWRDN_TX_ANT_DELAY_CTL_IPMAC_TX_ANT_DELAY_MASK                                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_PWRDN_TX_ANT_DELAY_CTL_IPMAC_TX_ANT_DELAY_SHIFT                                                        (0)
#define IPMAC_REG_PWRDN_TX_ANT_DELAY_CTL_IPMAC_TX_PWRDN_DLY                                                              (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_PWRDN_TX_ANT_DELAY_CTL_IPMAC_TX_PWRDN_DLY_MASK                                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_PWRDN_TX_ANT_DELAY_CTL_IPMAC_TX_PWRDN_DLY_SHIFT                                                        (8)


#define IPMAC_REG_WHITENING_CRC_INIT_VALUE                                                                               (IPMAC_REG_BASE + 0x840)
#define IPMAC_REG_WHITENING_CRC_INIT_VALUE_DEFAULT                                                                       0x1010
#define IPMAC_REG_WHITENING_CRC_INIT_VALUE_CTL_IPMAC_WHIT_INIT_VALUE                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_WHITENING_CRC_INIT_VALUE_CTL_IPMAC_WHIT_INIT_VALUE_MASK                                                (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_WHITENING_CRC_INIT_VALUE_CTL_IPMAC_WHIT_INIT_VALUE_SHIFT                                               (0)
#define IPMAC_REG_WHITENING_CRC_INIT_VALUE_CTL_IPMAC_CRC_INIT_VALUE                                                      (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_WHITENING_CRC_INIT_VALUE_CTL_IPMAC_CRC_INIT_VALUE_MASK                                                 (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_WHITENING_CRC_INIT_VALUE_CTL_IPMAC_CRC_INIT_VALUE_SHIFT                                                (8)


#define IPMAC_REG_BCN_SYNC_WORD_0                                                                                        (IPMAC_REG_BASE + 0x844)
#define IPMAC_REG_BCN_SYNC_WORD_0_DEFAULT                                                                                0x10
#define IPMAC_REG_BCN_SYNC_WORD_0_CTL_IPMAC_BCN_SYNC_WORD_0                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_0_CTL_IPMAC_BCN_SYNC_WORD_0_MASK                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_0_CTL_IPMAC_BCN_SYNC_WORD_0_SHIFT                                                        (0)


#define IPMAC_REG_BCN_SYNC_WORD_1                                                                                        (IPMAC_REG_BASE + 0x848)
#define IPMAC_REG_BCN_SYNC_WORD_1_DEFAULT                                                                                0x10
#define IPMAC_REG_BCN_SYNC_WORD_1_CTL_IPMAC_BCN_SYNC_WORD_1                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_1_CTL_IPMAC_BCN_SYNC_WORD_1_MASK                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_1_CTL_IPMAC_BCN_SYNC_WORD_1_SHIFT                                                        (0)


#define IPMAC_REG_BCN_SYNC_WORD_2                                                                                        (IPMAC_REG_BASE + 0x84c)
#define IPMAC_REG_BCN_SYNC_WORD_2_DEFAULT                                                                                0x10
#define IPMAC_REG_BCN_SYNC_WORD_2_CTL_IPMAC_BCN_SYNC_WORD_2                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_2_CTL_IPMAC_BCN_SYNC_WORD_2_MASK                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_2_CTL_IPMAC_BCN_SYNC_WORD_2_SHIFT                                                        (0)


#define IPMAC_REG_BCN_SYNC_WORD_3                                                                                        (IPMAC_REG_BASE + 0x850)
#define IPMAC_REG_BCN_SYNC_WORD_3_DEFAULT                                                                                0x10
#define IPMAC_REG_BCN_SYNC_WORD_3_CTL_IPMAC_BCN_SYNC_WORD_3                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_3_CTL_IPMAC_BCN_SYNC_WORD_3_MASK                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_3_CTL_IPMAC_BCN_SYNC_WORD_3_SHIFT                                                        (0)


#define IPMAC_REG_RESP_SYNC_WORD_0                                                                                       (IPMAC_REG_BASE + 0x854)
#define IPMAC_REG_RESP_SYNC_WORD_0_DEFAULT                                                                               0x10
#define IPMAC_REG_RESP_SYNC_WORD_0_CTL_IPMAC_RESP_SYNC_WORD_0                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_0_CTL_IPMAC_RESP_SYNC_WORD_0_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_0_CTL_IPMAC_RESP_SYNC_WORD_0_SHIFT                                                      (0)


#define IPMAC_REG_RESP_SYNC_WORD_1                                                                                       (IPMAC_REG_BASE + 0x858)
#define IPMAC_REG_RESP_SYNC_WORD_1_DEFAULT                                                                               0x10
#define IPMAC_REG_RESP_SYNC_WORD_1_CTL_IPMAC_RESP_SYNC_WORD_1                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_1_CTL_IPMAC_RESP_SYNC_WORD_1_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_1_CTL_IPMAC_RESP_SYNC_WORD_1_SHIFT                                                      (0)


#define IPMAC_REG_RESP_SYNC_WORD_2                                                                                       (IPMAC_REG_BASE + 0x85c)
#define IPMAC_REG_RESP_SYNC_WORD_2_DEFAULT                                                                               0x10
#define IPMAC_REG_RESP_SYNC_WORD_2_CTL_IPMAC_RESP_SYNC_WORD_2                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_2_CTL_IPMAC_RESP_SYNC_WORD_2_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_2_CTL_IPMAC_RESP_SYNC_WORD_2_SHIFT                                                      (0)


#define IPMAC_REG_RESP_SYNC_WORD_3                                                                                       (IPMAC_REG_BASE + 0x860)
#define IPMAC_REG_RESP_SYNC_WORD_3_DEFAULT                                                                               0x10
#define IPMAC_REG_RESP_SYNC_WORD_3_CTL_IPMAC_RESP_SYNC_WORD_3                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_3_CTL_IPMAC_RESP_SYNC_WORD_3_MASK                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_3_CTL_IPMAC_RESP_SYNC_WORD_3_SHIFT                                                      (0)


#define IPMAC_REG_LR_TX_CTL                                                                                              (IPMAC_REG_BASE + 0x868)
#define IPMAC_REG_LR_TX_CTL_DEFAULT                                                                                      0x3
#define IPMAC_REG_LR_TX_CTL_CTL_IPMAC_LR_FEC_ENC_EN                                                                      (Bit0)
#define IPMAC_REG_LR_TX_CTL_CTL_IPMAC_LR_PMAP_EN                                                                         (Bit1)


#define IPMAC_REG_RX_PWR_DELAY                                                                                           (IPMAC_REG_BASE + 0x86c)
#define IPMAC_REG_RX_PWR_DELAY_DEFAULT                                                                                   0x10101010
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_1M                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_1M_MASK                                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_1M_SHIFT                                                           (0)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_2M                                                                 (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_2M_MASK                                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_2M_SHIFT                                                           (8)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_LR                                                                 (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_LR_MASK                                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_PWRUP_DLY_LR_SHIFT                                                           (16)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_ANT_DELAY                                                                    (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_ANT_DELAY_MASK                                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_PWR_DELAY_CTL_IPMAC_RX_ANT_DELAY_SHIFT                                                              (24)


#define IPMAC_REG_RX_SYNC_WIN_SIZE                                                                                       (IPMAC_REG_BASE + 0x870)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_DEFAULT                                                                               0x100010
#define IPMAC_REG_RX_SYNC_WIN_SIZE_CTL_IPMAC_RX_SYNC_WIN_SIZE_1M                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_CTL_IPMAC_RX_SYNC_WIN_SIZE_1M_MASK                                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_CTL_IPMAC_RX_SYNC_WIN_SIZE_1M_SHIFT                                                   (0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_CTL_IPMAC_RX_SYNC_WIN_SIZE_2M                                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_CTL_IPMAC_RX_SYNC_WIN_SIZE_2M_MASK                                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_CTL_IPMAC_RX_SYNC_WIN_SIZE_2M_SHIFT                                                   (16)


#define IPMAC_REG_RX_SYNC_WIN_SIZE_LR                                                                                    (IPMAC_REG_BASE + 0x874)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_LR_DEFAULT                                                                            0x10
#define IPMAC_REG_RX_SYNC_WIN_SIZE_LR_CTL_IPMAC_RX_SYNC_WIN_SIZE_LR                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_LR_CTL_IPMAC_RX_SYNC_WIN_SIZE_LR_MASK                                                 (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_LR_CTL_IPMAC_RX_SYNC_WIN_SIZE_LR_SHIFT                                                (0)


#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE                                                                                  (IPMAC_REG_BASE + 0x878)
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_DEFAULT                                                                          0x10007
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_CTL_IPMAC_BCN_RX_SYNC_SRCH_WIN_EN                                                (Bit0)
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_CTL_IPMAC_BCN_RX_SYNC_SRCH_WIN_FOREVER                                           (Bit1)
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_CTL_IPMAC_BCN_RX_SYNC_SRCH_WIN_AUTO_STOP                                         (Bit2)
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_CTL_IPMAC_BCN_RX_SYNC_SRCH_WIN_SIZE                                              (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_CTL_IPMAC_BCN_RX_SYNC_SRCH_WIN_SIZE_MASK                                         (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_CTL_IPMAC_BCN_RX_SYNC_SRCH_WIN_SIZE_SHIFT                                        (4)
#define IPMAC_REG_RX_SYNC_SRCH_WIN_SIZE_STS_IPMAC_BCN_RX_SYNC_SRCH_IN_SYNC                                               (Bit24)


#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP                                                                                  (IPMAC_REG_BASE + 0x87c)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_DEFAULT                                                                          0x260020
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_WIN_INC_STEP                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_WIN_INC_STEP_MASK                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_WIN_INC_STEP_SHIFT                                         (0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_RESTART_COUNT_CLR                                          (Bit16)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_SRCH_MATCH_PKT_TYPE                                        (Bit17)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_SRCH_CRC_PASS_REQUIRED                                     (Bit18)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_WIN_INC_LMT                                                (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_WIN_INC_LMT_MASK                                           (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_STEP_CTL_IPMAC_BCN_RX_SYNC_WIN_INC_LMT_SHIFT                                          (20)


#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT                                                                               (IPMAC_REG_BASE + 0x880)
#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT_DEFAULT                                                                       0x4
#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT_CTL_SLV_BCN_RX_SYNC_MISS_STOP_TX_LMT                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT_CTL_SLV_BCN_RX_SYNC_MISS_STOP_TX_LMT_MASK                                     (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT_CTL_SLV_BCN_RX_SYNC_MISS_STOP_TX_LMT_SHIFT                                    (0)
#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT_STS_IPMAC_BCN_RX_SYNC_ST                                                      (Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT_STS_IPMAC_BCN_RX_SYNC_ST_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_MISS_STOP_TX_LMT_STS_IPMAC_BCN_RX_SYNC_ST_SHIFT                                                (28)


#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO                                                                                  (IPMAC_REG_BASE + 0x888)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_DEFAULT                                                                          0x0
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_WIN_CURR_VAL                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_WIN_CURR_VAL_MASK                                          (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_WIN_CURR_VAL_SHIFT                                         (0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_RESTART_COUNT                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_RESTART_COUNT_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_RESTART_COUNT_SHIFT                                        (20)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_LOSS                                                       (Bit28)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_MISS                                                       (Bit29)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_STS_IPMAC_BCN_RX_SYNC_SRCH_CRC_FAIL                                              (Bit30)


#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_2                                                                                (IPMAC_REG_BASE + 0x88c)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_2_DEFAULT                                                                        0x0
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_2_STS_IPMAC_BCN_RX_SYNC_MIS_COUNT                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_2_STS_IPMAC_BCN_RX_SYNC_MIS_COUNT_MASK                                           (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_SYNC_WIN_SIZE_INFO_2_STS_IPMAC_BCN_RX_SYNC_MIS_COUNT_SHIFT                                          (0)


#define IPMAC_REG_SLV_SYNC_SRCH_SF_DURATION                                                                              (IPMAC_REG_BASE + 0x894)
#define IPMAC_REG_SLV_SYNC_SRCH_SF_DURATION_DEFAULT                                                                      0x0
#define IPMAC_REG_SLV_SYNC_SRCH_SF_DURATION_CTL_IPMAC_SLV_SYNC_SRCH_SF_DURATION                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_SLV_SYNC_SRCH_SF_DURATION_CTL_IPMAC_SLV_SYNC_SRCH_SF_DURATION_MASK                                     (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SLV_SYNC_SRCH_SF_DURATION_CTL_IPMAC_SLV_SYNC_SRCH_SF_DURATION_SHIFT                                    (0)


#define IPMAC_REG_MAX_RX_PDU_LENGTH                                                                                      (IPMAC_REG_BASE + 0x898)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_DEFAULT                                                                              0x10000000
#define IPMAC_REG_MAX_RX_PDU_LENGTH_CTL_IPMAC_MAX_RX_BCN_PDU_LENGTH                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_CTL_IPMAC_MAX_RX_BCN_PDU_LENGTH_MASK                                                 (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_CTL_IPMAC_MAX_RX_BCN_PDU_LENGTH_SHIFT                                                (0)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_CTL_IPMAC_MAX_RX_RESP_PDU_LENGTH                                                     (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_CTL_IPMAC_MAX_RX_RESP_PDU_LENGTH_MASK                                                (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_CTL_IPMAC_MAX_RX_RESP_PDU_LENGTH_SHIFT                                               (12)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_CTL_IPMAC_RX_PDU_LEN_0_ERR                                                           (Bit28)
#define IPMAC_REG_MAX_RX_PDU_LENGTH_STS_IPMAC_RX_PDU_LEN_ERR                                                             (Bit31)


#define IPMAC_REG_IPMAC_MSTR_TX_PDU_LEN_EQ_0                                                                             (IPMAC_REG_BASE + 0x89c)
#define IPMAC_REG_IPMAC_MSTR_TX_PDU_LEN_EQ_0_DEFAULT                                                                     0x0
#define IPMAC_REG_IPMAC_MSTR_TX_PDU_LEN_EQ_0_STS_IPMAC_MSTR_BCN_TX_PDU_LEN_EQ_0_SLV_IDX                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_IPMAC_MSTR_TX_PDU_LEN_EQ_0_STS_IPMAC_MSTR_BCN_TX_PDU_LEN_EQ_0_SLV_IDX_MASK                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MSTR_TX_PDU_LEN_EQ_0_STS_IPMAC_MSTR_BCN_TX_PDU_LEN_EQ_0_SLV_IDX_SHIFT                            (0)
#define IPMAC_REG_IPMAC_MSTR_TX_PDU_LEN_EQ_0_STS_IPMAC_MSTR_BCN_TX_PDU_LEN_EQ_0_BC                                       (Bit8)
#define IPMAC_REG_IPMAC_MSTR_TX_PDU_LEN_EQ_0_STS_IPMAC_MSTR_BCN_TX_PDU_LEN_EQ_0_BCA                                      (Bit9)


#define IPMAC_REG_MSTR_RX_ERR_IGNORE                                                                                     (IPMAC_REG_BASE + 0x8a0)
#define IPMAC_REG_MSTR_RX_ERR_IGNORE_DEFAULT                                                                             0x0
#define IPMAC_REG_MSTR_RX_ERR_IGNORE_CTL_MSTR_IGNORE_SLV_IDX_ERR                                                         (Bit0)
#define IPMAC_REG_MSTR_RX_ERR_IGNORE_CTL_MSTR_IGNORE_PKT_TYPE_ERR                                                        (Bit1)


#define IPMAC_REG_SF_DURATION_STS                                                                                        (IPMAC_REG_BASE + 0x900)
#define IPMAC_REG_SF_DURATION_STS_DEFAULT                                                                                0x0
#define IPMAC_REG_SF_DURATION_STS_STS_IPMAC_CUR_SF_DURATION                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_SF_DURATION_STS_STS_IPMAC_CUR_SF_DURATION_MASK                                                         (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_STS_STS_IPMAC_CUR_SF_DURATION_SHIFT                                                        (0)


#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS                                                                             (IPMAC_REG_BASE + 0x904)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_DEFAULT                                                                     0x0
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_DURATION_FINE_CNT                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_DURATION_FINE_CNT_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_DURATION_FINE_CNT_SHIFT                                    (0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_DURATION_CNT                                               (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_DURATION_CNT_MASK                                          (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_DURATION_CNT_SHIFT                                         (8)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_CNT                                                        (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_CNT_MASK                                                   (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_STS_STS_IPMAC_CUR_SF_CNT_SHIFT                                                  (24)


#define IPMAC_REG_SF_LOOP_CNT_STS                                                                                        (IPMAC_REG_BASE + 0x908)
#define IPMAC_REG_SF_LOOP_CNT_STS_DEFAULT                                                                                0x0
#define IPMAC_REG_SF_LOOP_CNT_STS_STS_IPMAC_CUR_SF_LOOP_CNT                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SF_LOOP_CNT_STS_STS_IPMAC_CUR_SF_LOOP_CNT_MASK                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_LOOP_CNT_STS_STS_IPMAC_CUR_SF_LOOP_CNT_SHIFT                                                        (0)


#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS                                                                    (IPMAC_REG_BASE + 0x90c)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_DEFAULT                                                            0x0
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_DURATION_FINE_CNT                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_DURATION_FINE_CNT_MASK                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_DURATION_FINE_CNT_SHIFT                      (0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_DURATION_CNT                                 (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_DURATION_CNT_MASK                            (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_DURATION_CNT_SHIFT                           (8)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_CNT                                          (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_CNT_MASK                                     (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_CNT_SHIFT                                    (24)
#define IPMAC_REG_SF_DURATION_N_FINE_CNT_SNAPSHOT_STS_CTL_IPMAC_SF_CNT_SNAPSHOT                                          (Bit31)


#define IPMAC_REG_SF_LOOP_CNT_SNAPSHOT_STS                                                                               (IPMAC_REG_BASE + 0x910)
#define IPMAC_REG_SF_LOOP_CNT_SNAPSHOT_STS_DEFAULT                                                                       0x0
#define IPMAC_REG_SF_LOOP_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_LOOP_CNT                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_SF_LOOP_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_LOOP_CNT_MASK                                           (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_LOOP_CNT_SNAPSHOT_STS_STS_IPMAC_SNAPSHOT_SF_LOOP_CNT_SHIFT                                          (0)


#define IPMAC_REG_SLV_RESP_RX_CTL                                                                                        (IPMAC_REG_BASE + 0x964)
#define IPMAC_REG_SLV_RESP_RX_CTL_DEFAULT                                                                                0x0
#define IPMAC_REG_SLV_RESP_RX_CTL_CTL_IPMAC_SLV_RESP_RX_PKT_ADDR                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_SLV_RESP_RX_CTL_CTL_IPMAC_SLV_RESP_RX_PKT_ADDR_MASK                                                    (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SLV_RESP_RX_CTL_CTL_IPMAC_SLV_RESP_RX_PKT_ADDR_SHIFT                                                   (0)


#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_0                                                                           (IPMAC_REG_BASE + 0x980)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_0_DEFAULT                                                                   0x0
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_0_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_0                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_0_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_0_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_0_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_0_SHIFT                              (0)


#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_1                                                                           (IPMAC_REG_BASE + 0x984)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_1_DEFAULT                                                                   0x0
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_1_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_1                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_1_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_1_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_1_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_1_SHIFT                              (0)


#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_2                                                                           (IPMAC_REG_BASE + 0x988)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_2_DEFAULT                                                                   0x0
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_2_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_2                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_2_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_2_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_2_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_2_SHIFT                              (0)


#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_3                                                                           (IPMAC_REG_BASE + 0x98c)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_3_DEFAULT                                                                   0x0
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_3_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_3                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_3_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_3_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RESP_RX_NESN_CHK_MASK_3_CTL_IPMAC_MSTR_RESP_RX_NESN_CHK_MASK_3_SHIFT                              (0)


#define IPMAC_REG_SLV_BCN_RX_ERR                                                                                         (IPMAC_REG_BASE + 0x9e0)
#define IPMAC_REG_SLV_BCN_RX_ERR_DEFAULT                                                                                 0x0
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_BCN_RX_HEADER_CRC_ERR                                                 (Bit0)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_BCN_RX_LENPDU_CRC_ERR                                                 (Bit1)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_BCN_RX_BCA_CRC_ERR                                                    (Bit2)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_BCN_RX_BC_CRC_ERR                                                     (Bit3)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_BCN_RX_SLV_CRC_ERR                                                    (Bit4)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_RESP_RX_HEADER_CRC_ERR                                                (Bit5)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_RESP_RX_PAYLOAD_CRC_ERR                                               (Bit6)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_RESP_RX_ERR                                                           (Bit7)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_RESP_RX_SYNC_ERR                                                      (Bit8)
#define IPMAC_REG_SLV_BCN_RX_ERR_STS_IPMAC_SLV_TMP_TX_ERR                                                                (Bit12)


#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_SYNC_LOSS                                                                   (IPMAC_REG_BASE + 0xa10)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_SYNC_LOSS_DEFAULT                                                           0x200
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_SYNC_LOSS_CTL_FREQ_EM_ADDR_OFFSET_SYNC_LOSS                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_SYNC_LOSS_CTL_FREQ_EM_ADDR_OFFSET_SYNC_LOSS_MASK                            (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_SYNC_LOSS_CTL_FREQ_EM_ADDR_OFFSET_SYNC_LOSS_SHIFT                           (0)


#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET                                                                             (IPMAC_REG_BASE + 0xa18)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_DEFAULT                                                                     0x2020200
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_CTL_FREQ_EM_ADDR_OFFSET_0                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_CTL_FREQ_EM_ADDR_OFFSET_0_MASK                                              (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_CTL_FREQ_EM_ADDR_OFFSET_0_SHIFT                                             (0)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_CTL_FREQ_EM_ADDR_OFFSET_1                                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_CTL_FREQ_EM_ADDR_OFFSET_1_MASK                                              (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_CTL_FREQ_EM_ADDR_OFFSET_1_SHIFT                                             (16)


#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE                                                                      (IPMAC_REG_BASE + 0xa20)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE_DEFAULT                                                              0x2
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE_CTL_FREQ_EM_OFFSET_SWITCH_EN                                         (Bit0)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE_CTL_FREQ_EM_OFFSET_SWITCH_TARGET                                     (Bit1)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE_CTL_FREQ_EM_OFFSET_SWITCH_SF_CNT                                     (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE_CTL_FREQ_EM_OFFSET_SWITCH_SF_CNT_MASK                                (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE_CTL_FREQ_EM_OFFSET_SWITCH_SF_CNT_SHIFT                               (4)
#define IPMAC_REG_FREQENCY_TABLE_ADDR_OFFSET_UPDATE_STS_CURR_FREQ_EM_OFFSET_SEL                                          (Bit12)


#define IPMAC_REG_RX_STAT_CTRL                                                                                           (IPMAC_REG_BASE + 0xa40)
#define IPMAC_REG_RX_STAT_CTRL_DEFAULT                                                                                   0x10
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_EN                                                                            (Bit0)
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_CLEAR                                                                         (Bit1)
#define IPMAC_REG_RX_STAT_CTRL_CTL_CLR_RX_TOTAL_CNT_OVFL                                                                 (Bit2)
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_SLV_EN                                                                        (Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_SLV_EN_MASK                                                                   (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_SLV_EN_SHIFT                                                                  (4)
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_ERR_TH                                                                        (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_ERR_TH_MASK                                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_CTRL_CTL_RX_STAT_ERR_TH_SHIFT                                                                  (8)


#define IPMAC_REG_RX_STAT_SLV_SEL                                                                                        (IPMAC_REG_BASE + 0xa48)
#define IPMAC_REG_RX_STAT_SLV_SEL_DEFAULT                                                                                0x0
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_0                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_0_MASK                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_0_SHIFT                                                            (0)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_1                                                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_1_MASK                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_1_SHIFT                                                            (8)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_2                                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_2_MASK                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_2_SHIFT                                                            (16)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_3                                                                  (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_3_MASK                                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_SEL_CTL_RX_STAT_SLV_SEL_3_SHIFT                                                            (24)


#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01                                                                             (IPMAC_REG_BASE + 0xa50)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01_DEFAULT                                                                     0x0
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01_CTL_RX_STAT_SLV_ADDR_OFFSET_0                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01_CTL_RX_STAT_SLV_ADDR_OFFSET_0_MASK                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01_CTL_RX_STAT_SLV_ADDR_OFFSET_0_SHIFT                                         (0)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01_CTL_RX_STAT_SLV_ADDR_OFFSET_1                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01_CTL_RX_STAT_SLV_ADDR_OFFSET_1_MASK                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_01_CTL_RX_STAT_SLV_ADDR_OFFSET_1_SHIFT                                         (16)


#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23                                                                             (IPMAC_REG_BASE + 0xa54)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23_DEFAULT                                                                     0x0
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23_CTL_RX_STAT_SLV_ADDR_OFFSET_2                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23_CTL_RX_STAT_SLV_ADDR_OFFSET_2_MASK                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23_CTL_RX_STAT_SLV_ADDR_OFFSET_2_SHIFT                                         (0)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23_CTL_RX_STAT_SLV_ADDR_OFFSET_3                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23_CTL_RX_STAT_SLV_ADDR_OFFSET_3_MASK                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_SLV_ADDR_OFFSET_23_CTL_RX_STAT_SLV_ADDR_OFFSET_3_SHIFT                                         (16)


#define IPMAC_REG_RX_STAT_OVER_TH                                                                                        (IPMAC_REG_BASE + 0xa60)
#define IPMAC_REG_RX_STAT_OVER_TH_DEFAULT                                                                                0x0
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_ERR_OVER_TH                                                                     (Bit0)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_TOTAL_CNT_OVFL                                                                  (Bit1)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_STAT_CLR_DONE                                                                   (Bit2)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_ERR_OVER_TH_SLV_IDX                                                             (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_ERR_OVER_TH_SLV_IDX_MASK                                                        (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_ERR_OVER_TH_SLV_IDX_SHIFT                                                       (4)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_ERR_OVER_TH_CH                                                                  (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_ERR_OVER_TH_CH_MASK                                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_STAT_OVER_TH_STS_RX_ERR_OVER_TH_CH_SHIFT                                                            (12)


#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01                                                                                  (IPMAC_REG_BASE + 0xa68)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01_DEFAULT                                                                          0x0
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01_STS_RX_TOTAL_CNT_0                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01_STS_RX_TOTAL_CNT_0_MASK                                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01_STS_RX_TOTAL_CNT_0_SHIFT                                                         (0)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01_STS_RX_TOTAL_CNT_1                                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01_STS_RX_TOTAL_CNT_1_MASK                                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_01_STS_RX_TOTAL_CNT_1_SHIFT                                                         (16)


#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23                                                                                  (IPMAC_REG_BASE + 0xa70)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23_DEFAULT                                                                          0x0
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23_STS_RX_TOTAL_CNT_2                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23_STS_RX_TOTAL_CNT_2_MASK                                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23_STS_RX_TOTAL_CNT_2_SHIFT                                                         (0)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23_STS_RX_TOTAL_CNT_3                                                               (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23_STS_RX_TOTAL_CNT_3_MASK                                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_O_STS_RX_TOTAL_CNT_23_STS_RX_TOTAL_CNT_3_SHIFT                                                         (16)


#define IPMAC_REG_BCN_RX_ST                                                                                              (IPMAC_REG_BASE + 0xa90)
#define IPMAC_REG_BCN_RX_ST_DEFAULT                                                                                      0xB00000
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_SLV_BCN_RX_ST                                                                      (Bit0+Bit1+Bit2+Bit3+Bit4)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_SLV_BCN_RX_ST_MASK                                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_SLV_BCN_RX_ST_SHIFT                                                                (0)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_SLV_BCN_RX_CTL_ST                                                                  (Bit8+Bit9+Bit10+Bit11+Bit12)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_SLV_BCN_RX_CTL_ST_MASK                                                             (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_SLV_BCN_RX_CTL_ST_SHIFT                                                            (8)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_SLV_BCN_RX_CTL_STUCK                                                               (Bit16)
#define IPMAC_REG_BCN_RX_ST_CTL_IPMAC_SLV_BCN_RX_CTL_STUCK_ST                                                            (Bit20+Bit21+Bit22+Bit23+Bit24)
#define IPMAC_REG_BCN_RX_ST_CTL_IPMAC_SLV_BCN_RX_CTL_STUCK_ST_MASK                                                       (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_RX_ST_CTL_IPMAC_SLV_BCN_RX_CTL_STUCK_ST_SHIFT                                                      (20)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_RX_DISABLE_TOO_SHORT                                                               (Bit28)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_TX_DISABLE_TOO_SHORT                                                               (Bit29)
#define IPMAC_REG_BCN_RX_ST_STS_IPMAC_RX_TX_SIMULTANEOUS                                                                 (Bit30)


#define IPMAC_REG_MSTR_ST                                                                                                (IPMAC_REG_BASE + 0xa98)
#define IPMAC_REG_MSTR_ST_DEFAULT                                                                                        0x60
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_EVNT_ST                                                                         (Bit0+Bit1+Bit2+Bit3)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_EVNT_ST_MASK                                                                    (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_EVNT_ST_SHIFT                                                                   (0)
#define IPMAC_REG_MSTR_ST_CTL_IPMAC_MSTR_EVNT_STUCK_ST                                                                   (Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_MSTR_ST_CTL_IPMAC_MSTR_EVNT_STUCK_ST_MASK                                                              (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_ST_CTL_IPMAC_MSTR_EVNT_STUCK_ST_SHIFT                                                             (4)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_EVNT_STUCK                                                                      (Bit8)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_BCN_TX_CNTL_ST                                                                  (Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_BCN_TX_CNTL_ST_MASK                                                             (Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_BCN_TX_CNTL_ST_SHIFT                                                            (12)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_BCN_TX_ST                                                                       (Bit16+Bit17+Bit18+Bit19+Bit20)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_BCN_TX_ST_MASK                                                                  (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_BCN_TX_ST_SHIFT                                                                 (16)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_RESP_RX_CNTL_ST                                                                 (Bit24+Bit25+Bit26+Bit27+Bit28)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_RESP_RX_CNTL_ST_MASK                                                            (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_ST_STS_IPMAC_MSTR_RESP_RX_CNTL_ST_SHIFT                                                           (24)


#define IPMAC_REG_MSTR_ST_2                                                                                              (IPMAC_REG_BASE + 0xaa0)
#define IPMAC_REG_MSTR_ST_2_DEFAULT                                                                                      0x0
#define IPMAC_REG_MSTR_ST_2_STS_IPMAC_MSTR_RESP_RX_ST                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4)
#define IPMAC_REG_MSTR_ST_2_STS_IPMAC_MSTR_RESP_RX_ST_MASK                                                               (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_ST_2_STS_IPMAC_MSTR_RESP_RX_ST_SHIFT                                                              (0)


#define IPMAC_REG_TEST_MUX_CTRL                                                                                          (IPMAC_REG_BASE + 0xaa8)
#define IPMAC_REG_TEST_MUX_CTRL_DEFAULT                                                                                  0x0
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_EN                                                                          (Bit0)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_0                                                                  (Bit4+Bit5+Bit6)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_0_MASK                                                             (Bit2+Bit1+Bit0)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_0_SHIFT                                                            (4)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_1                                                                  (Bit8+Bit9+Bit10)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_1_MASK                                                             (Bit2+Bit1+Bit0)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_1_SHIFT                                                            (8)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_2                                                                  (Bit12+Bit13+Bit14)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_2_MASK                                                             (Bit2+Bit1+Bit0)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_2_SHIFT                                                            (12)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_3                                                                  (Bit16+Bit17+Bit18)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_3_MASK                                                             (Bit2+Bit1+Bit0)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_BYTE_3_SHIFT                                                            (16)
#define IPMAC_REG_TEST_MUX_CTRL_CTL_TEST_MUX_SEL_USE_FREERUN_CNT                                                         (Bit20)


#define IPMAC_REG_TEST_MUX_VAL                                                                                           (IPMAC_REG_BASE + 0xaac)
#define IPMAC_REG_TEST_MUX_VAL_DEFAULT                                                                                   0x0
#define IPMAC_REG_TEST_MUX_VAL_STS_TEST_MUX                                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_TEST_MUX_VAL_STS_TEST_MUX_MASK                                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_TEST_MUX_VAL_STS_TEST_MUX_SHIFT                                                                        (0)


#define IPMAC_REG_RX_EN_TOO_LONG                                                                                         (IPMAC_REG_BASE + 0xab0)
#define IPMAC_REG_RX_EN_TOO_LONG_DEFAULT                                                                                 0x0
#define IPMAC_REG_RX_EN_TOO_LONG_STS_RX_EN_CNT                                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define IPMAC_REG_RX_EN_TOO_LONG_STS_RX_EN_CNT_MASK                                                                      (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_EN_TOO_LONG_STS_RX_EN_CNT_SHIFT                                                                     (0)
#define IPMAC_REG_RX_EN_TOO_LONG_CTL_RX_EN_CNT_LMT                                                                       (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_RX_EN_TOO_LONG_CTL_RX_EN_CNT_LMT_MASK                                                                  (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_EN_TOO_LONG_CTL_RX_EN_CNT_LMT_SHIFT                                                                 (12)
#define IPMAC_REG_RX_EN_TOO_LONG_STS_RX_EN_TOO_LONG                                                                      (Bit24)


#define IPMAC_REG_TX_EN_TOO_LONG                                                                                         (IPMAC_REG_BASE + 0xab4)
#define IPMAC_REG_TX_EN_TOO_LONG_DEFAULT                                                                                 0x0
#define IPMAC_REG_TX_EN_TOO_LONG_STS_TX_EN_CNT                                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11)
#define IPMAC_REG_TX_EN_TOO_LONG_STS_TX_EN_CNT_MASK                                                                      (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_TX_EN_TOO_LONG_STS_TX_EN_CNT_SHIFT                                                                     (0)
#define IPMAC_REG_TX_EN_TOO_LONG_CTL_TX_EN_CNT_LMT                                                                       (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_TX_EN_TOO_LONG_CTL_TX_EN_CNT_LMT_MASK                                                                  (Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_TX_EN_TOO_LONG_CTL_TX_EN_CNT_LMT_SHIFT                                                                 (12)
#define IPMAC_REG_TX_EN_TOO_LONG_STS_TX_EN_TOO_LONG                                                                      (Bit24)


#define IPMAC_REG_IN_SYNC_SEARCH_CONTROL                                                                                 (IPMAC_REG_BASE + 0xac0)
#define IPMAC_REG_IN_SYNC_SEARCH_CONTROL_DEFAULT                                                                         0x0
#define IPMAC_REG_IN_SYNC_SEARCH_CONTROL_CTL_FORCE_IN_SYNC_SEARCH                                                        (Bit0)


#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL                                                                                   (IPMAC_REG_BASE + 0xad0)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_DEFAULT                                                                           0x3020100
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_0                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_0_MASK                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_0_SHIFT                                            (0)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_1                                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_1_MASK                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_1_SHIFT                                            (8)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_2                                                  (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_2_MASK                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_2_SHIFT                                            (16)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_3                                                  (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_3_MASK                                             (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_RX_RSSI_SLV_SEL_CTL_IPMAC_MSTR_RX_RSSI_SLV_SEL_3_SHIFT                                            (24)


#define IPMAC_REG_RX_RSSI_01                                                                                             (IPMAC_REG_BASE + 0xad4)
#define IPMAC_REG_RX_RSSI_01_DEFAULT                                                                                     0x0
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_0                                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_0_MASK                                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_0_SHIFT                                                                   (0)
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_0_CRC_PASSED                                                              (Bit8)
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_1                                                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_1_MASK                                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_1_SHIFT                                                                   (16)
#define IPMAC_REG_RX_RSSI_01_STS_IPMAC_RX_RSSI_1_CRC_PASSED                                                              (Bit24)


#define IPMAC_REG_RX_RSSI_23                                                                                             (IPMAC_REG_BASE + 0xad8)
#define IPMAC_REG_RX_RSSI_23_DEFAULT                                                                                     0x0
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_2                                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_2_MASK                                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_2_SHIFT                                                                   (0)
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_2_CRC_PASSED                                                              (Bit8)
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_3                                                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_3_MASK                                                                    (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_3_SHIFT                                                                   (16)
#define IPMAC_REG_RX_RSSI_23_STS_IPMAC_RX_RSSI_3_CRC_PASSED                                                              (Bit24)


#define IPMAC_REG_IPMAC_MSTR_RX_VALID0                                                                                   (IPMAC_REG_BASE + 0xb00)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID0_DEFAULT                                                                           0x0
#define IPMAC_REG_IPMAC_MSTR_RX_VALID0_STS_IPMAC_MSTR_RESP_RX_VALID0                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID0_STS_IPMAC_MSTR_RESP_RX_VALID0_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID0_STS_IPMAC_MSTR_RESP_RX_VALID0_SHIFT                                               (0)


#define IPMAC_REG_IPMAC_MSTR_RX_VALID1                                                                                   (IPMAC_REG_BASE + 0xb04)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID1_DEFAULT                                                                           0x0
#define IPMAC_REG_IPMAC_MSTR_RX_VALID1_STS_IPMAC_MSTR_RESP_RX_VALID1                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID1_STS_IPMAC_MSTR_RESP_RX_VALID1_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID1_STS_IPMAC_MSTR_RESP_RX_VALID1_SHIFT                                               (0)


#define IPMAC_REG_IPMAC_MSTR_RX_VALID2                                                                                   (IPMAC_REG_BASE + 0xb08)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID2_DEFAULT                                                                           0x0
#define IPMAC_REG_IPMAC_MSTR_RX_VALID2_STS_IPMAC_MSTR_RESP_RX_VALID2                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID2_STS_IPMAC_MSTR_RESP_RX_VALID2_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID2_STS_IPMAC_MSTR_RESP_RX_VALID2_SHIFT                                               (0)


#define IPMAC_REG_IPMAC_MSTR_RX_VALID3                                                                                   (IPMAC_REG_BASE + 0xb0c)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID3_DEFAULT                                                                           0x0
#define IPMAC_REG_IPMAC_MSTR_RX_VALID3_STS_IPMAC_MSTR_RESP_RX_VALID3                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID3_STS_IPMAC_MSTR_RESP_RX_VALID3_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MSTR_RX_VALID3_STS_IPMAC_MSTR_RESP_RX_VALID3_SHIFT                                               (0)


#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS                                                                              (IPMAC_REG_BASE + 0xb40)
#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS_DEFAULT                                                                      0x0
#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS_STS_IPMAC_MSTR_BCN_TX_TS                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS_STS_IPMAC_MSTR_BCN_TX_TS_MASK                                                (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS_STS_IPMAC_MSTR_BCN_TX_TS_SHIFT                                               (0)
#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS_STS_IPMAC_MSTR_BCN_TX_TS_SF_CNT                                              (Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS_STS_IPMAC_MSTR_BCN_TX_TS_SF_CNT_MASK                                         (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_MSTR_BCN_SYNC_TX_TS_STS_IPMAC_MSTR_BCN_TX_TS_SF_CNT_SHIFT                                        (26)


#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS                                                                           (IPMAC_REG_BASE + 0xb44)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_DEFAULT                                                                   0x0
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_STS_IPMAC_SLV_BCN_RX_SYNC_FND_TS                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_STS_IPMAC_SLV_BCN_RX_SYNC_FND_TS_MASK                                     (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_STS_IPMAC_SLV_BCN_RX_SYNC_FND_TS_SHIFT                                    (0)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_STS_IPMAC_SLV_BCN_RX_SYNC_FND_TS_VALID                                    (Bit24)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_STS_IPMAC_SLV_BCN_RX_SYNC_FND_TS_SF_CNT                                   (Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_STS_IPMAC_SLV_BCN_RX_SYNC_FND_TS_SF_CNT_MASK                              (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_FND_TS_STS_IPMAC_SLV_BCN_RX_SYNC_FND_TS_SF_CNT_SHIFT                             (26)


#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS                                                                               (IPMAC_REG_BASE + 0xb48)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_DEFAULT                                                                       0x0
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_STS_IPMAC_SLV_BCN_RX_SYNC_TS                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_STS_IPMAC_SLV_BCN_RX_SYNC_TS_MASK                                             (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_STS_IPMAC_SLV_BCN_RX_SYNC_TS_SHIFT                                            (0)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_STS_IPMAC_SLV_BCN_RX_SYNC_TS_VALID                                            (Bit24)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_STS_IPMAC_SLV_BCN_RX_SYNC_TS_SF_CNT                                           (Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_STS_IPMAC_SLV_BCN_RX_SYNC_TS_SF_CNT_MASK                                      (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_IPMAC_SLV_BCN_RX_SYNC_TS_STS_IPMAC_SLV_BCN_RX_SYNC_TS_SF_CNT_SHIFT                                     (26)


#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_DEC                                                                            (IPMAC_REG_BASE + 0xb4c)
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_DEC_DEFAULT                                                                    0x0
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_DEC_CTL_IPMAC_SLV_FREERUN_US_TICK_DEC_LMT                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_DEC_CTL_IPMAC_SLV_FREERUN_US_TICK_DEC_LMT_MASK                                 (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_DEC_CTL_IPMAC_SLV_FREERUN_US_TICK_DEC_LMT_SHIFT                                (0)


#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_INC                                                                            (IPMAC_REG_BASE + 0xb50)
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_INC_DEFAULT                                                                    0x0
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_INC_CTL_IPMAC_SLV_FREERUN_US_TICK_INC_LMT                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_INC_CTL_IPMAC_SLV_FREERUN_US_TICK_INC_LMT_MASK                                 (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_US_CNT_ADJ_CTRL_INC_CTL_IPMAC_SLV_FREERUN_US_TICK_INC_LMT_SHIFT                                (0)


#define IPMAC_REG_FREERUN_US_CNT_STS                                                                                     (IPMAC_REG_BASE + 0xb54)
#define IPMAC_REG_FREERUN_US_CNT_STS_DEFAULT                                                                             0x0
#define IPMAC_REG_FREERUN_US_CNT_STS_STS_IPMAC_FREERUN_US_CNT                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define IPMAC_REG_FREERUN_US_CNT_STS_STS_IPMAC_FREERUN_US_CNT_MASK                                                       (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_US_CNT_STS_STS_IPMAC_FREERUN_US_CNT_SHIFT                                                      (0)


#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS                                                                     (IPMAC_REG_BASE + 0xb58)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_DEFAULT                                                             0x0
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_FINE_CNT                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_FINE_CNT_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_FINE_CNT_SHIFT                                    (0)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_SF_DURATION_CNT                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_SF_DURATION_CNT_MASK                              (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_SF_DURATION_CNT_SHIFT                             (8)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_SF_CNT                                            (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_SF_CNT_MASK                                       (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_SF_DURATION_N_FINE_FREERUN_CNT_STS_STS_IPMAC_FREERUN_SF_CNT_SHIFT                                      (24)


#define IPMAC_REG_LEN_TYPE_CTRL                                                                                          (IPMAC_REG_BASE + 0xb60)
#define IPMAC_REG_LEN_TYPE_CTRL_DEFAULT                                                                                  0x0
#define IPMAC_REG_LEN_TYPE_CTRL_CTL_IPMAC_BCN_HDR_RSV_USE_LEN_TYPE                                                       (Bit0)
#define IPMAC_REG_LEN_TYPE_CTRL_CTL_IPMAC_MSTR_BCN_TX_LEN_TYPE                                                           (Bit1)
#define IPMAC_REG_LEN_TYPE_CTRL_STS_IPMAC_SLV_BCN_RX_LEN_TYPE                                                            (Bit4)


#define IPMAC_REG_ERR_INJ_CTL_0                                                                                          (IPMAC_REG_BASE + 0xb68)
#define IPMAC_REG_ERR_INJ_CTL_0_DEFAULT                                                                                  0x0
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_EN                                                                   (Bit0)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_SF_CNT                                                               (Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_SF_CNT_MASK                                                          (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_SF_CNT_SHIFT                                                         (1)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_IGNORE_SF_CNT                                                        (Bit7)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_IGNORE_SF_CNT_2_LSB                                                  (Bit8)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_SLV_IDX                                                              (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_SLV_IDX_MASK                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_SLV_IDX_SHIFT                                                        (9)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_BIT_IDX                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_BIT_IDX_MASK                                                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_0_CTL_IPMAC_ERR_INJ_0_BIT_IDX_SHIFT                                                        (16)


#define IPMAC_REG_ERR_INJ_CTL_1                                                                                          (IPMAC_REG_BASE + 0xb6c)
#define IPMAC_REG_ERR_INJ_CTL_1_DEFAULT                                                                                  0x0
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_EN                                                                   (Bit0)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_SF_CNT                                                               (Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_SF_CNT_MASK                                                          (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_SF_CNT_SHIFT                                                         (1)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_IGNORE_SF_CNT                                                        (Bit7)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_IGNORE_SF_CNT_2_LSB                                                  (Bit8)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_SLV_IDX                                                              (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_SLV_IDX_MASK                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_SLV_IDX_SHIFT                                                        (9)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_BIT_IDX                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_BIT_IDX_MASK                                                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_1_CTL_IPMAC_ERR_INJ_1_BIT_IDX_SHIFT                                                        (16)


#define IPMAC_REG_ERR_INJ_CTL_2                                                                                          (IPMAC_REG_BASE + 0xb70)
#define IPMAC_REG_ERR_INJ_CTL_2_DEFAULT                                                                                  0x0
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_EN                                                                   (Bit0)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_SF_CNT                                                               (Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_SF_CNT_MASK                                                          (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_SF_CNT_SHIFT                                                         (1)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_IGNORE_SF_CNT                                                        (Bit7)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_IGNORE_SF_CNT_2_LSB                                                  (Bit8)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_SLV_IDX                                                              (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_SLV_IDX_MASK                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_SLV_IDX_SHIFT                                                        (9)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_BIT_IDX                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_BIT_IDX_MASK                                                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_2_CTL_IPMAC_ERR_INJ_2_BIT_IDX_SHIFT                                                        (16)


#define IPMAC_REG_ERR_INJ_CTL_3                                                                                          (IPMAC_REG_BASE + 0xb74)
#define IPMAC_REG_ERR_INJ_CTL_3_DEFAULT                                                                                  0x0
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_EN                                                                   (Bit0)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_SF_CNT                                                               (Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_SF_CNT_MASK                                                          (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_SF_CNT_SHIFT                                                         (1)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_IGNORE_SF_CNT                                                        (Bit7)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_IGNORE_SF_CNT_2_LSB                                                  (Bit8)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_SLV_IDX                                                              (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_SLV_IDX_MASK                                                         (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_SLV_IDX_SHIFT                                                        (9)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_BIT_IDX                                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_BIT_IDX_MASK                                                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_ERR_INJ_CTL_3_CTL_IPMAC_ERR_INJ_3_BIT_IDX_SHIFT                                                        (16)


#define IPMAC_REG_BCN_SYNC_WORD_SEL_0                                                                                    (IPMAC_REG_BASE + 0xb80)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_0_DEFAULT                                                                            0x0
#define IPMAC_REG_BCN_SYNC_WORD_SEL_0_CTL_IPMAC_BCN_SYNC_WORD_SEL_0                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_0_CTL_IPMAC_BCN_SYNC_WORD_SEL_0_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_0_CTL_IPMAC_BCN_SYNC_WORD_SEL_0_SHIFT                                                (0)


#define IPMAC_REG_BCN_SYNC_WORD_SEL_1                                                                                    (IPMAC_REG_BASE + 0xb84)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_1_DEFAULT                                                                            0x10
#define IPMAC_REG_BCN_SYNC_WORD_SEL_1_CTL_IPMAC_BCN_SYNC_WORD_SEL_1                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_1_CTL_IPMAC_BCN_SYNC_WORD_SEL_1_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_1_CTL_IPMAC_BCN_SYNC_WORD_SEL_1_SHIFT                                                (0)


#define IPMAC_REG_BCN_SYNC_WORD_SEL_2                                                                                    (IPMAC_REG_BASE + 0xb88)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_2_DEFAULT                                                                            0x10
#define IPMAC_REG_BCN_SYNC_WORD_SEL_2_CTL_IPMAC_BCN_SYNC_WORD_SEL_2                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_2_CTL_IPMAC_BCN_SYNC_WORD_SEL_2_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_2_CTL_IPMAC_BCN_SYNC_WORD_SEL_2_SHIFT                                                (0)


#define IPMAC_REG_BCN_SYNC_WORD_SEL_3                                                                                    (IPMAC_REG_BASE + 0xb8c)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_3_DEFAULT                                                                            0x10
#define IPMAC_REG_BCN_SYNC_WORD_SEL_3_CTL_IPMAC_BCN_SYNC_WORD_SEL_3                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_3_CTL_IPMAC_BCN_SYNC_WORD_SEL_3_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BCN_SYNC_WORD_SEL_3_CTL_IPMAC_BCN_SYNC_WORD_SEL_3_SHIFT                                                (0)


#define IPMAC_REG_RESP_SYNC_WORD_SEL_0                                                                                   (IPMAC_REG_BASE + 0xb90)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_0_DEFAULT                                                                           0x0
#define IPMAC_REG_RESP_SYNC_WORD_SEL_0_CTL_IPMAC_RESP_SYNC_WORD_SEL_0                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_0_CTL_IPMAC_RESP_SYNC_WORD_SEL_0_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_0_CTL_IPMAC_RESP_SYNC_WORD_SEL_0_SHIFT                                              (0)


#define IPMAC_REG_RESP_SYNC_WORD_SEL_1                                                                                   (IPMAC_REG_BASE + 0xb94)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_1_DEFAULT                                                                           0x10
#define IPMAC_REG_RESP_SYNC_WORD_SEL_1_CTL_IPMAC_RESP_SYNC_WORD_SEL_1                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_1_CTL_IPMAC_RESP_SYNC_WORD_SEL_1_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_1_CTL_IPMAC_RESP_SYNC_WORD_SEL_1_SHIFT                                              (0)


#define IPMAC_REG_RESP_SYNC_WORD_SEL_2                                                                                   (IPMAC_REG_BASE + 0xb98)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_2_DEFAULT                                                                           0x0
#define IPMAC_REG_RESP_SYNC_WORD_SEL_2_CTL_IPMAC_RESP_SYNC_WORD_SEL_2                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_2_CTL_IPMAC_RESP_SYNC_WORD_SEL_2_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_2_CTL_IPMAC_RESP_SYNC_WORD_SEL_2_SHIFT                                              (0)


#define IPMAC_REG_RESP_SYNC_WORD_SEL_3                                                                                   (IPMAC_REG_BASE + 0xb9c)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_3_DEFAULT                                                                           0x10
#define IPMAC_REG_RESP_SYNC_WORD_SEL_3_CTL_IPMAC_RESP_SYNC_WORD_SEL_3                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_3_CTL_IPMAC_RESP_SYNC_WORD_SEL_3_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_RESP_SYNC_WORD_SEL_3_CTL_IPMAC_RESP_SYNC_WORD_SEL_3_SHIFT                                              (0)


#define IPMAC_REG_CS_ADDR_SEL_0                                                                                          (IPMAC_REG_BASE + 0xba0)
#define IPMAC_REG_CS_ADDR_SEL_0_DEFAULT                                                                                  0x0
#define IPMAC_REG_CS_ADDR_SEL_0_CTL_IPMAC_CS_ADDR_SEL_0                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_CS_ADDR_SEL_0_CTL_IPMAC_CS_ADDR_SEL_0_MASK                                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_CS_ADDR_SEL_0_CTL_IPMAC_CS_ADDR_SEL_0_SHIFT                                                            (0)


#define IPMAC_REG_CS_ADDR_SEL_1                                                                                          (IPMAC_REG_BASE + 0xba4)
#define IPMAC_REG_CS_ADDR_SEL_1_DEFAULT                                                                                  0x0
#define IPMAC_REG_CS_ADDR_SEL_1_CTL_IPMAC_CS_ADDR_SEL_1                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_CS_ADDR_SEL_1_CTL_IPMAC_CS_ADDR_SEL_1_MASK                                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_CS_ADDR_SEL_1_CTL_IPMAC_CS_ADDR_SEL_1_SHIFT                                                            (0)


#define IPMAC_REG_CS_ADDR_SEL_2                                                                                          (IPMAC_REG_BASE + 0xba8)
#define IPMAC_REG_CS_ADDR_SEL_2_DEFAULT                                                                                  0x0
#define IPMAC_REG_CS_ADDR_SEL_2_CTL_IPMAC_CS_ADDR_SEL_2                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_CS_ADDR_SEL_2_CTL_IPMAC_CS_ADDR_SEL_2_MASK                                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_CS_ADDR_SEL_2_CTL_IPMAC_CS_ADDR_SEL_2_SHIFT                                                            (0)


#define IPMAC_REG_CS_ADDR_SEL_3                                                                                          (IPMAC_REG_BASE + 0xbac)
#define IPMAC_REG_CS_ADDR_SEL_3_DEFAULT                                                                                  0x0
#define IPMAC_REG_CS_ADDR_SEL_3_CTL_IPMAC_CS_ADDR_SEL_3                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_CS_ADDR_SEL_3_CTL_IPMAC_CS_ADDR_SEL_3_MASK                                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_CS_ADDR_SEL_3_CTL_IPMAC_CS_ADDR_SEL_3_SHIFT                                                            (0)


#define IPMAC_REG_CURR_CS_ADDR_SEL                                                                                       (IPMAC_REG_BASE + 0xbb8)
#define IPMAC_REG_CURR_CS_ADDR_SEL_DEFAULT                                                                               0x0
#define IPMAC_REG_CURR_CS_ADDR_SEL_STS_IPMAC_CURR_CS_ADDR_SEL                                                            (Bit0+Bit1)
#define IPMAC_REG_CURR_CS_ADDR_SEL_STS_IPMAC_CURR_CS_ADDR_SEL_MASK                                                       (Bit1+Bit0)
#define IPMAC_REG_CURR_CS_ADDR_SEL_STS_IPMAC_CURR_CS_ADDR_SEL_SHIFT                                                      (0)


#define IPMAC_REG_BKGRND_SCAN_CTRL                                                                                       (IPMAC_REG_BASE + 0xbc0)
#define IPMAC_REG_BKGRND_SCAN_CTRL_DEFAULT                                                                               0x6
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_EN                                                              (Bit0)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_FREEZE_GAIN                                                     (Bit1)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_RATE                                                            (Bit2+Bit3)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_RATE_MASK                                                       (Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_RATE_SHIFT                                                      (2)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_START_TIME                                                      (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_START_TIME_MASK                                                 (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_START_TIME_SHIFT                                                (4)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_RSSI_NUM_AVG_LOG2                                               (Bit20+Bit21+Bit22)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_RSSI_NUM_AVG_LOG2_MASK                                          (Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_RSSI_NUM_AVG_LOG2_SHIFT                                         (20)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_NUM_CH_M1                                                       (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_NUM_CH_M1_MASK                                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_CTRL_CTL_IPMAC_BKGRND_SCAN_NUM_CH_M1_SHIFT                                                 (24)


#define IPMAC_REG_BKGRND_SCAN_EM_CTL                                                                                     (IPMAC_REG_BASE + 0xbc4)
#define IPMAC_REG_BKGRND_SCAN_EM_CTL_DEFAULT                                                                             0x0
#define IPMAC_REG_BKGRND_SCAN_EM_CTL_CTL_IPMAC_BKGRND_SCAN_CH_IDX_EM_OFFSET                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_BKGRND_SCAN_EM_CTL_CTL_IPMAC_BKGRND_SCAN_CH_IDX_EM_OFFSET_MASK                                         (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_EM_CTL_CTL_IPMAC_BKGRND_SCAN_CH_IDX_EM_OFFSET_SHIFT                                        (0)
#define IPMAC_REG_BKGRND_SCAN_EM_CTL_CTL_IPMAC_BKGRND_SCAN_RSLT_EM_OFFSET                                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define IPMAC_REG_BKGRND_SCAN_EM_CTL_CTL_IPMAC_BKGRND_SCAN_RSLT_EM_OFFSET_MASK                                           (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_EM_CTL_CTL_IPMAC_BKGRND_SCAN_RSLT_EM_OFFSET_SHIFT                                          (16)


#define IPMAC_REG_BKGRND_SCAN_TIMING                                                                                     (IPMAC_REG_BASE + 0xbc8)
#define IPMAC_REG_BKGRND_SCAN_TIMING_DEFAULT                                                                             0x4101020
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_RX_RAMP_DLY                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_RX_RAMP_DLY_MASK                                              (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_RX_RAMP_DLY_SHIFT                                             (0)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_GAIN_ADJ_DLY                                                  (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_GAIN_ADJ_DLY_MASK                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_GAIN_ADJ_DLY_SHIFT                                            (8)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_WAIT_RSSI_DLY                                                 (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_WAIT_RSSI_DLY_MASK                                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_WAIT_RSSI_DLY_SHIFT                                           (16)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_RSSI_INTERVAL_DLY                                             (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_RSSI_INTERVAL_DLY_MASK                                        (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_TIMING_CTL_IPMAC_BKGRND_SCAN_RSSI_INTERVAL_DLY_SHIFT                                       (24)


#define IPMAC_REG_BKGRND_SCAN_TIME_OUT                                                                                   (IPMAC_REG_BASE + 0xbcc)
#define IPMAC_REG_BKGRND_SCAN_TIME_OUT_DEFAULT                                                                           0x0
#define IPMAC_REG_BKGRND_SCAN_TIME_OUT_CTL_IPMAC_BKGRND_SCAN_TIMEOUT_LMT                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_BKGRND_SCAN_TIME_OUT_CTL_IPMAC_BKGRND_SCAN_TIMEOUT_LMT_MASK                                            (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_TIME_OUT_CTL_IPMAC_BKGRND_SCAN_TIMEOUT_LMT_SHIFT                                           (0)


#define IPMAC_REG_BKGRND_SCAN_SYNC_WORD                                                                                  (IPMAC_REG_BASE + 0xbd0)
#define IPMAC_REG_BKGRND_SCAN_SYNC_WORD_DEFAULT                                                                          0x7A864529
#define IPMAC_REG_BKGRND_SCAN_SYNC_WORD_CTL_IPMAC_BKGRND_SCAN_SYNC_WORD                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_BKGRND_SCAN_SYNC_WORD_CTL_IPMAC_BKGRND_SCAN_SYNC_WORD_MASK                                             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_SYNC_WORD_CTL_IPMAC_BKGRND_SCAN_SYNC_WORD_SHIFT                                            (0)


#define IPMAC_REG_BKGRND_SCAN_RSLT                                                                                       (IPMAC_REG_BASE + 0xbd8)
#define IPMAC_REG_BKGRND_SCAN_RSLT_DEFAULT                                                                               0x0
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_RSSI_VAL                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_RSSI_VAL_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_RSSI_VAL_SHIFT                                                  (0)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_AGC_GAIN                                                        (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_AGC_GAIN_MASK                                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_AGC_GAIN_SHIFT                                                  (8)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_CH_IDX                                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_CH_IDX_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_CH_IDX_SHIFT                                                    (16)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_CNT                                                             (Bit24+Bit25+Bit26+Bit27+Bit28)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_CNT_MASK                                                        (Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_BKGRND_SCAN_RSLT_STS_IPMAC_BKGRND_SCAN_CNT_SHIFT                                                       (24)


#define IPMAC_REG_MSTR_SINGLE_RX                                                                                         (IPMAC_REG_BASE + 0xbe8)
#define IPMAC_REG_MSTR_SINGLE_RX_DEFAULT                                                                                 0x0
#define IPMAC_REG_MSTR_SINGLE_RX_CTL_IPMAC_MSTR_SINGLE_RX_FOR_ALL_SLV                                                    (Bit0)
#define IPMAC_REG_MSTR_SINGLE_RX_CTL_IPMAC_MSTR_FE_EN_MASK_DUR                                                           (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_MSTR_SINGLE_RX_CTL_IPMAC_MSTR_FE_EN_MASK_DUR_MASK                                                      (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_SINGLE_RX_CTL_IPMAC_MSTR_FE_EN_MASK_DUR_SHIFT                                                     (8)
#define IPMAC_REG_MSTR_SINGLE_RX_CTL_IPMAC_MSTR_MDM_EN_MASK_DUR                                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_MSTR_SINGLE_RX_CTL_IPMAC_MSTR_MDM_EN_MASK_DUR_MASK                                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_MSTR_SINGLE_RX_CTL_IPMAC_MSTR_MDM_EN_MASK_DUR_SHIFT                                                    (16)


#define IPMAC_REG_FREERUN_CNT_INTR0_CTRL                                                                                 (IPMAC_REG_BASE + 0xbf0)
#define IPMAC_REG_FREERUN_CNT_INTR0_CTRL_DEFAULT                                                                         0x0
#define IPMAC_REG_FREERUN_CNT_INTR0_CTRL_CTL_IPMAC_FREERUN_CNT_INTR0_SF_DUR_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_FREERUN_CNT_INTR0_CTRL_CTL_IPMAC_FREERUN_CNT_INTR0_SF_DUR_VAL_MASK                                     (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_CNT_INTR0_CTRL_CTL_IPMAC_FREERUN_CNT_INTR0_SF_DUR_VAL_SHIFT                                    (0)


#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL                                                                                 (IPMAC_REG_BASE + 0xbf4)
#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL_DEFAULT                                                                         0x0
#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL_CTL_IPMAC_FREERUN_CNT_INTR1_SF_DUR_VAL                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14)
#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL_CTL_IPMAC_FREERUN_CNT_INTR1_SF_DUR_VAL_MASK                                     (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL_CTL_IPMAC_FREERUN_CNT_INTR1_SF_DUR_VAL_SHIFT                                    (0)
#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL_CTL_IPMAC_FREERUN_CNT_INTR1_SF_CNT_VAL                                          (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL_CTL_IPMAC_FREERUN_CNT_INTR1_SF_CNT_VAL_MASK                                     (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_CNT_INTR1_CTRL_CTL_IPMAC_FREERUN_CNT_INTR1_SF_CNT_VAL_SHIFT                                    (16)


#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS                                                                             (IPMAC_REG_BASE + 0xbf8)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_DEFAULT                                                                     0x0
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT0                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT0_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT0_SHIFT                                  (0)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT1                                        (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT1_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT1_SHIFT                                  (8)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT2                                        (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT2_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT2_SHIFT                                  (16)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT3                                        (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT3_MASK                                   (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_FREERUN_SYNC_PLS_SNAPSHOTS_STS_IPMAC_FREERUN_SYNC_PLS_SNAPSHOT3_SHIFT                                  (24)


#define IPMAC_REG_EM_WRITE_ADDR                                                                                          (IPMAC_REG_BASE + 0xc00)
#define IPMAC_REG_EM_WRITE_ADDR_DEFAULT                                                                                  0x0
#define IPMAC_REG_EM_WRITE_ADDR_CTL_EM_WRITE_ADDR                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define IPMAC_REG_EM_WRITE_ADDR_CTL_EM_WRITE_ADDR_MASK                                                                   (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_EM_WRITE_ADDR_CTL_EM_WRITE_ADDR_SHIFT                                                                  (0)
#define IPMAC_REG_EM_WRITE_ADDR_STS_EM_WRITE_STATUS                                                                      (Bit31)


#define IPMAC_REG_EM_WRITE_MASK                                                                                          (IPMAC_REG_BASE + 0xc04)
#define IPMAC_REG_EM_WRITE_MASK_DEFAULT                                                                                  0xFFFFFFFF
#define IPMAC_REG_EM_WRITE_MASK_CTL_EM_WRITE_MASK                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_EM_WRITE_MASK_CTL_EM_WRITE_MASK_MASK                                                                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_EM_WRITE_MASK_CTL_EM_WRITE_MASK_SHIFT                                                                  (0)


#define IPMAC_REG_EM_WRITE_DATA                                                                                          (IPMAC_REG_BASE + 0xc08)
#define IPMAC_REG_EM_WRITE_DATA_DEFAULT                                                                                  0x0
#define IPMAC_REG_EM_WRITE_DATA_CTL_EM_WRITE_DATA                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define IPMAC_REG_EM_WRITE_DATA_CTL_EM_WRITE_DATA_MASK                                                                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define IPMAC_REG_EM_WRITE_DATA_CTL_EM_WRITE_DATA_SHIFT                                                                  (0)


#endif // _IPMAC_REG_DEFINES_H

