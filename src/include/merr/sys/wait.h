#include "../../merr_pack.h"

MERR_TAG ifndef _MERR_SYS_WAIT_H_
MERR_TAG define _MERR_SYS_WAIT_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <string.h>
MERR_TAG include <errno.h>
MERR_TAG include <sys/wait.h>

MERR_TAG define MERR_waitpid(args...)	MERR_UNIX("%d", pid_t, waitpid, args)

MERR_TAG endif
