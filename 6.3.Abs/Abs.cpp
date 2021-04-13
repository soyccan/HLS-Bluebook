#include "Abs.h"

ABSTYPE abs_naive(ABSTYPE din) {
	ABSTYPE tmp = din;
	if (tmp<0)
		tmp = -tmp;
	return tmp;
}
ABSTYPE abs_xor(ABSTYPE din) {
	ABSTYPE tmp0=0, tmp1=0;
	tmp0 = din;
	for (int i=0; i<8; i++)
		#pragma HLS UNROLL
		tmp1[i] = tmp0[i]^tmp0[7];
	return tmp1+tmp0[7];
}
ABSTYPE abs_xilinx(ABSTYPE din) {
	ABSTYPE xs      = -din;
	        xs[8-1] = 0;
	return ( ( din[8-1] ) ? xs : din );
}
