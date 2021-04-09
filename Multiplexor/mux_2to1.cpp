#include "mux.h"

dType mux_2to1(dType din[2], bool sel)
{
#pragma HLS INLINE off
    return sel ? din[1] : din[0];
}
