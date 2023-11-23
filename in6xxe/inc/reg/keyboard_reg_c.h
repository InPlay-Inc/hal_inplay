#ifndef _KEYBOARD_REG_DEFINES_H
#define _KEYBOARD_REG_DEFINES_H
/* **************************** */
#define KEYBOARD_REG_INTR_STATUS                                                          (KEYBOARD_REG_BASE + 0x0)
#define KEYBOARD_REG_INTR_STATUS_DEFAULT                                                  0x0
#define KEYBOARD_REG_INTR_STATUS_KEY_SCAN_DONE                                            (Bit0)
#define KEYBOARD_REG_INTR_STATUS_KEY_UPDATE                                               (Bit1)
#define KEYBOARD_REG_INTR_STATUS_TOO_MANY_KEYS                                            (Bit2)
#define KEYBOARD_REG_INTR_STATUS_PAUSE                                                    (Bit3)


#define KEYBOARD_REG_INTR_MASK_STATUS                                                     (KEYBOARD_REG_BASE + 0x4)
#define KEYBOARD_REG_INTR_MASK_STATUS_DEFAULT                                             0x0
#define KEYBOARD_REG_INTR_MASK_STATUS_KEY_SCAN_DONE                                       (Bit0)
#define KEYBOARD_REG_INTR_MASK_STATUS_KEY_UPDATE                                          (Bit1)
#define KEYBOARD_REG_INTR_MASK_STATUS_TOO_MANY_KEYS                                       (Bit2)
#define KEYBOARD_REG_INTR_MASK_STATUS_PAUSE                                               (Bit3)


#define KEYBOARD_REG_INTR_CLEAR                                                           (KEYBOARD_REG_BASE + 0x8)
#define KEYBOARD_REG_INTR_CLEAR_DEFAULT                                                   0x0
#define KEYBOARD_REG_INTR_CLEAR_KEY_SCAN_DONE                                             (Bit0)
#define KEYBOARD_REG_INTR_CLEAR_KEY_UPDATE                                                (Bit1)
#define KEYBOARD_REG_INTR_CLEAR_TOO_MANY_KEYS                                             (Bit2)
#define KEYBOARD_REG_INTR_CLEAR_PAUSE                                                     (Bit3)


#define KEYBOARD_REG_INTR_SET                                                             (KEYBOARD_REG_BASE + 0xc)
#define KEYBOARD_REG_INTR_SET_DEFAULT                                                     0x0
#define KEYBOARD_REG_INTR_SET_KEY_SCAN_DONE                                               (Bit0)
#define KEYBOARD_REG_INTR_SET_KEY_UPDATE                                                  (Bit1)
#define KEYBOARD_REG_INTR_SET_TOO_MANY_KEYS                                               (Bit2)
#define KEYBOARD_REG_INTR_SET_PAUSE                                                       (Bit3)


#define KEYBOARD_REG_INTR_MASK_SET                                                        (KEYBOARD_REG_BASE + 0x10)
#define KEYBOARD_REG_INTR_MASK_SET_DEFAULT                                                0x0
#define KEYBOARD_REG_INTR_MASK_SET_KEY_SCAN_DONE                                          (Bit0)
#define KEYBOARD_REG_INTR_MASK_SET_KEY_UPDATE                                             (Bit1)
#define KEYBOARD_REG_INTR_MASK_SET_TOO_MANY_KEYS                                          (Bit2)
#define KEYBOARD_REG_INTR_MASK_SET_PAUSE                                                  (Bit3)


#define KEYBOARD_REG_INTR_MASK_CLEAR                                                      (KEYBOARD_REG_BASE + 0x14)
#define KEYBOARD_REG_INTR_MASK_CLEAR_DEFAULT                                              0x0
#define KEYBOARD_REG_INTR_MASK_CLEAR_KEY_SCAN_DONE                                        (Bit0)
#define KEYBOARD_REG_INTR_MASK_CLEAR_KEY_UPDATE                                           (Bit1)
#define KEYBOARD_REG_INTR_MASK_CLEAR_TOO_MANY_KEYS                                        (Bit2)
#define KEYBOARD_REG_INTR_MASK_CLEAR_PAUSE                                                (Bit3)


#define KEYBOARD_REG_MISC_CTRL                                                            (KEYBOARD_REG_BASE + 0x40)
#define KEYBOARD_REG_MISC_CTRL_DEFAULT                                                    0x404530
#define KEYBOARD_REG_MISC_CTRL_CTL_ENABLE                                                 (Bit0)
#define KEYBOARD_REG_MISC_CTRL_CTL_RST_INTR_CTRL                                          (Bit1)
#define KEYBOARD_REG_MISC_CTRL_CTL_PAUSE                                                  (Bit2)
#define KEYBOARD_REG_MISC_CTRL_CTL_COL_OUTPUT_INV                                         (Bit3)
#define KEYBOARD_REG_MISC_CTRL_CTL_WAIT_KEY_PRESS_BETWEEN_SCAN                            (Bit4)
#define KEYBOARD_REG_MISC_CTRL_CTL_COL_OUTPUT_ALWAYS_EN                                   (Bit5)
#define KEYBOARD_REG_MISC_CTRL_CTL_MAX_NUM_KEY_PRESSED                                    (Bit8+Bit9+Bit10+Bit11)
#define KEYBOARD_REG_MISC_CTRL_CTL_MAX_NUM_KEY_PRESSED_MASK                               (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MISC_CTRL_CTL_MAX_NUM_KEY_PRESSED_SHIFT                              (8)
#define KEYBOARD_REG_MISC_CTRL_CTL_NUM_COL                                                (Bit12+Bit13+Bit14+Bit15+Bit16)
#define KEYBOARD_REG_MISC_CTRL_CTL_NUM_COL_MASK                                           (Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MISC_CTRL_CTL_NUM_COL_SHIFT                                          (12)
#define KEYBOARD_REG_MISC_CTRL_CTL_NUM_ROW                                                (Bit20+Bit21+Bit22+Bit23+Bit24)
#define KEYBOARD_REG_MISC_CTRL_CTL_NUM_ROW_MASK                                           (Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MISC_CTRL_CTL_NUM_ROW_SHIFT                                          (20)


#define KEYBOARD_REG_COL_ROW_MASK                                                         (KEYBOARD_REG_BASE + 0x50)
#define KEYBOARD_REG_COL_ROW_MASK_DEFAULT                                                 0x40000
#define KEYBOARD_REG_COL_ROW_MASK_CTL_KEYBOARD_COL_MASK                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define KEYBOARD_REG_COL_ROW_MASK_CTL_KEYBOARD_COL_MASK_MASK                              (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_COL_ROW_MASK_CTL_KEYBOARD_COL_MASK_SHIFT                             (0)
#define KEYBOARD_REG_COL_ROW_MASK_CTL_KEYBOARD_ROW_MASK                                   (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define KEYBOARD_REG_COL_ROW_MASK_CTL_KEYBOARD_ROW_MASK_MASK                              (Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_COL_ROW_MASK_CTL_KEYBOARD_ROW_MASK_SHIFT                             (16)


#define KEYBOARD_REG_SCAN_TIMING_CONTROL                                                  (KEYBOARD_REG_BASE + 0x58)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_DEFAULT                                          0x200A04
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_US_CNT_LMT                                   (Bit0+Bit1+Bit2+Bit3+Bit4)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_US_CNT_LMT_MASK                              (Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_US_CNT_LMT_SHIFT                             (0)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_COL_OUTPUT_CNT_LMT                           (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_COL_OUTPUT_CNT_LMT_MASK                      (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_COL_OUTPUT_CNT_LMT_SHIFT                     (8)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_DEGLITCH_CNT_LMT                             (Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_DEGLITCH_CNT_LMT_MASK                        (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_SCAN_TIMING_CONTROL_CTL_DEGLITCH_CNT_LMT_SHIFT                       (20)


#define KEYBOARD_REG_SCAN_INTERVAL                                                        (KEYBOARD_REG_BASE + 0x60)
#define KEYBOARD_REG_SCAN_INTERVAL_DEFAULT                                                0x0
#define KEYBOARD_REG_SCAN_INTERVAL_CTL_SCAN_INTERVAL                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define KEYBOARD_REG_SCAN_INTERVAL_CTL_SCAN_INTERVAL_MASK                                 (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_SCAN_INTERVAL_CTL_SCAN_INTERVAL_SHIFT                                (0)


#define KEYBOARD_REG_MANUAL_START                                                         (KEYBOARD_REG_BASE + 0x68)
#define KEYBOARD_REG_MANUAL_START_DEFAULT                                                 0x2
#define KEYBOARD_REG_MANUAL_START_CTL_MANUAL_START                                        (Bit0)
#define KEYBOARD_REG_MANUAL_START_CTL_MANUAL_SET_PREV_KEY                                 (Bit1)
#define KEYBOARD_REG_MANUAL_START_CTL_MANUAL_PREV_NUM_KEY                                 (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_MANUAL_START_CTL_MANUAL_PREV_NUM_KEY_MASK                            (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_START_CTL_MANUAL_PREV_NUM_KEY_SHIFT                           (4)


#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3                                                (KEYBOARD_REG_BASE + 0x6c)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_DEFAULT                                        0x10101000
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_0                  (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_0_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_0_SHIFT            (0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_0                  (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_0_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_0_SHIFT            (4)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_1                  (Bit8+Bit9+Bit10+Bit11)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_1_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_1_SHIFT            (8)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_1                  (Bit12+Bit13+Bit14+Bit15)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_1_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_1_SHIFT            (12)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_2                  (Bit16+Bit17+Bit18+Bit19)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_2_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_2_SHIFT            (16)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_2                  (Bit20+Bit21+Bit22+Bit23)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_2_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_2_SHIFT            (20)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_3                  (Bit24+Bit25+Bit26+Bit27)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_3_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_COL_IDX_3_SHIFT            (24)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_3                  (Bit28+Bit29+Bit30+Bit31)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_3_MASK             (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_0TO3_CTL_MANUAL_PREV_KEY_ROW_IDX_3_SHIFT            (28)


#define KEYBOARD_REG_MANUAL_KEY_PRESS_45                                                  (KEYBOARD_REG_BASE + 0x70)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_DEFAULT                                          0x1000
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_COL_IDX_4                    (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_COL_IDX_4_MASK               (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_COL_IDX_4_SHIFT              (0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_ROW_IDX_4                    (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_ROW_IDX_4_MASK               (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_ROW_IDX_4_SHIFT              (4)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_COL_IDX_5                    (Bit8+Bit9+Bit10+Bit11)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_COL_IDX_5_MASK               (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_COL_IDX_5_SHIFT              (8)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_ROW_IDX_5                    (Bit12+Bit13+Bit14+Bit15)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_ROW_IDX_5_MASK               (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_MANUAL_KEY_PRESS_45_CTL_MANUAL_PREV_KEY_ROW_IDX_5_SHIFT              (12)


#define KEYBOARD_REG_NUM_KEY_PRESS                                                        (KEYBOARD_REG_BASE + 0x80)
#define KEYBOARD_REG_NUM_KEY_PRESS_DEFAULT                                                0x0
#define KEYBOARD_REG_NUM_KEY_PRESS_STS_CURR_NUM_KEY                                       (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_NUM_KEY_PRESS_STS_CURR_NUM_KEY_MASK                                  (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_NUM_KEY_PRESS_STS_CURR_NUM_KEY_SHIFT                                 (0)
#define KEYBOARD_REG_NUM_KEY_PRESS_STS_PREV_NUM_KEY                                       (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_NUM_KEY_PRESS_STS_PREV_NUM_KEY_MASK                                  (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_NUM_KEY_PRESS_STS_PREV_NUM_KEY_SHIFT                                 (4)


#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3                                               (KEYBOARD_REG_BASE + 0x88)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_DEFAULT                                       0x10101000
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_0                        (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_0_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_0_SHIFT                  (0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_0                        (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_0_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_0_SHIFT                  (4)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_1                        (Bit8+Bit9+Bit10+Bit11)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_1_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_1_SHIFT                  (8)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_1                        (Bit12+Bit13+Bit14+Bit15)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_1_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_1_SHIFT                  (12)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_2                        (Bit16+Bit17+Bit18+Bit19)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_2_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_2_SHIFT                  (16)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_2                        (Bit20+Bit21+Bit22+Bit23)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_2_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_2_SHIFT                  (20)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_3                        (Bit24+Bit25+Bit26+Bit27)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_3_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_COL_IDX_3_SHIFT                  (24)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_3                        (Bit28+Bit29+Bit30+Bit31)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_3_MASK                   (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURRENT_KEY_PRESS_0TO3_STS_CURR_KEY_ROW_IDX_3_SHIFT                  (28)


#define KEYBOARD_REG_CURR_KEY_PRESS_45                                                    (KEYBOARD_REG_BASE + 0x8c)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_DEFAULT                                            0x1000
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_COL_IDX_4                             (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_COL_IDX_4_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_COL_IDX_4_SHIFT                       (0)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_ROW_IDX_4                             (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_ROW_IDX_4_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_ROW_IDX_4_SHIFT                       (4)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_COL_IDX_5                             (Bit8+Bit9+Bit10+Bit11)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_COL_IDX_5_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_COL_IDX_5_SHIFT                       (8)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_ROW_IDX_5                             (Bit12+Bit13+Bit14+Bit15)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_ROW_IDX_5_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_CURR_KEY_PRESS_45_STS_CURR_KEY_ROW_IDX_5_SHIFT                       (12)


#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3                                                  (KEYBOARD_REG_BASE + 0x90)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_DEFAULT                                          0x10101000
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_0                           (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_0_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_0_SHIFT                     (0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_0                           (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_0_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_0_SHIFT                     (4)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_1                           (Bit8+Bit9+Bit10+Bit11)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_1_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_1_SHIFT                     (8)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_1                           (Bit12+Bit13+Bit14+Bit15)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_1_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_1_SHIFT                     (12)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_2                           (Bit16+Bit17+Bit18+Bit19)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_2_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_2_SHIFT                     (16)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_2                           (Bit20+Bit21+Bit22+Bit23)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_2_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_2_SHIFT                     (20)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_3                           (Bit24+Bit25+Bit26+Bit27)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_3_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_COL_IDX_3_SHIFT                     (24)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_3                           (Bit28+Bit29+Bit30+Bit31)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_3_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_0TO3_STS_PREV_KEY_ROW_IDX_3_SHIFT                     (28)


#define KEYBOARD_REG_PREV_KEY_PRESS_45                                                    (KEYBOARD_REG_BASE + 0x94)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_DEFAULT                                            0x1000
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_COL_IDX_4                             (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_COL_IDX_4_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_COL_IDX_4_SHIFT                       (0)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_ROW_IDX_4                             (Bit4+Bit5+Bit6+Bit7)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_ROW_IDX_4_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_ROW_IDX_4_SHIFT                       (4)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_COL_IDX_5                             (Bit8+Bit9+Bit10+Bit11)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_COL_IDX_5_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_COL_IDX_5_SHIFT                       (8)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_ROW_IDX_5                             (Bit12+Bit13+Bit14+Bit15)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_ROW_IDX_5_MASK                        (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_PREV_KEY_PRESS_45_STS_PREV_KEY_ROW_IDX_5_SHIFT                       (12)


#define KEYBOARD_REG_STATUS                                                               (KEYBOARD_REG_BASE + 0xc0)
#define KEYBOARD_REG_STATUS_DEFAULT                                                       0x0
#define KEYBOARD_REG_STATUS_STS_CURR_ST                                                   (Bit0+Bit1+Bit2+Bit3)
#define KEYBOARD_REG_STATUS_STS_CURR_ST_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define KEYBOARD_REG_STATUS_STS_CURR_ST_SHIFT                                             (0)
#define KEYBOARD_REG_STATUS_STS_SCAN_DONE                                                 (Bit4)
#define KEYBOARD_REG_STATUS_STS_CHANGE_DETECTED                                           (Bit5)
#define KEYBOARD_REG_STATUS_STS_TOO_MANY_KEY_PRESSED                                      (Bit6)
#define KEYBOARD_REG_STATUS_STS_PAUSED                                                    (Bit7)


#endif // _KEYBOARD_REG_DEFINES_H

