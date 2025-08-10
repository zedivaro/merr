#include "../merr_pack.h"

MERR_TAG ifndef _MERR_STDLIB_H_
MERR_TAG define _MERR_STDLIB_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <string.h>
MERR_TAG include <errno.h>

MERR_TAG define MERR_atoi(args...)	atoi(args)
MERR_TAG define MERR_free(args...)	free(args)

MERR_TAG define MERR_malloc(args...)	MERR_UNIX_ZERO("%p", void*, malloc, args)

MERR_TAG endif
