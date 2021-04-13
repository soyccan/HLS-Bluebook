#include "Top.h"

void top(ap_uint<8> load_data,
         bool ld,
         ap_uint<8> &dout){
  static ap_uint<8> reg;
  ap_uint<1> bit;

  if (ld) {
    reg = load_data;
  } else {
    bit = reg[3] ^ reg[2];
    reg<<=1;
    reg[0] = bit;
  }
  dout = reg;
}
