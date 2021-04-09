#include <ap_int.h>
#include "leading_ones.h"

bool leading_ones_log2(ap_uint<NUM_BITS> din,
                       ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout)
{
#pragma HLS INLINE off
    enum { P2 = NEXT_POW2<NUM_BITS>::val };
    enum { L2 = LOG2_CEIL<NUM_BITS>::val };
    ap_uint<P2> upper, lower;
    ap_uint<P2> mask = 0;
    ap_uint<P2> din_tmp = 0; // pad din to power of 2
    bool flag = false;
    int idx = 0;
    din_tmp = din;
    mask = ~mask;
    flag = (din_tmp != 0) ? 1 : 0;
    for (int i = 0; i < L2; i++) {
        #pragma HLS UNROLL
        mask = mask >> ((P2 / 2) >> i);
        upper = lower = 0;
        upper = din_tmp >> ((P2 / 2) >> (i));
        lower = din_tmp & mask;
        din_tmp = 0;
        if (upper != 0) {
            idx = idx + ((P2 / 2) >> i);
            din_tmp = upper;
        } else
            din_tmp = lower;
    }
    dout = idx;

    return flag;
}
