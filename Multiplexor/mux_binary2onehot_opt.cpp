#include "mux.h"

dType mux_binary2onehot_opt(dType din[N_REGS], sType sel0, sType sel1, bool s)
{
#pragma HLS INLINE off
    // two-level structure is optimized into single-level onehot MUX
    dType tmp;
    if (s)
        tmp = din[sel0];
    else
        tmp = din[sel1];
    return tmp;
}
