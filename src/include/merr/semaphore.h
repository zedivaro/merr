#include "../merr_pack.h"

MERR_TAG ifndef _MERR_SEMAPHORE_H_
MERR_TAG define _MERR_SEMAPHORE_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <string.h>
MERR_TAG include <errno.h>
MERR_TAG include <semaphore.h>

MERR_TAG define MERR_sem_destroy(args...)	MERR_UNIX("%d", int, sem_destroy, args)
MERR_TAG define MERR_sem_init(args...)		MERR_UNIX("%d", int, sem_init, args)
MERR_TAG define MERR_sem_post(args...)		MERR_UNIX("%d", int, sem_post, args)
MERR_TAG define MERR_sem_wait(args...)		MERR_UNIX("%d", int, sem_wait, args)

MERR_TAG endif
