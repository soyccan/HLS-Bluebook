#include <ap_int.h>
#include "leading_ones.h"

bool leading_ones_bruteforce(ap_uint<NUM_BITS> din,
                             ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout)
{
#pragma HLS INLINE off
    int upper = 0, lower = 0;
    bool flagu = false;
    bool flagl = false;
    for (int i = NUM_BITS - 1; i >= NUM_BITS / 2; i--)
        #pragma HLS UNROLL
        if (din[i]) {
            upper = i;
            flagu = true;
            break;
        }
    for (int i = NUM_BITS / 2 - 1; i >= 0; i--)
        #pragma HLS UNROLL
        if (din[i]) {
            lower = i;
            flagl = true;
            break;
        }
    dout = flagu ? upper : lower;
    return flagu | flagl;
}
