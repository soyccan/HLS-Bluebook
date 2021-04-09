#include "leading_ones.h"

bool leading_ones(ap_uint<NUM_BITS> din,
                  ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout)
{
#pragma HLS INLINE off
    int tmp = 0;
    bool flag = false;
    for (int i = NUM_BITS - 1; i >= 0; i--) {
        #pragma HLS UNROLL
        if (din[i]) {
            flag = true;
            tmp = i;
            break;
        }
    }
    dout = tmp;
    return flag;
}
