#include "shift_class.h"
#include "shift_reg.h"

void shift_reg_class(dType din,
                     dType load_data[N_REGS0],
                     dType dout0[N_REGS0],
                     dType dout1[N_REGS1],
                     bool srst,
                     bool load,
                     bool en)
{
// do not inline upward
#pragma HLS INLINE off

// recursively inline all function call below
#pragma HLS INLINE recursive

    // connect shift_reg0 wires:
    //   load data
    //   enable
    //   synchronous reset
//    static shift_class<dType, N_REGS0> shift_reg0(load_data);
	static shift_class<dType, N_REGS0> shift_reg0;

    shift_reg0.set_enable(en);
    shift_reg0.set_sync_rst(srst);
    shift_reg0.load(load);


    // connect shift_reg1 wires:
    //   enable
    static shift_class<dType, N_REGS1> shift_reg1;

    shift_reg1.set_enable(en);


    // connect shift register input
//    shift_reg1 << shift_reg0[N_REGS0 - 1];
//    shift_reg0 << din;
    shift_reg1.shift(shift_reg0[N_REGS0-1], load_data);
    shift_reg0.shift(din, load_data);


    // connect shift register output
WRITE0:
    for (int i = 0; i < N_REGS0; i++)
#pragma HLS UNROLL
        dout0[i] = shift_reg0[i];

WRITE1:
    for (int i = 0; i < N_REGS1; i++)
#pragma HLS UNROLL
        dout1[i] = shift_reg1[i];
}
