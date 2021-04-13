#include "shift_reg.h"

void shift_reg_sreset(dType din, dType dout[N_REGS], bool srst)
{
#pragma HLS INLINE off

    static dType regs[N_REGS];

SHIFT:
    for (int i = N_REGS - 1; i >= 0; i--) {
        #pragma HLS UNROLL
        if (srst)
            regs[i] = 0;
        else {
            if (i == 0)
                regs[i] = din;
            else
                regs[i] = regs[i - 1];
        }
    }

WRITE:
    for (int i = 0; i < N_REGS; i++) {
        #pragma HLS UNROLL
        dout[i] = regs[i];
    }
}
