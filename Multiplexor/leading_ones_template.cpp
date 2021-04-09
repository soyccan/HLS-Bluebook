#include "leading_ones.h"
#include "leading_ones_tmpl.h"

bool leading_ones_template(ap_uint<NUM_BITS> &din,
                           ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout)
{
#pragma HLS INLINE off
    return leading_ones<NUM_BITS>(din, dout);
}
