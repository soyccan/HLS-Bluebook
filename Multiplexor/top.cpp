#include "top.h"

void top(ap_uint<NUM_BITS> &leadone_in,
         ap_uint<LOG2_CEIL<NUM_BITS>::val> &leadone_out,
         bool &leadone_ret,
         dType mux_in[N_REGS],
         ap_uint<N_REGS> mux_sel_onehot,
         sType mux_sel0,
         sType mux_sel1,
         bool mux_s,
         dType &mux_ret,
         int max_in[N_REGS],
         int &max_out,
         int mode)
{
#pragma HLS ARRAY_PARTITION variable=max_in complete dim=1
#pragma HLS ARRAY_PARTITION variable=mux_in complete dim=1
    switch (mode) {
    case 0:
        leadone_ret = leading_ones(leadone_in, leadone_out);
        break;

    case 1:
        leadone_ret = leading_ones_bruteforce(leadone_in, leadone_out);
        break;

    case 2:
        leadone_ret = leading_ones_log2(leadone_in, leadone_out);
        break;

    case 3:
        leadone_ret = leading_ones_template(leadone_in, leadone_out);
        break;

    case 4:
        mux_ret = mux_2to1(mux_in, mux_s);
        break;

    case 5:
        mux_ret = mux_binary(mux_in, mux_sel0);
        break;

    case 6:
        mux_ret = mux_onehot(mux_in, mux_sel_onehot);
        break;

    case 7:
        mux_ret = mux_onehot_if(mux_in, mux_sel_onehot);
        break;

    case 8:
        mux_ret = mux_binary2onehot_opt(mux_in, mux_sel0, mux_sel1, mux_s);
        break;

    case 9:
        mux_ret = mux_binary_opt(mux_in, mux_sel0, mux_sel1, mux_s);
        break;

    case 10:
        max(max_in, max_out);
        break;

    default:
        max_algorithmic(max_in, max_out);
        break;
    }
}
