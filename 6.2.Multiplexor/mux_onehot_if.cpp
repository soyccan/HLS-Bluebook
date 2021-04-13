#include "mux.h"

dType mux_onehot_if(dType din[N_REGS], ap_uint<N_REGS> sel)
{
#pragma HLS INLINE off
    dType tmp;
    if (sel == 1)
        tmp = din[0];
    else if (sel == 2)
        tmp = din[1];
    else if (sel == 4)
        tmp = din[2];
    else if (sel == 8)
        tmp = din[3];
    else if (sel == 16)
        tmp = din[4];
    else if (sel == 32)
        tmp = din[5];
    else if (sel == 64)
        tmp = din[6];
    else if (sel == 128)
        tmp = din[7];
    else
        tmp = 0;
    return tmp;
}
