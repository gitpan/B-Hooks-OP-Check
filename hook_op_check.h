#ifndef __HOOK_OP_CHECK_H__
#define __HOOK_OP_CHECK_H__

#include "perl.h"

START_EXTERN_C

typedef OP *(*hook_op_check_cb) (pTHX_ OP *);

void hook_op_check (opcode type, hook_op_check_cb cb);

END_EXTERN_C

#endif
