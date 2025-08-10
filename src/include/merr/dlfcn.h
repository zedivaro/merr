#include "../merr_pack.h"

MERR_TAG ifndef _MERR_DLFCN_H_
MERR_TAG define _MERR_DLFCN_H_

MERR_TAG include <stdio.h>
MERR_TAG include <stdlib.h>
MERR_TAG include <dlfcn.h>

MERR_TAG define MERR_dlclose(args...)	MERR_DL("%d", int, dlclose, args)

MERR_TAG define MERR_dlopen(args...)	MERR_DL_ZERO("%p", void*, dlopen, args)
MERR_TAG define MERR_dlsym(args...)	MERR_DL_ZERO("%p", void*, dlsym, args)

MERR_TAG endif
