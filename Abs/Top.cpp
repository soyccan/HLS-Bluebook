#include "Top.h"

ABSTYPE top(ABSTYPE val, int mode) {
    switch (mode) {
    case 0: return abs_naive(val); break;
    case 1: return abs_xor(val); break;
    case 2: return abs_xilinx(val); break;
    default: return abs_xor(val);
    }
}
