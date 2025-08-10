#include "../merr_pack.h"

MERR_TAG ifndef _MERR_STRING_H_
MERR_TAG define _MERR_STRING_H_

MERR_TAG include <string.h>

MERR_TAG define MERR_strcmp(args...)	strcmp(args)
MERR_TAG define MERR_strcpy(args...)	strcpy(args)
MERR_TAG define MERR_strlen(args...)	strlen(args)

MERR_TAG endif
