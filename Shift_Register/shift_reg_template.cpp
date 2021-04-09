#include "shift_reg.h"
#include "shift_reg_tmpl.h"

void shift_reg_template(dType din0,
                        int din1,
                        dType dout0[N_REGS0],
                        int dout1[N_REGS1])
{
#pragma HLS INLINE off
    shift_reg<1, dType, N_REGS0>(din0, dout0);
    shift_reg<2, int, N_REGS1>(din1, dout1);
}
