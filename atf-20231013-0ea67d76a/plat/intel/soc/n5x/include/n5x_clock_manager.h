/*
 * Copyright (c) 2019-2023, Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CLOCKMANAGER_H
#define CLOCKMANAGER_H

#include "socfpga_handoff.h"

/* MACRO DEFINITION */
#define SOCFPGA_GLOBAL_TIMER				0xffd01000
#define SOCFPGA_GLOBAL_TIMER_EN				0x3

#define CLKMGR_PLLGLOB_VCO_PSRC_MASK			GENMASK(17, 16)
#define CLKMGR_PLLGLOB_VCO_PSRC_OFFSET			16
#define CLKMGR_PLLDIV_FDIV_MASK				GENMASK(16, 8)
#define CLKMGR_PLLDIV_FDIV_OFFSET			8
#define CLKMGR_PLLDIV_REFCLKDIV_MASK			GENMASK(5, 0)
#define CLKMGR_PLLDIV_REFCLKDIV_OFFSET			0
#define CLKMGR_PLLDIV_OUTDIV_QDIV_MASK			GENMASK(26, 24)
#define CLKMGR_PLLDIV_OUTDIV_QDIV_OFFSET		24

#define CLKMGR_PLLOUTDIV_C0CNT_MASK			GENMASK(4, 0)
#define CLKMGR_PLLOUTDIV_C0CNT_OFFSET			0
#define CLKMGR_PLLOUTDIV_C1CNT_MASK			GENMASK(12, 8)
#define CLKMGR_PLLOUTDIV_C1CNT_OFFSET			8
#define CLKMGR_PLLDIV_OUTDIV_QDIV_MASK			GENMASK(26, 24)
#define CLKMGR_PLLDIV_OUTDIV_QDIV_OFFSET		24
#define CLKMGR_CLKSRC_MASK				GENMASK(18, 16)
#define CLKMGR_CLKSRC_OFFSET				16
#define CLKMGR_NOCDIV_DIVIDER_MASK			GENMASK(1, 0)
#define CLKMGR_NOCDIV_L4MAIN_OFFSET			0

#define CLKMGR_INTOSC_HZ				400000000
#define CLKMGR_VCO_PSRC_EOSC1				0
#define CLKMGR_VCO_PSRC_INTOSC				1
#define CLKMGR_VCO_PSRC_F2S				2
#define CLKMGR_CLKSRC_MAIN				0
#define CLKMGR_CLKSRC_PER				1

#define CLKMGR_N5X_BASE					0xffd10000
#define CLKMGR_MAINPLL_NOCCLK				0x40
#define CLKMGR_MAINPLL_NOCDIV				0x44
#define CLKMGR_MAINPLL_PLLGLOB				0x48
#define CLKMGR_MAINPLL_PLLOUTDIV			0x54
#define CLKMGR_MAINPLL_PLLDIV				0x50
#define CLKMGR_PERPLL_PLLGLOB				0x9c
#define CLKMGR_PERPLL_PLLDIV				0xa4
#define CLKMGR_PERPLL_PLLOUTDIV				0xa8

/* FUNCTION DEFINITION */
uint64_t clk_get_pll_output_hz(void);
uint64_t get_l4_clk(void);
uint32_t get_clk_freq(uint32_t psrc_reg);
uint32_t get_mpu_clk(void);
uint32_t get_cpu_clk(void);

#endif
