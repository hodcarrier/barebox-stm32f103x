/*
 * Copyright (c) 2013 Wind River Systems, Inc.
 * duhuanpeng <u74147@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#include <common.h>
#include <io.h>
#include <errno.h>
#include <gpio.h>
#include <init.h>

static int stm32f10x_gpio_add(void)
{
	return 0;
}
coredevice_initcall(stm32f10x_gpio_add);

