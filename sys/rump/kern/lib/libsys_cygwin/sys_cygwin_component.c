/*	$NetBSD: sys_cygwin_component.c,v 1.4 2018/12/12 00:48:44 alnsn Exp $	*/

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: sys_cygwin_component.c,v 1.4 2018/12/12 00:48:44 alnsn Exp $");

#include <sys/param.h>
#include <sys/proc.h>

#include <uvm/uvm_extern.h>

#include <rump-sys/kern.h>

#include "rump_cygwin_syscall.h"

extern struct sysent rump_cygwin_sysent[];
extern const uint32_t rump_cygwin_sysent_nomodbits[];

struct emul emul_rump_sys_cygwin = {
	.e_name = "cygwin-rump",
	.e_sysent = rump_cygwin_sysent,
	.e_nomodbits = rump_cygwin_sysent_nomodbits,
#ifndef __HAVE_MINIMAL_EMUL
	.e_nsysent = RUMP_CYGWIN_SYS_NSYSENT,
#endif
	.e_vm_default_addr = uvm_default_mapaddr,
#ifdef __HAVE_SYSCALL_INTERN
	.e_syscall_intern = syscall_intern,
#endif
};

RUMP_COMPONENT(RUMP_COMPONENT_KERN)
{
	extern struct emul *emul_default;

	emul_default = &emul_rump_sys_cygwin;
}
