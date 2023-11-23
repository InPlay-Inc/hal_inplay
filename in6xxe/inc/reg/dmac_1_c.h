#ifndef _DMAC_1_DEFINES_H
#define _DMAC_1_DEFINES_H
/* **************************** */
#define DMAC_1_SAR0                                                              (DMAC_1_BASE + 0x0)
#define DMAC_1_SAR0_DEFAULT                                                      0x0
#define DMAC_1_SAR0_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR0_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR0_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR0                                                              (DMAC_1_BASE + 0x8)
#define DMAC_1_DAR0_DEFAULT                                                      0x0
#define DMAC_1_DAR0_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR0_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR0_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP0                                                              (DMAC_1_BASE + 0x10)
#define DMAC_1_LLP0_DEFAULT                                                      0x0
#define DMAC_1_LLP0_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP0_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP0_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP0_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP0_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP0_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL0_LOWER                                                        (DMAC_1_BASE + 0x18)
#define DMAC_1_CTL0_LOWER_DEFAULT                                                0x704801
#define DMAC_1_CTL0_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL0_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL0_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL0_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL0_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL0_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL0_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL0_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL0_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL0_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL0_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL0_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL0_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL0_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL0_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL0_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL0_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL0_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL0_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL0_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL0_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL0_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL0_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL0_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL0_UPPER                                                        (DMAC_1_BASE + 0x1c)
#define DMAC_1_CTL0_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL0_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CTL0_UPPER_BLOCK_TS_MASK                                          (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL0_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL0_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT0                                                            (DMAC_1_BASE + 0x20)
#define DMAC_1_SSTAT0_DEFAULT                                                    0x0
#define DMAC_1_SSTAT0_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT0_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT0_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT0                                                            (DMAC_1_BASE + 0x28)
#define DMAC_1_DSTAT0_DEFAULT                                                    0x0
#define DMAC_1_DSTAT0_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR0                                                          (DMAC_1_BASE + 0x30)
#define DMAC_1_SSTATAR0_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR0_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR0_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR0_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR0                                                          (DMAC_1_BASE + 0x38)
#define DMAC_1_DSTATAR0_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR0_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR0_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR0_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG0_LOWER                                                        (DMAC_1_BASE + 0x40)
#define DMAC_1_CFG0_LOWER_DEFAULT                                                0xE00
#define DMAC_1_CFG0_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG0_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG0_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG0_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG0_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG0_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG0_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG0_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG0_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG0_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG0_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG0_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG0_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG0_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG0_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG0_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG0_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG0_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG0_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG0_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG0_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG0_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG0_UPPER                                                        (DMAC_1_BASE + 0x44)
#define DMAC_1_CFG0_UPPER_DEFAULT                                                0x4
#define DMAC_1_CFG0_UPPER_FCMODE                                                 (Bit0)
#define DMAC_1_CFG0_UPPER_FIFO_MODE                                              (Bit1)
#define DMAC_1_CFG0_UPPER_PROTCTL                                                (Bit2+Bit3+Bit4)
#define DMAC_1_CFG0_UPPER_PROTCTL_MASK                                           (Bit2+Bit1+Bit0)
#define DMAC_1_CFG0_UPPER_PROTCTL_SHIFT                                          (2)
#define DMAC_1_CFG0_UPPER_DS_UPD_EN                                              (Bit5)
#define DMAC_1_CFG0_UPPER_SS_UPD_EN                                              (Bit6)
#define DMAC_1_CFG0_UPPER_SRC_PER                                                (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG0_UPPER_SRC_PER_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG0_UPPER_SRC_PER_SHIFT                                          (7)
#define DMAC_1_CFG0_UPPER_DEST_PER                                               (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG0_UPPER_DEST_PER_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG0_UPPER_DEST_PER_SHIFT                                         (11)


#define DMAC_1_SGR0                                                              (DMAC_1_BASE + 0x48)
#define DMAC_1_SGR0_DEFAULT                                                      0x0
#define DMAC_1_SGR0_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR0_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR0_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR0_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SGR0_SGC_MASK                                                     (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR0_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR0                                                              (DMAC_1_BASE + 0x50)
#define DMAC_1_DSR0_DEFAULT                                                      0x0
#define DMAC_1_DSR0_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR0_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR0_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR0_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSR0_DSC_MASK                                                     (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR0_DSC_SHIFT                                                    (20)


#define DMAC_1_SAR1                                                              (DMAC_1_BASE + 0x58)
#define DMAC_1_SAR1_DEFAULT                                                      0x0
#define DMAC_1_SAR1_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR1_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR1_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR1                                                              (DMAC_1_BASE + 0x60)
#define DMAC_1_DAR1_DEFAULT                                                      0x0
#define DMAC_1_DAR1_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR1_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR1_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP1                                                              (DMAC_1_BASE + 0x68)
#define DMAC_1_LLP1_DEFAULT                                                      0x0
#define DMAC_1_LLP1_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP1_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP1_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP1_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP1_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP1_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL1_LOWER                                                        (DMAC_1_BASE + 0x70)
#define DMAC_1_CTL1_LOWER_DEFAULT                                                0x704801
#define DMAC_1_CTL1_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL1_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL1_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL1_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL1_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL1_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL1_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL1_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL1_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL1_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL1_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL1_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL1_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL1_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL1_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL1_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL1_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL1_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL1_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL1_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL1_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL1_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL1_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL1_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL1_UPPER                                                        (DMAC_1_BASE + 0x74)
#define DMAC_1_CTL1_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL1_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CTL1_UPPER_BLOCK_TS_MASK                                          (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL1_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL1_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT1                                                            (DMAC_1_BASE + 0x78)
#define DMAC_1_SSTAT1_DEFAULT                                                    0x0
#define DMAC_1_SSTAT1_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT1_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT1_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT1                                                            (DMAC_1_BASE + 0x80)
#define DMAC_1_DSTAT1_DEFAULT                                                    0x0
#define DMAC_1_DSTAT1_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR1                                                          (DMAC_1_BASE + 0x88)
#define DMAC_1_SSTATAR1_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR1_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR1_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR1_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR1                                                          (DMAC_1_BASE + 0x90)
#define DMAC_1_DSTATAR1_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR1_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR1_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR1_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG1_LOWER                                                        (DMAC_1_BASE + 0x98)
#define DMAC_1_CFG1_LOWER_DEFAULT                                                0xE20
#define DMAC_1_CFG1_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG1_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG1_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG1_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG1_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG1_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG1_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG1_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG1_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG1_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG1_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG1_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG1_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG1_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG1_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG1_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG1_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG1_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG1_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG1_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG1_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG1_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG1                                                              (DMAC_1_BASE + 0x9c)
#define DMAC_1_CFG1_DEFAULT                                                      0x4
#define DMAC_1_CFG1_FCMODE                                                       (Bit0)
#define DMAC_1_CFG1_FIFO_MODE                                                    (Bit1)
#define DMAC_1_CFG1_PROTCTL                                                      (Bit2+Bit3+Bit4)
#define DMAC_1_CFG1_PROTCTL_MASK                                                 (Bit2+Bit1+Bit0)
#define DMAC_1_CFG1_PROTCTL_SHIFT                                                (2)
#define DMAC_1_CFG1_DS_UPD_EN                                                    (Bit5)
#define DMAC_1_CFG1_SS_UPD_EN                                                    (Bit6)
#define DMAC_1_CFG1_SRC_PER                                                      (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG1_SRC_PER_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG1_SRC_PER_SHIFT                                                (7)
#define DMAC_1_CFG1_DEST_PER                                                     (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG1_DEST_PER_MASK                                                (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG1_DEST_PER_SHIFT                                               (11)


#define DMAC_1_SGR1                                                              (DMAC_1_BASE + 0xa0)
#define DMAC_1_SGR1_DEFAULT                                                      0x0
#define DMAC_1_SGR1_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR1_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR1_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR1_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SGR1_SGC_MASK                                                     (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR1_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR1                                                              (DMAC_1_BASE + 0xa8)
#define DMAC_1_DSR1_DEFAULT                                                      0x0
#define DMAC_1_DSR1_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR1_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR1_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR1_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSR1_DSC_MASK                                                     (Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR1_DSC_SHIFT                                                    (20)


#define DMAC_1_SAR2                                                              (DMAC_1_BASE + 0xb0)
#define DMAC_1_SAR2_DEFAULT                                                      0x0
#define DMAC_1_SAR2_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR2_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR2_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR2                                                              (DMAC_1_BASE + 0xb8)
#define DMAC_1_DAR2_DEFAULT                                                      0x0
#define DMAC_1_DAR2_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR2_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR2_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP2                                                              (DMAC_1_BASE + 0xc0)
#define DMAC_1_LLP2_DEFAULT                                                      0x0
#define DMAC_1_LLP2_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP2_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP2_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP2_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP2_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP2_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL2_LOWER                                                        (DMAC_1_BASE + 0xc8)
#define DMAC_1_CTL2_LOWER_DEFAULT                                                0x304801
#define DMAC_1_CTL2_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL2_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL2_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL2_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL2_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL2_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL2_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL2_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL2_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL2_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL2_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL2_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL2_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL2_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL2_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL2_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL2_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL2_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL2_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL2_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL2_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL2_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL2_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL2_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL2_UPPER                                                        (DMAC_1_BASE + 0xcc)
#define DMAC_1_CTL2_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL2_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4)
#define DMAC_1_CTL2_UPPER_BLOCK_TS_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL2_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL2_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT2                                                            (DMAC_1_BASE + 0xd0)
#define DMAC_1_SSTAT2_DEFAULT                                                    0x0
#define DMAC_1_SSTAT2_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT2_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT2_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT2                                                            (DMAC_1_BASE + 0xd8)
#define DMAC_1_DSTAT2_DEFAULT                                                    0x0
#define DMAC_1_DSTAT2_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR2                                                          (DMAC_1_BASE + 0xe0)
#define DMAC_1_SSTATAR2_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR2_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR2_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR2_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR2                                                          (DMAC_1_BASE + 0xe8)
#define DMAC_1_DSTATAR2_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR2_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR2_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR2_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG2_LOWER                                                        (DMAC_1_BASE + 0xf0)
#define DMAC_1_CFG2_LOWER_DEFAULT                                                0xE40
#define DMAC_1_CFG2_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG2_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG2_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG2_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG2_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG2_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG2_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG2_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG2_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG2_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG2_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG2_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG2_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG2_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG2_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG2_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG2_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG2_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG2_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG2_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG2_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG2_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG2_UPPER                                                        (DMAC_1_BASE + 0xf4)
#define DMAC_1_CFG2_UPPER_DEFAULT                                                0x4
#define DMAC_1_CFG2_UPPER_FCMODE                                                 (Bit0)
#define DMAC_1_CFG2_UPPER_FIFO_MODE                                              (Bit1)
#define DMAC_1_CFG2_UPPER_PROTCTL                                                (Bit2+Bit3+Bit4)
#define DMAC_1_CFG2_UPPER_PROTCTL_MASK                                           (Bit2+Bit1+Bit0)
#define DMAC_1_CFG2_UPPER_PROTCTL_SHIFT                                          (2)
#define DMAC_1_CFG2_UPPER_DS_UPD_EN                                              (Bit5)
#define DMAC_1_CFG2_UPPER_SS_UPD_EN                                              (Bit6)
#define DMAC_1_CFG2_UPPER_SRC_PER                                                (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG2_UPPER_SRC_PER_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG2_UPPER_SRC_PER_SHIFT                                          (7)
#define DMAC_1_CFG2_UPPER_DEST_PER                                               (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG2_UPPER_DEST_PER_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG2_UPPER_DEST_PER_SHIFT                                         (11)


#define DMAC_1_SGR2                                                              (DMAC_1_BASE + 0xf8)
#define DMAC_1_SGR2_DEFAULT                                                      0x0
#define DMAC_1_SGR2_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR2_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR2_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR2_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_SGR2_SGC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR2_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR2                                                              (DMAC_1_BASE + 0x100)
#define DMAC_1_DSR2_DEFAULT                                                      0x0
#define DMAC_1_DSR2_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR2_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR2_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR2_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_DSR2_DSC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR2_DSC_SHIFT                                                    (20)


#define DMAC_1_SAR3                                                              (DMAC_1_BASE + 0x108)
#define DMAC_1_SAR3_DEFAULT                                                      0x0
#define DMAC_1_SAR3_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR3_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR3_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR3                                                              (DMAC_1_BASE + 0x110)
#define DMAC_1_DAR3_DEFAULT                                                      0x0
#define DMAC_1_DAR3_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR3_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR3_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP3                                                              (DMAC_1_BASE + 0x118)
#define DMAC_1_LLP3_DEFAULT                                                      0x0
#define DMAC_1_LLP3_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP3_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP3_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP3_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP3_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP3_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL3_LOWER                                                        (DMAC_1_BASE + 0x120)
#define DMAC_1_CTL3_LOWER_DEFAULT                                                0x304801
#define DMAC_1_CTL3_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL3_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL3_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL3_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL3_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL3_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL3_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL3_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL3_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL3_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL3_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL3_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL3_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL3_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL3_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL3_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL3_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL3_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL3_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL3_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL3_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL3_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL3_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL3_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL3_UPPER                                                        (DMAC_1_BASE + 0x124)
#define DMAC_1_CTL3_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL3_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4)
#define DMAC_1_CTL3_UPPER_BLOCK_TS_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL3_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL3_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT3                                                            (DMAC_1_BASE + 0x128)
#define DMAC_1_SSTAT3_DEFAULT                                                    0x0
#define DMAC_1_SSTAT3_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT3_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT3_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT3                                                            (DMAC_1_BASE + 0x130)
#define DMAC_1_DSTAT3_DEFAULT                                                    0x0
#define DMAC_1_DSTAT3_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR3                                                          (DMAC_1_BASE + 0x138)
#define DMAC_1_SSTATAR3_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR3_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR3_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR3_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR3                                                          (DMAC_1_BASE + 0x140)
#define DMAC_1_DSTATAR3_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR3_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR3_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR3_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG3_LOWER                                                        (DMAC_1_BASE + 0x148)
#define DMAC_1_CFG3_LOWER_DEFAULT                                                0xE60
#define DMAC_1_CFG3_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG3_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG3_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG3_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG3_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG3_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG3_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG3_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG3_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG3_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG3_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG3_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG3_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG3_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG3_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG3_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG3_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG3_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG3_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG3_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG3_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG3_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG3_UPPER                                                        (DMAC_1_BASE + 0x14c)
#define DMAC_1_CFG3_UPPER_DEFAULT                                                0x4
#define DMAC_1_CFG3_UPPER_FCMODE                                                 (Bit0)
#define DMAC_1_CFG3_UPPER_FIFO_MODE                                              (Bit1)
#define DMAC_1_CFG3_UPPER_PROTCTL                                                (Bit2+Bit3+Bit4)
#define DMAC_1_CFG3_UPPER_PROTCTL_MASK                                           (Bit2+Bit1+Bit0)
#define DMAC_1_CFG3_UPPER_PROTCTL_SHIFT                                          (2)
#define DMAC_1_CFG3_UPPER_DS_UPD_EN                                              (Bit5)
#define DMAC_1_CFG3_UPPER_SS_UPD_EN                                              (Bit6)
#define DMAC_1_CFG3_UPPER_SRC_PER                                                (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG3_UPPER_SRC_PER_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG3_UPPER_SRC_PER_SHIFT                                          (7)
#define DMAC_1_CFG3_UPPER_DEST_PER                                               (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG3_UPPER_DEST_PER_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG3_UPPER_DEST_PER_SHIFT                                         (11)


#define DMAC_1_SGR3                                                              (DMAC_1_BASE + 0x150)
#define DMAC_1_SGR3_DEFAULT                                                      0x0
#define DMAC_1_SGR3_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR3_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR3_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR3_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_SGR3_SGC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR3_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR3                                                              (DMAC_1_BASE + 0x158)
#define DMAC_1_DSR3_DEFAULT                                                      0x0
#define DMAC_1_DSR3_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR3_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR3_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR3_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_DSR3_DSC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR3_DSC_SHIFT                                                    (20)


#define DMAC_1_SAR4                                                              (DMAC_1_BASE + 0x160)
#define DMAC_1_SAR4_DEFAULT                                                      0x0
#define DMAC_1_SAR4_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR4_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR4_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR4                                                              (DMAC_1_BASE + 0x168)
#define DMAC_1_DAR4_DEFAULT                                                      0x0
#define DMAC_1_DAR4_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR4_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR4_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP4                                                              (DMAC_1_BASE + 0x170)
#define DMAC_1_LLP4_DEFAULT                                                      0x0
#define DMAC_1_LLP4_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP4_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP4_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP4_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP4_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP4_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL4_LOWER                                                        (DMAC_1_BASE + 0x178)
#define DMAC_1_CTL4_LOWER_DEFAULT                                                0x304801
#define DMAC_1_CTL4_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL4_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL4_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL4_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL4_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL4_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL4_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL4_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL4_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL4_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL4_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL4_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL4_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL4_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL4_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL4_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL4_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL4_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL4_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL4_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL4_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL4_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL4_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL4_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL4_UPPER                                                        (DMAC_1_BASE + 0x17c)
#define DMAC_1_CTL4_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL4_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4)
#define DMAC_1_CTL4_UPPER_BLOCK_TS_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL4_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL4_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT4                                                            (DMAC_1_BASE + 0x180)
#define DMAC_1_SSTAT4_DEFAULT                                                    0x0
#define DMAC_1_SSTAT4_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT4_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT4_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT4                                                            (DMAC_1_BASE + 0x188)
#define DMAC_1_DSTAT4_DEFAULT                                                    0x0
#define DMAC_1_DSTAT4_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR4                                                          (DMAC_1_BASE + 0x190)
#define DMAC_1_SSTATAR4_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR4_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR4_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR4_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR4                                                          (DMAC_1_BASE + 0x198)
#define DMAC_1_DSTATAR4_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR4_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR4_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR4_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG4_LOWER                                                        (DMAC_1_BASE + 0x1a0)
#define DMAC_1_CFG4_LOWER_DEFAULT                                                0xE80
#define DMAC_1_CFG4_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG4_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG4_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG4_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG4_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG4_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG4_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG4_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG4_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG4_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG4_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG4_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG4_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG4_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG4_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG4_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG4_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG4_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG4_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG4_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG4_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG4_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG4_UPPER                                                        (DMAC_1_BASE + 0x1a4)
#define DMAC_1_CFG4_UPPER_DEFAULT                                                0x4
#define DMAC_1_CFG4_UPPER_FCMODE                                                 (Bit0)
#define DMAC_1_CFG4_UPPER_FIFO_MODE                                              (Bit1)
#define DMAC_1_CFG4_UPPER_PROTCTL                                                (Bit2+Bit3+Bit4)
#define DMAC_1_CFG4_UPPER_PROTCTL_MASK                                           (Bit2+Bit1+Bit0)
#define DMAC_1_CFG4_UPPER_PROTCTL_SHIFT                                          (2)
#define DMAC_1_CFG4_UPPER_DS_UPD_EN                                              (Bit5)
#define DMAC_1_CFG4_UPPER_SS_UPD_EN                                              (Bit6)
#define DMAC_1_CFG4_UPPER_SRC_PER                                                (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG4_UPPER_SRC_PER_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG4_UPPER_SRC_PER_SHIFT                                          (7)
#define DMAC_1_CFG4_UPPER_DEST_PER                                               (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG4_UPPER_DEST_PER_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG4_UPPER_DEST_PER_SHIFT                                         (11)


#define DMAC_1_SGR4                                                              (DMAC_1_BASE + 0x1a8)
#define DMAC_1_SGR4_DEFAULT                                                      0x0
#define DMAC_1_SGR4_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR4_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR4_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR4_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_SGR4_SGC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR4_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR4                                                              (DMAC_1_BASE + 0x1b0)
#define DMAC_1_DSR4_DEFAULT                                                      0x0
#define DMAC_1_DSR4_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR4_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR4_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR4_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_DSR4_DSC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR4_DSC_SHIFT                                                    (20)


#define DMAC_1_SAR5                                                              (DMAC_1_BASE + 0x1b8)
#define DMAC_1_SAR5_DEFAULT                                                      0x0
#define DMAC_1_SAR5_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR5_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR5_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR5                                                              (DMAC_1_BASE + 0x1c0)
#define DMAC_1_DAR5_DEFAULT                                                      0x0
#define DMAC_1_DAR5_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR5_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR5_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP5                                                              (DMAC_1_BASE + 0x1c8)
#define DMAC_1_LLP5_DEFAULT                                                      0x0
#define DMAC_1_LLP5_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP5_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP5_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP5_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP5_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP5_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL5_LOWER                                                        (DMAC_1_BASE + 0x1d0)
#define DMAC_1_CTL5_LOWER_DEFAULT                                                0x304801
#define DMAC_1_CTL5_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL5_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL5_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL5_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL5_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL5_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL5_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL5_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL5_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL5_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL5_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL5_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL5_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL5_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL5_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL5_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL5_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL5_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL5_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL5_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL5_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL5_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL5_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL5_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL5_UPPER                                                        (DMAC_1_BASE + 0x1d4)
#define DMAC_1_CTL5_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL5_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4)
#define DMAC_1_CTL5_UPPER_BLOCK_TS_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL5_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL5_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT5                                                            (DMAC_1_BASE + 0x1d8)
#define DMAC_1_SSTAT5_DEFAULT                                                    0x0
#define DMAC_1_SSTAT5_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT5_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT5_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT5                                                            (DMAC_1_BASE + 0x1e0)
#define DMAC_1_DSTAT5_DEFAULT                                                    0x0
#define DMAC_1_DSTAT5_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR5                                                          (DMAC_1_BASE + 0x1e8)
#define DMAC_1_SSTATAR5_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR5_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR5_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR5_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR5                                                          (DMAC_1_BASE + 0x1f0)
#define DMAC_1_DSTATAR5_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR5_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR5_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR5_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG5_LOWER                                                        (DMAC_1_BASE + 0x1f8)
#define DMAC_1_CFG5_LOWER_DEFAULT                                                0xEA0
#define DMAC_1_CFG5_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG5_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG5_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG5_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG5_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG5_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG5_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG5_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG5_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG5_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG5_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG5_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG5_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG5_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG5_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG5_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG5_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG5_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG5_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG5_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG5_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG5_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG5_UPPER                                                        (DMAC_1_BASE + 0x1fc)
#define DMAC_1_CFG5_UPPER_DEFAULT                                                0x4
#define DMAC_1_CFG5_UPPER_FCMODE                                                 (Bit0)
#define DMAC_1_CFG5_UPPER_FIFO_MODE                                              (Bit1)
#define DMAC_1_CFG5_UPPER_PROTCTL                                                (Bit2+Bit3+Bit4)
#define DMAC_1_CFG5_UPPER_PROTCTL_MASK                                           (Bit2+Bit1+Bit0)
#define DMAC_1_CFG5_UPPER_PROTCTL_SHIFT                                          (2)
#define DMAC_1_CFG5_UPPER_DS_UPD_EN                                              (Bit5)
#define DMAC_1_CFG5_UPPER_SS_UPD_EN                                              (Bit6)
#define DMAC_1_CFG5_UPPER_SRC_PER                                                (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG5_UPPER_SRC_PER_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG5_UPPER_SRC_PER_SHIFT                                          (7)
#define DMAC_1_CFG5_UPPER_DEST_PER                                               (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG5_UPPER_DEST_PER_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG5_UPPER_DEST_PER_SHIFT                                         (11)


#define DMAC_1_SGR5                                                              (DMAC_1_BASE + 0x200)
#define DMAC_1_SGR5_DEFAULT                                                      0x0
#define DMAC_1_SGR5_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR5_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR5_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR5_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_SGR5_SGC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR5_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR5                                                              (DMAC_1_BASE + 0x208)
#define DMAC_1_DSR5_DEFAULT                                                      0x0
#define DMAC_1_DSR5_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR5_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR5_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR5_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_DSR5_DSC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR5_DSC_SHIFT                                                    (20)


#define DMAC_1_SAR6                                                              (DMAC_1_BASE + 0x210)
#define DMAC_1_SAR6_DEFAULT                                                      0x0
#define DMAC_1_SAR6_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR6_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR6_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR6                                                              (DMAC_1_BASE + 0x218)
#define DMAC_1_DAR6_DEFAULT                                                      0x0
#define DMAC_1_DAR6_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR6_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR6_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP6                                                              (DMAC_1_BASE + 0x220)
#define DMAC_1_LLP6_DEFAULT                                                      0x0
#define DMAC_1_LLP6_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP6_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP6_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP6_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP6_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP6_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL6_LOWER                                                        (DMAC_1_BASE + 0x228)
#define DMAC_1_CTL6_LOWER_DEFAULT                                                0x304801
#define DMAC_1_CTL6_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL6_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL6_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL6_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL6_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL6_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL6_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL6_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL6_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL6_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL6_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL6_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL6_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL6_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL6_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL6_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL6_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL6_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL6_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL6_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL6_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL6_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL6_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL6_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL6_UPPER                                                        (DMAC_1_BASE + 0x22c)
#define DMAC_1_CTL6_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL6_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4)
#define DMAC_1_CTL6_UPPER_BLOCK_TS_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL6_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL6_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT6                                                            (DMAC_1_BASE + 0x230)
#define DMAC_1_SSTAT6_DEFAULT                                                    0x0
#define DMAC_1_SSTAT6_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT6_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT6_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT6                                                            (DMAC_1_BASE + 0x238)
#define DMAC_1_DSTAT6_DEFAULT                                                    0x0
#define DMAC_1_DSTAT6_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR6                                                          (DMAC_1_BASE + 0x240)
#define DMAC_1_SSTATAR6_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR6_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR6_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR6_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR6                                                          (DMAC_1_BASE + 0x248)
#define DMAC_1_DSTATAR6_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR6_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR6_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR6_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG6_LOWER                                                        (DMAC_1_BASE + 0x250)
#define DMAC_1_CFG6_LOWER_DEFAULT                                                0xEC0
#define DMAC_1_CFG6_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG6_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG6_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG6_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG6_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG6_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG6_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG6_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG6_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG6_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG6_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG6_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG6_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG6_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG6_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG6_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG6_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG6_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG6_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG6_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG6_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG6_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG6_UPPER                                                        (DMAC_1_BASE + 0x254)
#define DMAC_1_CFG6_UPPER_DEFAULT                                                0x4
#define DMAC_1_CFG6_UPPER_FCMODE                                                 (Bit0)
#define DMAC_1_CFG6_UPPER_FIFO_MODE                                              (Bit1)
#define DMAC_1_CFG6_UPPER_PROTCTL                                                (Bit2+Bit3+Bit4)
#define DMAC_1_CFG6_UPPER_PROTCTL_MASK                                           (Bit2+Bit1+Bit0)
#define DMAC_1_CFG6_UPPER_PROTCTL_SHIFT                                          (2)
#define DMAC_1_CFG6_UPPER_DS_UPD_EN                                              (Bit5)
#define DMAC_1_CFG6_UPPER_SS_UPD_EN                                              (Bit6)
#define DMAC_1_CFG6_UPPER_SRC_PER                                                (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG6_UPPER_SRC_PER_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG6_UPPER_SRC_PER_SHIFT                                          (7)
#define DMAC_1_CFG6_UPPER_DEST_PER                                               (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG6_UPPER_DEST_PER_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG6_UPPER_DEST_PER_SHIFT                                         (11)


#define DMAC_1_SGR6                                                              (DMAC_1_BASE + 0x258)
#define DMAC_1_SGR6_DEFAULT                                                      0x0
#define DMAC_1_SGR6_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR6_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR6_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR6_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_SGR6_SGC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR6_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR6                                                              (DMAC_1_BASE + 0x260)
#define DMAC_1_DSR6_DEFAULT                                                      0x0
#define DMAC_1_DSR6_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR6_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR6_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR6_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_DSR6_DSC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR6_DSC_SHIFT                                                    (20)


#define DMAC_1_SAR7                                                              (DMAC_1_BASE + 0x268)
#define DMAC_1_SAR7_DEFAULT                                                      0x0
#define DMAC_1_SAR7_SAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SAR7_SAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SAR7_SAR_SHIFT                                                    (0)


#define DMAC_1_DAR7                                                              (DMAC_1_BASE + 0x270)
#define DMAC_1_DAR7_DEFAULT                                                      0x0
#define DMAC_1_DAR7_DAR                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DAR7_DAR_MASK                                                     (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DAR7_DAR_SHIFT                                                    (0)


#define DMAC_1_LLP7                                                              (DMAC_1_BASE + 0x278)
#define DMAC_1_LLP7_DEFAULT                                                      0x0
#define DMAC_1_LLP7_LMS                                                          (Bit0+Bit1)
#define DMAC_1_LLP7_LMS_MASK                                                     (Bit1+Bit0)
#define DMAC_1_LLP7_LMS_SHIFT                                                    (0)
#define DMAC_1_LLP7_LOC                                                          (Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_LLP7_LOC_MASK                                                     (Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_LLP7_LOC_SHIFT                                                    (2)


#define DMAC_1_CTL7_LOWER                                                        (DMAC_1_BASE + 0x280)
#define DMAC_1_CTL7_LOWER_DEFAULT                                                0x304801
#define DMAC_1_CTL7_LOWER_INT_EN                                                 (Bit0)
#define DMAC_1_CTL7_LOWER_DST_TR_WIDTH                                           (Bit1+Bit2+Bit3)
#define DMAC_1_CTL7_LOWER_DST_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_DST_TR_WIDTH_SHIFT                                     (1)
#define DMAC_1_CTL7_LOWER_SRC_TR_WIDTH                                           (Bit4+Bit5+Bit6)
#define DMAC_1_CTL7_LOWER_SRC_TR_WIDTH_MASK                                      (Bit2+Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_SRC_TR_WIDTH_SHIFT                                     (4)
#define DMAC_1_CTL7_LOWER_DINC                                                   (Bit7+Bit8)
#define DMAC_1_CTL7_LOWER_DINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_DINC_SHIFT                                             (7)
#define DMAC_1_CTL7_LOWER_SINC                                                   (Bit9+Bit10)
#define DMAC_1_CTL7_LOWER_SINC_MASK                                              (Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_SINC_SHIFT                                             (9)
#define DMAC_1_CTL7_LOWER_DEST_MSIZE                                             (Bit11+Bit12+Bit13)
#define DMAC_1_CTL7_LOWER_DEST_MSIZE_MASK                                        (Bit2+Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_DEST_MSIZE_SHIFT                                       (11)
#define DMAC_1_CTL7_LOWER_SRC_MSIZE                                              (Bit14+Bit15+Bit16)
#define DMAC_1_CTL7_LOWER_SRC_MSIZE_MASK                                         (Bit2+Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_SRC_MSIZE_SHIFT                                        (14)
#define DMAC_1_CTL7_LOWER_SRC_GATHER_EN                                          (Bit17)
#define DMAC_1_CTL7_LOWER_DST_SCATTER_EN                                         (Bit18)
#define DMAC_1_CTL7_LOWER_TT_FC                                                  (Bit20+Bit21+Bit22)
#define DMAC_1_CTL7_LOWER_TT_FC_MASK                                             (Bit2+Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_TT_FC_SHIFT                                            (20)
#define DMAC_1_CTL7_LOWER_DMS                                                    (Bit23+Bit24)
#define DMAC_1_CTL7_LOWER_DMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_DMS_SHIFT                                              (23)
#define DMAC_1_CTL7_LOWER_SMS                                                    (Bit25+Bit26)
#define DMAC_1_CTL7_LOWER_SMS_MASK                                               (Bit1+Bit0)
#define DMAC_1_CTL7_LOWER_SMS_SHIFT                                              (25)
#define DMAC_1_CTL7_LOWER_LLP_DST_EN                                             (Bit27)
#define DMAC_1_CTL7_LOWER_LLP_SRC_EN                                             (Bit28)


#define DMAC_1_CTL7_UPPER                                                        (DMAC_1_BASE + 0x284)
#define DMAC_1_CTL7_UPPER_DEFAULT                                                0x2
#define DMAC_1_CTL7_UPPER_BLOCK_TS                                               (Bit0+Bit1+Bit2+Bit3+Bit4)
#define DMAC_1_CTL7_UPPER_BLOCK_TS_MASK                                          (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CTL7_UPPER_BLOCK_TS_SHIFT                                         (0)
#define DMAC_1_CTL7_UPPER_DONE                                                   (Bit12)


#define DMAC_1_SSTAT7                                                            (DMAC_1_BASE + 0x288)
#define DMAC_1_SSTAT7_DEFAULT                                                    0x0
#define DMAC_1_SSTAT7_SSTAT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_SSTAT7_SSTAT_MASK                                                 (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTAT7_SSTAT_SHIFT                                                (0)


#define DMAC_1_DSTAT7                                                            (DMAC_1_BASE + 0x290)
#define DMAC_1_DSTAT7_DEFAULT                                                    0x0
#define DMAC_1_DSTAT7_DMA_EN                                                     (Bit0)


#define DMAC_1_SSTATAR7                                                          (DMAC_1_BASE + 0x298)
#define DMAC_1_SSTATAR7_DEFAULT                                                  0x0
#define DMAC_1_SSTATAR7_SSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_SSTATAR7_SSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SSTATAR7_SSTATAR_SHIFT                                            (0)


#define DMAC_1_DSTATAR7                                                          (DMAC_1_BASE + 0x2a0)
#define DMAC_1_DSTATAR7_DEFAULT                                                  0x0
#define DMAC_1_DSTATAR7_DSTATAR                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30)
#define DMAC_1_DSTATAR7_DSTATAR_MASK                                             (Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSTATAR7_DSTATAR_SHIFT                                            (0)


#define DMAC_1_CFG7_LOWER                                                        (DMAC_1_BASE + 0x2a8)
#define DMAC_1_CFG7_LOWER_DEFAULT                                                0xEE0
#define DMAC_1_CFG7_LOWER_CH_PRIOR                                               (Bit5+Bit6+Bit7)
#define DMAC_1_CFG7_LOWER_CH_PRIOR_MASK                                          (Bit2+Bit1+Bit0)
#define DMAC_1_CFG7_LOWER_CH_PRIOR_SHIFT                                         (5)
#define DMAC_1_CFG7_LOWER_CH_SUSP                                                (Bit8)
#define DMAC_1_CFG7_LOWER_FIFO_EMPTY                                             (Bit9)
#define DMAC_1_CFG7_LOWER_HS_SEL_DST                                             (Bit10)
#define DMAC_1_CFG7_LOWER_HS_SEL_SRC                                             (Bit11)
#define DMAC_1_CFG7_LOWER_LOCK_CH_L                                              (Bit12+Bit13)
#define DMAC_1_CFG7_LOWER_LOCK_CH_L_MASK                                         (Bit1+Bit0)
#define DMAC_1_CFG7_LOWER_LOCK_CH_L_SHIFT                                        (12)
#define DMAC_1_CFG7_LOWER_LOCK_B_L                                               (Bit14+Bit15)
#define DMAC_1_CFG7_LOWER_LOCK_B_L_MASK                                          (Bit1+Bit0)
#define DMAC_1_CFG7_LOWER_LOCK_B_L_SHIFT                                         (14)
#define DMAC_1_CFG7_LOWER_LOCK_CH                                                (Bit16)
#define DMAC_1_CFG7_LOWER_LOCK_B                                                 (Bit17)
#define DMAC_1_CFG7_LOWER_DST_HS_POL                                             (Bit18)
#define DMAC_1_CFG7_LOWER_SRC_HS_POL                                             (Bit19)
#define DMAC_1_CFG7_LOWER_MAX_ABRST                                              (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define DMAC_1_CFG7_LOWER_MAX_ABRST_MASK                                         (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG7_LOWER_MAX_ABRST_SHIFT                                        (20)
#define DMAC_1_CFG7_LOWER_RELOAD_SRC                                             (Bit30)
#define DMAC_1_CFG7_LOWER_RELOAD_DST                                             (Bit31)


#define DMAC_1_CFG7_UPPER                                                        (DMAC_1_BASE + 0x2ac)
#define DMAC_1_CFG7_UPPER_DEFAULT                                                0x4
#define DMAC_1_CFG7_UPPER_FCMODE                                                 (Bit0)
#define DMAC_1_CFG7_UPPER_FIFO_MODE                                              (Bit1)
#define DMAC_1_CFG7_UPPER_PROTCTL                                                (Bit2+Bit3+Bit4)
#define DMAC_1_CFG7_UPPER_PROTCTL_MASK                                           (Bit2+Bit1+Bit0)
#define DMAC_1_CFG7_UPPER_PROTCTL_SHIFT                                          (2)
#define DMAC_1_CFG7_UPPER_DS_UPD_EN                                              (Bit5)
#define DMAC_1_CFG7_UPPER_SS_UPD_EN                                              (Bit6)
#define DMAC_1_CFG7_UPPER_SRC_PER                                                (Bit7+Bit8+Bit9+Bit10)
#define DMAC_1_CFG7_UPPER_SRC_PER_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG7_UPPER_SRC_PER_SHIFT                                          (7)
#define DMAC_1_CFG7_UPPER_DEST_PER                                               (Bit11+Bit12+Bit13+Bit14)
#define DMAC_1_CFG7_UPPER_DEST_PER_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_CFG7_UPPER_DEST_PER_SHIFT                                         (11)


#define DMAC_1_SGR7                                                              (DMAC_1_BASE + 0x2b0)
#define DMAC_1_SGR7_DEFAULT                                                      0x0
#define DMAC_1_SGR7_SGI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_SGR7_SGI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR7_SGI_SHIFT                                                    (0)
#define DMAC_1_SGR7_SGC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_SGR7_SGC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_SGR7_SGC_SHIFT                                                    (20)


#define DMAC_1_DSR7                                                              (DMAC_1_BASE + 0x2b8)
#define DMAC_1_DSR7_DEFAULT                                                      0x0
#define DMAC_1_DSR7_DSI                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DSR7_DSI_MASK                                                     (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR7_DSI_SHIFT                                                    (0)
#define DMAC_1_DSR7_DSC                                                          (Bit20+Bit21+Bit22+Bit23+Bit24)
#define DMAC_1_DSR7_DSC_MASK                                                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DSR7_DSC_SHIFT                                                    (20)


#define DMAC_1_RAWTFR                                                            (DMAC_1_BASE + 0x2c0)
#define DMAC_1_RAWTFR_DEFAULT                                                    0x0
#define DMAC_1_RAWTFR_RAW                                                        (Bit0+Bit1)
#define DMAC_1_RAWTFR_RAW_MASK                                                   (Bit1+Bit0)
#define DMAC_1_RAWTFR_RAW_SHIFT                                                  (0)


#define DMAC_1_RAWBLOCK                                                          (DMAC_1_BASE + 0x2c8)
#define DMAC_1_RAWBLOCK_DEFAULT                                                  0x0
#define DMAC_1_RAWBLOCK_RAW                                                      (Bit0+Bit1)
#define DMAC_1_RAWBLOCK_RAW_MASK                                                 (Bit1+Bit0)
#define DMAC_1_RAWBLOCK_RAW_SHIFT                                                (0)


#define DMAC_1_RAWSRCTRAN                                                        (DMAC_1_BASE + 0x2d0)
#define DMAC_1_RAWSRCTRAN_DEFAULT                                                0x0
#define DMAC_1_RAWSRCTRAN_RAW                                                    (Bit0+Bit1)
#define DMAC_1_RAWSRCTRAN_RAW_MASK                                               (Bit1+Bit0)
#define DMAC_1_RAWSRCTRAN_RAW_SHIFT                                              (0)


#define DMAC_1_RAWDSTTRAN                                                        (DMAC_1_BASE + 0x2d8)
#define DMAC_1_RAWDSTTRAN_DEFAULT                                                0x0
#define DMAC_1_RAWDSTTRAN_RAW                                                    (Bit0+Bit1)
#define DMAC_1_RAWDSTTRAN_RAW_MASK                                               (Bit1+Bit0)
#define DMAC_1_RAWDSTTRAN_RAW_SHIFT                                              (0)


#define DMAC_1_RAWERR                                                            (DMAC_1_BASE + 0x2e0)
#define DMAC_1_RAWERR_DEFAULT                                                    0x0
#define DMAC_1_RAWERR_RAW                                                        (Bit0+Bit1)
#define DMAC_1_RAWERR_RAW_MASK                                                   (Bit1+Bit0)
#define DMAC_1_RAWERR_RAW_SHIFT                                                  (0)


#define DMAC_1_STATUSTFR                                                         (DMAC_1_BASE + 0x2e8)
#define DMAC_1_STATUSTFR_DEFAULT                                                 0x0
#define DMAC_1_STATUSTFR_STATUS                                                  (Bit0+Bit1)
#define DMAC_1_STATUSTFR_STATUS_MASK                                             (Bit1+Bit0)
#define DMAC_1_STATUSTFR_STATUS_SHIFT                                            (0)


#define DMAC_1_STATUSBLOCK                                                       (DMAC_1_BASE + 0x2f0)
#define DMAC_1_STATUSBLOCK_DEFAULT                                               0x0
#define DMAC_1_STATUSBLOCK_STATUS                                                (Bit0+Bit1)
#define DMAC_1_STATUSBLOCK_STATUS_MASK                                           (Bit1+Bit0)
#define DMAC_1_STATUSBLOCK_STATUS_SHIFT                                          (0)


#define DMAC_1_STATUSSRCTRAN                                                     (DMAC_1_BASE + 0x2f8)
#define DMAC_1_STATUSSRCTRAN_DEFAULT                                             0x0
#define DMAC_1_STATUSSRCTRAN_STATUS                                              (Bit0+Bit1)
#define DMAC_1_STATUSSRCTRAN_STATUS_MASK                                         (Bit1+Bit0)
#define DMAC_1_STATUSSRCTRAN_STATUS_SHIFT                                        (0)


#define DMAC_1_STATUSDSTTRAN                                                     (DMAC_1_BASE + 0x300)
#define DMAC_1_STATUSDSTTRAN_DEFAULT                                             0x0
#define DMAC_1_STATUSDSTTRAN_STATUS                                              (Bit0+Bit1)
#define DMAC_1_STATUSDSTTRAN_STATUS_MASK                                         (Bit1+Bit0)
#define DMAC_1_STATUSDSTTRAN_STATUS_SHIFT                                        (0)


#define DMAC_1_STATUSERR                                                         (DMAC_1_BASE + 0x308)
#define DMAC_1_STATUSERR_DEFAULT                                                 0x0
#define DMAC_1_STATUSERR_STATUS                                                  (Bit0+Bit1)
#define DMAC_1_STATUSERR_STATUS_MASK                                             (Bit1+Bit0)
#define DMAC_1_STATUSERR_STATUS_SHIFT                                            (0)


#define DMAC_1_MASKTFR                                                           (DMAC_1_BASE + 0x310)
#define DMAC_1_MASKTFR_DEFAULT                                                   0x0
#define DMAC_1_MASKTFR_INT_MASK                                                  (Bit0+Bit1)
#define DMAC_1_MASKTFR_INT_MASK_MASK                                             (Bit1+Bit0)
#define DMAC_1_MASKTFR_INT_MASK_SHIFT                                            (0)
#define DMAC_1_MASKTFR_INT_MASK_WE                                               (Bit8+Bit9)
#define DMAC_1_MASKTFR_INT_MASK_WE_MASK                                          (Bit1+Bit0)
#define DMAC_1_MASKTFR_INT_MASK_WE_SHIFT                                         (8)


#define DMAC_1_MASKBLOCK                                                         (DMAC_1_BASE + 0x318)
#define DMAC_1_MASKBLOCK_DEFAULT                                                 0x0
#define DMAC_1_MASKBLOCK_INT_MASK                                                (Bit0+Bit1)
#define DMAC_1_MASKBLOCK_INT_MASK_MASK                                           (Bit1+Bit0)
#define DMAC_1_MASKBLOCK_INT_MASK_SHIFT                                          (0)
#define DMAC_1_MASKBLOCK_INT_MASK_WE                                             (Bit8+Bit9)
#define DMAC_1_MASKBLOCK_INT_MASK_WE_MASK                                        (Bit1+Bit0)
#define DMAC_1_MASKBLOCK_INT_MASK_WE_SHIFT                                       (8)


#define DMAC_1_MASKSRCTRAN                                                       (DMAC_1_BASE + 0x320)
#define DMAC_1_MASKSRCTRAN_DEFAULT                                               0x0
#define DMAC_1_MASKSRCTRAN_INT_MASK                                              (Bit0+Bit1)
#define DMAC_1_MASKSRCTRAN_INT_MASK_MASK                                         (Bit1+Bit0)
#define DMAC_1_MASKSRCTRAN_INT_MASK_SHIFT                                        (0)
#define DMAC_1_MASKSRCTRAN_INT_MASK_WE                                           (Bit8+Bit9)
#define DMAC_1_MASKSRCTRAN_INT_MASK_WE_MASK                                      (Bit1+Bit0)
#define DMAC_1_MASKSRCTRAN_INT_MASK_WE_SHIFT                                     (8)


#define DMAC_1_MASKDSTTRAN                                                       (DMAC_1_BASE + 0x328)
#define DMAC_1_MASKDSTTRAN_DEFAULT                                               0x0
#define DMAC_1_MASKDSTTRAN_INT_MASK                                              (Bit0+Bit1)
#define DMAC_1_MASKDSTTRAN_INT_MASK_MASK                                         (Bit1+Bit0)
#define DMAC_1_MASKDSTTRAN_INT_MASK_SHIFT                                        (0)
#define DMAC_1_MASKDSTTRAN_INT_MASK_WE                                           (Bit8+Bit9)
#define DMAC_1_MASKDSTTRAN_INT_MASK_WE_MASK                                      (Bit1+Bit0)
#define DMAC_1_MASKDSTTRAN_INT_MASK_WE_SHIFT                                     (8)


#define DMAC_1_MASKERR                                                           (DMAC_1_BASE + 0x330)
#define DMAC_1_MASKERR_DEFAULT                                                   0x0
#define DMAC_1_MASKERR_INT_MASK                                                  (Bit0+Bit1)
#define DMAC_1_MASKERR_INT_MASK_MASK                                             (Bit1+Bit0)
#define DMAC_1_MASKERR_INT_MASK_SHIFT                                            (0)
#define DMAC_1_MASKERR_INT_MASK_WE                                               (Bit8+Bit9)
#define DMAC_1_MASKERR_INT_MASK_WE_MASK                                          (Bit1+Bit0)
#define DMAC_1_MASKERR_INT_MASK_WE_SHIFT                                         (8)


#define DMAC_1_CLEARTFR                                                          (DMAC_1_BASE + 0x338)
#define DMAC_1_CLEARTFR_DEFAULT                                                  0x0
#define DMAC_1_CLEARTFR_CLEAR                                                    (Bit0+Bit1)
#define DMAC_1_CLEARTFR_CLEAR_MASK                                               (Bit1+Bit0)
#define DMAC_1_CLEARTFR_CLEAR_SHIFT                                              (0)


#define DMAC_1_CLEARBLOCK                                                        (DMAC_1_BASE + 0x340)
#define DMAC_1_CLEARBLOCK_DEFAULT                                                0x0
#define DMAC_1_CLEARBLOCK_CLEAR                                                  (Bit0+Bit1)
#define DMAC_1_CLEARBLOCK_CLEAR_MASK                                             (Bit1+Bit0)
#define DMAC_1_CLEARBLOCK_CLEAR_SHIFT                                            (0)


#define DMAC_1_CLEARSRCTRAN                                                      (DMAC_1_BASE + 0x348)
#define DMAC_1_CLEARSRCTRAN_DEFAULT                                              0x0
#define DMAC_1_CLEARSRCTRAN_CLEAR                                                (Bit0+Bit1)
#define DMAC_1_CLEARSRCTRAN_CLEAR_MASK                                           (Bit1+Bit0)
#define DMAC_1_CLEARSRCTRAN_CLEAR_SHIFT                                          (0)


#define DMAC_1_CLEARDSTTRAN                                                      (DMAC_1_BASE + 0x350)
#define DMAC_1_CLEARDSTTRAN_DEFAULT                                              0x0
#define DMAC_1_CLEARDSTTRAN_CLEAR                                                (Bit0+Bit1)
#define DMAC_1_CLEARDSTTRAN_CLEAR_MASK                                           (Bit1+Bit0)
#define DMAC_1_CLEARDSTTRAN_CLEAR_SHIFT                                          (0)


#define DMAC_1_CLEARERR                                                          (DMAC_1_BASE + 0x358)
#define DMAC_1_CLEARERR_DEFAULT                                                  0x0
#define DMAC_1_CLEARERR_CLEAR                                                    (Bit0+Bit1)
#define DMAC_1_CLEARERR_CLEAR_MASK                                               (Bit1+Bit0)
#define DMAC_1_CLEARERR_CLEAR_SHIFT                                              (0)


#define DMAC_1_STATUSINT                                                         (DMAC_1_BASE + 0x360)
#define DMAC_1_STATUSINT_DEFAULT                                                 0x0
#define DMAC_1_STATUSINT_TFR                                                     (Bit0)
#define DMAC_1_STATUSINT_BLOCK                                                   (Bit1)
#define DMAC_1_STATUSINT_SRCT                                                    (Bit2)
#define DMAC_1_STATUSINT_DSTT                                                    (Bit3)
#define DMAC_1_STATUSINT_ERR                                                     (Bit4)


#define DMAC_1_REQSRCREG                                                         (DMAC_1_BASE + 0x368)
#define DMAC_1_REQSRCREG_DEFAULT                                                 0x0
#define DMAC_1_REQSRCREG_SRC_REQ                                                 (Bit0+Bit1)
#define DMAC_1_REQSRCREG_SRC_REQ_MASK                                            (Bit1+Bit0)
#define DMAC_1_REQSRCREG_SRC_REQ_SHIFT                                           (0)
#define DMAC_1_REQSRCREG_SRC_REQ_WE                                              (Bit8+Bit9)
#define DMAC_1_REQSRCREG_SRC_REQ_WE_MASK                                         (Bit1+Bit0)
#define DMAC_1_REQSRCREG_SRC_REQ_WE_SHIFT                                        (8)


#define DMAC_1_REQDSTREG                                                         (DMAC_1_BASE + 0x370)
#define DMAC_1_REQDSTREG_DEFAULT                                                 0x0
#define DMAC_1_REQDSTREG_DST_REQ                                                 (Bit0+Bit1)
#define DMAC_1_REQDSTREG_DST_REQ_MASK                                            (Bit1+Bit0)
#define DMAC_1_REQDSTREG_DST_REQ_SHIFT                                           (0)
#define DMAC_1_REQDSTREG_DST_REQ_WE                                              (Bit8+Bit9)
#define DMAC_1_REQDSTREG_DST_REQ_WE_MASK                                         (Bit1+Bit0)
#define DMAC_1_REQDSTREG_DST_REQ_WE_SHIFT                                        (8)


#define DMAC_1_SGLREQSRCREG                                                      (DMAC_1_BASE + 0x378)
#define DMAC_1_SGLREQSRCREG_DEFAULT                                              0x0
#define DMAC_1_SGLREQSRCREG_SRC_SGLREQ                                           (Bit0+Bit1)
#define DMAC_1_SGLREQSRCREG_SRC_SGLREQ_MASK                                      (Bit1+Bit0)
#define DMAC_1_SGLREQSRCREG_SRC_SGLREQ_SHIFT                                     (0)
#define DMAC_1_SGLREQSRCREG_SRC_SGLREQ_WE                                        (Bit8+Bit9)
#define DMAC_1_SGLREQSRCREG_SRC_SGLREQ_WE_MASK                                   (Bit1+Bit0)
#define DMAC_1_SGLREQSRCREG_SRC_SGLREQ_WE_SHIFT                                  (8)


#define DMAC_1_SGLREQDSTREG                                                      (DMAC_1_BASE + 0x380)
#define DMAC_1_SGLREQDSTREG_DEFAULT                                              0x0
#define DMAC_1_SGLREQDSTREG_DST_SGLREQ                                           (Bit0+Bit1)
#define DMAC_1_SGLREQDSTREG_DST_SGLREQ_MASK                                      (Bit1+Bit0)
#define DMAC_1_SGLREQDSTREG_DST_SGLREQ_SHIFT                                     (0)
#define DMAC_1_SGLREQDSTREG_DST_SGLREQ_WE                                        (Bit8+Bit9)
#define DMAC_1_SGLREQDSTREG_DST_SGLREQ_WE_MASK                                   (Bit1+Bit0)
#define DMAC_1_SGLREQDSTREG_DST_SGLREQ_WE_SHIFT                                  (8)


#define DMAC_1_LSTSRCREG                                                         (DMAC_1_BASE + 0x388)
#define DMAC_1_LSTSRCREG_DEFAULT                                                 0x0
#define DMAC_1_LSTSRCREG_LSTSRC                                                  (Bit0+Bit1)
#define DMAC_1_LSTSRCREG_LSTSRC_MASK                                             (Bit1+Bit0)
#define DMAC_1_LSTSRCREG_LSTSRC_SHIFT                                            (0)
#define DMAC_1_LSTSRCREG_LSTSRC_WE                                               (Bit8+Bit9)
#define DMAC_1_LSTSRCREG_LSTSRC_WE_MASK                                          (Bit1+Bit0)
#define DMAC_1_LSTSRCREG_LSTSRC_WE_SHIFT                                         (8)


#define DMAC_1_LSTDSTREG                                                         (DMAC_1_BASE + 0x390)
#define DMAC_1_LSTDSTREG_DEFAULT                                                 0x0
#define DMAC_1_LSTDSTREG_LSTDST                                                  (Bit0+Bit1)
#define DMAC_1_LSTDSTREG_LSTDST_MASK                                             (Bit1+Bit0)
#define DMAC_1_LSTDSTREG_LSTDST_SHIFT                                            (0)
#define DMAC_1_LSTDSTREG_LSTDST_WE                                               (Bit8+Bit9)
#define DMAC_1_LSTDSTREG_LSTDST_WE_MASK                                          (Bit1+Bit0)
#define DMAC_1_LSTDSTREG_LSTDST_WE_SHIFT                                         (8)


#define DMAC_1_DMACFGREG                                                         (DMAC_1_BASE + 0x398)
#define DMAC_1_DMACFGREG_DEFAULT                                                 0x0
#define DMAC_1_DMACFGREG_DMA_EN                                                  (Bit0)


#define DMAC_1_CHENREG                                                           (DMAC_1_BASE + 0x3a0)
#define DMAC_1_CHENREG_DEFAULT                                                   0x0
#define DMAC_1_CHENREG_CH_EN                                                     (Bit0+Bit1)
#define DMAC_1_CHENREG_CH_EN_MASK                                                (Bit1+Bit0)
#define DMAC_1_CHENREG_CH_EN_SHIFT                                               (0)
#define DMAC_1_CHENREG_CH_EN_WE                                                  (Bit8+Bit9)
#define DMAC_1_CHENREG_CH_EN_WE_MASK                                             (Bit1+Bit0)
#define DMAC_1_CHENREG_CH_EN_WE_SHIFT                                            (8)


#define DMAC_1_DMAIDREG                                                          (DMAC_1_BASE + 0x3a8)
#define DMAC_1_DMAIDREG_DEFAULT                                                  0x100
#define DMAC_1_DMAIDREG_DMA_ID                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DMAIDREG_DMA_ID_MASK                                              (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMAIDREG_DMA_ID_SHIFT                                             (0)


#define DMAC_1_DMATESTREG                                                        (DMAC_1_BASE + 0x3b0)
#define DMAC_1_DMATESTREG_DEFAULT                                                0x0
#define DMAC_1_DMATESTREG_TEST_SLV_IF                                            (Bit0)


#define DMAC_1_DMA_COMP_PARAMS_6                                                 (DMAC_1_BASE + 0x3c8)
#define DMAC_1_DMA_COMP_PARAMS_6_DEFAULT                                         0x0
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_DTW                                         (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_DTW_MASK                                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_DTW_SHIFT                                   (0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_STW                                         (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_STW_MASK                                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_STW_SHIFT                                   (3)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_STAT_DST                                    (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_STAT_SRC                                    (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_DST_SCA_EN                                  (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_SRC_GAT_EN                                  (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_LOCK_EN                                     (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_MULTI_BLK_EN                                (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_CTL_WB_EN                                   (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_HC_LLP                                      (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_FC                                          (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_FC_MASK                                     (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_FC_SHIFT                                    (14)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_MAX_MULT_SIZE                               (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_MAX_MULT_SIZE_MASK                          (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_MAX_MULT_SIZE_SHIFT                         (16)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_DMS                                         (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_DMS_MASK                                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_DMS_SHIFT                                   (19)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_LMS                                         (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_LMS_MASK                                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_LMS_SHIFT                                   (22)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_SMS                                         (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_SMS_MASK                                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_SMS_SHIFT                                   (25)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_FIFO_DEPTH                                  (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_FIFO_DEPTH_MASK                             (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_6_CH7_FIFO_DEPTH_SHIFT                            (28)


#define DMAC_1_DMA_COMP_PARAMS_5_LOWER                                           (DMAC_1_BASE + 0x3d0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_DTW                                   (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_DTW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_DTW_SHIFT                             (0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_STW                                   (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_STW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_STW_SHIFT                             (3)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_STAT_DST                              (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_STAT_SRC                              (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_DST_SCA_EN                            (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_SRC_GAT_EN                            (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_LOCK_EN                               (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_MULTI_BLK_EN                          (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_CTL_WB_EN                             (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_HC_LLP                                (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_FC                                    (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_FC_MASK                               (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_FC_SHIFT                              (14)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_MAX_MULT_SIZE                         (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_MAX_MULT_SIZE_MASK                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_MAX_MULT_SIZE_SHIFT                   (16)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_DMS                                   (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_DMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_DMS_SHIFT                             (19)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_LMS                                   (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_LMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_LMS_SHIFT                             (22)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_SMS                                   (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_SMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_SMS_SHIFT                             (25)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_FIFO_DEPTH                            (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_FIFO_DEPTH_MASK                       (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_LOWER_CH6_FIFO_DEPTH_SHIFT                      (28)


#define DMAC_1_DMA_COMP_PARAMS_5_UPPER                                           (DMAC_1_BASE + 0x3d4)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_DTW                                   (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_DTW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_DTW_SHIFT                             (0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_STW                                   (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_STW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_STW_SHIFT                             (3)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_STAT_DST                              (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_STAT_SRC                              (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_H5_DST_SCA_EN                             (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_SRC_GAT_EN                            (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_LOCK_EN                               (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_MULTI_BLK_EN                          (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_CTL_WB_EN                             (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_HC_LLP                                (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_FC                                    (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_FC_MASK                               (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_FC_SHIFT                              (14)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_MAX_MULT_SIZE                         (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_MAX_MULT_SIZE_MASK                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_MAX_MULT_SIZE_SHIFT                   (16)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_DMS                                   (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_DMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_DMS_SHIFT                             (19)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_H5_LMS                                    (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_H5_LMS_MASK                               (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_H5_LMS_SHIFT                              (22)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_SMS                                   (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_SMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_SMS_SHIFT                             (25)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_FIFO_DEPTH                            (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_FIFO_DEPTH_MASK                       (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_5_UPPER_CH5_FIFO_DEPTH_SHIFT                      (28)


#define DMAC_1_DMA_COMP_PARAMS_4_LOWER                                           (DMAC_1_BASE + 0x3d8)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_DTW                                   (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_DTW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_DTW_SHIFT                             (0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_STW                                   (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_STW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_STW_SHIFT                             (3)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_STAT_DST                              (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_STAT_SRC                              (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_DST_SCA_EN                            (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_SRC_GAT_EN                            (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_LOCK_EN                               (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_MULTI_BLK_EN                          (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_CTL_WB_EN                             (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_HC_LLP                                (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_FC                                    (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_FC_MASK                               (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_FC_SHIFT                              (14)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_MAX_MULT_SIZE                         (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_MAX_MULT_SIZE_MASK                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_MAX_MULT_SIZE_SHIFT                   (16)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_DMS                                   (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_DMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_DMS_SHIFT                             (19)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_LMS                                   (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_LMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_LMS_SHIFT                             (22)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_SMS                                   (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_SMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_SMS_SHIFT                             (25)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_FIFO_DEPTH                            (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_FIFO_DEPTH_MASK                       (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_LOWER_CH4_FIFO_DEPTH_SHIFT                      (28)


#define DMAC_1_DMA_COMP_PARAMS_4_UPPER                                           (DMAC_1_BASE + 0x3dc)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_DTW                                   (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_DTW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_DTW_SHIFT                             (0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_STW                                   (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_STW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_STW_SHIFT                             (3)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_STAT_DST                              (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_STAT_SRC                              (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_DST_SCA_EN                            (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_SRC_GAT_EN                            (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_LOCK_EN                               (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_MULTI_BLK_EN                          (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_CTL_WB_EN                             (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_HC_LLP                                (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_FC                                    (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_FC_MASK                               (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_FC_SHIFT                              (14)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_MAX_MULT_SIZE                         (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_MAX_MULT_SIZE_MASK                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_MAX_MULT_SIZE_SHIFT                   (16)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_DMS                                   (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_DMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_DMS_SHIFT                             (19)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_LMS                                   (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_LMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_LMS_SHIFT                             (22)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_SMS                                   (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_SMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_SMS_SHIFT                             (25)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_FIFO_DEPTH                            (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_FIFO_DEPTH_MASK                       (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_4_UPPER_CH3_FIFO_DEPTH_SHIFT                      (28)


#define DMAC_1_DMA_COMP_PARAMS_3_LOWER                                           (DMAC_1_BASE + 0x3e0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_DTW                                   (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_DTW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_DTW_SHIFT                             (0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_STW                                   (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_STW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_STW_SHIFT                             (3)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_STAT_DST                              (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_STAT_SRC                              (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_DST_SCA_EN                            (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_SRC_GAT_EN                            (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_LOCK_EN                               (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_MULTI_BLK_EN                          (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_CTL_WB_EN                             (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_HC_LLP                                (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_FC                                    (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_FC_MASK                               (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_FC_SHIFT                              (14)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_MAX_MULT_SIZE                         (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_MAX_MULT_SIZE_MASK                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_MAX_MULT_SIZE_SHIFT                   (16)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_DMS                                   (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_DMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_DMS_SHIFT                             (19)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_LMS                                   (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_LMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_LMS_SHIFT                             (22)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_SMS                                   (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_SMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_SMS_SHIFT                             (25)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_FIFO_DEPTH                            (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_FIFO_DEPTH_MASK                       (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_LOWER_CH2_FIFO_DEPTH_SHIFT                      (28)


#define DMAC_1_DMA_COMP_PARAMS_3_UPPER                                           (DMAC_1_BASE + 0x3e4)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_DTW                                   (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_DTW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_DTW_SHIFT                             (0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_STW                                   (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_STW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_STW_SHIFT                             (3)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_STAT_DST                              (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_STAT_SRC                              (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_DST_SCA_EN                            (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_SRC_GAT_EN                            (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_LOCK_EN                               (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_MULTI_BLK_EN                          (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_CTL_WB_EN                             (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_HC_LLP                                (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_FC                                    (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_FC_MASK                               (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_FC_SHIFT                              (14)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_MAX_MULT_SIZE                         (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_MAX_MULT_SIZE_MASK                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_MAX_MULT_SIZE_SHIFT                   (16)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_DMS                                   (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_DMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_DMS_SHIFT                             (19)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_LMS                                   (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_LMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_LMS_SHIFT                             (22)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_SMS                                   (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_SMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_SMS_SHIFT                             (25)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_FIFO_DEPTH                            (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_FIFO_DEPTH_MASK                       (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_3_UPPER_CH1_FIFO_DEPTH_SHIFT                      (28)


#define DMAC_1_DMA_COMP_PARAMS_2_LOWER                                           (DMAC_1_BASE + 0x3e8)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_DTW                                   (Bit0+Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_DTW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_DTW_SHIFT                             (0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_STW                                   (Bit3+Bit4+Bit5)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_STW_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_STW_SHIFT                             (3)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_STAT_DST                              (Bit6)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_STAT_SRC                              (Bit7)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_DST_SCA_EN                            (Bit8)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_SRC_GAT_EN                            (Bit9)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_LOCK_EN                               (Bit10)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_MULTI_BLK_EN                          (Bit11)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_CTL_WB_EN                             (Bit12)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_HC_LLP                                (Bit13)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_FC                                    (Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_FC_MASK                               (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_FC_SHIFT                              (14)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_MAX_MULT_SIZE                         (Bit16+Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_MAX_MULT_SIZE_MASK                    (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_MAX_MULT_SIZE_SHIFT                   (16)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_DMS                                   (Bit19+Bit20+Bit21)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_DMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_DMS_SHIFT                             (19)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_LMS                                   (Bit22+Bit23+Bit24)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_LMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_LMS_SHIFT                             (22)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_SMS                                   (Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_SMS_MASK                              (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_SMS_SHIFT                             (25)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_FIFO_DEPTH                            (Bit28+Bit29+Bit30)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_FIFO_DEPTH_MASK                       (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_LOWER_CH0_FIFO_DEPTH_SHIFT                      (28)


#define DMAC_1_DMA_COMP_PARAMS_2_UPPER                                           (DMAC_1_BASE + 0x3ec)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH0_MULTI_BLK_TYPE                        (Bit0+Bit1+Bit2+Bit3)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH0_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH0_MULTI_BLK_TYPE_SHIFT                  (0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH1_MULTI_BLK_TYPE                        (Bit4+Bit5+Bit6+Bit7)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH1_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH1_MULTI_BLK_TYPE_SHIFT                  (4)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH2_MULTI_BLK_TYPE                        (Bit8+Bit9+Bit10+Bit11)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH2_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH2_MULTI_BLK_TYPE_SHIFT                  (8)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH3_MULTI_BLK_TYPE                        (Bit12+Bit13+Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH3_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH3_MULTI_BLK_TYPE_SHIFT                  (12)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH4_MULTI_BLK_TYPE                        (Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH4_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH4_MULTI_BLK_TYPE_SHIFT                  (16)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH5_MULTI_BLK_TYPE                        (Bit20+Bit21+Bit22+Bit23)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH5_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH5_MULTI_BLK_TYPE_SHIFT                  (20)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH6_MULTI_BLK_TYPE                        (Bit24+Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH6_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH6_MULTI_BLK_TYPE_SHIFT                  (24)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH7_MULTI_BLK_TYPE                        (Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH7_MULTI_BLK_TYPE_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_2_UPPER_CH7_MULTI_BLK_TYPE_SHIFT                  (28)


#define DMAC_1_DMA_COMP_PARAMS_1_LOWER                                           (DMAC_1_BASE + 0x3f0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH0_MAX_BLK_SIZE                          (Bit0+Bit1+Bit2+Bit3)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH0_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH0_MAX_BLK_SIZE_SHIFT                    (0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH1_MAX_BLK_SIZE                          (Bit4+Bit5+Bit6+Bit7)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH1_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH1_MAX_BLK_SIZE_SHIFT                    (4)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH2_MAX_BLK_SIZE                          (Bit8+Bit9+Bit10+Bit11)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH2_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH2_MAX_BLK_SIZE_SHIFT                    (8)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH3_MAX_BLK_SIZE                          (Bit12+Bit13+Bit14+Bit15)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH3_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH3_MAX_BLK_SIZE_SHIFT                    (12)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH4_MAX_BLK_SIZE                          (Bit16+Bit17+Bit18+Bit19)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH4_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH4_MAX_BLK_SIZE_SHIFT                    (16)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH5_MAX_BLK_SIZE                          (Bit20+Bit21+Bit22+Bit23)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH5_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH5_MAX_BLK_SIZE_SHIFT                    (20)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH6_MAX_BLK_SIZE                          (Bit24+Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH6_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH6_MAX_BLK_SIZE_SHIFT                    (24)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH7_MAX_BLK_SIZE                          (Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH7_MAX_BLK_SIZE_MASK                     (Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_LOWER_CH7_MAX_BLK_SIZE_SHIFT                    (28)


#define DMAC_1_DMA_COMP_PARAMS_1_UPPER                                           (DMAC_1_BASE + 0x3f4)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_DEFAULT                                   0x0
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_BIG_ENDIAN                                (Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_INTR_IO                                   (Bit1+Bit2)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_INTR_IO_MASK                              (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_INTR_IO_SHIFT                             (1)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_MABRST                                    (Bit3)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_CHANNELS                              (Bit8+Bit9+Bit10)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_CHANNELS_MASK                         (Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_CHANNELS_SHIFT                        (8)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_MASTER_INT                            (Bit11+Bit12)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_MASTER_INT_MASK                       (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_MASTER_INT_SHIFT                      (11)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_S_HDATA_WIDTH                             (Bit13+Bit14)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_S_HDATA_WIDTH_MASK                        (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_S_HDATA_WIDTH_SHIFT                       (13)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M4_HDATA_WIDTH                            (Bit15+Bit16)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M4_HDATA_WIDTH_MASK                       (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M4_HDATA_WIDTH_SHIFT                      (15)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M3_HDATA_WIDTH                            (Bit17+Bit18)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M3_HDATA_WIDTH_MASK                       (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M3_HDATA_WIDTH_SHIFT                      (17)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M2_HDATA_WIDTH                            (Bit19+Bit20)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M2_HDATA_WIDTH_MASK                       (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M2_HDATA_WIDTH_SHIFT                      (19)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M1_HDATA_WIDTH                            (Bit21+Bit22)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M1_HDATA_WIDTH_MASK                       (Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_M1_HDATA_WIDTH_SHIFT                      (21)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_HS_INT                                (Bit23+Bit24+Bit25+Bit26+Bit27)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_HS_INT_MASK                           (Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_NUM_HS_INT_SHIFT                          (23)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_ADD_ENCODED_PARAMS                        (Bit28)
#define DMAC_1_DMA_COMP_PARAMS_1_UPPER_STATIC_ENDIAN_SELECT                      (Bit29)


#define DMAC_1_DMA_COMPONENT_ID_REGISTER_LOWER                                   (DMAC_1_BASE + 0x3f8)
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_LOWER_DEFAULT                           0x44571110
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_LOWER_DMA_COMP_TYPE                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_LOWER_DMA_COMP_TYPE_MASK                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_LOWER_DMA_COMP_TYPE_SHIFT               (0)


#define DMAC_1_DMA_COMPONENT_ID_REGISTER_UPPER                                   (DMAC_1_BASE + 0x3fc)
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_UPPER_DEFAULT                           0x0
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_UPPER_DMA_COMP_VERSION                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_UPPER_DMA_COMP_VERSION_MASK             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define DMAC_1_DMA_COMPONENT_ID_REGISTER_UPPER_DMA_COMP_VERSION_SHIFT            (0)


#endif // _DMAC_1_DEFINES_H

