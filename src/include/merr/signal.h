#include "../merr_pack.h"

MERR_TAG ifndef _MERR_SIGNAL_H_
MERR_TAG define _MERR_SIGNAL_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <string.h>
MERR_TAG include <errno.h>
MERR_TAG include <signal.h>

MERR_TAG define MERR_kill(args...)	MERR_UNIX("%d", int, kill, args)

MERR_TAG endif
