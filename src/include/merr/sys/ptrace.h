#include "../../merr_pack.h"

MERR_TAG ifndef _MERR_SYS_PTRACE_H_
MERR_TAG define _MERR_SYS_PTRACE_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <string.h>
MERR_TAG include <errno.h>
MERR_TAG include <sys/ptrace.h>

MERR_TAG define MERR_ptrace(args...)	MERR_UNIX_ERRNO("%ld", long, ptrace, args)

MERR_TAG endif
