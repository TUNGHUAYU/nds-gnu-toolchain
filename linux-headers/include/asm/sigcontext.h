/*
 * Copyright (C) 2012 Regents of the University of California
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 */

#ifndef _ASM_RISCV_SIGCONTEXT_H
#define _ASM_RISCV_SIGCONTEXT_H

#include <asm/ptrace.h>

/*
 * Signal context structure
 *
 * This contains the context saved before a signal handler is invoked;
 * it is restored by sys_sigreturn / sys_rt_sigreturn.
 */
struct sigcontext {
	struct user_regs_struct sc_regs;
	union __riscv_fp_state sc_fpregs;
#ifdef CONFIG_DSP
	struct __riscv_dsp_state sc_dspregs;
#endif
};

#endif /* _ASM_RISCV_SIGCONTEXT_H */
