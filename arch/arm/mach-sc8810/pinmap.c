/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/io.h>

#include <mach/hardware.h>
#include <mach/pinmap.h>

typedef struct {
	uint32_t reg;
	uint32_t val;
} pinmap_t;

pinmap_t __initconst pinmap[] = {
#ifdef CONFIG_MACH_SP8810GA
#include "pinmap-sp8810ga.h"
#endif

#ifdef CONFIG_MACH_SP6820GA
#include "pinmap-sp6820ga.h"
#endif

#ifdef CONFIG_MACH_SP8810GB
#include "pinmap-sp8810gb.h"
#endif

#ifdef CONFIG_MACH_SP8810EA
#include "pinmap-sp8810ea.h"
#endif

#ifdef CONFIG_MACH_SP8810EB
#include "pinmap-sp8810eb.h"
#endif

#ifdef CONFIG_MACH_SP8810EC
#include "pinmap-sp8810ec.h"
#endif

#ifdef CONFIG_MACH_AMAZING
#include "pinmap-amazing.h"
#endif

#ifdef CONFIG_MACH_KYLETD
#include "pinmap-kyletd.h"
#endif

#ifdef CONFIG_MACH_Z788
#include "pinmap-z788.h"
#endif

#ifdef CONFIG_MACH_OPENPHONE_SC6820
#include "pinmap-sc6820-openphone.h"
#endif

#ifdef CONFIG_MACH_SP7702
#include "pinmap-sp7702.h"
#endif

#ifdef CONFIG_MACH_SP7710G_OPENPHONE
#endif
};

static int __init pin_init(void)
{
	int i;
	for (i = 0; i < ARRAY_SIZE(pinmap); i++) {
		__raw_writel(pinmap[i].val, CTL_PIN_BASE + pinmap[i].reg);
	}
	return 0;
}

arch_initcall(pin_init);
