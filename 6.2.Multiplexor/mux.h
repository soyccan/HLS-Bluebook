#ifndef __MUX_BINARY__
#define __MUX_BINARY__

#include <ap_int.h>

#include "log2ceil.h"

#define N_REGS 8

// major data type of this project
typedef ap_int<8> dType;

// data type for select
// minimum #bits to index an array of N_REGS elements
typedef ap_uint<LOG2_CEIL<N_REGS>::val> sType;

dType mux_2to1(dType din[N_REGS], bool sel);
dType mux_binary2onehot_opt(dType din[N_REGS], sType sel0, sType sel1, bool s);
dType mux_binary(dType din[N_REGS], sType sel);
dType mux_binary_opt(dType din[N_REGS], sType sel0, sType sel1, bool s);
dType mux_onehot(dType din[N_REGS], ap_uint<N_REGS> sel);
dType mux_onehot_if(dType din[N_REGS], ap_uint<N_REGS> sel);

#endif
