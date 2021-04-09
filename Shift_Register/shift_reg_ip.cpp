#include <ap_shift_reg.h>
#include "shift_reg.h"

void shift_reg_ip(dType din,
                  dType dout[N_REGS],
                  bool en)
{
#pragma HLS INLINE off
#pragma HLS INLINE recursive
	// Define a variable of type ap_shift_reg<type, depth>
	// - Sreg must use the static qualifier
	// - Sreg will hold integer data types
	// - Sreg will hold 4 data values
	static ap_shift_reg<int, N_REGS> Sreg;
	int var1;

	// Read location 3 of Sreg into var1
	// THEN if En=1
	// Shift all values up one and load In1 into location 0
	var1 = Sreg.shift(din, 3, en);

WRITE:
	for (int i = 0; i < N_REGS; i++)
#pragma HLS UNROLL
		dout[i] = Sreg.read(i);
}
