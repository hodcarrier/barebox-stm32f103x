/*
 * duhuanpeng <u74147@gmail.com>
 */

#include <config.h>
#include <sizes.h>
#include <asm/barebox-arm-head.h>


.globl barebox_arm_reset_vector
barebox_arm_reset_vector:

	b out
out:
	mov r0, #0x20000000
	mov r1, #SZ_64M
	mov r2, #0
	b barebox_arm_entry
