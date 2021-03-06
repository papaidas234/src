/* $NetBSD: sunxi_tconreg.h,v 1.1 2018/04/03 12:52:16 bouyer Exp $ */

/*-
 * Copyright (c) 2013 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Matt Thomas of 3am Software Foundry.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#define SUNXI_TCON_GCTL_REG		0x0000
#define SUNXI_TCON_GINT0_REG		0x0004
#define SUNXI_TCON_GINT1_REG		0x0008
#define SUNXI_TCON0_FRM_CTL_REG		0x0010
#define SUNXI_TCON0_FRM1_CTL_REG	0x0014
#define SUNXI_TCON0_FRM2_CTL_REG	0x002c
#define SUNXI_TCON0_CTL_REG		0x0040
#define SUNXI_TCON0_DCLK_REG		0x0044
#define SUNXI_TCON0_BASIC0_REG		0x0048
#define SUNXI_TCON0_BASIC1_REG		0x004C
#define SUNXI_TCON0_BASIC2_REG		0x0050
#define SUNXI_TCON0_BASIC3_REG		0x0054
#define SUNXI_TCON0_HV_IF_REG		0x0058
#define SUNXI_TCON0_CPU_IF_REG		0x0060
#define SUNXI_TCON0_CPU_WR_REG		0x0064
#define SUNXI_TCON0_CPU_RD0_REG		0x0068
#define SUNXI_TCON0_CPU_RD1_REG		0x006C
#define SUNXI_TCON0_LVDS_IF_REG		0x0084
#define SUNXI_TCON0_IO_POL_REG		0x0088
#define SUNXI_TCON0_IO_TRI_REG		0x008C
#define SUNXI_TCON1_CTL_REG		0x0090
#define SUNXI_TCON1_BASIC0_REG		0x0094
#define SUNXI_TCON1_BASIC1_REG		0x0098
#define SUNXI_TCON1_BASIC2_REG		0x009C
#define SUNXI_TCON1_BASIC3_REG		0x00A0
#define SUNXI_TCON1_BASIC4_REG		0x00A4
#define SUNXI_TCON1_BASIC5_REG		0x00A8
#define SUNXI_TCON1_IO_POL_REG		0x00F0
#define SUNXI_TCON1_IO_TRI_REG		0x00F4
#define SUNXI_TCON_CEU_CTL_REG		0x0100
#define SUNXI_TCON0_CPU_TRI0_REG	0x0160
#define SUNXI_TCON0_CPU_TRI1_REG	0x0164
#define SUNXI_TCON0_CPU_TRI2_REG	0x0168
#define SUNXI_TCON0_CPU_TRI3_REG	0x016C
#define SUNXI_TCON_CMAP_CTL_REG		0x0180
#define SUNXI_TCON_CMAP_ODD0_REG	0x0190
#define SUNXI_TCON_CMAP_ODD1_REG	0x0194
#define SUNXI_TCON_CMAP_EVEN0_REG	0x0198
#define SUNXI_TCON_CMAP_EVEN1_REG	0x019C
#define SUNXI_TCON_MUX_CTL_REG		0x0200 /* only in TCON0 */
#define SUNXI_TCON_LVDS_ANA0		0x220
#define SUNXI_TCON_LVDS_ANA1		0x224

#define SUNXI_TCON_GCTL_EN		__BIT(31)
#define SUNXI_TCON_GCTL_GAMMA_EN	__BIT(30)
#define SUNXI_TCON_GCTL_IO_MAP_SEL	__BIT(0)
#define SUNXI_TCON_GCTL_IO_MAP_SEL_TCON0	0
#define SUNXI_TCON_GCTL_IO_MAP_SEL_TCON1	1

#define SUNXI_TCON_GINT1_TCON0_LINENO	__BITS(27,16)
#define SUNXI_TCON_GINT1_TCON1_LINENO	__BITS(11,0)

#define SUNXI_TCON0_FRM_ENABLE		__BIT(31)
#define SUNXI_TCON0_FRM_R5BITS		__BIT(6)
#define SUNXI_TCON0_FRM_G5BITS		__BIT(5)
#define SUNXI_TCON0_FRM_B5BITS		__BIT(4)

#define SUNXI_TCONx_CTL_EN		__BIT(31)
#define SUNXI_TCON0_CTL0_IF		__BITS(25,24)
#define SUNXI_TCON0_CTL0_IF_HV		0
#define SUNXI_TCON0_CTL0_IF_8080	1
#define SUNXI_TCON0_CTL0_IF_TTL		2
#define SUNXI_TCON0_CTL_RG_SWAP		__BIT(23)
#define SUNXI_TCON0_CTL_TSTV		__BIT(22)
#define SUNXI_TCONx_CTL_INTERLACE_EN	__BIT(20)
#define SUNXI_TCONx_CTL_START_DELAY	__BITS(8,4)
#define SUNXI_TCONx_CTL_SRC_SEL		__BITS(1,0)
#define SUNXI_TCONx_CTL_SRC_SEL_DE0	0
#define SUNXI_TCONx_CTL_SRC_SEL_DE1	1
#define SUNXI_TCONx_CTL_SRC_SEL_BLUEDATA 2

#define SUNXI_TCON0_DCLK_DIV		__BITS(6,0)

#define SUNXI_TCON0_LVDS_IF_EN		__BIT(31)
#define SUNXI_TCON0_LVDS_IF_DUALCHAN	__BIT(30)
#define SUNXI_TCON0_LVDS_IF_DIR_REV	__BIT(28)
#define SUNXI_TCON0_LVDS_IF_MODE_JEIDA	__BIT(27)
#define SUNXI_TCON0_LVDS_IF_18BITS	__BIT(26)
#define SUNXI_TCON0_LVDS_IF_CORR_MODE1	__BIT(23)

#define SUNXI_TCON_IO_POL_IO2_INV	__BIT(26)
#define SUNXI_TCON_IO_POL_PVSYNC	__BIT(25)
#define SUNXI_TCON_IO_POL_PHSYNC	__BIT(24)

#define SUNXI_TCON_IO_TRI_IO3		__BIT(27)
#define SUNXI_TCON_IO_TRI_IO2		__BIT(26)
#define SUNXI_TCON_IO_TRI_IO1		__BIT(25)
#define SUNXI_TCON_IO_TRI_IO0		__BIT(24)
#define SUNXI_TCON_IO_TRI_DATA		__BITS(23,0)

#define SUNXI_TCON_MUX_CTL_HDMI_OUTPUT_SRC __BITS(9,8)
#define SUNXI_TCON_MUX_CTL_HDMI_OUTPUT_SRC_LCDC0_TCON1	0
#define SUNXI_TCON_MUX_CTL_HDMI_OUTPUT_SRC_LCDC1_TCON1	1
#define SUNXI_TCON_MUX_CTL_HDMI_OUTPUT_SRC_CLOSE	2
