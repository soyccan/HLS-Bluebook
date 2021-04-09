#ifndef __TOP__
#define __TOP__

#include "leading_ones.h"
#include "log2ceil.h"
#include "max.h"
#include "mux.h"

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
         int mode);

#endif
