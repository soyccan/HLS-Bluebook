#ifndef __SHIFT_REG_TEMPLATE__
#define __SHIFT_REG_TEMPLATE__

template <int ID, typename dType, int NUM_REGS>
void shift_reg(dType din, dType dout[NUM_REGS])
{
    static dType regs[NUM_REGS];

SHIFT:
    for (int i = NUM_REGS - 1; i >= 0; i--) {
        #pragma HLS UNROLL
        if (i == 0)
            regs[i] = din;
        else
            regs[i] = regs[i - 1];
    }

WRITE:
    for (int i = 0; i < NUM_REGS; i++) {
        #pragma HLS UNROLL
        dout[i] = regs[i];
    }
}

#endif
