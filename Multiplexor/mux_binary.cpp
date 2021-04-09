#include "mux.h"

dType mux_binary(dType din[N_REGS], sType sel)
{
#pragma HLS INLINE off
    return din[sel];
}
