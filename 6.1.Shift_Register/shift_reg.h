// Global definitions for this project
#ifndef __SHIFT_REG__
#define __SHIFT_REG__

// The sample code in the Bluebook says <ac_int.h>,
// which is not in Xilinx's libraries
// We use <ap_int.h> instead for arbitrary-precision data types
#include <ap_int.h>

#include <stdint.h>

// Register data type: signed 8-bit integer
//typedef ap_int<8> dType;
typedef int8_t dType;

// Type for select in shift_reg
typedef ap_uint<3> sType;

// Register size
// N_REGS = N_REGS0 + N_REGS1
#define N_REGS 12
#define N_REGS0 8
#define N_REGS1 4

// #register module of different types
#define N_REG_MOD 5

void shift_reg(dType din0,
               int din1,
               dType load_data[N_REGS],
               dType dout0[N_REGS],
               int dout1[N_REGS],
               bool srst,
               bool load,
               bool en,
               sType select);

void shift_reg_basic(dType din, dType dout[N_REGS]);

void shift_reg_en(dType din, dType dout[N_REGS], bool en);

void shift_reg_load(dType din,
                    dType load_data[N_REGS],
                    dType dout[N_REGS],
                    bool load);

void shift_reg_sreset(dType din, dType dout[N_REGS], bool srst);

void shift_reg_class(dType din,
                     dType load_data[N_REGS0],
                     dType dout0[N_REGS0],
                     dType dout1[N_REGS1],
                     bool srst,
                     bool load,
                     bool en);

void shift_reg_template(dType din0,
                        int din1,
                        dType dout0[N_REGS0],
                        int dout1[N_REGS1]);

void shift_reg_ip(dType din,
                  dType dout[N_REGS],
                  bool en);

#endif
