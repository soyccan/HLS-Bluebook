#ifndef __LEADING_ONES_TMPL__
#define __LEADING_ONES_TMPL__

#include <ap_int.h>
#include "log2ceil.h"
#include "nextpow2.h"

template <int N_BITS>
bool leading_ones(ap_uint<N_BITS> &din, ap_uint<LOG2_CEIL<N_BITS>::val> &dout)
{
    enum { P2 = NEXT_POW2<(N_BITS + 1) / 2>::val };
    ap_uint<N_BITS - P2> upper;
    ap_uint<P2> lower;
    ap_uint<LOG2_CEIL<N_BITS>::val> idx = 0;
    ap_uint<LOG2_CEIL<N_BITS - P2>::val> idxu = 0;
    ap_uint<LOG2_CEIL<P2>::val> idxl = 0;
    static bool flag = false;

    upper = din >> P2;
    lower = din;
    flag = (din != 0) ? 1 : 0;
    if (upper) {
        leading_ones<N_BITS - P2>(upper, idxu);
        idx = idxu | P2;
    } else {
        leading_ones<P2>(lower, idxl);
        idx = idxl;
    }
    dout = idx;
    return flag;
}

template <>
bool leading_ones<1>(ap_uint<1> &din, ap_uint<1> &dout)
{
    dout = 0;
    return din[0];
}
#endif
