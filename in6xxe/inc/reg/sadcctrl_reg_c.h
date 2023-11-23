#ifndef _SADCCTRL_REG_DEFINES_H
#define _SADCCTRL_REG_DEFINES_H
/* **************************** */
#define SADCCTRL_REG_INTR_STATUS                                                            (SADCCTRL_REG_BASE + 0x0)
#define SADCCTRL_REG_INTR_STATUS_DEFAULT                                                    0x0
#define SADCCTRL_REG_INTR_STATUS_IRQ                                                        (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SADCCTRL_REG_INTR_STATUS_IRQ_MASK                                                   (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_INTR_STATUS_IRQ_SHIFT                                                  (0)


#define SADCCTRL_REG_INTR_MASK_STATUS                                                       (SADCCTRL_REG_BASE + 0x4)
#define SADCCTRL_REG_INTR_MASK_STATUS_DEFAULT                                               0x0
#define SADCCTRL_REG_INTR_MASK_STATUS_IRQ                                                   (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SADCCTRL_REG_INTR_MASK_STATUS_IRQ_MASK                                              (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_INTR_MASK_STATUS_IRQ_SHIFT                                             (0)


#define SADCCTRL_REG_INTR_CLEAR                                                             (SADCCTRL_REG_BASE + 0x8)
#define SADCCTRL_REG_INTR_CLEAR_DEFAULT                                                     0x0
#define SADCCTRL_REG_INTR_CLEAR_IRQ                                                         (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SADCCTRL_REG_INTR_CLEAR_IRQ_MASK                                                    (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_INTR_CLEAR_IRQ_SHIFT                                                   (0)


#define SADCCTRL_REG_INTR_SET                                                               (SADCCTRL_REG_BASE + 0xc)
#define SADCCTRL_REG_INTR_SET_DEFAULT                                                       0x0
#define SADCCTRL_REG_INTR_SET_IRQ                                                           (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SADCCTRL_REG_INTR_SET_IRQ_MASK                                                      (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_INTR_SET_IRQ_SHIFT                                                     (0)


#define SADCCTRL_REG_INTR_MASK_SET                                                          (SADCCTRL_REG_BASE + 0x10)
#define SADCCTRL_REG_INTR_MASK_SET_DEFAULT                                                  0x0
#define SADCCTRL_REG_INTR_MASK_SET_IRQ                                                      (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SADCCTRL_REG_INTR_MASK_SET_IRQ_MASK                                                 (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_INTR_MASK_SET_IRQ_SHIFT                                                (0)


#define SADCCTRL_REG_INTR_MASK_CLEAR                                                        (SADCCTRL_REG_BASE + 0x14)
#define SADCCTRL_REG_INTR_MASK_CLEAR_DEFAULT                                                0x0
#define SADCCTRL_REG_INTR_MASK_CLEAR_IRQ                                                    (Bit0+Bit1+Bit2+Bit3+Bit4)
#define SADCCTRL_REG_INTR_MASK_CLEAR_IRQ_MASK                                               (Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_INTR_MASK_CLEAR_IRQ_SHIFT                                              (0)


#define SADCCTRL_REG_MISC_CTRL                                                              (SADCCTRL_REG_BASE + 0x40)
#define SADCCTRL_REG_MISC_CTRL_DEFAULT                                                      0x0
#define SADCCTRL_REG_MISC_CTRL_CTL_ENABLE                                                   (Bit0)
#define SADCCTRL_REG_MISC_CTRL_CTL_START                                                    (Bit1)
#define SADCCTRL_REG_MISC_CTRL_CTL_END                                                      (Bit2)
#define SADCCTRL_REG_MISC_CTRL_CTL_RST_INTRCTRL                                             (Bit4)
#define SADCCTRL_REG_MISC_CTRL_CTL_USE_ANA_DATA_VALID                                       (Bit5)
#define SADCCTRL_REG_MISC_CTRL_CTL_ENABLE_ALWAYS_ON                                         (Bit8)
#define SADCCTRL_REG_MISC_CTRL_CTL_NUM_SAMPLES                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_MISC_CTRL_CTL_NUM_SAMPLES_MASK                                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_MISC_CTRL_CTL_NUM_SAMPLES_SHIFT                                        (16)


#define SADCCTRL_REG_CHANNEL_EN_CTRL                                                        (SADCCTRL_REG_BASE + 0x44)
#define SADCCTRL_REG_CHANNEL_EN_CTRL_DEFAULT                                                0x0
#define SADCCTRL_REG_CHANNEL_EN_CTRL_CTL_CH_EN                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define SADCCTRL_REG_CHANNEL_EN_CTRL_CTL_CH_EN_MASK                                         (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CHANNEL_EN_CTRL_CTL_CH_EN_SHIFT                                        (0)
#define SADCCTRL_REG_CHANNEL_EN_CTRL_CTL_SAMPLE_GRP_INTERVAL                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CHANNEL_EN_CTRL_CTL_SAMPLE_GRP_INTERVAL_MASK                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CHANNEL_EN_CTRL_CTL_SAMPLE_GRP_INTERVAL_SHIFT                          (16)
#define SADCCTRL_REG_CHANNEL_EN_CTRL_CTL_DISABLE_BETWEEN_GRP                                (Bit31)


#define SADCCTRL_REG_SAMPLE_TIMING_CTRL                                                     (SADCCTRL_REG_BASE + 0x48)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_DEFAULT                                             0x400F0002
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_EN2START_DELAY                                  (Bit0+Bit1)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_EN2START_DELAY_MASK                             (Bit1+Bit0)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_EN2START_DELAY_SHIFT                            (0)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_CH2START_DLY_M1                                 (Bit4+Bit5)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_CH2START_DLY_M1_MASK                            (Bit1+Bit0)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_CH2START_DLY_M1_SHIFT                           (4)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_CONV_CLK_HLF_DUR                                (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_CONV_CLK_HLF_DUR_MASK                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_CONV_CLK_HLF_DUR_SHIFT                          (16)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_START_TO_CLK_OFFSET                             (Bit24+Bit25+Bit26+Bit27)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_START_TO_CLK_OFFSET_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_START_TO_CLK_OFFSET_SHIFT                       (24)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_IGNORE_RDY_NUM_CLK                              (Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_IGNORE_RDY_NUM_CLK_MASK                         (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_SAMPLE_TIMING_CTRL_CTL_IGNORE_RDY_NUM_CLK_SHIFT                        (28)


#define SADCCTRL_REG_FIFO_CTRL                                                              (SADCCTRL_REG_BASE + 0x4c)
#define SADCCTRL_REG_FIFO_CTRL_DEFAULT                                                      0x10
#define SADCCTRL_REG_FIFO_CTRL_CTL_FIFO_SIZE_M1                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define SADCCTRL_REG_FIFO_CTRL_CTL_FIFO_SIZE_M1_MASK                                        (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FIFO_CTRL_CTL_FIFO_SIZE_M1_SHIFT                                       (0)


#define SADCCTRL_REG_FIFO_ALMOST_FULL_CTRL                                                  (SADCCTRL_REG_BASE + 0x50)
#define SADCCTRL_REG_FIFO_ALMOST_FULL_CTRL_DEFAULT                                          0x5
#define SADCCTRL_REG_FIFO_ALMOST_FULL_CTRL_CTL_FIFO_ALMOST_FULL_WATER_MARK                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define SADCCTRL_REG_FIFO_ALMOST_FULL_CTRL_CTL_FIFO_ALMOST_FULL_WATER_MARK_MASK             (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FIFO_ALMOST_FULL_CTRL_CTL_FIFO_ALMOST_FULL_WATER_MARK_SHIFT            (0)


#define SADCCTRL_REG_STATUS                                                                 (SADCCTRL_REG_BASE + 0x60)
#define SADCCTRL_REG_STATUS_DEFAULT                                                         0x0
#define SADCCTRL_REG_STATUS_STS_CURR_CH                                                     (Bit0+Bit1+Bit2+Bit3)
#define SADCCTRL_REG_STATUS_STS_CURR_CH_MASK                                                (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_STATUS_STS_CURR_CH_SHIFT                                               (0)
#define SADCCTRL_REG_STATUS_STS_FIFO_CNT                                                    (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define SADCCTRL_REG_STATUS_STS_FIFO_CNT_MASK                                               (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_STATUS_STS_FIFO_CNT_SHIFT                                              (4)
#define SADCCTRL_REG_STATUS_STS_MAIN_SM                                                     (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_STATUS_STS_MAIN_SM_MASK                                                (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_STATUS_STS_MAIN_SM_SHIFT                                               (20)
#define SADCCTRL_REG_STATUS_STS_CLKGEN_SM                                                   (Bit24+Bit25+Bit26+Bit27)
#define SADCCTRL_REG_STATUS_STS_CLKGEN_SM_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_STATUS_STS_CLKGEN_SM_SHIFT                                             (24)
#define SADCCTRL_REG_STATUS_STS_FIFO_RDATA_RDY                                              (Bit31)


#define SADCCTRL_REG_STATUS2                                                                (SADCCTRL_REG_BASE + 0x64)
#define SADCCTRL_REG_STATUS2_DEFAULT                                                        0x0
#define SADCCTRL_REG_STATUS2_STS_CURR_GRP_CNT                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define SADCCTRL_REG_STATUS2_STS_CURR_GRP_CNT_MASK                                          (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_STATUS2_STS_CURR_GRP_CNT_SHIFT                                         (0)


#define SADCCTRL_REG_FIFO_VAL                                                               (SADCCTRL_REG_BASE + 0x80)
#define SADCCTRL_REG_FIFO_VAL_DEFAULT                                                       0x0
#define SADCCTRL_REG_FIFO_VAL_STS_FIFO_RDATA                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define SADCCTRL_REG_FIFO_VAL_STS_FIFO_RDATA_MASK                                           (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FIFO_VAL_STS_FIFO_RDATA_SHIFT                                          (0)


#define SADCCTRL_REG_FORCE_CTRL                                                             (SADCCTRL_REG_BASE + 0x90)
#define SADCCTRL_REG_FORCE_CTRL_DEFAULT                                                     0x0
#define SADCCTRL_REG_FORCE_CTRL_CTL_FORCE_EN                                                (Bit0)
#define SADCCTRL_REG_FORCE_CTRL_CTL_FORCE_CH                                                (Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_FORCE_CTRL_CTL_FORCE_CH_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FORCE_CTRL_CTL_FORCE_CH_SHIFT                                          (4)
#define SADCCTRL_REG_FORCE_CTRL_STS_CURR_ADC_DATA_VALID                                     (Bit31)


#define SADCCTRL_REG_FORCE_CTRL_START                                                       (SADCCTRL_REG_BASE + 0x98)
#define SADCCTRL_REG_FORCE_CTRL_START_DEFAULT                                               0x0
#define SADCCTRL_REG_FORCE_CTRL_START_CTL_FORCE_START                                       (Bit0)


#define SADCCTRL_REG_CURR_ADC_VAL                                                           (SADCCTRL_REG_BASE + 0xa0)
#define SADCCTRL_REG_CURR_ADC_VAL_DEFAULT                                                   0x0
#define SADCCTRL_REG_CURR_ADC_VAL_STS_CUR_ADC_VAL                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define SADCCTRL_REG_CURR_ADC_VAL_STS_CUR_ADC_VAL_MASK                                      (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CURR_ADC_VAL_STS_CUR_ADC_VAL_SHIFT                                     (0)
#define SADCCTRL_REG_CURR_ADC_VAL_STS_FORCE_ADC_VAL                                         (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CURR_ADC_VAL_STS_FORCE_ADC_VAL_MASK                                    (Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CURR_ADC_VAL_STS_FORCE_ADC_VAL_SHIFT                                   (16)


#define SADCCTRL_REG_SENSOR_ADC_REG1TO3                                                     (SADCCTRL_REG_BASE + 0xc0)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_DEFAULT                                             0x110
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG1                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG1_MASK                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG1_SHIFT                           (0)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG2                                 (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG2_MASK                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG2_SHIFT                           (8)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG3                                 (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG3_MASK                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG3_SHIFT                           (16)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG4                                 (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG4_MASK                            (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_SENSOR_ADC_REG1TO3_CTL_SENSOR_ADC_REG4_SHIFT                           (24)


#define SADCCTRL_REG_CH0_CTL                                                                (SADCCTRL_REG_BASE + 0x100)
#define SADCCTRL_REG_CH0_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH0_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH0_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH0_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH0_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH0_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH0_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH0_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH0_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH0_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH0_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH0_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH0_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH0_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH1_CTL                                                                (SADCCTRL_REG_BASE + 0x108)
#define SADCCTRL_REG_CH1_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH1_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH1_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH1_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH1_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH1_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH1_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH1_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH1_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH1_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH1_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH1_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH1_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH1_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH2_CTL                                                                (SADCCTRL_REG_BASE + 0x110)
#define SADCCTRL_REG_CH2_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH2_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH2_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH2_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH2_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH2_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH2_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH2_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH2_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH2_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH2_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH2_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH2_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH2_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH3_CTL                                                                (SADCCTRL_REG_BASE + 0x118)
#define SADCCTRL_REG_CH3_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH3_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH3_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH3_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH3_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH3_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH3_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH3_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH3_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH3_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH3_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH3_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH3_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH3_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH4_CTL                                                                (SADCCTRL_REG_BASE + 0x120)
#define SADCCTRL_REG_CH4_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH4_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH4_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH4_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH4_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH4_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH4_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH4_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH4_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH4_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH4_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH4_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH4_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH4_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH5_CTL                                                                (SADCCTRL_REG_BASE + 0x128)
#define SADCCTRL_REG_CH5_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH5_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH5_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH5_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH5_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH5_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH5_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH5_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH5_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH5_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH5_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH5_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH5_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH5_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH6_CTL                                                                (SADCCTRL_REG_BASE + 0x130)
#define SADCCTRL_REG_CH6_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH6_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH6_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH6_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH6_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH6_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH6_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH6_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH6_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH6_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH6_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH6_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH6_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH6_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH7_CTL                                                                (SADCCTRL_REG_BASE + 0x138)
#define SADCCTRL_REG_CH7_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH7_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH7_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH7_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH7_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH7_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH7_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH7_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH7_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH7_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH7_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH7_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH7_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH7_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH8_CTL                                                                (SADCCTRL_REG_BASE + 0x140)
#define SADCCTRL_REG_CH8_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH8_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH8_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH8_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH8_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH8_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH8_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH8_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH8_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH8_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH8_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH8_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH8_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH8_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH9_CTL                                                                (SADCCTRL_REG_BASE + 0x148)
#define SADCCTRL_REG_CH9_CTL_DEFAULT                                                        0xFF21000E
#define SADCCTRL_REG_CH9_CTL_SAMPLE_DLY                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH9_CTL_SAMPLE_DLY_MASK                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH9_CTL_SAMPLE_DLY_SHIFT                                               (0)
#define SADCCTRL_REG_CH9_CTL_USE_SAMPLE_DLY                                                 (Bit8)
#define SADCCTRL_REG_CH9_CTL_CAP_CLK_HLF_DUR                                                (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH9_CTL_CAP_CLK_HLF_DUR_MASK                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH9_CTL_CAP_CLK_HLF_DUR_SHIFT                                          (12)
#define SADCCTRL_REG_CH9_CTL_NUM_CAP_CLK                                                    (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH9_CTL_NUM_CAP_CLK_MASK                                               (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH9_CTL_NUM_CAP_CLK_SHIFT                                              (20)
#define SADCCTRL_REG_CH9_CTL_CLK_SEL_CAP_CONV                                               (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH9_CTL_CLK_SEL_CAP_CONV_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH9_CTL_CLK_SEL_CAP_CONV_SHIFT                                         (24)


#define SADCCTRL_REG_CH10_CTL                                                               (SADCCTRL_REG_BASE + 0x150)
#define SADCCTRL_REG_CH10_CTL_DEFAULT                                                       0xFF21000E
#define SADCCTRL_REG_CH10_CTL_SAMPLE_DLY                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH10_CTL_SAMPLE_DLY_MASK                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH10_CTL_SAMPLE_DLY_SHIFT                                              (0)
#define SADCCTRL_REG_CH10_CTL_USE_SAMPLE_DLY                                                (Bit8)
#define SADCCTRL_REG_CH10_CTL_CAP_CLK_HLF_DUR                                               (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH10_CTL_CAP_CLK_HLF_DUR_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH10_CTL_CAP_CLK_HLF_DUR_SHIFT                                         (12)
#define SADCCTRL_REG_CH10_CTL_NUM_CAP_CLK                                                   (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH10_CTL_NUM_CAP_CLK_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH10_CTL_NUM_CAP_CLK_SHIFT                                             (20)
#define SADCCTRL_REG_CH10_CTL_CLK_SEL_CAP_CONV                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH10_CTL_CLK_SEL_CAP_CONV_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH10_CTL_CLK_SEL_CAP_CONV_SHIFT                                        (24)


#define SADCCTRL_REG_CH11_CTL                                                               (SADCCTRL_REG_BASE + 0x158)
#define SADCCTRL_REG_CH11_CTL_DEFAULT                                                       0xFF21000E
#define SADCCTRL_REG_CH11_CTL_SAMPLE_DLY                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH11_CTL_SAMPLE_DLY_MASK                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH11_CTL_SAMPLE_DLY_SHIFT                                              (0)
#define SADCCTRL_REG_CH11_CTL_USE_SAMPLE_DLY                                                (Bit8)
#define SADCCTRL_REG_CH11_CTL_CAP_CLK_HLF_DUR                                               (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH11_CTL_CAP_CLK_HLF_DUR_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH11_CTL_CAP_CLK_HLF_DUR_SHIFT                                         (12)
#define SADCCTRL_REG_CH11_CTL_NUM_CAP_CLK                                                   (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH11_CTL_NUM_CAP_CLK_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH11_CTL_NUM_CAP_CLK_SHIFT                                             (20)
#define SADCCTRL_REG_CH11_CTL_CLK_SEL_CAP_CONV                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH11_CTL_CLK_SEL_CAP_CONV_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH11_CTL_CLK_SEL_CAP_CONV_SHIFT                                        (24)


#define SADCCTRL_REG_CH12_CTL                                                               (SADCCTRL_REG_BASE + 0x160)
#define SADCCTRL_REG_CH12_CTL_DEFAULT                                                       0xFF21000E
#define SADCCTRL_REG_CH12_CTL_SAMPLE_DLY                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH12_CTL_SAMPLE_DLY_MASK                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH12_CTL_SAMPLE_DLY_SHIFT                                              (0)
#define SADCCTRL_REG_CH12_CTL_USE_SAMPLE_DLY                                                (Bit8)
#define SADCCTRL_REG_CH12_CTL_CAP_CLK_HLF_DUR                                               (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH12_CTL_CAP_CLK_HLF_DUR_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH12_CTL_CAP_CLK_HLF_DUR_SHIFT                                         (12)
#define SADCCTRL_REG_CH12_CTL_NUM_CAP_CLK                                                   (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH12_CTL_NUM_CAP_CLK_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH12_CTL_NUM_CAP_CLK_SHIFT                                             (20)
#define SADCCTRL_REG_CH12_CTL_CLK_SEL_CAP_CONV                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH12_CTL_CLK_SEL_CAP_CONV_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH12_CTL_CLK_SEL_CAP_CONV_SHIFT                                        (24)


#define SADCCTRL_REG_CH13_CTL                                                               (SADCCTRL_REG_BASE + 0x168)
#define SADCCTRL_REG_CH13_CTL_DEFAULT                                                       0xFF21000E
#define SADCCTRL_REG_CH13_CTL_SAMPLE_DLY                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH13_CTL_SAMPLE_DLY_MASK                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH13_CTL_SAMPLE_DLY_SHIFT                                              (0)
#define SADCCTRL_REG_CH13_CTL_USE_SAMPLE_DLY                                                (Bit8)
#define SADCCTRL_REG_CH13_CTL_CAP_CLK_HLF_DUR                                               (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH13_CTL_CAP_CLK_HLF_DUR_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH13_CTL_CAP_CLK_HLF_DUR_SHIFT                                         (12)
#define SADCCTRL_REG_CH13_CTL_NUM_CAP_CLK                                                   (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH13_CTL_NUM_CAP_CLK_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH13_CTL_NUM_CAP_CLK_SHIFT                                             (20)
#define SADCCTRL_REG_CH13_CTL_CLK_SEL_CAP_CONV                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH13_CTL_CLK_SEL_CAP_CONV_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH13_CTL_CLK_SEL_CAP_CONV_SHIFT                                        (24)


#define SADCCTRL_REG_CH14_CTL                                                               (SADCCTRL_REG_BASE + 0x170)
#define SADCCTRL_REG_CH14_CTL_DEFAULT                                                       0xFF21000E
#define SADCCTRL_REG_CH14_CTL_SAMPLE_DLY                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH14_CTL_SAMPLE_DLY_MASK                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH14_CTL_SAMPLE_DLY_SHIFT                                              (0)
#define SADCCTRL_REG_CH14_CTL_USE_SAMPLE_DLY                                                (Bit8)
#define SADCCTRL_REG_CH14_CTL_CAP_CLK_HLF_DUR                                               (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH14_CTL_CAP_CLK_HLF_DUR_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH14_CTL_CAP_CLK_HLF_DUR_SHIFT                                         (12)
#define SADCCTRL_REG_CH14_CTL_NUM_CAP_CLK                                                   (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH14_CTL_NUM_CAP_CLK_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH14_CTL_NUM_CAP_CLK_SHIFT                                             (20)
#define SADCCTRL_REG_CH14_CTL_CLK_SEL_CAP_CONV                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH14_CTL_CLK_SEL_CAP_CONV_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH14_CTL_CLK_SEL_CAP_CONV_SHIFT                                        (24)


#define SADCCTRL_REG_CH15_CTL                                                               (SADCCTRL_REG_BASE + 0x178)
#define SADCCTRL_REG_CH15_CTL_DEFAULT                                                       0xFF21000E
#define SADCCTRL_REG_CH15_CTL_SAMPLE_DLY                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_CH15_CTL_SAMPLE_DLY_MASK                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH15_CTL_SAMPLE_DLY_SHIFT                                              (0)
#define SADCCTRL_REG_CH15_CTL_USE_SAMPLE_DLY                                                (Bit8)
#define SADCCTRL_REG_CH15_CTL_CAP_CLK_HLF_DUR                                               (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_CH15_CTL_CAP_CLK_HLF_DUR_MASK                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH15_CTL_CAP_CLK_HLF_DUR_SHIFT                                         (12)
#define SADCCTRL_REG_CH15_CTL_NUM_CAP_CLK                                                   (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_CH15_CTL_NUM_CAP_CLK_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH15_CTL_NUM_CAP_CLK_SHIFT                                             (20)
#define SADCCTRL_REG_CH15_CTL_CLK_SEL_CAP_CONV                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_CH15_CTL_CLK_SEL_CAP_CONV_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_CH15_CTL_CLK_SEL_CAP_CONV_SHIFT                                        (24)


#define SADCCTRL_REG_FORCE_TIMING_CTL                                                       (SADCCTRL_REG_BASE + 0x190)
#define SADCCTRL_REG_FORCE_TIMING_CTL_DEFAULT                                               0xFF21000E
#define SADCCTRL_REG_FORCE_TIMING_CTL_SAMPLE_DLY                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define SADCCTRL_REG_FORCE_TIMING_CTL_SAMPLE_DLY_MASK                                       (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FORCE_TIMING_CTL_SAMPLE_DLY_SHIFT                                      (0)
#define SADCCTRL_REG_FORCE_TIMING_CTL_USE_SAMPLE_DLY                                        (Bit8)
#define SADCCTRL_REG_FORCE_TIMING_CTL_CAP_CLK_HLF_DUR                                       (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define SADCCTRL_REG_FORCE_TIMING_CTL_CAP_CLK_HLF_DUR_MASK                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FORCE_TIMING_CTL_CAP_CLK_HLF_DUR_SHIFT                                 (12)
#define SADCCTRL_REG_FORCE_TIMING_CTL_NUM_CAP_CLK                                           (Bit20+Bit21+Bit22+Bit23)
#define SADCCTRL_REG_FORCE_TIMING_CTL_NUM_CAP_CLK_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FORCE_TIMING_CTL_NUM_CAP_CLK_SHIFT                                     (20)
#define SADCCTRL_REG_FORCE_TIMING_CTL_CLK_SEL_CAP_CONV                                      (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define SADCCTRL_REG_FORCE_TIMING_CTL_CLK_SEL_CAP_CONV_MASK                                 (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define SADCCTRL_REG_FORCE_TIMING_CTL_CLK_SEL_CAP_CONV_SHIFT                                (24)


#endif // _SADCCTRL_REG_DEFINES_H

