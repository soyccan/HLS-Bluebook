#include "mux.h"

dType mux_binary_opt(dType din[N_REGS], sType sel0, sType sel1, bool s)
{
#pragma HLS INLINE off
    dType tmp;
    sType sel_int;
    if (s)
        sel_int = sel0;
    else
        sel_int = sel1;
    return din[sel_int];
}
