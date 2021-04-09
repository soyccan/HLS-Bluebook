#include "max.h"
#include "max_tmpl.h"
void max(int din[N_REGS], int &dout)
{
#pragma HLS INLINE off
    dout = max<N_REGS>(din);
}
