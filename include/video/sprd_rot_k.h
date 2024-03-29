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
#ifndef _SPRD_ROT_K_H_
#define _SPRD_ROT_K_H_

typedef enum {
	ROT_YUV422 = 0,
	ROT_YUV420,
	ROT_YUV400,
	ROT_RGB888,
	ROT_RGB666,
	ROT_RGB565,
	ROT_RGB555,
	ROT_FMT_MAX
} ROT_DATA_FORMAT_E;

typedef enum {
	ROT_90          = 0,
	ROT_270,
	ROT_180,
	ROT_MIRROR,
	ROT_ANGLE_MAX
} ROT_ANGLE_E;

typedef struct _rot_size_tag {
	uint16_t w;
	uint16_t h;
} ROT_SIZE_T;

typedef struct _rot_addr_tag {
	uint32_t y_addr;
	uint32_t u_addr;
	uint32_t v_addr;
} ROT_ADDR_T;
typedef struct _rot_cfg_tag {
	ROT_SIZE_T				img_size;
	ROT_DATA_FORMAT_E		format;
	ROT_ANGLE_E				angle; 
	ROT_ADDR_T				src_addr;
	ROT_ADDR_T				dst_addr;     
}ROT_CFG_T, *ROT_CFG_T_PTR;


#define SPRD_ROT_IOCTL_MAGIC 		'm'
#define ROT_IO_CFG 					_IOW(SPRD_ROT_IOCTL_MAGIC, 1, ROT_CFG_T)
#define ROT_IO_START 				_IOW(SPRD_ROT_IOCTL_MAGIC, 2, unsigned int)
#define ROT_IO_IS_DONE 				_IOW(SPRD_ROT_IOCTL_MAGIC, 3, unsigned int)
#define ROT_IO_DATA_COPY 		    	_IOW(SPRD_ROT_IOCTL_MAGIC, 4, ROT_CFG_T)
#define ROT_IO_DATA_COPY_VIRTUAL   	_IOW(SPRD_ROT_IOCTL_MAGIC, 5, ROT_CFG_T)
#endif
