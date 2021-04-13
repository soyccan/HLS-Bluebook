#include "shift_reg.h"

void shift_reg_load(dType din,
                    dType load_data[N_REGS],
                    dType dout[N_REGS],
                    bool load)
{
#pragma HLS INLINE off

    static dType regs[N_REGS];

SHIFT:
    for (int i = N_REGS - 1; i >= 0; i--) {
        #pragma HLS UNROLL
        if (load)
            regs[i] = load_data[i];
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
