#include "../merr_pack.h"

MERR_TAG ifndef _MERR_PTHREAD_H_
MERR_TAG define _MERR_PTHREAD_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <string.h>
MERR_TAG include <pthread.h>

MERR_TAG define MERR_pthread_create(args...)	MERR_POSIX("%d", int, pthread_create, args)
MERR_TAG define MERR_pthread_detach(args...)	MERR_POSIX("%d", int, pthread_detach, args)

MERR_TAG endif
