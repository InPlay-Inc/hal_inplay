/**
 ****************************************************************************************
 *
 * @file hal_clk.h
 *
 * @brief HAL clock  
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef HAL_CLK_H
#define HAL_CLK_H

/**
 ****************************************************************************************
 * @defgroup HAL_CLK Platform clock configuration  
 * @ingroup HAL
 * @brief  HAL_CLK
 * @{
 ****************************************************************************************
 */

#include "in_mmap.h"
#include "in_compile.h"

/*
 * Enumerations
 ****************************************************************************************
 */

/// Clock D0 domain divider
enum clk_d0_div {
	/// Divided by 1 of 32MXO/32MRC.  This is default.  
	CLK_D0_DIV1 = 1,
	/// Divided by 2 of 32MXO/32MRC.  
	CLK_D0_DIV2= 0,
 };

/// Clock D1 domain divider
enum clk_d1_div {
	/// Divided by 2 of XOX2/XO/32MRC. This is default
	CLK_D1_DIV2 = 1,
	/// Divided by 4 of XOX2/XO/32MRC
	CLK_D1_DIV4 = 2,
	/// Divided by 8 of XOX2/XO/32MRC
	CLK_D1_DIV8 = 3,
};

/// Clock D2 domain divider
enum clk_d2_div {
	/// Divided by 1 of XO/32MRC
	CLK_D2_DIV1 = 0,
	/// Divided by 2 of XO/32MRC. This is default.
	CLK_D2_DIV2 = 1,
	/// Divided by 4 of XO/32MRC
	CLK_D2_DIV4 = 3,
};

/// Timer clock 1 divider
enum clk_tim_div {
	/// Divided by 4 of XO/32MRC
	CLK_TIM_DIV4 = 1,
	/// Divided by 8 of XO/32MRC
	CLK_TIM_DIV8 = 2,
	/// Divided by 2 of XO/32MRC
	CLK_TIM_DIV2 = 3, 
};

/// Audio speaker and SD clock mux
enum clk_sdm_mux {
	/// I2S master clock generated from integer divider
	CLK_I2S_MSTR_SCLK,
	/// I2S slave clock from PAD
	CLK_I2S_SLV_SCLK_PAD,
	/// PDM clock
	CLK_PDM,
};

/// Efuse clock divider
enum clk_efuse_div {
	/// Divided by 4 of XO/32MRC. 
	CLK_EFUSE_DIV4 = 0,
	/// Divided by 8 of XO/32MRC. This is default
	CLK_EFUSE_DIV8, 
};

/// share memory clock divider
enum clk_smem_div {
	/// Divided by 1 of XO/32MRC.
	CLK_SMEM_DIV1 = 0,
	/// Divided by 2 of XO/32MRC. This is default.
	CLK_SMEM_DIV2 = 1,
	/// Divided by 4 of XO/32MRC.
	CLK_SMEM_DIV4 = 3,
	/// Divided by 8 of XO/32MRC.
	CLK_SMEM_DIV8 = 7,
};

/// QSPI serial clock divider
enum clk_qspi_div {
	/// Divided by 1 of XO/32MRC.
	CLK_QSPI_DIV1 = 0,
	/// Divided by 2 of XO/32MRC. This is default.
	CLK_QSPI_DIV2 = 1,
	/// Divided by 4 of XO/32MRC.
	CLK_QSPI_DIV4 = 3,
	/// Divided by 8 of XO/32MRC.
	CLK_QSPI_DIV8 = 7,
};

/// systick clock divider
enum clk_systick_div {
	/// Divided by 4 of XO/32MRC. This is default.
	CLK_SYSTICK_DIV4 = 1,
	/// Divided by 8 of XO/32MRC. 
	CLK_SYSTICK_DIV8 = 2,
	/// Divided by 16 of XO/32MRC.
	CLK_SYSTICK_DIV16 = 3,
};


/// Error return code
enum clk_error {
	/// No error
	CLK_ERR_NO_ERROR = 0,
	/// Invalid input paramters.
	CLK_ERR_INVALID_PARAM = -1,
};

/*
 * Inline Functions
 ****************************************************************************************
 */
static INLINE void clk_delay(uint32_t us)
{
	uint32_t reg = RD_WORD(D2_REG_CLK_CTRL);	
	if (!(reg & D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XOX2_OR_XO)) {	// 64
		us *= 2;
	}
	reg = (RD_WORD(GLOBAL_REG_CLK_CTRL_1) >> GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK_SHIFT) & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK_MASK;

	if (reg & 2) 
		us >>= 2;		
	else if (reg & 1)
		us >>= 1;
	us >>= 1;//Need div 2 here
	if (us == 0)
		us = 1;

	for (uint32_t k = 0; k < (us * 6); k++)
		__nop() ;
}

static INLINE void clk_xo_ps_opt(uint32_t stable_time)
{
	WR_WORD(AON_PS_REGS_DCDC_EN_DELAY_CTRL, 0x4);
	WR_WORD(AON_PS_REGS_ON_DELAY_0_CTRL, stable_time);
	WR_WORD(AON_PS_REGS_ON_DELAY_1_CTRL, 0x14020018);
	WR_WORD(AON_PS_REGS_XO_EN_DELAY_CTRL, 0x402);
	WR_WORD(AON_PS_REGS_OFF_DELAY_0_CTRL, 0x2010000);
	WR_WORD(AON_PS_REGS_OFF_DELAY_1_CTRL, 0x3040002);
}

static INLINE void clk_xo_stage_delay(uint32_t stage0_delay, uint32_t stage1_delay)
{
	uint32_t reg = RD_WORD(AON_REG_XO_EN_STAGE_CTRL);
	reg &= ~(AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION|AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION);
	reg |= (stage0_delay & AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION_MASK) << AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE0_DURATION_SHIFT;
	reg |= (stage1_delay & AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION_MASK) << AON_REG_XO_EN_STAGE_CTRL_CTL_XO_STAGE1_DURATION_SHIFT;
	WR_WORD(AON_REG_XO_EN_STAGE_CTRL, reg);
}

static INLINE void clk_xo_delay(uint32_t cycles)
{
	WR_WORD(AON_PS_REGS_ON_DELAY_0_CTRL, (cycles & AON_PS_REGS_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_PD_DOO_MASK));	
}

static INLINE void clk_xo_cap(uint32_t cap)
{
	uint32_t reg = RD_WORD(AON_REG_XO_STAGE_1_REG);
	reg &= ~0xFF;
	reg |= (cap & 0xF) | ((cap & 0xF) << 4);
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg);	
}

static INLINE void clk_xo_gm(uint32_t gm)
{
	uint32_t reg = RD_WORD(AON_REG_XO_STAGE_1_REG);
	reg &= ~(0x1F << 8);
	reg |= (gm & 0x1F) << 8;
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg);	
}

static INLINE void clk_xo_x2(int en)
{
	//uint32_t reg = RD_WORD(AON_REG_XO_REG);
	uint32_t reg2 = RD_WORD(AON_REG_XO_STAGE_1_REG);
	if (en) {
		//reg |= (1 << 15);
		reg2 |= (1 << 15);
	} else {
		//reg &= ~(1 << 15);
		reg2 &= ~(1 << 15);
	}
	//WR_WORD(AON_REG_XO_REG, reg);
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg2);
}

static INLINE void clk_xo_2x_current(int en)
{
	uint32_t reg = RD_WORD(AON_REG_XO_STAGE_1_REG);
	if (en) {
		reg |= (1 << 16);
	} else {
		reg &= ~(1 << 16);
	}
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg);
}

static INLINE void clk_xo_amp(uint32_t target)
{
	uint32_t reg = RD_WORD(AON_REG_XO_STAGE_1_REG);
	reg &= ~(0x7 << 19);
	reg |= (target & 0x7) << 19;
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg);
}

static INLINE void clk_xo_peak_det(int en)
{
	uint32_t reg = RD_WORD(AON_REG_XO_STAGE_1_REG);
	if (en) {
		reg |= (1 << 24);
	} else {
		reg &= ~(1 << 24);
	}
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg);
}

static INLINE uint32_t clk_xo_status(void)
{
	return (RD_WORD(RFTRX_REG_XO_STATUS));
}

static INLINE void clk_root_rc_32mhz(void)
{

	uint32_t clk_enable_2, rc_clk_sel, rftrx;
	/// enable RC
	clk_enable_2 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);

	clk_enable_2 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_32M_RC_EN;
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);
	RD_WORD(GLOBAL_REG_CLK_ENABLE_2); //Read back to add some  delay here
	

	/// select RC as root clock
	rc_clk_sel = RD_WORD(D2_REG_RC_CLOCK_SEL);

	rc_clk_sel &= ~D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC;
	WR_WORD(D2_REG_RC_CLOCK_SEL, rc_clk_sel);
	RD_WORD(D2_REG_RC_CLOCK_SEL);

	/// disable XO, XO_X2, CPLL, CPLL/2
	clk_enable_2 &= ~(GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN|
									GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_64MXO_EN|
										GLOBAL_REG_CLK_ENABLE_2_CTL_TRX_CPLL_TO_DIGI_EN|
											GLOBAL_REG_CLK_ENABLE_2_CTL_TRX_CPLL_TO_DIGI_DIV2_EN);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	rftrx=RD_WORD(RFTRX_REG_RFTRX_MISC_CTRL);

	rftrx &=~(RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_X2_TO_DIGI_EN|RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN);
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL,rftrx);


}

static INLINE void clk_root_xo_64mhz(void)
{
	uint32_t rftrx_misc_ctrl, clk_enable_2, clk_ctrl, rc_clk_sel;

	/// Clock enable 64M root clock
	clk_enable_2 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	clk_enable_2 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_64MXO_EN;
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	/// enable XO double clock 
	rftrx_misc_ctrl = RD_WORD(RFTRX_REG_RFTRX_MISC_CTRL);
	rftrx_misc_ctrl |= RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_X2_TO_DIGI_EN;
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);
	RD_WORD(GLOBAL_REG_CLK_ENABLE_2);//Read back to add some  delay here
	//clk_delay(10);

	/// select 64M root clock
	clk_ctrl = RD_WORD(D2_REG_CLK_CTRL);
	clk_ctrl &= ~D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XOX2_OR_XO;
	WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);

	/// select XO/XOX2 as root clock
	rc_clk_sel = RD_WORD(D2_REG_RC_CLOCK_SEL);
	rc_clk_sel |= D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC;
	WR_WORD(D2_REG_RC_CLOCK_SEL, rc_clk_sel);

	/// select XO
	clk_ctrl &= ~D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL;
	WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);

	/// Disable XO 32M, RC, CPLL, CPLL/2
	clk_enable_2 &= ~(GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_32M_RC_EN|
									GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN|
										GLOBAL_REG_CLK_ENABLE_2_CTL_TRX_CPLL_TO_DIGI_EN|
											GLOBAL_REG_CLK_ENABLE_2_CTL_TRX_CPLL_TO_DIGI_DIV2_EN);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	/// Disable 
	rftrx_misc_ctrl &= ~RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN;
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);

}

static INLINE void clk_root_xo_32mhz(int cold)
{
	uint32_t rftrx_misc_ctrl, clk_enable_2, clk_ctrl, rc_clk_sel ;

	/// enable 32M root clock
	clk_enable_2 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	if (cold) {
		clk_enable_2 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN;
		WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);
	}

	/// enable XO clock to digital 
	rftrx_misc_ctrl = RD_WORD(RFTRX_REG_RFTRX_MISC_CTRL);
	if (cold) {
		rftrx_misc_ctrl |= RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN;
		WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);
		RD_WORD(GLOBAL_REG_CLK_ENABLE_2);//Read back to add some  delay here
	}
	//clk_delay(10);
	// select 32M root clock
	if (cold) {
		clk_ctrl = RD_WORD(D2_REG_CLK_CTRL);
		clk_ctrl |= D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XOX2_OR_XO;
		WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);
	}

	/// select XO/XOX2 as root clock
	rc_clk_sel = RD_WORD(D2_REG_RC_CLOCK_SEL);
	rc_clk_sel |= D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC;
	WR_WORD(D2_REG_RC_CLOCK_SEL, rc_clk_sel);

	/// select XO
	if (cold) {
		clk_ctrl &= ~D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL;
		WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);
	}

	// Disable XO_X2 & RC
	clk_enable_2 &= ~(GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_32M_RC_EN|
									GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_64MXO_EN);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	/// Disable 
	rftrx_misc_ctrl &= ~RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_X2_TO_DIGI_EN;
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);

}

static INLINE void clk_root_cpll_32mhz(void)
{
	/// Review:  TODO...
	uint32_t rftrx_misc_ctrl, clk_enable_2, clk_ctrl, cpll_ctrl; 

	/// rftrx_misc_ctrl enable cpll clock to digital 
	rftrx_misc_ctrl = RD_WORD(RFTRX_REG_RFTRX_MISC_CTRL);
	rftrx_misc_ctrl |= RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_CPLL_TO_DIGI_EN;
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);
	
	/// enable CPLL
	cpll_ctrl = RD_WORD(AON_REG_CPLL_CTRL);	
	cpll_ctrl &= ~AON_REG_CPLL_CTRL_CTL_CPLL_FREQ_SEL;		// 64 Mhz
	cpll_ctrl |= AON_REG_CPLL_CTRL_CTL_CPLL_EN|AON_REG_CPLL_CTRL_CTL_BGR_EN;
	WR_WORD(AON_REG_CPLL_CTRL, cpll_ctrl);

	/// poll until cpll lock
	while (!(RD_WORD(GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS) & GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS_STS_CPLL_CTRL_CPLL_LOCKED)); 

	// clk_enable_2
	clk_enable_2 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	clk_enable_2 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_DIV2_CLK_EN;		// CPLL/2
	clk_enable_2 &= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_CLK_EN;		
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	// clk_ctrl
	clk_ctrl = D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_CPLL_OR_CPLL_DIV2;
	clk_ctrl |= D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL;
	WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);
	WR_WORD(D2_REG_RC_CLOCK_SEL, D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC);

	// Disable XO, XO_X2
	rftrx_misc_ctrl &= ~(RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_X2_TO_DIGI_EN|RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN);
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);

	// Disable XO, XO_X2 & RC
	clk_enable_2 &= ~(GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_32M_RC_EN|
									GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_64MXO_EN|
										GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

}

static INLINE void clk_root_cpll_64mhz(void)
{
	/// Review:  TODO...
	uint32_t rftrx_misc_ctrl, clk_enable_2, clk_ctrl, cpll_ctrl; 

	/// rftrx_misc_ctrl enable cpll clock to digital 
	rftrx_misc_ctrl = RD_WORD(RFTRX_REG_RFTRX_MISC_CTRL);
	rftrx_misc_ctrl |= RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_CPLL_TO_DIGI_EN;
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);
	
	/// enable CPLL
	cpll_ctrl = RD_WORD(AON_REG_CPLL_CTRL);
	cpll_ctrl &= ~AON_REG_CPLL_CTRL_CTL_CPLL_FREQ_SEL;
	cpll_ctrl |= AON_REG_CPLL_CTRL_CTL_CPLL_EN|AON_REG_CPLL_CTRL_CTL_BGR_EN;
	WR_WORD(AON_REG_CPLL_CTRL, cpll_ctrl);

	/// poll until cpp lock
	while (!(RD_WORD(GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS) & GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS_STS_CPLL_CTRL_CPLL_LOCKED)); 

	// clk_enable_2
	clk_enable_2 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	clk_enable_2 &= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_DIV2_CLK_EN;		// CPLL/2
	clk_enable_2 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_CLK_EN;		
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	// clk_ctrl
	clk_ctrl |= D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL;
	WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);
	WR_WORD(D2_REG_RC_CLOCK_SEL, D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC);

	// Disable XO, XO_X2
	rftrx_misc_ctrl &= ~(RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_X2_TO_DIGI_EN|RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN);
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);

	// Disable XO, XO_X2 & RC
	clk_enable_2 &= ~(GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_32M_RC_EN|
									GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_64MXO_EN|
										GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

}

static INLINE void clk_root_cpll_128mhz(void)
{
	/// Review:  TODO...
	uint32_t rftrx_misc_ctrl, clk_enable_2, clk_ctrl, cpll_ctrl; 

	/// rftrx_misc_ctrl enable cpll clock to digital 
	rftrx_misc_ctrl = RD_WORD(RFTRX_REG_RFTRX_MISC_CTRL);
	rftrx_misc_ctrl |= RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_CPLL_TO_DIGI_EN;
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);
	
	/// enable cpll
	cpll_ctrl = RD_WORD(AON_REG_CPLL_CTRL);
	cpll_ctrl |= AON_REG_CPLL_CTRL_CTL_CPLL_EN|AON_REG_CPLL_CTRL_CTL_BGR_EN|AON_REG_CPLL_CTRL_CTL_CPLL_FREQ_SEL;
	WR_WORD(AON_REG_CPLL_CTRL, cpll_ctrl);

	/// poll until cpll lock
	while (!(RD_WORD(GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS) & GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS_STS_CPLL_CTRL_CPLL_LOCKED)); 

	// clk_enable_2
	clk_enable_2 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	clk_enable_2 &= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_CLK_EN;		// CPLL
	clk_enable_2 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_DIV2_CLK_EN;		
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	// clk_ctrl
	clk_ctrl = D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_CPLL_OR_CPLL_DIV2;
	clk_ctrl |= D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL;
	WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);
	WR_WORD(D2_REG_RC_CLOCK_SEL, D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC);

	// Disable XO, XO_X2
	rftrx_misc_ctrl &= ~(RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_X2_TO_DIGI_EN|RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN);
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);

	// Disable XO, XO_X2 & RC
	clk_enable_2 &= ~(GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_32M_RC_EN|
									GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_64MXO_EN|
										GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN);
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

}

static INLINE void clk_root_cpll_resume(int freq_64mhz)
{
	uint32_t  clk_enable_2, clk_ctrl /*, cpll_ctrl, rc_clk_sel*/; 

	/// clk_enable_2, enable RC clock
	clk_root_rc_32mhz();

	/// poll until cpp lock
	while (!(RD_WORD(GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS) & GLOBAL_REG_CPLL_CTRL_XO_DETECT_STATUS_STS_CPLL_CTRL_CPLL_LOCKED)); 
	
	/// clk_enable_2
	clk_enable_2 &= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_ANA_CLK_32M_RC_EN;
	if (freq_64mhz) {
		clk_enable_2	|= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_CLK_EN;
		clk_enable_2	&= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_DIV2_CLK_EN;
	} else {
		clk_enable_2	|= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_DIV2_CLK_EN;
		clk_enable_2	&= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_CPLL_CLK_EN;
	}
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, clk_enable_2);

	// clk_ctrl
	if (!freq_64mhz) {
		clk_ctrl = D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_CPLL_OR_CPLL_DIV2;
	}
	clk_ctrl |= D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL;
	WR_WORD(D2_REG_CLK_CTRL, clk_ctrl);
	WR_WORD(D2_REG_RC_CLOCK_SEL, D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC);
}

static INLINE void clk_xo_to_digi_en(int en)
{
    uint32_t reg_EN2 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);

	if (en) {
		reg_EN2 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN;
	} else {
		reg_EN2 &= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN;
	}
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, reg_EN2);

	// rftrx_misc_ctrl
	uint32_t rftrx_misc_ctrl = RD_WORD(RFTRX_REG_RFTRX_MISC_CTRL);
	if (en) {
		rftrx_misc_ctrl |= RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN;		// XO
	} else {
		rftrx_misc_ctrl &= ~RFTRX_REG_RFTRX_MISC_CTRL_CTL_CLK_XO_TO_DIGI_EN;	
	}
	WR_WORD(RFTRX_REG_RFTRX_MISC_CTRL, rftrx_misc_ctrl);
}

static INLINE void clk_xo_on(int xo_32, uint8_t capacitor, uint8_t drive_strength)
{
	/// Switch to RC
	clk_root_rc_32mhz();

	/// XO cap and drive strength
	uint32_t reg_xo = RD_WORD(AON_REG_XO_STAGE_1_REG);
	reg_xo &= ~0x11FFF;
	reg_xo |= capacitor | (capacitor << 4) | (drive_strength << 8);
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg_xo);

	/// Review
#if 0
	reg_xo = RD_WORD(AON_REG_XO_STAGE_1_REG);
	reg_xo &= ~(1 << 16);
	WR_WORD(AON_REG_XO_STAGE_1_REG, reg_xo);
#endif

	clk_delay(200);

	/// Switch to XO
	if (xo_32) {
		clk_root_xo_32mhz(1);	// XO 32Mhz
	} else {
		clk_root_xo_64mhz();	// XO 64Mhz
	}
}

static INLINE void clk_rc_bypass(int bypass)
{
	uint32_t reg = RD_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL);
	if (bypass) {
		reg |= AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_EN;
		reg &= ~AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_VAL;
	} else {
		reg &= ~AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_EN;
		reg |= AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_VAL;
	}
	WR_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL, reg);
}

static INLINE void clk_rc_bypass_en(void)
{
	uint32_t reg = RD_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL);
	reg |= AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_EN;
	reg &= ~AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_VAL;
	WR_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL, reg);
}

static INLINE void clk_rc_bypass_dis(void)
{
	uint32_t reg = RD_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL);
	reg &= ~AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_EN;
	reg |= AON_PS_REGS_MISC_BYPASS_0_CTRL_CLK_32MHZ_RC_EN_VAL;
	WR_WORD(AON_PS_REGS_MISC_BYPASS_0_CTRL, reg);
}

static INLINE void clk_gated_hclk_en(void)
{
	WR_WORD(GLOBAL_REG_CLK_CTRL_2, (RD_WORD(GLOBAL_REG_CLK_CTRL_2)|GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_ALLOW_CM4_TO_GATE_HCLK));
}

static INLINE void clk_gated_hclk_dis(void)
{
	WR_WORD(GLOBAL_REG_CLK_CTRL_2, (RD_WORD(GLOBAL_REG_CLK_CTRL_2)&~GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_ALLOW_CM4_TO_GATE_HCLK));
}

static INLINE void clk_mux_set(int d0_mux, int d1_mux, int d2_mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);
	
	reg &= ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK;
	reg |= ((d2_mux & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK_MASK) << GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK_SHIFT); 
	reg &= ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS;
	reg |= ((d1_mux & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS_MASK) << GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS_SHIFT); 
	WR_WORD(GLOBAL_REG_CLK_CTRL_1, reg);

	reg = RD_WORD(D2_REG_CLK_CTRL);
	if (d0_mux)
		reg |= D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_D0_CLK;
	else
		reg &= ~D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_D0_CLK;
	WR_WORD(D2_REG_CLK_CTRL, reg);
}

static INLINE int clk_root_get(void)
{
	int is_64 = 0;
	uint32_t reg = RD_WORD(D2_REG_RC_CLOCK_SEL);		///rc_clk_sel

	if (reg & D2_REG_RC_CLOCK_SEL_CTL_CLK_CTRL_D2REG_SEL_XOCPLL_OR_32MRC) {
		reg = RD_WORD(D2_REG_CLK_CTRL);	/// clk_ctrl
		if (reg & D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XO_OR_CPLL) {
			/// CPLL
			uint32_t reg1 = RD_WORD(AON_REG_CPLL_CTRL);	/// cpll_ctrl 
			if (reg & D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_CPLL_OR_CPLL_DIV2) {	/// CPLL/2
				if (reg1& AON_REG_CPLL_CTRL_CTL_CPLL_FREQ_SEL) {		/// 128Mhz?
					is_64 = 1;
				} 
			} else {		/// CPLL
				if (reg1 & AON_REG_CPLL_CTRL_CTL_CPLL_FREQ_SEL) {	/// 128Mhz?
					is_64 = 0;		/// illegal
				} else {
					is_64 = 1;
				}
			}
		} else {
			/// XO
			if (!(reg & D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_XOX2_OR_XO)) {
				is_64 = 1;
			} 
		}		
	} 

	if (is_64)
		return 64000000;

	return 32000000;
}

static INLINE void clk_d0_mux(uint32_t mux)
{
	uint32_t reg = RD_WORD(D2_REG_CLK_CTRL);

	if (mux)
		reg |= D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_D0_CLK; 
	else
		reg &= ~D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_D0_CLK;
 
	WR_WORD(D2_REG_CLK_CTRL, reg);
}

static INLINE uint32_t clk_d0_mux_get(void)
{
	uint32_t reg = RD_WORD(D2_REG_CLK_CTRL);

	if (reg & D2_REG_CLK_CTRL_CTL_CLK_CTRL_D2REG_SEL_D0_CLK)
		return 1;

	return 0;
}

static INLINE void clk_d1_mux(uint32_t clk_div)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);

	reg &= ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS;
	reg |= ((clk_div & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS_MASK) << GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS_SHIFT); 

	WR_WORD(GLOBAL_REG_CLK_CTRL_1, reg);
}

static INLINE uint32_t clk_d1_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);

	return ((reg & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS) >> GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D1_DIV2_4_8_CLKS_SHIFT);
}

static INLINE void clk_d2_mux(uint32_t clk_div)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);

	reg &= ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK;
	reg |= ((clk_div & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK_MASK) << GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK_SHIFT); 

	WR_WORD(GLOBAL_REG_CLK_CTRL_1, reg);
}

static INLINE uint32_t clk_d2_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);

	return ((reg & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK) >> GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D2_CLK_SHIFT);
}

static INLINE uint32_t clk_d0_enable_1_get(void)
{
	return (RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1));
}

static INLINE void clk_d0_enable_1_set(uint32_t val)
{
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, val);
}

static INLINE uint32_t clk_d0_enable_2_get(void)
{
	return (RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2));
}

static INLINE void clk_d0_enable_2_set(uint32_t val)
{
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, val);
}

static INLINE uint32_t clk_enable_1_get(void)
{
	return (RD_WORD(GLOBAL_REG_CLK_ENABLE_1));
}

static INLINE void clk_enable_1_set(uint32_t val)
{
	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, val);
}

static INLINE uint32_t clk_enable_2_get(void)
{
	return (RD_WORD(GLOBAL_REG_CLK_ENABLE_2));
}

static INLINE void clk_enable_2_set(uint32_t val)
{
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, val);
}

static INLINE uint32_t clk_ctl_1_get(void)
{
	return (RD_WORD(GLOBAL_REG_CLK_CTRL_1));
}

static INLINE void clk_ctl_1_set(uint32_t val)
{
	WR_WORD(GLOBAL_REG_CLK_CTRL_1, val);
}

static INLINE uint32_t clk_ctl_2_get(void)
{
	return (RD_WORD(GLOBAL_REG_CLK_CTRL_2));
}

static INLINE void clk_ctl_2_set(uint32_t val)
{
	WR_WORD(GLOBAL_REG_CLK_CTRL_2, val);
}

static INLINE void clk_tmr0_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_MASK << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_SHIFT;
	reg &= ~(GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_EMIT_SHM_IF_CLK_SEL | GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_CAP_SHM_IF_CLK_SEL);
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_EMIT_SHM_IF_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_EMIT_SHM_IF_CLK_SEL_SHIFT;
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_CAP_SHM_IF_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_CAP_SHM_IF_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, reg);
}

static INLINE void clk_tmr1_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_MASK << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, reg);
}

static INLINE void clk_tmr2_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_MASK << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, reg);
}

static INLINE void clk_tmr3_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_MASK << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, reg);
}

static INLINE void clk_tmr4_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_MASK << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, reg);
}

static INLINE void clk_tmr5_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_MASK << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, reg);
}
static INLINE void clk_tmr6_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_SEL_MASK << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_SEL_MASK) << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, reg);
}
static INLINE void clk_tmr7_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_SEL_MASK << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_SEL_MASK) << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, reg);
}
static INLINE void clk_tmr8_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_SEL_MASK << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_SEL_MASK) << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, reg);
}
static INLINE void clk_tmr9_mux(int mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	reg &= ~(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_SEL_MASK << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_SEL_SHIFT);
	reg |= (mux & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_SEL_MASK) << GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_SEL_SHIFT;
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, reg);
}
static INLINE void clk_tmr_mux(int mux0, int mux1, int mux2, int mux3, int mux4, int mux5)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	reg |= ((mux0 & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_SHIFT)| 
				((mux1 & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_SHIFT)| 	
				((mux2 & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_SHIFT)| 	
				((mux3 & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_SHIFT)| 	
				((mux4 & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_SHIFT)| 	
				((mux5 & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_MASK) << GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_SHIFT); 	
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, reg);
}

static INLINE int clk_tmr0_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr1_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr2_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr3_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr4_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr5_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr6_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr7_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr8_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_SEL_MASK;
	return mux;
}

static INLINE int clk_tmr9_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL);
	int mux = (reg >> GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_SEL_SHIFT) & GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_SEL_MASK;
	return mux;
}

static INLINE uint32_t clk_tmr_mux_get(void)
{
	return (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL) & 0xFFF);
}

static INLINE void clk_tmr_mux_set(uint32_t mux)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, mux);
}

static INLINE void clk_slv_i2s_mux(int from_pad)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);

	if (from_pad) {
		reg |= GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D0_I2S_SLAVE_SCLK_FROM_PAD;
	} else {
		reg &= ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D0_I2S_SLAVE_SCLK_FROM_PAD;
	}

	WR_WORD(GLOBAL_REG_CLK_CTRL_1, reg);
}

static INLINE void clk_smem_mux(uint32_t clk_div)
{
	WR_WORD(GLOBAL_REG_CLK_CTRL_1, ((RD_WORD(GLOBAL_REG_CLK_CTRL_1) & ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_SHM_CLK) | ((clk_div & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_SHM_CLK_MASK) << GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_SHM_CLK_SHIFT) ));
}

static INLINE uint32_t clk_smem_mux_get(void)
{
	return ((RD_WORD(GLOBAL_REG_CLK_CTRL_1) & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_SHM_CLK) >> GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_SHM_CLK_SHIFT);
}

static INLINE void clk_mi2s_divider(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_I2S_INT_DIV_INPUT_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_I2S_INT_DIV_INPUT_CLK;
	}
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, reg);
}

static INLINE void clk_mi2s(uint32_t div)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_2);

	reg &= ~GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_INT_DIV_VALUE;
	reg |= ((div & GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_INT_DIV_VALUE_MASK) << GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_INT_DIV_VALUE_SHIFT);

	WR_WORD(GLOBAL_REG_CLK_CTRL_2, reg);
}

static INLINE void clk_qspi_mux(uint32_t div)
{
#if !CFG_FPGA
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_2);

	reg &= ~GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_SEL_SSIMAS0_CLK;
	reg |= ((div & GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_SEL_SSIMAS0_CLK_MASK) << GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_SEL_SSIMAS0_CLK_SHIFT);

	WR_WORD(GLOBAL_REG_CLK_CTRL_2, reg);
#endif
}

static INLINE uint32_t clk_qspi_mux_get(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_2);

	return ((reg & GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_SEL_SSIMAS0_CLK) >> GLOBAL_REG_CLK_CTRL_2_CTL_CLK_CTRL_2_SEL_SSIMAS0_CLK_SHIFT);
}

static INLINE void clk_efuse_mux(uint32_t div)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);

	if (div == CLK_EFUSE_DIV4) {
		reg &= ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_EFUSE_CLK;
	} else {
		reg |= GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_EFUSE_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_CTRL_1, reg);
}

static INLINE uint32_t clk_efuse_mux_get(void)
{
	return ((RD_WORD(GLOBAL_REG_CLK_CTRL_1) & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_EFUSE_CLK) ? 1 : 0 );
}

static INLINE void clk_kb_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_KEYBOARD_CLK_FREE|GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_KEYBOARD_CLK_GATED;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_KEYBOARD_TOP_PCLK;
	} else {
		reg &= ~(GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_KEYBOARD_CLK_FREE|GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_KEYBOARD_CLK_GATED);
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_KEYBOARD_TOP_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_hash_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SECURITY_CORE_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SECURITY_CORE_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
}

static INLINE void clk_ecc_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SECURITY_CORE_PCLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_FW_RAM_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_A_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_B_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_C_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_D_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SECURITY_CORE_PCLK;
		reg1 &= ~(GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_FW_RAM_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_A_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_B_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_C_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_D_CLK);
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_aes_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SECURITY_CORE_PCLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_FW_RAM_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_A_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_B_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_C_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_D_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SECURITY_CORE_PCLK;
		reg1 &= ~(GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_FW_RAM_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_A_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_B_CLK|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_C_CLK|
						GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_ECC_MEM_D_CLK);
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_mspi_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_SSI_MASTER1_SSI_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SSI_MASTER1_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_SSI_MASTER1_SSI_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SSI_MASTER1_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_sspi0_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_SSI_SLAVE0_SSI_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SSI_SLAVE0_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_SSI_SLAVE0_SSI_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SSI_SLAVE0_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_sspi1_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_SSI_SLAVE1_SSI_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SSI_SLAVE1_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_SSI_SLAVE1_SSI_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SSI_SLAVE1_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_intr_ctl_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_INTRCTRL_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_INTRCTRL_CLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
}

static INLINE void clk_wdt_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_WDT_TCLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_WDT_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_WDT_TCLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_WDT_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_i2c0_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2C_0_IC_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2C_0_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2C_0_IC_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2C_0_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_i2c1_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2C_1_IC_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2C_1_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2C_1_IC_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2C_1_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_efuse_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_EFUSE_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_EFUSECTRL_TOP_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_EFUSE_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_EFUSECTRL_TOP_PCLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_tmr_pclk_en(void)
{
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, (RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2)|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_TIMERS_0_PCLK));
}

static INLINE void clk_tmr0_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_ENABLE));
}

static INLINE void clk_tmr0_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_ENABLE));
}

static INLINE void clk_tmr0_emit_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_EMIT_ENABLE));
}

static INLINE void clk_tmr0_emit_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_EMIT_ENABLE));
}

static INLINE void clk_tmr0_capture_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_CAP_ENABLE));
}

static INLINE void clk_tmr0_capture_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_0_CLK_CAP_ENABLE));
}

static INLINE void clk_tmr0_smem_emit_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_EMIT_SHM_IF_ENABLE));
}

static INLINE void clk_tmr0_smem_emit_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_EMIT_SHM_IF_ENABLE));
}

static INLINE void clk_tmr0_smem_capture_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_CAP_SHM_IF_ENABLE));
}

static INLINE void clk_tmr0_smem_capture_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_CAP_SHM_IF_ENABLE));
}

static INLINE void clk_tmr1_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_ENABLE));
}

static INLINE void clk_tmr1_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_ENABLE));
}

static INLINE void clk_tmr1_emit_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_EMIT_ENABLE));
}

static INLINE void clk_tmr1_emit_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_EMIT_ENABLE));
}

static INLINE void clk_tmr1_capture_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_CAP_ENABLE));
}

static INLINE void clk_tmr1_capture_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_1_CLK_CAP_ENABLE));
}

static INLINE void clk_tmr2_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_ENABLE));
}

static INLINE void clk_tmr2_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_2_CLK_ENABLE));
}

static INLINE void clk_tmr3_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_ENABLE));
}

static INLINE void clk_tmr3_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_3_CLK_ENABLE));
}

static INLINE void clk_tmr4_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_ENABLE));
}

static INLINE void clk_tmr4_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_4_CLK_ENABLE));
}

static INLINE void clk_tmr5_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)|GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_ENABLE));
}

static INLINE void clk_tmr5_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_CLK_CTRL, (RD_WORD(GLOBAL_REG_TIMER_CLK_CTRL)&~GLOBAL_REG_TIMER_CLK_CTRL_CTL_PD1_TIMER_5_CLK_ENABLE));
}

static INLINE void clk_tmr6_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)|GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_ENABLE));
}

static INLINE void clk_tmr6_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)&~GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_ENABLE));
}

static INLINE void clk_tmr6_emit_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)|GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_EMIT_ENABLE));
}

static INLINE void clk_tmr6_emit_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)&~GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_EMIT_ENABLE));
}

static INLINE void clk_tmr6_capture_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)|GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_CAP_ENABLE));
}

static INLINE void clk_tmr6_capture_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)&~GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_0_CLK_CAP_ENABLE));
}

static INLINE void clk_tmr7_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)|GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_ENABLE));
}

static INLINE void clk_tmr7_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)&~GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_1_CLK_ENABLE));
}

static INLINE void clk_tmr8_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)|GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_ENABLE));
}

static INLINE void clk_tmr8_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)&~GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_2_CLK_ENABLE));
}

static INLINE void clk_tmr9_en(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)|GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_ENABLE));
}

static INLINE void clk_tmr9_dis(void)
{
	WR_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL, (RD_WORD(GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL)&~GLOBAL_REG_TIMER_ADDITIONAL_CLK_RST_CTRL_CTL_PD1_TIMER_ADD_3_CLK_ENABLE));
}
static INLINE void clk_pwm_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_PWM0_PCLK;
	} else {
		reg &= ~	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_PWM0_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
}

static INLINE void clk_counter_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
    uint32_t reg1 = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_COUNTER_TOP_PCLK;
        reg1 |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_COUNTER_CLKRSTGEN_32M_CLK|
                GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_COUNTER_CLKRSTGEN_16M_CLK|
                GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_COUNTER_CLKRSTGEN_8M_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_COUNTER_TOP_PCLK;
        reg1 &= ~(GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_COUNTER_CLKRSTGEN_32M_CLK|
                GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_COUNTER_CLKRSTGEN_16M_CLK|
                GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ENABLE_COUNTER_CLKRSTGEN_8M_CLK);
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
    WR_WORD(GLOBAL_REG_CLK_ENABLE_2, reg1);
}

static INLINE void clk_audio_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_64M_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_AUDIO_TOP_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_64M_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_AUDIO_TOP_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_audio_enc_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_AURX_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_AURX_CLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
}

static INLINE void clk_audio_dec_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_AUTX_CLK|
						GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_SPK_CLK|
								GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_SD_CLK;	// Sigma Delta;
	} else {
		reg &= ~(GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_AUTX_CLK|
						GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_SPK_CLK	|
							GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_SD_CLK);
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
}

static INLINE void clk_audio_resample(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_AUTX_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_AUDIO_AUTX_CLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
}


static INLINE void clk_audio_sdm_mux(uint32_t mux)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_CTRL_1);

	reg &= ~GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D0_AUDIO_SPK_SD_CLK;
	reg |= ((mux & GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D0_AUDIO_SPK_SD_CLK_MASK) << GLOBAL_REG_CLK_CTRL_1_CTL_CLK_CTRL_1_SEL_D0_AUDIO_SPK_SD_CLK_SHIFT);

	WR_WORD(GLOBAL_REG_CLK_CTRL_1, reg);
}

static INLINE void clk_sadc_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SADC_CLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SADCCTRL_TOP_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SADC_CLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SADCCTRL_TOP_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_mi2s_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2S_MASTER_SCLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2S_MASTER_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2S_MASTER_SCLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2S_MASTER_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_si2s_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	uint32_t reg1 = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2S_SLAVE_SCLK;
		reg1 |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2S_SLAVE_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_CPU_I_I2S_SLAVE_SCLK;
		reg1 &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_I2S_SLAVE_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg1);
}

static INLINE void clk_quaddec_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_CLK_QUADDEC|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_QUADDEC_TOP_PCLK;
	} else {
		reg &= ~(GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_CLK_QUADDEC|GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_QUADDEC_TOP_PCLK);
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_dma_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_DMAC_REQ_MUX_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_DMAC_REQ_MUX_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_uart0_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_UART_0_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_UART_0_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_uart1_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en) {
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_UART_1_PCLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_UART_1_PCLK;
	}

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_sm_0_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en)
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_0_CLK;
	else
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_0_CLK;

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_sm_1_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en)
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_1_CLK;
	else
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_1_CLK;

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_sm_2_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en)
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_2_CLK;
	else
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_2_CLK;
		
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_sm_3_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en)
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_3_CLK;
	else
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_3_CLK;

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_sm_4_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);

	if (en)
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_4_CLK;
	else
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_SHM_MEM_4_CLK;

	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);
}

static INLINE void clk_sm_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_SHAREDMEM_TOP_CLK|GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_AHB2SHM_HCLK;
	} else {
		reg &= ~(GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_SHAREDMEM_TOP_CLK|GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_AHB2SHM_HCLK);
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_ble_en(int en)
{
#if 0
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);
	if (en) {
		reg |= 	GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_RXTX_SEQ_REGS_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_RXTX_SEQ_REGS_CLK;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);

	reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_2);
	if (en) {
		reg |= GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_CLK_EM;
	} else {
		reg &= ~GLOBAL_REG_CLKD0_ENABLE_2_CTL_CLKD0_ENABLE_2_CLK_EM;
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_2, reg);


	reg = RD_WORD(GLOBAL_REG_CLKD1_ENABLE_1);
	if (en) {
		reg |= GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_AHBTRG_TOP_PCLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_MDM_CORE_CLK|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_MDM_PCLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_CLK_ANT|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_BB_MASTER1_GCLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_CLK_PLLTRIG_MEM|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_PCLK_PLLTRIG|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_PLLTRIG|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_CPU_I_CLK_AHBTRG|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_TRXSEQ_I_MAIN_CLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_TRXSEQ_I_MAIN_CLK_FREE|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_TRXSEQ_I_CNTR_CLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_BLE_FE_PCLK;
	} else {
		reg &= ~(GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_AHBTRG_TOP_PCLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_MDM_CORE_CLK|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_MDM_PCLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_CLK_ANT|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_1_BLE_I_BB_MASTER1_GCLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_CLK_PLLTRIG_MEM|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_PCLK_PLLTRIG|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_PLLTRIG|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_CPU_I_CLK_AHBTRG|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_TRXSEQ_I_MAIN_CLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_TRXSEQ_I_MAIN_CLK_FREE|GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_TRXSEQ_I_CNTR_CLK|
					GLOBAL_REG_CLKD1_ENABLE_1_CTL_CLKD1_ENABLE_BLE_FE_PCLK);
	}
	WR_WORD(GLOBAL_REG_CLKD1_ENABLE_1, reg);

	reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);
	if (en)
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_CLK_EM2SHM;
	else
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_CLK_EM2SHM;
	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
#endif
}

static INLINE void clk_calib_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_2);
	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN_FOR_CALIB;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_2_CTL_CLK_ENABLE_2_ROOT_XO_TO_DIGI_CLK_EN_FOR_CALIB;
	}
	WR_WORD(GLOBAL_REG_CLK_ENABLE_2, reg);
}

static INLINE void clk_ipm_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_IPM_FREE;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_IPM_FREE;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_trig_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL);
	uint32_t reg2 = RD_WORD(GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_2);
	uint32_t reg_clk_ctrl4 = RD_WORD(GLOBAL_REG_CLK_CTRL_4);
	if (en) {
		reg |= GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_TRIGHDLR_PCLK_EN|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_TRIGHDLR_CLK_FREE_EN;
				

		reg	&= ~(GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_CLK_FREE|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_SHM_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_MEM_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_HP_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_MP_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_LP_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_HP_TIMER_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_MP_TIMER_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_LP_TIMER_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_HCLK);
		reg2 &= ~GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_2_CTL_WFI_GATE_TRIGHDLR_APB_MSTR_PCLK;
		reg_clk_ctrl4 &= ~(GLOBAL_REG_CLK_CTRL_4_CTL_CLK_CTRL_4_DIS_CLK_WFI_APB_D0_1_HCLK|GLOBAL_REG_CLK_CTRL_4_CTL_CLK_CTRL_4_DIS_CLK_WFI_APB_D0_2_HCLK);
	} else {
		reg &= ~(GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_TRIGHDLR_PCLK_EN|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_TRIGHDLR_CLK_FREE_EN);

		reg |=	(GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_CLK_FREE|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_SHM_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_MEM_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_HP_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_MP_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_LP_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_HP_TIMER_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_MP_TIMER_CLK|
				GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_LP_TIMER_CLK|GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_CTL_WFI_GATE_TRIGHDLR_HCLK);
		reg2 |= GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_2_CTL_WFI_GATE_TRIGHDLR_APB_MSTR_PCLK;
		reg_clk_ctrl4 |= (GLOBAL_REG_CLK_CTRL_4_CTL_CLK_CTRL_4_DIS_CLK_WFI_APB_D0_1_HCLK|GLOBAL_REG_CLK_CTRL_4_CTL_CLK_CTRL_4_DIS_CLK_WFI_APB_D0_2_HCLK);
	}

	WR_WORD(GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL, reg);
	WR_WORD(GLOBAL_REG_TRIGHDLR_CLK_RST_CTRL_2, reg2);
	WR_WORD(GLOBAL_REG_CLK_CTRL_4, reg_clk_ctrl4);
}

static INLINE void clk_wfi_clean(void)
{
	uint32_t reg_clk_ctrl4 = RD_WORD(GLOBAL_REG_CLK_CTRL_4);
	
	reg_clk_ctrl4 &= ~(GLOBAL_REG_CLK_CTRL_4_CTL_CLK_CTRL_4_DIS_CLK_WFI_CALIB_REG_CLK);
	
	WR_WORD(GLOBAL_REG_CLK_CTRL_4, reg_clk_ctrl4);
}

static INLINE void clk_gpio_0_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_0_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_0_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_gpio_1_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_1_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_1_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_gpio_2_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_2_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_2_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_gpio_3_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_3_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_3_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_gpio_4_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_4_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_GPIO_4_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_wdt_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_WDT_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_WDT_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_sw_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_SW_INTR_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_SW_INTR_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}

static INLINE void clk_nmi_intr_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_ENABLE_1);

	if (en) {
		reg |= GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_NMI_CLK;
	} else {
		reg &= ~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_NMI_CLK;
	}

	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, reg);
}


static INLINE void clk_rtc_cap(uint8_t cap)			
{
	// RTC cap only have 5 bits
	cap &= 0x1F;
	WR_WORD(AON_REG_PMU_AONPD_REG_5TO6,  (cap << 4) | (cap << 9) | 0xF);
}

static FORCEINLINE void clk_rtc_en(void)			
{
	WR_WORD(AON_REG_PMU_MISC_CTRL, (RD_WORD(AON_REG_PMU_MISC_CTRL)|AON_REG_PMU_MISC_CTRL_CTL_CLK_32K_RTC_EN));
}

static FORCEINLINE void clk_rtc_dis(void)			
{
	WR_WORD(AON_REG_PMU_MISC_CTRL, (RD_WORD(AON_REG_PMU_MISC_CTRL)&~AON_REG_PMU_MISC_CTRL_CTL_CLK_32K_RTC_EN));
}

static FORCEINLINE void clk_32k_rtc(void)			
{
	WR_WORD(AON_REG_AON_MISC_CTRL, (RD_WORD(AON_REG_AON_MISC_CTRL)|AON_REG_AON_MISC_CTRL_AON_MISC_CTRL_SEL_AON_32K_CLK));
}

static FORCEINLINE void clk_32k_rc(void)			
{
	WR_WORD(AON_REG_AON_MISC_CTRL, (RD_WORD(AON_REG_AON_MISC_CTRL)&~AON_REG_AON_MISC_CTRL_AON_MISC_CTRL_SEL_AON_32K_CLK));
}

static FORCEINLINE void clk_wdt_rtc(void)
{
	WR_WORD(AON_REG_AON_MISC_CTRL, (RD_WORD(AON_REG_AON_MISC_CTRL)|(AON_REG_AON_MISC_CTRL_CTL_SEL_TIMER_WDT_32K_CLK|AON_REG_AON_MISC_CTRL_CTL_WDT_RST_SWITCH_RC_CLK)));
}

static FORCEINLINE void clk_wdt_rc(void)
{
	WR_WORD(AON_REG_AON_MISC_CTRL, (RD_WORD(AON_REG_AON_MISC_CTRL)&~AON_REG_AON_MISC_CTRL_CTL_SEL_TIMER_WDT_32K_CLK));
}

static INLINE void clk_force_spiflash_ctl_clk(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_FORCE_ON_1);
	reg |= GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_SPIFLASH_CTRL_CLK;
	WR_WORD(GLOBAL_REG_CLK_FORCE_ON_1, reg);
}

static INLINE void clk_force_dma_ctl_clks(int force_on)
{
#if 0
	uint32_t reg = RD_WORD(GLOBAL_REG_CLK_FORCE_ON_1);
	if (force_on) {
		reg |= GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_AHB_D0_HCLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_APB_D0_1_HCLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_APB_D0_2_HCLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_APB_D0_3_HCLK|	
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_ICM_DATA_CODE_RAM_CLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_DATA_CODE_SRAM_A_CLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_DATA_CODE_SRAM_B_CLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_DMAC_REQ_MUX_CLK;
		WR_WORD(GLOBAL_REG_CLK_FORCE_ON_1, reg);
		reg = RD_WORD(GLOBAL_REG_CLK_FORCE_ON_2);
		reg |= GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_0_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_1_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_2_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_3_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_4_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DMAC_0_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DMAC_1_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_D2_M2_AHB_HCLK;
		WR_WORD(GLOBAL_REG_CLK_FORCE_ON_2, reg);
		reg = RD_WORD(GLOBAL_REG_CLK_FORCE_ON_3);
		reg |= GLOBAL_REG_CLK_FORCE_ON_3_CTL_CLK_FORCE_ON_3_DC_RAM_64_80K_CLK;
		WR_WORD(GLOBAL_REG_CLK_FORCE_ON_3, reg);
	} else {
		reg &= ~(GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_AHB_D0_HCLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_APB_D0_1_HCLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_APB_D0_2_HCLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_APB_D0_3_HCLK|	
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_ICM_DATA_CODE_RAM_CLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_DATA_CODE_SRAM_A_CLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_DATA_CODE_SRAM_B_CLK|
					GLOBAL_REG_CLK_FORCE_ON_1_CTL_CLK_FORCE_ON_1_DMAC_REQ_MUX_CLK);
		WR_WORD(GLOBAL_REG_CLK_FORCE_ON_1, reg);
		reg = RD_WORD(GLOBAL_REG_CLK_FORCE_ON_2);
		reg &= ~(GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_0_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_1_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_2_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_3_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DC_RAM_4_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DMAC_0_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_DMAC_1_CLK|
					GLOBAL_REG_CLK_FORCE_ON_2_CTL_CLK_FORCE_ON_2_D2_M2_AHB_HCLK);
		WR_WORD(GLOBAL_REG_CLK_FORCE_ON_2, reg);
		reg = RD_WORD(GLOBAL_REG_CLK_FORCE_ON_3);
		reg &= ~GLOBAL_REG_CLK_FORCE_ON_3_CTL_CLK_FORCE_ON_3_DC_RAM_64_80K_CLK;
		WR_WORD(GLOBAL_REG_CLK_FORCE_ON_3, reg);
	}
#endif							
}

static INLINE void clk_reset_ble_sleep_clk(void)
{
#if 0
	WR_WORD(AON_REG_AON_RESET_CTRL, 0x1d);	//Reset
	WR_WORD(AON_REG_AON_RESET_CTRL, 0x1f);
#endif
}

static FORCEINLINE void clk_ble_time_snap_shot(void)
{
	WR_WORD(GLOBAL2_REG_SNAPSHOT_CTRL, GLOBAL2_REG_SNAPSHOT_CTRL_CTL_SNAPSHOT_BLE_BB_CNTR);	
	RD_WORD(GLOBAL2_REG_SNAPSHOT_CTRL);
}

static FORCEINLINE uint32_t clk_ble_time_clkn(void)
{
	return RD_WORD(GLOBAL2_REG_SNAPSHOT_VAL_BLE_CLKN);
}

static FORCEINLINE uint32_t clk_ble_time_fine(void)
{
	return RD_WORD(GLOBAL2_REG_SNAPSHOT_VAL_BLE_FINE);
}

static INLINE void clk_32k_calib(uint8_t cycles)
{
	uint32_t reg;
	reg = ((cycles & GLOBAL_REG_CALIBRATION_MISC_CTRL_CTL_CAL_CNT_LMT_LOG2_MASK) << GLOBAL_REG_CALIBRATION_MISC_CTRL_CTL_CAL_CNT_LMT_LOG2_SHIFT);
	reg |= GLOBAL_REG_CALIBRATION_MISC_CTRL_CTL_CAL_START;

	WR_WORD(GLOBAL_REG_CALIBRATION_MISC_CTRL, reg); // start the calibration
}

static INLINE uint32_t clk_32k_calib_get(void)
{
	return 	(RD_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS) & (GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_INT|GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_FRAC));
}

static INLINE uint32_t clk_32k_calib_get_frac(void)
{
	return 	((RD_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS) & GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_FRAC) >> GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_FRAC_SHIFT);
}

static INLINE uint32_t clk_32k_calib_get_int(void)
{
	return 	((RD_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS) & GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_INT) >> GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_INT_SHIFT);
}

static INLINE int clk_32k_calib_done(void)
{
	return 	((RD_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS) & GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_DONE) ? 1 : 0);
}

static INLINE void clk_32k_calib_done_clear(void)
{
	WR_WORD(GLOBAL_REG_CALIBRATION_MISC_STATUS, GLOBAL_REG_CALIBRATION_MISC_STATUS_STS_CALIB_COUNT_DONE);
}

static INLINE void clk_32k_hw_timing_corr(uint32_t corr)
{
	WR_WORD(GLOBAL2_REG_HW_TIMING_CORR_CTRL, corr);
}

static INLINE void clk_ble_phase_match_reset(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_BLE_ADDITIONAL_CONTROL);
	// reset ble clk phases
	reg |= GLOBAL_REG_BLE_ADDITIONAL_CONTROL_CTL_BLE_PHASE_MATCH_SOFT_RESET;
	WR_WORD(GLOBAL_REG_BLE_ADDITIONAL_CONTROL, reg);
    //WR_WORD(GLOBAL_REG_BLE_ADDITIONAL_CONTROL, reg);
    //WR_WORD(GLOBAL_REG_BLE_ADDITIONAL_CONTROL, reg);
	reg &= ~GLOBAL_REG_BLE_ADDITIONAL_CONTROL_CTL_BLE_PHASE_MATCH_SOFT_RESET;
	WR_WORD(GLOBAL_REG_BLE_ADDITIONAL_CONTROL, reg);
}

static FORCEINLINE void clk_systick_mux(int mux)
{
	WR_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL, ((RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL) & ~GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_SEL)|((mux & GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_SEL_MASK) << GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_SEL_SHIFT)));
}

static INLINE int clk_systick_mux_get(void)
{
	return ((RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL) >> GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_SEL_SHIFT) & GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_SEL_MASK) ;
}

static FORCEINLINE void clk_systick_en(void)
{
	WR_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL, (RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL)|GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_ENABLE));
}

static FORCEINLINE void clk_systick_dis(void)
{
	WR_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL, (RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL)&~GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_ENABLE));
}

static INLINE void clk_systick_emit_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL);

	if (en) {
		reg |= GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_EMIT_ENABLE;
	} else {
		reg &= ~GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_EMIT_ENABLE;
	}

	WR_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL, reg);
}

static INLINE void clk_systick_capture_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL);

	if (en) {
		reg |= GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_CAP_ENABLE;
	} else {
		reg &= ~GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CLK_CAP_ENABLE;
	}

	WR_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL, reg);
}

static INLINE void clk_systick_force(int on)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL);

	if (on) {
		reg |= GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CNT_CLK_FORCE_ON;
	} else {
		reg |= GLOBAL_REG_SYSTICK_CLK_CTRL_CTL_SYSTICK_CNT_CLK_FORCE_OFF;
	}
	WR_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL, reg);
}

static INLINE uint32_t clk_systick_get(void)
{
	return (RD_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL));
}

static INLINE void clk_systick_set(uint32_t val)
{
	WR_WORD(GLOBAL_REG_SYSTICK_CLK_CTRL, val);
}

static INLINE void clk_reset_ipmac_clk(void)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_RESET_CTRL_2);

	reg &= ~(GLOBAL_REG_RESET_CTRL_2_CTL_RESET_2_D1_BLE_IPM_REG|GLOBAL_REG_RESET_CTRL_2_CTL_RESET_2_D1_BLE_IPMAC_REG);
	WR_WORD(GLOBAL_REG_RESET_CTRL_2, reg);
	reg |= GLOBAL_REG_RESET_CTRL_2_CTL_RESET_2_D1_BLE_IPM_REG|GLOBAL_REG_RESET_CTRL_2_CTL_RESET_2_D1_BLE_IPMAC_REG;
	WR_WORD(GLOBAL_REG_RESET_CTRL_2, reg);
}

static INLINE void clk_reset_adc(void)
{
	uint32_t val;
	val = RD_WORD(GLOBAL_REG_RESET_CTRL_1);
	val &= ~GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_SADC_RSTN_REG;
	WR_WORD(GLOBAL_REG_RESET_CTRL_1, val);
	val |= GLOBAL_REG_RESET_CTRL_1_CTL_RESET_1_D0_SADC_RSTN_REG;
	WR_WORD(GLOBAL_REG_RESET_CTRL_1, val);
}

static INLINE void clk_spiflash_en(int en)
{
	uint32_t reg = RD_WORD(GLOBAL_REG_CLKD0_ENABLE_1);

	if (en) {
		reg |=  GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SSI_MAS0_CLK;
	} else {
		reg &= ~(GLOBAL_REG_CLKD0_ENABLE_1_CTL_CLKD0_ENABLE_1_SSI_MAS0_CLK);
	}
	WR_WORD(GLOBAL_REG_CLKD0_ENABLE_1, reg);
}

static INLINE void clk_osc_xo_intr_clk_en(void)
{
	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, (RD_WORD(GLOBAL_REG_CLK_ENABLE_1)|GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_OSC_XO_INTR_CLK));
}

static INLINE void clk_osc_xo_intr_clk_dis(void)
{
	WR_WORD(GLOBAL_REG_CLK_ENABLE_1, (RD_WORD(GLOBAL_REG_CLK_ENABLE_1)&~GLOBAL_REG_CLK_ENABLE_1_CTL_CLK_ENABLE_1_OSC_XO_INTR_CLK));
}

/*
 * Exported Functions
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief Calibrate XO. 
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_calib_xo(void);

/**
 ****************************************************************************************
 * @brief Get Root clock. 
 *
 *
 * @return  Root clock
 ****************************************************************************************
 */
uint32_t hal_clk_root_get(void);


/**
 ****************************************************************************************
 * @brief Set CPU clock. 
 *
 * @param[in] cpu_clk					XO: 64000000, 32000000, 16000000, and 8000000, RC: 32000000, 16000000, 8000000, 4000000			
 *
 * @return  NULL
 ****************************************************************************************
 */
int hal_clk_cpu_set(uint32_t cpu_clk);

/**
 ****************************************************************************************
 * @brief Get CPU clock. 
 *
 *
 * @return  CPU clock
 ****************************************************************************************
 */
uint32_t hal_clk_cpu_get(void);

/**
 ****************************************************************************************
 * @brief Set D0 domain clock. 
 *
 * @param[in] mux			D0 domain clock mux, @see enum clk_d0_div 			
 *
 * @return  NULL
 ****************************************************************************************
 */
int hal_clk_d0_mux(int mux);

/**
 ****************************************************************************************
 * @brief Get D0 domanin clock. 
 *
 *
 * @return  D0 domain clock
 ****************************************************************************************
 */
uint32_t hal_clk_d0_get(void);

/**
 ****************************************************************************************
 * @brief Set D1 domain clock. 
 *
 * @param[in] mux			D1 domain clock mux, @see enum clk_d1_div 			
 *
 * @return  NULL
 ****************************************************************************************
 */
int hal_clk_d1_mux(int mux);

/**
 ****************************************************************************************
 * @brief Get D1 domanin clock. 
 *
 *
 * @return  D1 domain clock
 ****************************************************************************************
 */
uint32_t hal_clk_d1_get(void);

/**
 ****************************************************************************************
 * @brief Set D2 domain clock. 
 *
 * @param[in] mux			D2 domain clock mux, @see enum clk_d2_div 			
 *
 * @return  NULL
 ****************************************************************************************
 */
int hal_clk_d2_mux(int mux);

/**
 ****************************************************************************************
 * @brief Get D2 domanin clock. 
 *
 *
 * @return  D2 domain clock
 ****************************************************************************************
 */
uint32_t hal_clk_d2_get(void);

/**
 ****************************************************************************************
 * @brief Set Timer clock. 
 *
 * @param[in] mux			Timer clock mux, @see enum clk_tim_div 			
 *
 * @return  NULL
 ****************************************************************************************
 */
int hal_clk_tmr_mux(int tmr_id, int mux);

/**
 ****************************************************************************************
 * @brief Get Timer clock. 
 *
 *
 * @return  Timer clock
 ****************************************************************************************
 */
uint32_t hal_clk_tmr_get(int tmr_id);

/**
 ****************************************************************************************
 * @brief Set Sensor ADC clock. 
 *
 * @param[in] mux			Sadc domain clock mux, @see enum clk_sadc_div 			
 *
 * @return  CLK_ERR_NO_ERROR if successful, otherwise @see enum clk_error.
 ****************************************************************************************
 */
int hal_clk_sadc_mux(int mux);

/**
 ****************************************************************************************
 * @brief Get SADC clock. 
 *
 *
 * @return  SADC clock
 ****************************************************************************************
 */
uint32_t hal_clk_sadc_get(void);

/**
 ****************************************************************************************
 * @brief Set Shared memory clock. 
 *
 * @param[in] mux		Smem domain clock mux, @see enum clk_smem_div 			
 *
 * @return CLK_ERR_NO_ERROR if successful, otherwise @see enum clk_error.
 ****************************************************************************************
 */
int hal_clk_smem_mux(int mux);

/**
 ****************************************************************************************
 * @brief Set QSPI speed clock. 
 *
 * @param[in] mux		Qspi clock divider, @see enum clk_qspi_div 			
 *
 * @return  CLK_ERR_NO_ERROR if successful, otherwise @see enum clk_error.
 ****************************************************************************************
 */
int hal_clk_qspi_mux(int mux);

/**
 ****************************************************************************************
 * @brief  Audio sigma delta modulator clock source mux  
 *
 * @param[in] mux		SDM clock source mux, @see enum clk_sdm_mux
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_audio_sdm_mux(int mux);

/**
 ****************************************************************************************
 * @brief Get QSPI clock. 
 *
 *
 * @return  QSPI clock
 ****************************************************************************************
 */
uint32_t hal_clk_qspi_get(void);

/**
 ****************************************************************************************
 * @brief Set Efuse clock. 
 *
 * @param[in] mux		Efuse clock divider, @see enum clk_efuse_div 			
 *
 * @return  NULL
 ****************************************************************************************
 */
int hal_clk_efuse_mux(int mux);

/**
 ****************************************************************************************
 * @brief Set Slave I2S clock source. 
 *
 * @param[in] ext_clk		1: From external, 0: From  internal.
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_si2s_set(int ext_clk);

/**
 ****************************************************************************************
 * @brief Set Master I2S bit clock 
 *
 * @param[in] bit_clk		Serial bit clock
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_mi2s_set(uint32_t bit_clk);

/**
 ****************************************************************************************
 * @brief Set audio output (Speaker/Sigma Delta) clock mux 
 *
 * @param[in] mux			0: I2S master sclk generated from integer divider
 *										1: I2S slave clock from PAD
 *										2: PDM clock
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_audio_output(int mux);

/**
 ****************************************************************************************
 * @brief  Enable or disable Efuse clock  
 *
 * @param[in] en				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_efuse_en(int en);

/**
 ****************************************************************************************
 * @brief  Enable or disable Uart clock  
 *
 * @param[in] id				Uart Id, @see enum uart_id
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_uart_en(int id, int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable I2c clock  
 *
 * @param[in] id				I2c Id, @see enum i2c_id
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_i2c_en(int id, int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable PWM clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_pwm_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable Watch Dog Timer clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_wdt_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable keyboard clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_kb_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable ECC clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_ecc_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable hash clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_hash_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable AES clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_aes_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable counter clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_counter_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable shared audio clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_audio_en(int en);

/**
 ****************************************************************************************
 * @brief  Enable or disable audio encoder related clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_audio_enc_en(int en);

/**
 ****************************************************************************************
 * @brief  Enable or disable audio decoder related clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_audio_dec_en(int en);

/**
 ****************************************************************************************
 * @brief  Enable or disable audio reampling related clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_audio_resample_en(int en);

/**
 ****************************************************************************************
 * @brief  Enable or disable sensor ADC clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_sadc_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable I2S clock  
 *
 * @param[in] id				I2S Id, @see enum i2s_id
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_i2s_en(int id, int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable QD clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_quaddec_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable DMA clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_dma_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable BLE clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_ble_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable GPIO interrupt controller clock  
 *
 * @param[in] port			Port number, @see enum gpio_port
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_gpio_intr(int port, int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable master SPI clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_mspi_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable slave SPI clock  
 *
 * @param[in] id				SPI slave id, @see enum spi_id
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_sspi_en(int id, int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable share memory clock  
 *
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_sm_en(int on);

/**
 ****************************************************************************************
 * @brief  Enable or disable Timer clock  
 *
 * @param[in] tim_id			Timer Id, @see enum tim_id   
 * @param[in] on				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_tmr_en(int tim_id, int en);
void hal_clk_cap_en(int tmr_id, int en);
void hal_clk_emit_en(int tmr_id, int en);
void hal_clk_aon_tmr_intr(int en);

/**
 ****************************************************************************************
 * @brief  Select 32k clock source  
 *
 * @param[in] clk_src			1: RTC, 0: RC
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_32k(int clk_src);

/**
 ****************************************************************************************
 * @brief  Check if RTC is ready. 
 *
 *
 * @return  1: RTC ready, 0: Otherwise
 ****************************************************************************************
 */
int hal_clk_32k_ready(void);

/**
 ****************************************************************************************
 * @brief  Get slow clock (low power clock) rate. 
 *
 *
 * @return  Slow clock rate.
 ****************************************************************************************
 */
uint32_t hal_clk_32k_get(void);

/**
 ****************************************************************************************
 * @brief  Calibrate Low Power Clock (RC/RTC) timer. 
 *
 * @param[in] cycles				Calibrate cycles (2 ^ cycles)
 *
 * @return NULL
 ****************************************************************************************
 */

void hal_clk_calib_32k(int cycles);


/**
 ****************************************************************************************
 * @brief Set Inplay's Systick clock. 
 *
 * @param[in] mux			Systick clock mux, @see enum clk_systick_div 			
 *
 * @return  NULL
 ****************************************************************************************
 */
int hal_clk_systick_mux(int mux);

/**
 ****************************************************************************************
 * @brief Get Inplay systick clock. 
 *
 *
 * @return  Systick clock
 ****************************************************************************************
 */
uint32_t hal_clk_systick_get(void);

/**
 ****************************************************************************************
 * @brief  Enable or disable Inplay's systick clock  
 *
 * @param[in] en				1: Enable, 0: otherwise
 *
 * @return  NULL
 ****************************************************************************************
 */
void hal_clk_systick_en(int en);




/// @} HAL_CLK

#endif	// HAL_CLK_H
