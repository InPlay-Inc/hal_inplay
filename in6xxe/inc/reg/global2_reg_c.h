#ifndef _GLOBAL2_REG_DEFINES_H
#define _GLOBAL2_REG_DEFINES_H
/* **************************** */
#define GLOBAL2_REG_GPIO_LE_CTRL                                                                                        (GLOBAL2_REG_BASE + 0x10)
#define GLOBAL2_REG_GPIO_LE_CTRL_DEFAULT                                                                                0x0
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_0_LE                                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_0_LE_MASK                                                                     (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_0_LE_SHIFT                                                                    (0)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_1_LE                                                                          (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_1_LE_MASK                                                                     (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_1_LE_SHIFT                                                                    (9)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_2_LE                                                                          (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_2_LE_MASK                                                                     (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_CTRL_CTL_GPIO_2_LE_SHIFT                                                                    (19)


#define GLOBAL2_REG_GPIO_LE_STS                                                                                         (GLOBAL2_REG_BASE + 0x14)
#define GLOBAL2_REG_GPIO_LE_STS_DEFAULT                                                                                 0x0
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_0_LE                                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_0_LE_MASK                                                                      (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_0_LE_SHIFT                                                                     (0)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_1_LE                                                                           (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_1_LE_MASK                                                                      (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_1_LE_SHIFT                                                                     (9)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_2_LE                                                                           (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_2_LE_MASK                                                                      (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_STS_STS_GPIO_2_LE_SHIFT                                                                     (19)


#define GLOBAL2_REG_GPIO_LE_CTRL_2                                                                                      (GLOBAL2_REG_BASE + 0x18)
#define GLOBAL2_REG_GPIO_LE_CTRL_2_DEFAULT                                                                              0x0
#define GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_3_LE                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_3_LE_MASK                                                                   (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_3_LE_SHIFT                                                                  (0)
#define GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_4_LE                                                                        (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_4_LE_MASK                                                                   (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_CTRL_2_CTL_GPIO_4_LE_SHIFT                                                                  (6)


#define GLOBAL2_REG_GPIO_LE_STS_2                                                                                       (GLOBAL2_REG_BASE + 0x1c)
#define GLOBAL2_REG_GPIO_LE_STS_2_DEFAULT                                                                               0x0
#define GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_3_LE                                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_3_LE_MASK                                                                    (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_3_LE_SHIFT                                                                   (0)
#define GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_4_LE                                                                         (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_4_LE_MASK                                                                    (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_LE_STS_2_STS_GPIO_4_LE_SHIFT                                                                   (6)


#define GLOBAL2_REG_GPIO_MASKB_CTRL                                                                                     (GLOBAL2_REG_BASE + 0x20)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_DEFAULT                                                                             0x0
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_0_MASKB                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_0_MASKB_MASK                                                               (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_0_MASKB_SHIFT                                                              (0)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_1_MASKB                                                                    (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_1_MASKB_MASK                                                               (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_1_MASKB_SHIFT                                                              (9)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_2_MASKB                                                                    (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_2_MASKB_MASK                                                               (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_CTL_GPIO_2_MASKB_SHIFT                                                              (19)


#define GLOBAL2_REG_GPIO_MASKB_STS                                                                                      (GLOBAL2_REG_BASE + 0x24)
#define GLOBAL2_REG_GPIO_MASKB_STS_DEFAULT                                                                              0x0
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_0_MASKB                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_0_MASKB_MASK                                                                (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_0_MASKB_SHIFT                                                               (0)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_1_MASKB                                                                     (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_1_MASKB_MASK                                                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_1_MASKB_SHIFT                                                               (9)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_2_MASKB                                                                     (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_2_MASKB_MASK                                                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_STS_STS_GPIO_2_MASKB_SHIFT                                                               (19)


#define GLOBAL2_REG_GPIO_MASKB_CTRL_2                                                                                   (GLOBAL2_REG_BASE + 0x28)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_2_DEFAULT                                                                           0x0
#define GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_3_MASKB                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_3_MASKB_MASK                                                             (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_3_MASKB_SHIFT                                                            (0)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_4_MASKB                                                                  (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_4_MASKB_MASK                                                             (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_CTRL_2_CTL_GPIO_4_MASKB_SHIFT                                                            (6)


#define GLOBAL2_REG_GPIO_MASKB_STS_2                                                                                    (GLOBAL2_REG_BASE + 0x2c)
#define GLOBAL2_REG_GPIO_MASKB_STS_2_DEFAULT                                                                            0x0
#define GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_3_MASKB                                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_3_MASKB_MASK                                                              (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_3_MASKB_SHIFT                                                             (0)
#define GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_4_MASKB                                                                   (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_4_MASKB_MASK                                                              (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_MASKB_STS_2_STS_GPIO_4_MASKB_SHIFT                                                             (6)


#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL                                                                               (GLOBAL2_REG_BASE + 0x30)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_DEFAULT                                                                       0x0
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_0_WAKEUP_MASK                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_0_WAKEUP_MASK_MASK                                                   (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_0_WAKEUP_MASK_SHIFT                                                  (0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_1_WAKEUP_MASK                                                        (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_1_WAKEUP_MASK_MASK                                                   (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_1_WAKEUP_MASK_SHIFT                                                  (9)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_2_WAKEUP_MASK                                                        (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_2_WAKEUP_MASK_MASK                                                   (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_CTL_GPIO_2_WAKEUP_MASK_SHIFT                                                  (19)


#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS                                                                                (GLOBAL2_REG_BASE + 0x34)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_DEFAULT                                                                        0x0
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_0_WAKEUP_MASK                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_0_WAKEUP_MASK_MASK                                                    (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_0_WAKEUP_MASK_SHIFT                                                   (0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_1_WAKEUP_MASK                                                         (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_1_WAKEUP_MASK_MASK                                                    (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_1_WAKEUP_MASK_SHIFT                                                   (9)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_2_WAKEUP_MASK                                                         (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_2_WAKEUP_MASK_MASK                                                    (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_STS_GPIO_2_WAKEUP_MASK_SHIFT                                                   (19)


#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2                                                                             (GLOBAL2_REG_BASE + 0x38)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_DEFAULT                                                                     0x0
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_3_WAKEUP_MASK                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_3_WAKEUP_MASK_MASK                                                 (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_3_WAKEUP_MASK_SHIFT                                                (0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_4_WAKEUP_MASK                                                      (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_4_WAKEUP_MASK_MASK                                                 (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_CTRL_2_CTL_GPIO_4_WAKEUP_MASK_SHIFT                                                (6)


#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2                                                                              (GLOBAL2_REG_BASE + 0x3c)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_DEFAULT                                                                      0x0
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_3_WAKEUP_MASK                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_3_WAKEUP_MASK_MASK                                                  (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_3_WAKEUP_MASK_SHIFT                                                 (0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_4_WAKEUP_MASK                                                       (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_4_WAKEUP_MASK_MASK                                                  (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_MASK_STS_2_STS_GPIO_4_WAKEUP_MASK_SHIFT                                                 (6)


#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL                                                                           (GLOBAL2_REG_BASE + 0x40)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_DEFAULT                                                                   0x0
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_0_WAKEUP_POLARITY                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_0_WAKEUP_POLARITY_MASK                                           (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_0_WAKEUP_POLARITY_SHIFT                                          (0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_1_WAKEUP_POLARITY                                                (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_1_WAKEUP_POLARITY_MASK                                           (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_1_WAKEUP_POLARITY_SHIFT                                          (9)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_2_WAKEUP_POLARITY                                                (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_2_WAKEUP_POLARITY_MASK                                           (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_CTL_GPIO_2_WAKEUP_POLARITY_SHIFT                                          (19)


#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS                                                                            (GLOBAL2_REG_BASE + 0x44)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_DEFAULT                                                                    0x0
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_0_WAKEUP_POLARITY                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_0_WAKEUP_POLARITY_MASK                                            (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_0_WAKEUP_POLARITY_SHIFT                                           (0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_1_WAKEUP_POLARITY                                                 (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_1_WAKEUP_POLARITY_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_1_WAKEUP_POLARITY_SHIFT                                           (9)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_2_WAKEUP_POLARITY                                                 (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_2_WAKEUP_POLARITY_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_STS_GPIO_2_WAKEUP_POLARITY_SHIFT                                           (19)


#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2                                                                         (GLOBAL2_REG_BASE + 0x48)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_DEFAULT                                                                 0x0
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_3_WAKEUP_POLARITY                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_3_WAKEUP_POLARITY_MASK                                         (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_3_WAKEUP_POLARITY_SHIFT                                        (0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_4_WAKEUP_POLARITY                                              (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_4_WAKEUP_POLARITY_MASK                                         (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_CTRL_2_CTL_GPIO_4_WAKEUP_POLARITY_SHIFT                                        (6)


#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2                                                                          (GLOBAL2_REG_BASE + 0x4c)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_DEFAULT                                                                  0x0
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_3_WAKEUP_POLARITY                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_3_WAKEUP_POLARITY_MASK                                          (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_3_WAKEUP_POLARITY_SHIFT                                         (0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_4_WAKEUP_POLARITY                                               (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_4_WAKEUP_POLARITY_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_WAKEUP_POLARITY_STS_2_STS_GPIO_4_WAKEUP_POLARITY_SHIFT                                         (6)


#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR                                                                                (GLOBAL2_REG_BASE + 0x50)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_DEFAULT                                                                        0x0
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_0_EDGE_MANUAL_CLR                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_0_EDGE_MANUAL_CLR_MASK                                                (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_0_EDGE_MANUAL_CLR_SHIFT                                               (0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_1_EDGE_MANUAL_CLR                                                     (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_1_EDGE_MANUAL_CLR_MASK                                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_1_EDGE_MANUAL_CLR_SHIFT                                               (9)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_2_EDGE_MANUAL_CLR                                                     (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_2_EDGE_MANUAL_CLR_MASK                                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_CTL_GPIO_2_EDGE_MANUAL_CLR_SHIFT                                               (19)


#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS                                                                            (GLOBAL2_REG_BASE + 0x54)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_DEFAULT                                                                    0x0
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_0_EDGE_MANUAL_CLR                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_0_EDGE_MANUAL_CLR_MASK                                            (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_0_EDGE_MANUAL_CLR_SHIFT                                           (0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_1_EDGE_MANUAL_CLR                                                 (Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_1_EDGE_MANUAL_CLR_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_1_EDGE_MANUAL_CLR_SHIFT                                           (9)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_2_EDGE_MANUAL_CLR                                                 (Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_2_EDGE_MANUAL_CLR_MASK                                            (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_STS_GPIO_2_EDGE_MANUAL_CLR_SHIFT                                           (19)


#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2                                                                              (GLOBAL2_REG_BASE + 0x58)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_DEFAULT                                                                      0x0
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_3_EDGE_MANUAL_CLR                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_3_EDGE_MANUAL_CLR_MASK                                              (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_3_EDGE_MANUAL_CLR_SHIFT                                             (0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_4_EDGE_MANUAL_CLR                                                   (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_4_EDGE_MANUAL_CLR_MASK                                              (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_2_CTL_GPIO_4_EDGE_MANUAL_CLR_SHIFT                                             (6)


#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2                                                                          (GLOBAL2_REG_BASE + 0x5c)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_DEFAULT                                                                  0x0
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_3_EDGE_MANUAL_CLR                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_3_EDGE_MANUAL_CLR_MASK                                          (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_3_EDGE_MANUAL_CLR_SHIFT                                         (0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_4_EDGE_MANUAL_CLR                                               (Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_4_EDGE_MANUAL_CLR_MASK                                          (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_GPIO_EDGE_MANUAL_CLR_STS_2_STS_GPIO_4_EDGE_MANUAL_CLR_SHIFT                                         (6)


#define GLOBAL2_REG_AON_TIMER_0_CTL                                                                                     (GLOBAL2_REG_BASE + 0x80)
#define GLOBAL2_REG_AON_TIMER_0_CTL_DEFAULT                                                                             0x80
#define GLOBAL2_REG_AON_TIMER_0_CTL_CTL_AON_TIMER_0_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_0_CTL_CTL_AON_TIMER_0_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_0_CTL_CTL_AON_TIMER_0_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_0_CTL_CTL_AON_TIMER_0_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_0_CTL_CTL_AON_TIMER_0_MANUAL_TICK                                                         (Bit4)
#define GLOBAL2_REG_AON_TIMER_0_CTL_CTL_AON_TIMER_0_CTRL_SYNC_32K_RST_N                                                 (Bit7)


#define GLOBAL2_REG_AON_TIMER_0_STS                                                                                     (GLOBAL2_REG_BASE + 0x84)
#define GLOBAL2_REG_AON_TIMER_0_STS_DEFAULT                                                                             0x0
#define GLOBAL2_REG_AON_TIMER_0_STS_STS_AON_TIMER_0_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_0_STS_STS_AON_TIMER_0_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_0_STS_STS_AON_TIMER_0_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_0_STS_STS_AON_TIMER_0_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_0_STS_STS_AON_TIMER_0_MANUAL_TICK                                                         (Bit4)


#define GLOBAL2_REG_AON_TIMER_1_CTL                                                                                     (GLOBAL2_REG_BASE + 0x88)
#define GLOBAL2_REG_AON_TIMER_1_CTL_DEFAULT                                                                             0x80
#define GLOBAL2_REG_AON_TIMER_1_CTL_CTL_AON_TIMER_1_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_1_CTL_CTL_AON_TIMER_1_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_1_CTL_CTL_AON_TIMER_1_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_1_CTL_CTL_AON_TIMER_1_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_1_CTL_CTL_AON_TIMER_1_MANUAL_TICK                                                         (Bit4)
#define GLOBAL2_REG_AON_TIMER_1_CTL_CTL_AON_TIMER_1_CTRL_SYNC_32K_RST_N                                                 (Bit7)


#define GLOBAL2_REG_AON_TIMER_1_STS                                                                                     (GLOBAL2_REG_BASE + 0x8c)
#define GLOBAL2_REG_AON_TIMER_1_STS_DEFAULT                                                                             0x0
#define GLOBAL2_REG_AON_TIMER_1_STS_STS_AON_TIMER_1_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_1_STS_STS_AON_TIMER_1_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_1_STS_STS_AON_TIMER_1_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_1_STS_STS_AON_TIMER_1_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_1_STS_STS_AON_TIMER_1_MANUAL_TICK                                                         (Bit4)


#define GLOBAL2_REG_AON_TIMER_2_CTL                                                                                     (GLOBAL2_REG_BASE + 0x90)
#define GLOBAL2_REG_AON_TIMER_2_CTL_DEFAULT                                                                             0x80
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_MANUAL_TICK                                                         (Bit4)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_CTRL_SYNC_32K_RST_N                                                 (Bit7)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_EMIT_CLR                                                            (Bit16+Bit17)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_EMIT_CLR_MASK                                                       (Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_EMIT_CLR_SHIFT                                                      (16)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_CAP_CLR                                                             (Bit18+Bit19)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_CAP_CLR_MASK                                                        (Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_CTL_CTL_AON_TIMER_2_CAP_CLR_SHIFT                                                       (18)


#define GLOBAL2_REG_AON_TIMER_2_STS                                                                                     (GLOBAL2_REG_BASE + 0x94)
#define GLOBAL2_REG_AON_TIMER_2_STS_DEFAULT                                                                             0x0
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_MANUAL_TICK                                                         (Bit4)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_EMIT_CLR                                                            (Bit16+Bit17)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_EMIT_CLR_MASK                                                       (Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_EMIT_CLR_SHIFT                                                      (16)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_CAP_CLR                                                             (Bit18+Bit19)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_CAP_CLR_MASK                                                        (Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_CAP_CLR_SHIFT                                                       (18)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_CAPPED                                                              (Bit20+Bit21)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_CAPPED_MASK                                                         (Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_STS_STS_AON_TIMER_2_CAPPED_SHIFT                                                        (20)


#define GLOBAL2_REG_AON_TIMER_3_CTL                                                                                     (GLOBAL2_REG_BASE + 0x98)
#define GLOBAL2_REG_AON_TIMER_3_CTL_DEFAULT                                                                             0x80
#define GLOBAL2_REG_AON_TIMER_3_CTL_CTL_AON_TIMER_3_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_3_CTL_CTL_AON_TIMER_3_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_3_CTL_CTL_AON_TIMER_3_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_3_CTL_CTL_AON_TIMER_3_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_3_CTL_CTL_AON_TIMER_3_MANUAL_TICK                                                         (Bit4)
#define GLOBAL2_REG_AON_TIMER_3_CTL_CTL_AON_TIMER_3_CTRL_SYNC_32K_RST_N                                                 (Bit7)


#define GLOBAL2_REG_AON_TIMER_3_STS                                                                                     (GLOBAL2_REG_BASE + 0x9c)
#define GLOBAL2_REG_AON_TIMER_3_STS_DEFAULT                                                                             0x0
#define GLOBAL2_REG_AON_TIMER_3_STS_STS_AON_TIMER_3_EN                                                                  (Bit0)
#define GLOBAL2_REG_AON_TIMER_3_STS_STS_AON_TIMER_3_TOUCH                                                               (Bit1)
#define GLOBAL2_REG_AON_TIMER_3_STS_STS_AON_TIMER_3_IRQ_CLR                                                             (Bit2)
#define GLOBAL2_REG_AON_TIMER_3_STS_STS_AON_TIMER_3_MANUAL_MODE_EN                                                      (Bit3)
#define GLOBAL2_REG_AON_TIMER_3_STS_STS_AON_TIMER_3_MANUAL_TICK                                                         (Bit4)


#define GLOBAL2_REG_AON_TIMER_WDT_CTL                                                                                   (GLOBAL2_REG_BASE + 0xa0)
#define GLOBAL2_REG_AON_TIMER_WDT_CTL_DEFAULT                                                                           0x81
#define GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_EN                                                              (Bit0)
#define GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_TOUCH                                                           (Bit1)
#define GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_IRQ_CLR                                                         (Bit2)
#define GLOBAL2_REG_AON_TIMER_WDT_CTL_CTL_AON_TIMER_WDT_CTRL_SYNC_32K_RST_N                                             (Bit7)


#define GLOBAL2_REG_AON_TIMER_WDT_STS                                                                                   (GLOBAL2_REG_BASE + 0xa4)
#define GLOBAL2_REG_AON_TIMER_WDT_STS_DEFAULT                                                                           0x0
#define GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_EN                                                              (Bit0)
#define GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_TOUCH                                                           (Bit1)
#define GLOBAL2_REG_AON_TIMER_WDT_STS_STS_AON_TIMER_WDT_IRQ_CLR                                                         (Bit2)


#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL                                                                                (GLOBAL2_REG_BASE + 0xa8)
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_DEFAULT                                                                        0x0
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_CTL_AON_TIMER_0_INIT_VAL                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_CTL_AON_TIMER_0_INIT_VAL_MASK                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_CTL_AON_TIMER_0_INIT_VAL_SHIFT                                                 (0)


#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_STS                                                                            (GLOBAL2_REG_BASE + 0xac)
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_STS_DEFAULT                                                                    0x0
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_STS_STS_AON_TIMER_0_INIT_VAL                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_STS_STS_AON_TIMER_0_INIT_VAL_MASK                                              (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_0_INIT_VAL_STS_STS_AON_TIMER_0_INIT_VAL_SHIFT                                             (0)


#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL                                                                                (GLOBAL2_REG_BASE + 0xb0)
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_DEFAULT                                                                        0x0
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_CTL_AON_TIMER_1_INIT_VAL                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_CTL_AON_TIMER_1_INIT_VAL_MASK                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_CTL_AON_TIMER_1_INIT_VAL_SHIFT                                                 (0)


#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_STS                                                                            (GLOBAL2_REG_BASE + 0xb4)
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_STS_DEFAULT                                                                    0x0
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_STS_STS_AON_TIMER_1_INIT_VAL                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_STS_STS_AON_TIMER_1_INIT_VAL_MASK                                              (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_1_INIT_VAL_STS_STS_AON_TIMER_1_INIT_VAL_SHIFT                                             (0)


#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL                                                                                (GLOBAL2_REG_BASE + 0xb8)
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_DEFAULT                                                                        0x0
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_CTL_AON_TIMER_2_INIT_VAL                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_CTL_AON_TIMER_2_INIT_VAL_MASK                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_CTL_AON_TIMER_2_INIT_VAL_SHIFT                                                 (0)


#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_STS                                                                            (GLOBAL2_REG_BASE + 0xbc)
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_STS_DEFAULT                                                                    0x0
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_STS_STS_AON_TIMER_2_INIT_VAL                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_STS_STS_AON_TIMER_2_INIT_VAL_MASK                                              (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_INIT_VAL_STS_STS_AON_TIMER_2_INIT_VAL_SHIFT                                             (0)


#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO                                                                             (GLOBAL2_REG_BASE + 0xc0)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_DEFAULT                                                                     0x0
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_CTL_AON_TIMER_3_INIT_VAL_LO                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_CTL_AON_TIMER_3_INIT_VAL_LO_MASK                                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_CTL_AON_TIMER_3_INIT_VAL_LO_SHIFT                                           (0)


#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_STS                                                                         (GLOBAL2_REG_BASE + 0xc4)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_STS_DEFAULT                                                                 0x0
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_STS_STS_AON_TIMER_3_INIT_VAL_LO                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_STS_STS_AON_TIMER_3_INIT_VAL_LO_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_LO_STS_STS_AON_TIMER_3_INIT_VAL_LO_SHIFT                                       (0)


#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI                                                                             (GLOBAL2_REG_BASE + 0xc8)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_DEFAULT                                                                     0x0
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_CTL_AON_TIMER_3_INIT_VAL_HI                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_CTL_AON_TIMER_3_INIT_VAL_HI_MASK                                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_CTL_AON_TIMER_3_INIT_VAL_HI_SHIFT                                           (0)


#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_STS                                                                         (GLOBAL2_REG_BASE + 0xcc)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_STS_DEFAULT                                                                 0x0
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_STS_STS_AON_TIMER_3_INIT_VAL_HI                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_STS_STS_AON_TIMER_3_INIT_VAL_HI_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_3_INIT_VAL_HI_STS_STS_AON_TIMER_3_INIT_VAL_HI_SHIFT                                       (0)


#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL                                                                              (GLOBAL2_REG_BASE + 0xd0)
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_DEFAULT                                                                      0x3A9800
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_CTL_AON_TIMER_WDT_INIT_VAL                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_CTL_AON_TIMER_WDT_INIT_VAL_MASK                                              (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_CTL_AON_TIMER_WDT_INIT_VAL_SHIFT                                             (0)


#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_STS                                                                          (GLOBAL2_REG_BASE + 0xd4)
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_STS_DEFAULT                                                                  0x0
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_STS_STS_AON_TIMER_WDT_INIT_VAL                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_STS_STS_AON_TIMER_WDT_INIT_VAL_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_WDT_INIT_VAL_STS_STS_AON_TIMER_WDT_INIT_VAL_SHIFT                                         (0)


#define GLOBAL2_REG_PMU_MISC_CTRL                                                                                       (GLOBAL2_REG_BASE + 0x100)
#define GLOBAL2_REG_PMU_MISC_CTRL_DEFAULT                                                                               0x0
#define GLOBAL2_REG_PMU_MISC_CTRL_CTL_AON_TEMP_SENS_EN                                                                  (Bit0)
#define GLOBAL2_REG_PMU_MISC_CTRL_CTL_AON_VBAT_SENS_EN                                                                  (Bit1)
#define GLOBAL2_REG_PMU_MISC_CTRL_CTL_AON_XO_EN_MANUAL                                                                  (Bit2)


#define GLOBAL2_REG_PMU_MISC_CTRL_STATUS                                                                                (GLOBAL2_REG_BASE + 0x104)
#define GLOBAL2_REG_PMU_MISC_CTRL_STATUS_DEFAULT                                                                        0x0
#define GLOBAL2_REG_PMU_MISC_CTRL_STATUS_STS_AON_TEMP_SENS_EN                                                           (Bit0)
#define GLOBAL2_REG_PMU_MISC_CTRL_STATUS_STS_AON_VBAT_SENS_EN                                                           (Bit1)
#define GLOBAL2_REG_PMU_MISC_CTRL_STATUS_STS_AON_XO_EN_MANUAL                                                           (Bit2)


#define GLOBAL2_REG_HW_TIMING_CORR_CTRL                                                                                 (GLOBAL2_REG_BASE + 0x120)
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_DEFAULT                                                                         0x1E8480
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_CTL_AON_CLK_32K_DURATION                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_CTL_AON_CLK_32K_DURATION_MASK                                                   (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_CTL_AON_CLK_32K_DURATION_SHIFT                                                  (0)


#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_STATUS                                                                          (GLOBAL2_REG_BASE + 0x124)
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_STATUS_DEFAULT                                                                  0x1E8480
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_STATUS_STS_AON_CLK_32K_DURATION                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_STATUS_STS_AON_CLK_32K_DURATION_MASK                                            (Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_HW_TIMING_CORR_CTRL_STATUS_STS_AON_CLK_32K_DURATION_SHIFT                                           (0)


#define GLOBAL2_REG_AON_TIMER_TAKE_SNAPSHOT                                                                             (GLOBAL2_REG_BASE + 0x164)
#define GLOBAL2_REG_AON_TIMER_TAKE_SNAPSHOT_DEFAULT                                                                     0x0
#define GLOBAL2_REG_AON_TIMER_TAKE_SNAPSHOT_AON_TIME_0_OBSOLETE                                                         (Bit0)
#define GLOBAL2_REG_AON_TIMER_TAKE_SNAPSHOT_AON_TIME_1_OBSOLETE                                                         (Bit1)
#define GLOBAL2_REG_AON_TIMER_TAKE_SNAPSHOT_AON_TIME_2_OBSOLETE                                                         (Bit2)
#define GLOBAL2_REG_AON_TIMER_TAKE_SNAPSHOT_AON_TIME_3_OBSOLETE                                                         (Bit3)
#define GLOBAL2_REG_AON_TIMER_TAKE_SNAPSHOT_AON_TIME_WDT_OBSOLETE                                                       (Bit4)


#define GLOBAL2_REG_AON_TIMER_0_SNAPSHOT_VAL                                                                            (GLOBAL2_REG_BASE + 0x168)
#define GLOBAL2_REG_AON_TIMER_0_SNAPSHOT_VAL_DEFAULT                                                                    0x0
#define GLOBAL2_REG_AON_TIMER_0_SNAPSHOT_VAL_STS_AON_TIMER_0_SNAPSHOT_VAL                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_0_SNAPSHOT_VAL_STS_AON_TIMER_0_SNAPSHOT_VAL_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_0_SNAPSHOT_VAL_STS_AON_TIMER_0_SNAPSHOT_VAL_SHIFT                                         (0)


#define GLOBAL2_REG_AON_TIMER_1_SNAPSHOT_VAL                                                                            (GLOBAL2_REG_BASE + 0x16c)
#define GLOBAL2_REG_AON_TIMER_1_SNAPSHOT_VAL_DEFAULT                                                                    0x0
#define GLOBAL2_REG_AON_TIMER_1_SNAPSHOT_VAL_STS_AON_TIMER_1_SNAPSHOT_VAL                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_1_SNAPSHOT_VAL_STS_AON_TIMER_1_SNAPSHOT_VAL_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_1_SNAPSHOT_VAL_STS_AON_TIMER_1_SNAPSHOT_VAL_SHIFT                                         (0)


#define GLOBAL2_REG_AON_TIMER_2_SNAPSHOT_VAL                                                                            (GLOBAL2_REG_BASE + 0x170)
#define GLOBAL2_REG_AON_TIMER_2_SNAPSHOT_VAL_DEFAULT                                                                    0x0
#define GLOBAL2_REG_AON_TIMER_2_SNAPSHOT_VAL_STS_AON_TIMER_2_SNAPSHOT_VAL                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_2_SNAPSHOT_VAL_STS_AON_TIMER_2_SNAPSHOT_VAL_MASK                                          (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_2_SNAPSHOT_VAL_STS_AON_TIMER_2_SNAPSHOT_VAL_SHIFT                                         (0)


#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_LO                                                                         (GLOBAL2_REG_BASE + 0x174)
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_LO_DEFAULT                                                                 0x0
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_LO_STS_AON_TIMER_3_SNAPSHOT_VAL_LO                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_LO_STS_AON_TIMER_3_SNAPSHOT_VAL_LO_MASK                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_LO_STS_AON_TIMER_3_SNAPSHOT_VAL_LO_SHIFT                                   (0)


#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_HI                                                                         (GLOBAL2_REG_BASE + 0x178)
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_HI_DEFAULT                                                                 0x0
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_HI_STS_AON_TIMER_3_SNAPSHOT_VAL_HI                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_HI_STS_AON_TIMER_3_SNAPSHOT_VAL_HI_MASK                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_3_SNAPSHOT_VAL_HI_STS_AON_TIMER_3_SNAPSHOT_VAL_HI_SHIFT                                   (0)


#define GLOBAL2_REG_AON_TIMER_WDT_SNAPSHOT_VAL                                                                          (GLOBAL2_REG_BASE + 0x17c)
#define GLOBAL2_REG_AON_TIMER_WDT_SNAPSHOT_VAL_DEFAULT                                                                  0x0
#define GLOBAL2_REG_AON_TIMER_WDT_SNAPSHOT_VAL_STS_AON_TIMER_WDT_SNAPSHOT_VAL                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_AON_TIMER_WDT_SNAPSHOT_VAL_STS_AON_TIMER_WDT_SNAPSHOT_VAL_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_WDT_SNAPSHOT_VAL_STS_AON_TIMER_WDT_SNAPSHOT_VAL_SHIFT                                     (0)


#define GLOBAL2_REG_ATE_CTRL                                                                                            (GLOBAL2_REG_BASE + 0x180)
#define GLOBAL2_REG_ATE_CTRL_DEFAULT                                                                                    0x0
#define GLOBAL2_REG_ATE_CTRL_CTL_ATE_COMMAND                                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_CTRL_CTL_ATE_COMMAND_MASK                                                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_CTRL_CTL_ATE_COMMAND_SHIFT                                                                      (0)


#define GLOBAL2_REG_ATE_PARAM_0                                                                                         (GLOBAL2_REG_BASE + 0x184)
#define GLOBAL2_REG_ATE_PARAM_0_DEFAULT                                                                                 0x0
#define GLOBAL2_REG_ATE_PARAM_0_CTL_ATE_PARAMETER_0                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_PARAM_0_CTL_ATE_PARAMETER_0_MASK                                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_PARAM_0_CTL_ATE_PARAMETER_0_SHIFT                                                               (0)


#define GLOBAL2_REG_ATE_PARAM_1                                                                                         (GLOBAL2_REG_BASE + 0x188)
#define GLOBAL2_REG_ATE_PARAM_1_DEFAULT                                                                                 0x0
#define GLOBAL2_REG_ATE_PARAM_1_CTL_ATE_PARAMETER_1                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_PARAM_1_CTL_ATE_PARAMETER_1_MASK                                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_PARAM_1_CTL_ATE_PARAMETER_1_SHIFT                                                               (0)


#define GLOBAL2_REG_ATE_PARAM_2                                                                                         (GLOBAL2_REG_BASE + 0x18c)
#define GLOBAL2_REG_ATE_PARAM_2_DEFAULT                                                                                 0x0
#define GLOBAL2_REG_ATE_PARAM_2_CTL_ATE_PARAMETER_2                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_PARAM_2_CTL_ATE_PARAMETER_2_MASK                                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_PARAM_2_CTL_ATE_PARAMETER_2_SHIFT                                                               (0)


#define GLOBAL2_REG_ATE_PARAM_3                                                                                         (GLOBAL2_REG_BASE + 0x190)
#define GLOBAL2_REG_ATE_PARAM_3_DEFAULT                                                                                 0x0
#define GLOBAL2_REG_ATE_PARAM_3_CTL_ATE_PARAMETER_3                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_PARAM_3_CTL_ATE_PARAMETER_3_MASK                                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_PARAM_3_CTL_ATE_PARAMETER_3_SHIFT                                                               (0)


#define GLOBAL2_REG_ATE_RESULT_0                                                                                        (GLOBAL2_REG_BASE + 0x194)
#define GLOBAL2_REG_ATE_RESULT_0_DEFAULT                                                                                0x0
#define GLOBAL2_REG_ATE_RESULT_0_CTL_ATE_RESULT_0                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_RESULT_0_CTL_ATE_RESULT_0_MASK                                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_RESULT_0_CTL_ATE_RESULT_0_SHIFT                                                                 (0)


#define GLOBAL2_REG_ATE_RESULT_1                                                                                        (GLOBAL2_REG_BASE + 0x198)
#define GLOBAL2_REG_ATE_RESULT_1_DEFAULT                                                                                0x0
#define GLOBAL2_REG_ATE_RESULT_1_CTL_ATE_RESULT_1                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_RESULT_1_CTL_ATE_RESULT_1_MASK                                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_RESULT_1_CTL_ATE_RESULT_1_SHIFT                                                                 (0)


#define GLOBAL2_REG_ATE_RESULT_2                                                                                        (GLOBAL2_REG_BASE + 0x19c)
#define GLOBAL2_REG_ATE_RESULT_2_DEFAULT                                                                                0x0
#define GLOBAL2_REG_ATE_RESULT_2_CTL_ATE_RESULT_2                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_RESULT_2_CTL_ATE_RESULT_2_MASK                                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_RESULT_2_CTL_ATE_RESULT_2_SHIFT                                                                 (0)


#define GLOBAL2_REG_ATE_RESULT_3                                                                                        (GLOBAL2_REG_BASE + 0x1a0)
#define GLOBAL2_REG_ATE_RESULT_3_DEFAULT                                                                                0x0
#define GLOBAL2_REG_ATE_RESULT_3_CTL_ATE_RESULT_3                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_ATE_RESULT_3_CTL_ATE_RESULT_3_MASK                                                                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_ATE_RESULT_3_CTL_ATE_RESULT_3_SHIFT                                                                 (0)


#define GLOBAL2_REG_XO_REG_CURR_VAL                                                                                     (GLOBAL2_REG_BASE + 0x1f0)
#define GLOBAL2_REG_XO_REG_CURR_VAL_DEFAULT                                                                             0x0
#define GLOBAL2_REG_XO_REG_CURR_VAL_STS_XO_REG1TO4_CURR_VAL                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_XO_REG_CURR_VAL_STS_XO_REG1TO4_CURR_VAL_MASK                                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_XO_REG_CURR_VAL_STS_XO_REG1TO4_CURR_VAL_SHIFT                                                       (0)


#define GLOBAL2_REG_XO_REG5_CURR_VAL                                                                                    (GLOBAL2_REG_BASE + 0x1f4)
#define GLOBAL2_REG_XO_REG5_CURR_VAL_DEFAULT                                                                            0x0
#define GLOBAL2_REG_XO_REG5_CURR_VAL_STS_XO_REG5_CURR_VAL                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_XO_REG5_CURR_VAL_STS_XO_REG5_CURR_VAL_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_XO_REG5_CURR_VAL_STS_XO_REG5_CURR_VAL_SHIFT                                                         (0)


#define GLOBAL2_REG_AON_TIMER_INTR_STATUS                                                                               (GLOBAL2_REG_BASE + 0x200)
#define GLOBAL2_REG_AON_TIMER_INTR_STATUS_DEFAULT                                                                       0x0
#define GLOBAL2_REG_AON_TIMER_INTR_STATUS_AON_TIMERS                                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_AON_TIMER_INTR_STATUS_AON_TIMERS_MASK                                                               (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_INTR_STATUS_AON_TIMERS_SHIFT                                                              (0)


#define GLOBAL2_REG_AON_TIMER_INTR_MASK_STATUS                                                                          (GLOBAL2_REG_BASE + 0x204)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_STATUS_DEFAULT                                                                  0x0
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_STATUS_AON_TIMERS                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_STATUS_AON_TIMERS_MASK                                                          (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_STATUS_AON_TIMERS_SHIFT                                                         (0)


#define GLOBAL2_REG_AON_TIMER_INTR_CLEAR                                                                                (GLOBAL2_REG_BASE + 0x208)
#define GLOBAL2_REG_AON_TIMER_INTR_CLEAR_DEFAULT                                                                        0x0
#define GLOBAL2_REG_AON_TIMER_INTR_CLEAR_AON_TIMERS                                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_AON_TIMER_INTR_CLEAR_AON_TIMERS_MASK                                                                (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_INTR_CLEAR_AON_TIMERS_SHIFT                                                               (0)


#define GLOBAL2_REG_AON_TIMER_INTR_SET                                                                                  (GLOBAL2_REG_BASE + 0x20c)
#define GLOBAL2_REG_AON_TIMER_INTR_SET_DEFAULT                                                                          0x0
#define GLOBAL2_REG_AON_TIMER_INTR_SET_AON_TIMERS                                                                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_AON_TIMER_INTR_SET_AON_TIMERS_MASK                                                                  (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_INTR_SET_AON_TIMERS_SHIFT                                                                 (0)


#define GLOBAL2_REG_AON_TIMER_INTR_MASK_SET                                                                             (GLOBAL2_REG_BASE + 0x210)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_SET_DEFAULT                                                                     0x0
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_SET_AON_TIMERS                                                                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_SET_AON_TIMERS_MASK                                                             (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_SET_AON_TIMERS_SHIFT                                                            (0)


#define GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR                                                                           (GLOBAL2_REG_BASE + 0x214)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR_DEFAULT                                                                   0x0
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR_AON_TIMERS                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR_AON_TIMERS_MASK                                                           (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_AON_TIMER_INTR_MASK_CLEAR_AON_TIMERS_SHIFT                                                          (0)


#define GLOBAL2_REG_OSC_XO_INTR_STATUS                                                                                  (GLOBAL2_REG_BASE + 0x220)
#define GLOBAL2_REG_OSC_XO_INTR_STATUS_DEFAULT                                                                          0x0
#define GLOBAL2_REG_OSC_XO_INTR_STATUS_IRQ                                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define GLOBAL2_REG_OSC_XO_INTR_STATUS_IRQ_MASK                                                                         (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_OSC_XO_INTR_STATUS_IRQ_SHIFT                                                                        (0)


#define GLOBAL2_REG_OSC_XO_INTR_MASK_STATUS                                                                             (GLOBAL2_REG_BASE + 0x224)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_STATUS_DEFAULT                                                                     0x0
#define GLOBAL2_REG_OSC_XO_INTR_MASK_STATUS_IRQ                                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_STATUS_IRQ_MASK                                                                    (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_STATUS_IRQ_SHIFT                                                                   (0)


#define GLOBAL2_REG_OSC_XO_INTR_CLEAR                                                                                   (GLOBAL2_REG_BASE + 0x228)
#define GLOBAL2_REG_OSC_XO_INTR_CLEAR_DEFAULT                                                                           0x0
#define GLOBAL2_REG_OSC_XO_INTR_CLEAR_IRQ                                                                               (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define GLOBAL2_REG_OSC_XO_INTR_CLEAR_IRQ_MASK                                                                          (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_OSC_XO_INTR_CLEAR_IRQ_SHIFT                                                                         (0)


#define GLOBAL2_REG_OSC_XO_INTR_SET                                                                                     (GLOBAL2_REG_BASE + 0x22c)
#define GLOBAL2_REG_OSC_XO_INTR_SET_DEFAULT                                                                             0x0
#define GLOBAL2_REG_OSC_XO_INTR_SET_IRQ                                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define GLOBAL2_REG_OSC_XO_INTR_SET_IRQ_MASK                                                                            (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_OSC_XO_INTR_SET_IRQ_SHIFT                                                                           (0)


#define GLOBAL2_REG_OSC_XO_INTR_MASK_SET                                                                                (GLOBAL2_REG_BASE + 0x230)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_SET_DEFAULT                                                                        0x0
#define GLOBAL2_REG_OSC_XO_INTR_MASK_SET_IRQ                                                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_SET_IRQ_MASK                                                                       (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_SET_IRQ_SHIFT                                                                      (0)


#define GLOBAL2_REG_OSC_XO_INTR_MASK_CLEAR                                                                              (GLOBAL2_REG_BASE + 0x234)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_CLEAR_DEFAULT                                                                      0x0
#define GLOBAL2_REG_OSC_XO_INTR_MASK_CLEAR_IRQ                                                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_CLEAR_IRQ_MASK                                                                     (Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_OSC_XO_INTR_MASK_CLEAR_IRQ_SHIFT                                                                    (0)


#define GLOBAL2_REG_WDT_INTR_STATUS                                                                                     (GLOBAL2_REG_BASE + 0x240)
#define GLOBAL2_REG_WDT_INTR_STATUS_DEFAULT                                                                             0x0
#define GLOBAL2_REG_WDT_INTR_STATUS_IRQ                                                                                 (Bit0+Bit1+Bit2)
#define GLOBAL2_REG_WDT_INTR_STATUS_IRQ_MASK                                                                            (Bit2+Bit1+Bit0)
#define GLOBAL2_REG_WDT_INTR_STATUS_IRQ_SHIFT                                                                           (0)


#define GLOBAL2_REG_WDT_INTR_MASK_STATUS                                                                                (GLOBAL2_REG_BASE + 0x244)
#define GLOBAL2_REG_WDT_INTR_MASK_STATUS_DEFAULT                                                                        0x0
#define GLOBAL2_REG_WDT_INTR_MASK_STATUS_IRQ                                                                            (Bit0+Bit1+Bit2)
#define GLOBAL2_REG_WDT_INTR_MASK_STATUS_IRQ_MASK                                                                       (Bit2+Bit1+Bit0)
#define GLOBAL2_REG_WDT_INTR_MASK_STATUS_IRQ_SHIFT                                                                      (0)


#define GLOBAL2_REG_WDT_INTR_CLEAR                                                                                      (GLOBAL2_REG_BASE + 0x248)
#define GLOBAL2_REG_WDT_INTR_CLEAR_DEFAULT                                                                              0x0
#define GLOBAL2_REG_WDT_INTR_CLEAR_IRQ                                                                                  (Bit0+Bit1+Bit2)
#define GLOBAL2_REG_WDT_INTR_CLEAR_IRQ_MASK                                                                             (Bit2+Bit1+Bit0)
#define GLOBAL2_REG_WDT_INTR_CLEAR_IRQ_SHIFT                                                                            (0)


#define GLOBAL2_REG_WDT_INTR_SET                                                                                        (GLOBAL2_REG_BASE + 0x24c)
#define GLOBAL2_REG_WDT_INTR_SET_DEFAULT                                                                                0x0
#define GLOBAL2_REG_WDT_INTR_SET_IRQ                                                                                    (Bit0+Bit1+Bit2)
#define GLOBAL2_REG_WDT_INTR_SET_IRQ_MASK                                                                               (Bit2+Bit1+Bit0)
#define GLOBAL2_REG_WDT_INTR_SET_IRQ_SHIFT                                                                              (0)


#define GLOBAL2_REG_WDT_INTR_MASK_SET                                                                                   (GLOBAL2_REG_BASE + 0x250)
#define GLOBAL2_REG_WDT_INTR_MASK_SET_DEFAULT                                                                           0x0
#define GLOBAL2_REG_WDT_INTR_MASK_SET_IRQ                                                                               (Bit0+Bit1+Bit2)
#define GLOBAL2_REG_WDT_INTR_MASK_SET_IRQ_MASK                                                                          (Bit2+Bit1+Bit0)
#define GLOBAL2_REG_WDT_INTR_MASK_SET_IRQ_SHIFT                                                                         (0)


#define GLOBAL2_REG_WDT_INTR_MASK_CLEAR                                                                                 (GLOBAL2_REG_BASE + 0x254)
#define GLOBAL2_REG_WDT_INTR_MASK_CLEAR_DEFAULT                                                                         0x0
#define GLOBAL2_REG_WDT_INTR_MASK_CLEAR_IRQ                                                                             (Bit0+Bit1+Bit2)
#define GLOBAL2_REG_WDT_INTR_MASK_CLEAR_IRQ_MASK                                                                        (Bit2+Bit1+Bit0)
#define GLOBAL2_REG_WDT_INTR_MASK_CLEAR_IRQ_SHIFT                                                                       (0)


#define GLOBAL2_REG_DBG_EN_VAL                                                                                          (GLOBAL2_REG_BASE + 0x280)
#define GLOBAL2_REG_DBG_EN_VAL_DEFAULT                                                                                  0x100
#define GLOBAL2_REG_DBG_EN_VAL_STS_CM4_DBG_ENABLE                                                                       (Bit8)


#define GLOBAL2_REG_CM4_HIT_COND                                                                                        (GLOBAL2_REG_BASE + 0x2a0)
#define GLOBAL2_REG_CM4_HIT_COND_DEFAULT                                                                                0x0
#define GLOBAL2_REG_CM4_HIT_COND_CTL_CM4_PC_HIT_CLR                                                                     (Bit0)
#define GLOBAL2_REG_CM4_HIT_COND_CTL_CM4_HADDRD_HIT_CLR                                                                 (Bit1)
#define GLOBAL2_REG_CM4_HIT_COND_CTL_CM4_HADDRS_HIT_CLR                                                                 (Bit2)


#define GLOBAL2_REG_CM4_HIT_COND_PC                                                                                     (GLOBAL2_REG_BASE + 0x2a4)
#define GLOBAL2_REG_CM4_HIT_COND_PC_DEFAULT                                                                             0x0
#define GLOBAL2_REG_CM4_HIT_COND_PC_CTL_CM4_PC_HIT_ADDR                                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_CM4_HIT_COND_PC_CTL_CM4_PC_HIT_ADDR_MASK                                                            (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_CM4_HIT_COND_PC_CTL_CM4_PC_HIT_ADDR_SHIFT                                                           (0)


#define GLOBAL2_REG_CM4_HIT_COND_HADDRD                                                                                 (GLOBAL2_REG_BASE + 0x2a8)
#define GLOBAL2_REG_CM4_HIT_COND_HADDRD_DEFAULT                                                                         0x0
#define GLOBAL2_REG_CM4_HIT_COND_HADDRD_CTL_CM4_HADDRD_HIT_ADDR                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_CM4_HIT_COND_HADDRD_CTL_CM4_HADDRD_HIT_ADDR_MASK                                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_CM4_HIT_COND_HADDRD_CTL_CM4_HADDRD_HIT_ADDR_SHIFT                                                   (0)


#define GLOBAL2_REG_CM4_HIT_COND_HADDRS                                                                                 (GLOBAL2_REG_BASE + 0x2ac)
#define GLOBAL2_REG_CM4_HIT_COND_HADDRS_DEFAULT                                                                         0x0
#define GLOBAL2_REG_CM4_HIT_COND_HADDRS_CTL_CM4_HADDRS_HIT_ADDR                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_CM4_HIT_COND_HADDRS_CTL_CM4_HADDRS_HIT_ADDR_MASK                                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_CM4_HIT_COND_HADDRS_CTL_CM4_HADDRS_HIT_ADDR_SHIFT                                                   (0)


#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_0                                                                          (GLOBAL2_REG_BASE + 0x2c0)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_0_DEFAULT                                                                  0x0
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_0_CTL_TRIG_HANDLR_CTL_GPIO_OUT_0                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_0_CTL_TRIG_HANDLR_CTL_GPIO_OUT_0_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_0_CTL_TRIG_HANDLR_CTL_GPIO_OUT_0_SHIFT                                     (0)


#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_1                                                                          (GLOBAL2_REG_BASE + 0x2c4)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_1_DEFAULT                                                                  0x0
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_1_CTL_TRIG_HANDLR_CTL_GPIO_OUT_1                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_1_CTL_TRIG_HANDLR_CTL_GPIO_OUT_1_MASK                                      (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OUT_1_CTL_TRIG_HANDLR_CTL_GPIO_OUT_1_SHIFT                                     (0)


#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_0                                                                           (GLOBAL2_REG_BASE + 0x2c8)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_0_DEFAULT                                                                   0x0
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_0_CTL_TRIG_HANDLR_CTL_GPIO_OE_0                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_0_CTL_TRIG_HANDLR_CTL_GPIO_OE_0_MASK                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_0_CTL_TRIG_HANDLR_CTL_GPIO_OE_0_SHIFT                                       (0)


#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_1                                                                           (GLOBAL2_REG_BASE + 0x2cc)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_1_DEFAULT                                                                   0x0
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_1_CTL_TRIG_HANDLR_CTL_GPIO_OE_1                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_1_CTL_TRIG_HANDLR_CTL_GPIO_OE_1_MASK                                        (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_HANDLR_CTL_GPIO_OE_1_CTL_TRIG_HANDLR_CTL_GPIO_OE_1_SHIFT                                       (0)


#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL                                                                     (GLOBAL2_REG_BASE + 0x2d0)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_DEFAULT                                                             0x0
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_SSI_MSTR0_APB_MUX                                               (Bit0)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_SSI_MSTR1_APB_MUX                                               (Bit1)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_SSI_SLAVE_APB_MUX                                               (Bit2)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_UART0_APB_MUX                                                   (Bit3)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_UART1_APB_MUX                                                   (Bit4)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_I2C0_APB_MUX                                                    (Bit5)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_I2C1_APB_MUX                                                    (Bit6)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_TIMERS_APB_MUX                                                  (Bit7)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_SADCCTRL_APB_MUX                                                (Bit8)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_GLB_REG_APB_MUX                                                 (Bit9)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_TRIGHDLR_APB_MUX                                                (Bit10)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_PWM_APB_MUX                                                     (Bit11)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_SHM_APB_MUX                                                     (Bit12)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_TRXSEQ_APB_MUX                                                  (Bit13)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_TRXREG_APB_MUX                                                  (Bit14)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_GLB2_REG_APB_MUX                                                (Bit15)
#define GLOBAL2_REG_TRIG_HANDLR_APB_MASTER_MUX_CTRL_CTL_TIMERS_ADD_APB_MUX                                              (Bit16)


#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0                                                                               (GLOBAL2_REG_BASE + 0x2e0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_DEFAULT                                                                       0xFFFFFFFF
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_0                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_0_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_0_SHIFT                                        (0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_1                                              (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_1_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_1_SHIFT                                        (8)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_2                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_2_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_2_SHIFT                                        (16)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_3                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_3_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_0_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_3_SHIFT                                        (24)


#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1                                                                               (GLOBAL2_REG_BASE + 0x2e4)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_DEFAULT                                                                       0xFFFFFFFF
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_4                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_4_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_4_SHIFT                                        (0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_5                                              (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_5_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_5_SHIFT                                        (8)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_6                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_6_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_6_SHIFT                                        (16)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_7                                              (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_7_MASK                                         (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_1_CTL_TRIG_SIG_ARRAY_CM4_IRQ_SEL_7_SHIFT                                        (24)


#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2                                                                               (GLOBAL2_REG_BASE + 0x2e8)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_DEFAULT                                                                       0x1F1F
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_TRIG_SIG_ARRAY_BLE_IRQ_SEL_0                                              (Bit0+Bit1+Bit2+Bit3+Bit4)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_TRIG_SIG_ARRAY_BLE_IRQ_SEL_0_MASK                                         (Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_TRIG_SIG_ARRAY_BLE_IRQ_SEL_0_SHIFT                                        (0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_TRIG_SIG_ARRAY_BLE_IRQ_SEL_1                                              (Bit8+Bit9+Bit10+Bit11+Bit12)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_TRIG_SIG_ARRAY_BLE_IRQ_SEL_1_MASK                                         (Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_TRIG_SIG_ARRAY_BLE_IRQ_SEL_1_SHIFT                                        (8)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_PD1_TIMERS_EMIT_SIG_TRIG_SEL                                              (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_PD1_TIMERS_EMIT_SIG_TRIG_SEL_MASK                                         (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_2_CTL_PD1_TIMERS_EMIT_SIG_TRIG_SEL_SHIFT                                        (16)


#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3                                                                               (GLOBAL2_REG_BASE + 0x2ec)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3_DEFAULT                                                                       0x0
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3_CTL_CAP_SIG_ARRAY_GPIO_0_IE_OE_SEL                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3_CTL_CAP_SIG_ARRAY_GPIO_0_IE_OE_SEL_MASK                                       (Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3_CTL_CAP_SIG_ARRAY_GPIO_0_IE_OE_SEL_SHIFT                                      (0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3_CTL_CAP_SIG_ARRAY_GPIO_1_IE_OE_SEL                                            (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3_CTL_CAP_SIG_ARRAY_GPIO_1_IE_OE_SEL_MASK                                       (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_3_CTL_CAP_SIG_ARRAY_GPIO_1_IE_OE_SEL_SHIFT                                      (12)


#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4                                                                               (GLOBAL2_REG_BASE + 0x2f0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_DEFAULT                                                                       0x0
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_2_IE_OE_SEL                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_2_IE_OE_SEL_MASK                                       (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_2_IE_OE_SEL_SHIFT                                      (0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_3_IE_OE_SEL                                            (Bit12+Bit13+Bit14+Bit15+Bit16+Bit17)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_3_IE_OE_SEL_MASK                                       (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_3_IE_OE_SEL_SHIFT                                      (12)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_4_IE_OE_SEL                                            (Bit20+Bit21+Bit22+Bit23)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_4_IE_OE_SEL_MASK                                       (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_TRIG_SIG_ARRAY_CTRL_4_CTL_CAP_SIG_ARRAY_GPIO_4_IE_OE_SEL_SHIFT                                      (20)


#define GLOBAL2_REG_APB_MUX_INTR_STATUS                                                                                 (GLOBAL2_REG_BASE + 0x300)
#define GLOBAL2_REG_APB_MUX_INTR_STATUS_DEFAULT                                                                         0x0
#define GLOBAL2_REG_APB_MUX_INTR_STATUS_IRQ                                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_APB_MUX_INTR_STATUS_IRQ_MASK                                                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_INTR_STATUS_IRQ_SHIFT                                                                       (0)


#define GLOBAL2_REG_APB_MUX_INTR_MASK_STATUS                                                                            (GLOBAL2_REG_BASE + 0x304)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_STATUS_DEFAULT                                                                    0x0
#define GLOBAL2_REG_APB_MUX_INTR_MASK_STATUS_IRQ                                                                        (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_STATUS_IRQ_MASK                                                                   (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_STATUS_IRQ_SHIFT                                                                  (0)


#define GLOBAL2_REG_APB_MUX_INTR_CLEAR                                                                                  (GLOBAL2_REG_BASE + 0x308)
#define GLOBAL2_REG_APB_MUX_INTR_CLEAR_DEFAULT                                                                          0x0
#define GLOBAL2_REG_APB_MUX_INTR_CLEAR_IRQ                                                                              (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_APB_MUX_INTR_CLEAR_IRQ_MASK                                                                         (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_INTR_CLEAR_IRQ_SHIFT                                                                        (0)


#define GLOBAL2_REG_APB_MUX_INTR_SET                                                                                    (GLOBAL2_REG_BASE + 0x30c)
#define GLOBAL2_REG_APB_MUX_INTR_SET_DEFAULT                                                                            0x0
#define GLOBAL2_REG_APB_MUX_INTR_SET_IRQ                                                                                (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_APB_MUX_INTR_SET_IRQ_MASK                                                                           (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_INTR_SET_IRQ_SHIFT                                                                          (0)


#define GLOBAL2_REG_APB_MUX_INTR_MASK_SET                                                                               (GLOBAL2_REG_BASE + 0x310)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_SET_DEFAULT                                                                       0x0
#define GLOBAL2_REG_APB_MUX_INTR_MASK_SET_IRQ                                                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_SET_IRQ_MASK                                                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_SET_IRQ_SHIFT                                                                     (0)


#define GLOBAL2_REG_APB_MUX_INTR_MASK_CLEAR                                                                             (GLOBAL2_REG_BASE + 0x314)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_CLEAR_DEFAULT                                                                     0x0
#define GLOBAL2_REG_APB_MUX_INTR_MASK_CLEAR_IRQ                                                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_CLEAR_IRQ_MASK                                                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_INTR_MASK_CLEAR_IRQ_SHIFT                                                                   (0)


#define GLOBAL2_REG_SNAPSHOT_CTRL                                                                                       (GLOBAL2_REG_BASE + 0x340)
#define GLOBAL2_REG_SNAPSHOT_CTRL_DEFAULT                                                                               0x0
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_BLE_BB_CNTR                                                              (Bit0)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_IPM_CNTR                                                                 (Bit1)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER0                                                               (Bit2)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER1                                                               (Bit3)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER2                                                               (Bit4)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER3                                                               (Bit5)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER4                                                               (Bit6)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER5                                                               (Bit7)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_IPM_TS                                                                   (Bit8)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_BLE_TS                                                                   (Bit9)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_SYSTICK                                                                  (Bit10)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_THH                                                                      (Bit11)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_THM                                                                      (Bit12)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_THL                                                                      (Bit13)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_FR_IPM_CNT                                                               (Bit14)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER_ADD_0                                                          (Bit15)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER_ADD_1                                                          (Bit16)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER_ADD_2                                                          (Bit17)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_PD1_TIMER_ADD_3                                                          (Bit18)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_0_TAKE_SNAPSHOT                                                         (Bit20)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_1_TAKE_SNAPSHOT                                                         (Bit21)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_2_TAKE_SNAPSHOT                                                         (Bit22)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_3_TAKE_SNAPSHOT                                                         (Bit23)
#define GLOBAL2_REG_SNAPSHOT_CTRL_CTL_AON_TIMER_WDT_TAKE_SNAPSHOT                                                       (Bit24)


#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_CLKN                                                                               (GLOBAL2_REG_BASE + 0x348)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_CLKN_DEFAULT                                                                       0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_CLKN_STS_SNAPSHOT_VAL_BLE_CLKN                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_CLKN_STS_SNAPSHOT_VAL_BLE_CLKN_MASK                                                (Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_CLKN_STS_SNAPSHOT_VAL_BLE_CLKN_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_FINE                                                                               (GLOBAL2_REG_BASE + 0x34c)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_FINE_DEFAULT                                                                       0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_FINE_STS_SNAPSHOT_VAL_BLE_FINE                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_FINE_STS_SNAPSHOT_VAL_BLE_FINE_MASK                                                (Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_FINE_STS_SNAPSHOT_VAL_BLE_FINE_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC                                                                                  (GLOBAL2_REG_BASE + 0x350)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_DEFAULT                                                                          0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_FINE_CNT                                                      (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_FINE_CNT_MASK                                                 (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_FINE_CNT_SHIFT                                                (0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_SF_DURATION_CNT                                               (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_SF_DURATION_CNT_MASK                                          (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_SF_DURATION_CNT_SHIFT                                         (8)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_SF_CNT                                                        (Bit24+Bit25+Bit26+Bit27+Bit28+Bit29)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_SF_CNT_MASK                                                   (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_STS_SNAPSHOT_IPMAC_SF_CNT_SHIFT                                                  (24)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER0                                                                             (GLOBAL2_REG_BASE + 0x354)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER0_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER0_STS_SNAPSHOT_PD1_TIMER0                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER0_STS_SNAPSHOT_PD1_TIMER0_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER0_STS_SNAPSHOT_PD1_TIMER0_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER1                                                                             (GLOBAL2_REG_BASE + 0x358)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER1_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER1_STS_SNAPSHOT_PD1_TIMER1                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER1_STS_SNAPSHOT_PD1_TIMER1_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER1_STS_SNAPSHOT_PD1_TIMER1_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER2                                                                             (GLOBAL2_REG_BASE + 0x35c)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER2_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER2_STS_SNAPSHOT_PD1_TIMER2                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER2_STS_SNAPSHOT_PD1_TIMER2_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER2_STS_SNAPSHOT_PD1_TIMER2_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER3                                                                             (GLOBAL2_REG_BASE + 0x360)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER3_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER3_STS_SNAPSHOT_PD1_TIMER3                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER3_STS_SNAPSHOT_PD1_TIMER3_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER3_STS_SNAPSHOT_PD1_TIMER3_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER4                                                                             (GLOBAL2_REG_BASE + 0x364)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER4_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER4_STS_SNAPSHOT_PD1_TIMER4                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER4_STS_SNAPSHOT_PD1_TIMER4_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER4_STS_SNAPSHOT_PD1_TIMER4_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER5                                                                             (GLOBAL2_REG_BASE + 0x368)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER5_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER5_STS_SNAPSHOT_PD1_TIMER5                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER5_STS_SNAPSHOT_PD1_TIMER5_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER5_STS_SNAPSHOT_PD1_TIMER5_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_IPM_TS                                                                                 (GLOBAL2_REG_BASE + 0x36c)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPM_TS_DEFAULT                                                                         0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_IPM_TS_STS_SNAPSHOT_IPM_TS                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPM_TS_STS_SNAPSHOT_IPM_TS_MASK                                                        (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPM_TS_STS_SNAPSHOT_IPM_TS_SHIFT                                                       (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_TS                                                                                 (GLOBAL2_REG_BASE + 0x370)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_TS_DEFAULT                                                                         0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_TS_STS_SNAPSHOT_BLE_TS                                                             (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_TS_STS_SNAPSHOT_BLE_TS_MASK                                                        (Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_BLE_TS_STS_SNAPSHOT_BLE_TS_SHIFT                                                       (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK                                                                                (GLOBAL2_REG_BASE + 0x374)
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_DEFAULT                                                                        0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_STS_SNAPSHOT_SYSTICK_COARSE                                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_STS_SNAPSHOT_SYSTICK_COARSE_MASK                                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_STS_SNAPSHOT_SYSTICK_COARSE_SHIFT                                              (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_FINE                                                                           (GLOBAL2_REG_BASE + 0x378)
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_FINE_DEFAULT                                                                   0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_FINE_STS_SNAPSHOT_SYSTICK_FINE                                                 (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19)
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_FINE_STS_SNAPSHOT_SYSTICK_FINE_MASK                                            (Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_SYSTICK_FINE_STS_SNAPSHOT_SYSTICK_FINE_SHIFT                                           (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_TH_H_TIMER                                                                             (GLOBAL2_REG_BASE + 0x37c)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_H_TIMER_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_H_TIMER_STS_SNAPSHOT_TH_H_TIMER                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_H_TIMER_STS_SNAPSHOT_TH_H_TIMER_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_H_TIMER_STS_SNAPSHOT_TH_H_TIMER_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_TH_M_TIMER                                                                             (GLOBAL2_REG_BASE + 0x380)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_M_TIMER_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_M_TIMER_STS_SNAPSHOT_TH_M_TIMER                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_M_TIMER_STS_SNAPSHOT_TH_M_TIMER_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_M_TIMER_STS_SNAPSHOT_TH_M_TIMER_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_TH_L_TIMER                                                                             (GLOBAL2_REG_BASE + 0x384)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_L_TIMER_DEFAULT                                                                     0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_L_TIMER_STS_SNAPSHOT_TH_L_TIMER                                                     (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_L_TIMER_STS_SNAPSHOT_TH_L_TIMER_MASK                                                (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_TH_L_TIMER_STS_SNAPSHOT_TH_L_TIMER_SHIFT                                               (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR                                                                               (GLOBAL2_REG_BASE + 0x388)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_DEFAULT                                                                       0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_US_CNT                                             (Bit0+Bit1+Bit2+Bit3)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_US_CNT_MASK                                        (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_US_CNT_SHIFT                                       (0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_FINE_CNT                                           (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_MASK                                      (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_SHIFT                                     (4)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT                                    (Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_MASK                               (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_SHIFT                              (11)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_SF_CNT                                             (Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_SF_CNT_MASK                                        (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_STS_SNAPSHOT_IPMAC_FREERUN_SF_CNT_SHIFT                                       (26)


#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL                                                                               (GLOBAL2_REG_BASE + 0x390)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_DEFAULT                                                                       0x0
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_BLE_BB_CNTR                                                 (Bit0)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_IPM_CNTR                                                    (Bit1)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER0                                                  (Bit2)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER1                                                  (Bit3)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER2                                                  (Bit4)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER3                                                  (Bit5)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER4                                                  (Bit6)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER5                                                  (Bit7)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_IPM_TS                                                      (Bit8)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_BLE_TS                                                      (Bit9)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_SYSTICK                                                     (Bit10)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_THH                                                         (Bit11)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_THM                                                         (Bit12)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_THL                                                         (Bit13)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_FR_IPM_CNT                                                  (Bit14)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER_ADD_0                                             (Bit15)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER_ADD_1                                             (Bit16)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER_ADD_2                                             (Bit17)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_PD1_TIMER_ADD_3                                             (Bit18)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_AON_TIMER_0                                                 (Bit20)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_AON_TIMER_1                                                 (Bit21)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_AON_TIMER_2                                                 (Bit22)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_AON_TIMER_3                                                 (Bit23)
#define GLOBAL2_REG_SNAPSHOT_CAP0_EN_CTRL_CTL_CAP0_SNAPSHOT_AON_TIMER_WDT                                               (Bit24)


#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL                                                                               (GLOBAL2_REG_BASE + 0x394)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_DEFAULT                                                                       0x0
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_BLE_BB_CNTR                                                 (Bit0)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_IPM_CNTR                                                    (Bit1)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER0                                                  (Bit2)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER1                                                  (Bit3)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER2                                                  (Bit4)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER3                                                  (Bit5)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER4                                                  (Bit6)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER5                                                  (Bit7)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_IPM_TS                                                      (Bit8)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_BLE_TS                                                      (Bit9)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_SYSTICK                                                     (Bit10)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_THH                                                         (Bit11)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_THM                                                         (Bit12)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_THL                                                         (Bit13)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_FR_IPM_CNT                                                  (Bit14)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER_ADD_0                                             (Bit15)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER_ADD_1                                             (Bit16)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER_ADD_2                                             (Bit17)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_PD1_TIMER_ADD_3                                             (Bit18)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_AON_TIMER_0                                                 (Bit20)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_AON_TIMER_1                                                 (Bit21)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_AON_TIMER_2                                                 (Bit22)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_AON_TIMER_3                                                 (Bit23)
#define GLOBAL2_REG_SNAPSHOT_CAP1_EN_CTRL_CTL_CAP1_SNAPSHOT_AON_TIMER_WDT                                               (Bit24)


#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL                                                                           (GLOBAL2_REG_BASE + 0x398)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_DEFAULT                                                                   0x0
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_BLE_BB_CNTR                                         (Bit0)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_IPM_CNTR                                            (Bit1)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER0                                          (Bit2)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER1                                          (Bit3)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER2                                          (Bit4)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER3                                          (Bit5)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER4                                          (Bit6)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER5                                          (Bit7)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_IPM_TS                                              (Bit8)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_BLE_TS                                              (Bit9)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_SYSTICK                                             (Bit10)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_THH                                                 (Bit11)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_THM                                                 (Bit12)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_THL                                                 (Bit13)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_FR_IPM_CNT                                          (Bit14)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER_ADD_0                                     (Bit15)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER_ADD_1                                     (Bit16)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER_ADD_2                                     (Bit17)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_PD1_TIMER_ADD_3                                     (Bit18)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_AON_TIMER_0                                         (Bit20)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_AON_TIMER_1                                         (Bit21)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_AON_TIMER_2                                         (Bit22)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_AON_TIMER_3                                         (Bit23)
#define GLOBAL2_REG_SNAPSHOT_ADD_CAP0_EN_CTRL_CTL_ADD_CAP0_SNAPSHOT_AON_TIMER_WDT                                       (Bit24)


#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0                                                                          (GLOBAL2_REG_BASE + 0x3a0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_DEFAULT                                                                  0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_US_CNT                                   (Bit0+Bit1+Bit2+Bit3)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_US_CNT_MASK                              (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_US_CNT_SHIFT                             (0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_FINE_CNT                                 (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_MASK                            (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_SHIFT                           (4)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT                          (Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_MASK                     (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_SHIFT                    (11)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_CNT                                   (Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_CNT_MASK                              (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP0_STS_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_CNT_SHIFT                             (26)


#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1                                                                          (GLOBAL2_REG_BASE + 0x3a4)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_DEFAULT                                                                  0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_US_CNT                                   (Bit0+Bit1+Bit2+Bit3)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_US_CNT_MASK                              (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_US_CNT_SHIFT                             (0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_FINE_CNT                                 (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_MASK                            (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_SHIFT                           (4)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT                          (Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_MASK                     (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_SHIFT                    (11)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_SF_CNT                                   (Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_SF_CNT_MASK                              (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_CAP1_STS_CAP1_SNAPSHOT_IPMAC_FREERUN_SF_CNT_SHIFT                             (26)


#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0                                                                      (GLOBAL2_REG_BASE + 0x3a8)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_DEFAULT                                                              0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_US_CNT                           (Bit0+Bit1+Bit2+Bit3)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_US_CNT_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_US_CNT_SHIFT                     (0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_FINE_CNT                         (Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_MASK                    (Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_FINE_CNT_SHIFT                   (4)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT                  (Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_MASK             (Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_DURATION_CNT_SHIFT            (11)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_CNT                           (Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_CNT_MASK                      (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_IPMAC_FR_ADD_CAP0_STS_ADD_CAP0_SNAPSHOT_IPMAC_FREERUN_SF_CNT_SHIFT                     (26)


#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL                                                                            (GLOBAL2_REG_BASE + 0x3c0)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_DEFAULT                                                                    0x3F3F3F
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_TX_EMIT_SEL                                                   (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_TX_EMIT_SEL_MASK                                              (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_TX_EMIT_SEL_SHIFT                                             (0)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_RX_EMIT_SEL                                                   (Bit8+Bit9+Bit10+Bit11+Bit12+Bit13)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_RX_EMIT_SEL_MASK                                              (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_RX_EMIT_SEL_SHIFT                                             (8)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_RX_IQ_CAP_FROM_EMIT_SEL                                             (Bit16+Bit17+Bit18+Bit19+Bit20+Bit21)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_RX_IQ_CAP_FROM_EMIT_SEL_MASK                                        (Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_RX_IQ_CAP_FROM_EMIT_SEL_SHIFT                                       (16)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_TX_EMIT_RETIME_SEL                                            (Bit24)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_FORCE_RX_EMIT_RETIME_SEL                                            (Bit25)
#define GLOBAL2_REG_FE_FORCE_TX_RX_EMIT_CTRL_CTL_FE_RX_IQ_CAP_EMIT_RETIME_SEL                                           (Bit26)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_0                                                                        (GLOBAL2_REG_BASE + 0x3d0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_0_DEFAULT                                                                0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_0_STS_SNAPSHOT_PD1_TIMER_ADD_0                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_0_STS_SNAPSHOT_PD1_TIMER_ADD_0_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_0_STS_SNAPSHOT_PD1_TIMER_ADD_0_SHIFT                                     (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_1                                                                        (GLOBAL2_REG_BASE + 0x3d4)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_1_DEFAULT                                                                0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_1_STS_SNAPSHOT_PD1_TIMER_ADD_1                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_1_STS_SNAPSHOT_PD1_TIMER_ADD_1_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_1_STS_SNAPSHOT_PD1_TIMER_ADD_1_SHIFT                                     (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_2                                                                        (GLOBAL2_REG_BASE + 0x3d8)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_2_DEFAULT                                                                0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_2_STS_SNAPSHOT_PD1_TIMER_ADD_2                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_2_STS_SNAPSHOT_PD1_TIMER_ADD_2_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_2_STS_SNAPSHOT_PD1_TIMER_ADD_2_SHIFT                                     (0)


#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_3                                                                        (GLOBAL2_REG_BASE + 0x3dc)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_3_DEFAULT                                                                0x0
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_3_STS_SNAPSHOT_PD1_TIMER_ADD_3                                           (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_3_STS_SNAPSHOT_PD1_TIMER_ADD_3_MASK                                      (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define GLOBAL2_REG_SNAPSHOT_VAL_PD1_TIMER_ADD_3_STS_SNAPSHOT_PD1_TIMER_ADD_3_SHIFT                                     (0)


#define GLOBAL2_REG_APB_MUX_2_INTR_STATUS                                                                               (GLOBAL2_REG_BASE + 0x400)
#define GLOBAL2_REG_APB_MUX_2_INTR_STATUS_DEFAULT                                                                       0x0
#define GLOBAL2_REG_APB_MUX_2_INTR_STATUS_IRQ                                                                           (Bit0+Bit1)
#define GLOBAL2_REG_APB_MUX_2_INTR_STATUS_IRQ_MASK                                                                      (Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_2_INTR_STATUS_IRQ_SHIFT                                                                     (0)


#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_STATUS                                                                          (GLOBAL2_REG_BASE + 0x404)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_STATUS_DEFAULT                                                                  0x0
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_STATUS_IRQ                                                                      (Bit0+Bit1)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_STATUS_IRQ_MASK                                                                 (Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_STATUS_IRQ_SHIFT                                                                (0)


#define GLOBAL2_REG_APB_MUX_2_INTR_CLEAR                                                                                (GLOBAL2_REG_BASE + 0x408)
#define GLOBAL2_REG_APB_MUX_2_INTR_CLEAR_DEFAULT                                                                        0x0
#define GLOBAL2_REG_APB_MUX_2_INTR_CLEAR_IRQ                                                                            (Bit0+Bit1)
#define GLOBAL2_REG_APB_MUX_2_INTR_CLEAR_IRQ_MASK                                                                       (Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_2_INTR_CLEAR_IRQ_SHIFT                                                                      (0)


#define GLOBAL2_REG_APB_MUX_2_INTR_SET                                                                                  (GLOBAL2_REG_BASE + 0x40c)
#define GLOBAL2_REG_APB_MUX_2_INTR_SET_DEFAULT                                                                          0x0
#define GLOBAL2_REG_APB_MUX_2_INTR_SET_IRQ                                                                              (Bit0+Bit1)
#define GLOBAL2_REG_APB_MUX_2_INTR_SET_IRQ_MASK                                                                         (Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_2_INTR_SET_IRQ_SHIFT                                                                        (0)


#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_SET                                                                             (GLOBAL2_REG_BASE + 0x410)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_SET_DEFAULT                                                                     0x0
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_SET_IRQ                                                                         (Bit0+Bit1)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_SET_IRQ_MASK                                                                    (Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_SET_IRQ_SHIFT                                                                   (0)


#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_CLEAR                                                                           (GLOBAL2_REG_BASE + 0x414)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_CLEAR_DEFAULT                                                                   0x0
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_CLEAR_IRQ                                                                       (Bit0+Bit1)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_CLEAR_IRQ_MASK                                                                  (Bit1+Bit0)
#define GLOBAL2_REG_APB_MUX_2_INTR_MASK_CLEAR_IRQ_SHIFT                                                                 (0)


#endif // _GLOBAL2_REG_DEFINES_H

