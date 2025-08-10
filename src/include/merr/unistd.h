#include "../merr_pack.h"

MERR_TAG ifndef _MERR_UNISTD_H_
MERR_TAG define _MERR_UNISTD_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <string.h>
MERR_TAG include <errno.h>
MERR_TAG include <unistd.h>

MERR_TAG define MERR_execve(args...)	MERR_UNIX("%d", int, execve, args)
MERR_TAG define MERR_fork(args...)	MERR_UNIX("%d", pid_t, fork, args)

MERR_TAG endif
