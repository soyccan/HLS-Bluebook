#ifndef __LEADING_ONES__
#define __LEADING_ONES__

#include <ap_int.h>

#include "log2ceil.h"
#include "nextpow2.h"

#define NUM_BITS 32

bool leading_ones(ap_uint<NUM_BITS> din,
                  ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout);

bool leading_ones_bruteforce(ap_uint<NUM_BITS> din,
                             ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout);

bool leading_ones_log2(ap_uint<NUM_BITS> din,
                       ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout);

bool leading_ones_template(ap_uint<NUM_BITS> &din,
                           ap_uint<LOG2_CEIL<NUM_BITS>::val> &dout);


#endif
