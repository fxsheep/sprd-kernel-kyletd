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

#ifndef __GPIO_SC8810_H__
#define __GPIO_SC8810_H__

#ifndef __ASM_ARCH_BOARD_H
#error  "Don't include this file directly, include <mach/board.h>"
#endif

#define GPIO_TOUCH_RESET         142
#define GPIO_TOUCH_IRQ           141

#define GPIO_SENSOR_RESET        41
#define GPIO_MAIN_SENSOR_PWN     43 /* Garda use CCIR_PD0 (GPIO_43) as CAM_STBY */
#define GPIO_SUB_SENSOR_PWN      43

#define EIC_CHARGER_DETECT		(A_EIC_START + 2)
#define EIC_KEY_POWER           (A_EIC_START + 3)
#define HEADSET_BUTTON_GPIO		(A_EIC_START + 4)
#define HEADSET_DETECT_GPIO		139
#define HEADSET_PA_CTL_GPIO		200

#define SPI0_CMMB_CS_GPIO        32
#define SPI1_WIFI_CS_GPIO        44

#define GPIO_BK                  136

#define GPIO_BT_RESET       194
#define GPIO_BT_POWER       190
#define GPIO_BT2AP_WAKE     58
#define GPIO_AP2BT_WAKE     51

#define GPIO_WIFI_SHUTDOWN	189
#define GPIO_WIFI_IRQ		52

#define GPIO_GPS_RESET          167
#define GPIO_GPS_ONOFF          174
#endif
