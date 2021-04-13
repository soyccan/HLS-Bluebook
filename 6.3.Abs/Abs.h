#ifndef __ABS_H__
#define __ABS_H__

#include "ap_int.h"

typedef ap_int<8> ABSTYPE;

ABSTYPE abs_naive(ABSTYPE din);
ABSTYPE abs_xor(ABSTYPE din);
ABSTYPE abs_xilinx(ABSTYPE din);

#endif
