#include "shift_reg.h"

void shift_reg(dType din0,
               int din1,
               dType load_data[N_REGS],
               dType dout0[N_REGS],
               int dout1[N_REGS1],
               bool srst,
               bool load,
               bool en,
               sType select)
{
#pragma HLS ARRAY_PARTITION variable=dout1 complete dim=1
#pragma HLS ARRAY_PARTITION variable=dout0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=load_data complete dim=1
    switch (select) {
    case 0:
        shift_reg_basic(din0, dout0);
        break;

    case 1:
        shift_reg_en(din0, dout0, en);
        break;

    case 2:
        shift_reg_load(din0, load_data, dout0, load);
        break;

    case 3:
        shift_reg_sreset(din0, dout0, srst);
        break;

    case 4:
        shift_reg_class(din0, load_data, dout0, dout0 + N_REGS0, srst, load, en);
        break;

    case 5:
    	shift_reg_ip(din0, dout0, en);
        break;

    default:
        shift_reg_template(din0, din1, dout0, dout1);
    }
}
