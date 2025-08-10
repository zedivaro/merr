#ifndef _MERR_H_
#define _MERR_H_

#define _MERR_HASH_ #

#define _MERR_INFO_FMT_(others)\
    "\n"\
    "****************\n"\
    "Error: %s\n"\
    "file: %s\n"\
    "line: %d\n"\
    "func: %s\n"\
    others\
    "****************\n"\
    "\n"

#define _MERR_INFO_ARGS_(estr, others...)\
    estr, __FILE__, __LINE__, __FUNCTION__, ##others

#define _MERR_FUNC_FMT_(retf) "%s(%s) = " retf "\n"
#define _MERR_FUNC_FMT_VOID_ "%s(%s)\n"

#define _MERR_ARG1_(arg1, arg_...) arg1
#define _MERR_ARG__(arg1, arg_...) , ##arg_

#define MERR_MODEL(init, jdge, estr, eret, retf, type, name, args...)\
    ({\
        init;\
        type _merr_ret_ = name(args);\
        if (jdge)\
        {\
            fprintf(\
              stderr,\
              _MERR_INFO_FMT_(_MERR_FUNC_FMT_(retf)),\
              _MERR_INFO_ARGS_(estr, #name, _MERR_HASH_ args, _merr_ret_)\
            );\
            _Exit(eret);\
        }\
        _merr_ret_;\
    })

#define MERR_MODEL_VOID(init, jdge, estr, eret, name, args...)\
    ({\
        init;\
        name(args);\
        if (jdge)\
        {\
            fprintf(\
              stderr,\
              _MERR_INFO_FMT_(_MERR_FUNC_FMT_VOID_),\
              _MERR_INFO_ARGS_(estr, #name, _MERR_HASH_ args)\
            );\
            _Exit(eret);\
        }\
    })

#define MERR_MODEL_1(init, jdge, estr, eret, retf, type, type1, name, args...)\
    ({\
        init;\
        type1 _merr_arg1_ = _MERR_ARG1_(args);\
        type _merr_ret_ = name(_merr_arg1_ _MERR_ARG__(args));\
        if (jdge)\
        {\
            fprintf(\
              stderr,\
              _MERR_INFO_FMT_(_MERR_FUNC_FMT_(retf)),\
              _MERR_INFO_ARGS_(estr, #name, _MERR_HASH_ args, _merr_ret_)\
            );\
            _Exit(eret);\
        }\
        _merr_ret_;\
    })

#define MERR_MODEL_VOID_1(init, jdge, estr, eret, type1, name, args...)\
    ({\
        init;\
        type1 _merr_arg1_ = _MERR_ARG1_(args);\
        name(_merr_arg1_ _MERR_ARG__(args));\
        if (jdge)\
        {\
            fprintf(\
              stderr,\
              _MERR_INFO_FMT_(_MERR_FUNC_FMT_VOID_),\
              _MERR_INFO_ARGS_(estr, #name, _MERR_HASH_ args)\
            );\
            _Exit(eret);\
        }\
    })

#endif
