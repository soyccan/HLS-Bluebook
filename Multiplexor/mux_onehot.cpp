#include "mux.h"

dType mux_onehot(dType din[N_REGS], ap_uint<N_REGS> sel)
{
#pragma HLS INLINE off
    dType tmp;
    switch (sel) {
    case 1:
        tmp = din[0];
        break;
    case 2:
        tmp = din[1];
        break;
    case 4:
        tmp = din[2];
        break;
    case 8:
        tmp = din[3];
        break;
    case 16:
        tmp = din[4];
        break;
    case 32:
        tmp = din[5];
        break;
    case 64:
        tmp = din[6];
        break;
    case 128:
        tmp = din[7];
        break;
    default:
        tmp = 0;
        break;
    }
    return tmp;
}
