#ifndef _MERR__PACK_H_
#define _MERR__PACK_H_

#include "merr.h"

//stdio.h
//stdlib.h

//string.h :
    #define MERR_POSIX(retf, type, name, args...)\
        MERR_MODEL(, _merr_ret_, strerror(_merr_ret_), _merr_ret_, retf, type, name, args)
    //errno.h :
        #define MERR_UNIX(retf, type, name, args...)\
            MERR_MODEL(, _merr_ret_ == -1, strerror(errno), errno, retf, type, name, args)
        #define MERR_UNIX_ZERO(retf, type, name, args...)\
            MERR_MODEL(, ! _merr_ret_, strerror(errno), errno, retf, type, name, args)
        #define MERR_UNIX_ERRNO(retf, type, name, args...)\
            MERR_MODEL(errno = 0, errno, strerror(errno), errno, retf, type, name, args)
//dlfcn.h :
    #define MERR_DL(retf, type, name, args...)\
        MERR_MODEL(, _merr_ret_, dlerror(), _merr_ret_, retf, type, name, args)
    #define MERR_DL_ZERO(retf, type, name, args...)\
        MERR_MODEL(, ! _merr_ret_, dlerror(), -1, retf, type, name, args)

#define MERR_TAG #MERR

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wbuiltin-macro-redefined"
#undef __FILE__
#undef __LINE__
#pragma GCC diagnostic pop

#endif
