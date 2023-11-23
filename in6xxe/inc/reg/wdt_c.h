#ifndef _WDT_DEFINES_H
#define _WDT_DEFINES_H
/* **************************** */
#define WDT_CONTROL_REGISTER                                                          (WDT_BASE + 0x0)
#define WDT_CONTROL_REGISTER_DEFAULT                                                  0x0
#define WDT_CONTROL_REGISTER_WDT_EN                                                   (Bit0)
#define WDT_CONTROL_REGISTER_RMOD                                                     (Bit1)
#define WDT_CONTROL_REGISTER_RPL                                                      (Bit2+Bit3+Bit4)
#define WDT_CONTROL_REGISTER_RPL_MASK                                                 (Bit2+Bit1+Bit0)
#define WDT_CONTROL_REGISTER_RPL_SHIFT                                                (2)
#define WDT_CONTROL_REGISTER_NONAME                                                   (Bit5)


#define WDT_TIMEOUT_RANGE_REGISTER                                                    (WDT_BASE + 0x4)
#define WDT_TIMEOUT_RANGE_REGISTER_DEFAULT                                            0x0
#define WDT_TIMEOUT_RANGE_REGISTER_TOP                                                (Bit0+Bit1+Bit2+Bit3)
#define WDT_TIMEOUT_RANGE_REGISTER_TOP_MASK                                           (Bit3+Bit2+Bit1+Bit0)
#define WDT_TIMEOUT_RANGE_REGISTER_TOP_SHIFT                                          (0)
#define WDT_TIMEOUT_RANGE_REGISTER_TOP_INIT                                           (Bit4+Bit5+Bit6+Bit7)
#define WDT_TIMEOUT_RANGE_REGISTER_TOP_INIT_MASK                                      (Bit3+Bit2+Bit1+Bit0)
#define WDT_TIMEOUT_RANGE_REGISTER_TOP_INIT_SHIFT                                     (4)


#define WDT_CURRENT_COUNTER_VALUE_REGISTER                                            (WDT_BASE + 0x8)
#define WDT_CURRENT_COUNTER_VALUE_REGISTER_DEFAULT                                    0x0
#define WDT_CURRENT_COUNTER_VALUE_REGISTER_CURRENT                                    (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define WDT_CURRENT_COUNTER_VALUE_REGISTER_CURRENT_MASK                               (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_CURRENT_COUNTER_VALUE_REGISTER_CURRENT_SHIFT                              (0)


#define WDT_COUNTER_RESTART_REGISTER                                                  (WDT_BASE + 0xc)
#define WDT_COUNTER_RESTART_REGISTER_DEFAULT                                          0x0
#define WDT_COUNTER_RESTART_REGISTER_COUNTER                                          (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7)
#define WDT_COUNTER_RESTART_REGISTER_COUNTER_MASK                                     (Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COUNTER_RESTART_REGISTER_COUNTER_SHIFT                                    (0)


#define WDT_INTERRUPT_STATUS_REGISTER                                                 (WDT_BASE + 0x10)
#define WDT_INTERRUPT_STATUS_REGISTER_DEFAULT                                         0x0


#define WDT_INTERRUPT_CLEAR_REGISTER                                                  (WDT_BASE + 0x14)
#define WDT_INTERRUPT_CLEAR_REGISTER_DEFAULT                                          0x0


#define WDT_COMPONENT_PARAMETERS_REGISTER_5                                           (WDT_BASE + 0xe4)
#define WDT_COMPONENT_PARAMETERS_REGISTER_5_DEFAULT                                   0x0
#define WDT_COMPONENT_PARAMETERS_REGISTER_5_CP_WDT_USER_TOP_MAX                       (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define WDT_COMPONENT_PARAMETERS_REGISTER_5_CP_WDT_USER_TOP_MAX_MASK                  (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_5_CP_WDT_USER_TOP_MAX_SHIFT                 (0)


#define WDT_COMPONENT_PARAMETERS_REGISTER_4                                           (WDT_BASE + 0xe8)
#define WDT_COMPONENT_PARAMETERS_REGISTER_4_DEFAULT                                   0x0
#define WDT_COMPONENT_PARAMETERS_REGISTER_4_CP_WDT_USER_TOP_INIT_MAX                  (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define WDT_COMPONENT_PARAMETERS_REGISTER_4_CP_WDT_USER_TOP_INIT_MAX_MASK             (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_4_CP_WDT_USER_TOP_INIT_MAX_SHIFT            (0)


#define WDT_COMPONENT_PARAMETERS_REGISTER_3                                           (WDT_BASE + 0xec)
#define WDT_COMPONENT_PARAMETERS_REGISTER_3_DEFAULT                                   0x0
#define WDT_COMPONENT_PARAMETERS_REGISTER_3_CD_WDT_TOP_RST                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define WDT_COMPONENT_PARAMETERS_REGISTER_3_CD_WDT_TOP_RST_MASK                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_3_CD_WDT_TOP_RST_SHIFT                      (0)


#define WDT_COMPONENT_PARAMETERS_REGISTER_2                                           (WDT_BASE + 0xf0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_2_DEFAULT                                   0x0
#define WDT_COMPONENT_PARAMETERS_REGISTER_2_CP_WDT_CNT_RST                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define WDT_COMPONENT_PARAMETERS_REGISTER_2_CP_WDT_CNT_RST_MASK                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_2_CP_WDT_CNT_RST_SHIFT                      (0)


#define WDT_COMPONENT_PARAMETERS_REGISTER_1                                           (WDT_BASE + 0xf4)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_DEFAULT                                   0x0
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_ALWAYS_EN                          (Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_RMOD                          (Bit1)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DUAL_TOP                           (Bit2)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_HC_RMOD                            (Bit3)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_HC_RPL                             (Bit4)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_HC_TOP                             (Bit5)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_USE_FIX_TOP                        (Bit6)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_PAUSE                              (Bit7)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_APB_DATA_WIDTH                     (Bit8+Bit9)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_APB_DATA_WIDTH_MASK                (Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_APB_DATA_WIDTH_SHIFT               (8)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_RPL                           (Bit10+Bit11+Bit12)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_RPL_MASK                      (Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_RPL_SHIFT                     (10)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_TOP                           (Bit16+Bit17+Bit18+Bit19)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_TOP_MASK                      (Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_TOP_SHIFT                     (16)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_TOP_INIT                      (Bit20+Bit21+Bit22+Bit23)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_TOP_INIT_MASK                 (Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_DFLT_TOP_INIT_SHIFT                (20)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_CNT_WIDTH                          (Bit24+Bit25+Bit26+Bit27+Bit28)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_CNT_WIDTH_MASK                     (Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_PARAMETERS_REGISTER_1_CP_WDT_CNT_WIDTH_SHIFT                    (24)


#define WDT_COMPONENT_VERSION_REGISTER                                                (WDT_BASE + 0xf8)
#define WDT_COMPONENT_VERSION_REGISTER_DEFAULT                                        0x0
#define WDT_COMPONENT_VERSION_REGISTER_WDT                                            (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define WDT_COMPONENT_VERSION_REGISTER_WDT_MASK                                       (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_VERSION_REGISTER_WDT_SHIFT                                      (0)


#define WDT_COMPONENT_TYPE_REGISTER                                                   (WDT_BASE + 0xfc)
#define WDT_COMPONENT_TYPE_REGISTER_DEFAULT                                           0x0
#define WDT_COMPONENT_TYPE_REGISTER_COMPONENT                                         (Bit0+Bit1+Bit2+Bit3+Bit4+Bit5+Bit6+Bit7+Bit8+Bit9+Bit10+Bit11+Bit12+Bit13+Bit14+Bit15+Bit16+Bit17+Bit18+Bit19+Bit20+Bit21+Bit22+Bit23+Bit24+Bit25+Bit26+Bit27+Bit28+Bit29+Bit30+Bit31)
#define WDT_COMPONENT_TYPE_REGISTER_COMPONENT_MASK                                    (Bit31+Bit30+Bit29+Bit28+Bit27+Bit26+Bit25+Bit24+Bit23+Bit22+Bit21+Bit20+Bit19+Bit18+Bit17+Bit16+Bit15+Bit14+Bit13+Bit12+Bit11+Bit10+Bit9+Bit8+Bit7+Bit6+Bit5+Bit4+Bit3+Bit2+Bit1+Bit0)
#define WDT_COMPONENT_TYPE_REGISTER_COMPONENT_SHIFT                                   (0)


#endif // _WDT_DEFINES_H

