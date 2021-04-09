#include "shift_reg.h"

#include <stdio.h>

#define TESTBENCH_PROLOGUE printf("Testing %s\n", __func__);


bool shift_reg_template_tb()
{
    TESTBENCH_PROLOGUE;

    dType din0;
    int din1;
    dType load_data[N_REGS] = {0};
    dType dout0[N_REGS0];
    dType dout0_gold[N_REGS0] = {0};
    int dout1[N_REGS1];
    int dout1_gold[N_REGS1] = {0};
    bool srst = 0;
    bool load = 0;
    bool en = 1;
    sType select;
    bool pass = true;

    for (int i = 100; i >= 0; i--) {
        din0 = i;
        din1 = i;

        select = 6;
        shift_reg(din0, din1, load_data, dout0, dout1, srst, load, en, select);

        for (int j = N_REGS0 - 1; j >= 1; j--)
            dout0_gold[j] = dout0_gold[j - 1];
        dout0_gold[0] = din0;

        for (int j = N_REGS1 - 1; j >= 1; j--)
            dout1_gold[j] = dout1_gold[j - 1];
        dout1_gold[0] = din1;

        // verify
        for (int j = 1; j < N_REGS0; j++) {
            if (dout0_gold[j] != dout0[j]) {
                pass = false;
                printf("Different: i=%d j=%d dout0_gold=%d dout0=%d\n", i, j,
                       dout0_gold[j], dout0[j]);
            }
        }
        for (int j = 1; j < N_REGS1; j++) {
            if (dout1_gold[j] != dout1[j]) {
                pass = false;
                printf("Different: i=%d j=%d dout1_gold=%d dout1=%d\n", i, j,
                       dout1_gold[j], dout1[j]);
            }
        }
    }
    return pass;
}

bool shift_reg_tb()
{
    TESTBENCH_PROLOGUE;

    dType din;
    dType load_data[N_REGS] = {1, 2, 3};
    dType dout[N_REGS];
    dType dout_gold[N_REGS] = {0};
    bool srst = 0;
    bool load = 0;
    bool en = 0;

    bool pass = true;

    for (int select = 0; select < 6; select++) {
        // initialize DUT
        din = 0;
        srst = 1;
        load = 0;
        en = 1;
        shift_reg(din, 0, load_data, dout, 0, srst, load, en, select);

        // load data into DUT
        din = 0;
        srst = 0;
        load = 1;
        en = 1;
        shift_reg(din, 0, load_data, dout, 0, srst, load, en, select);

        // initialize gold
        for (int j = 0; j < N_REGS; j++)
            dout_gold[j] = 0;
        if (select == 2 || select == 4) {
            // if support load
            dout_gold[0] = 1;
            dout_gold[1] = 2;
            dout_gold[2] = 3;
        }

        for (int i = 100; i >= 0; i--) {
            din = i;

            // do a shift on DUT
            srst = 0;
            load = 0;
            en = 1;
            shift_reg(din, 0, load_data, dout, 0, srst, load, en, select);

            // do same operation on gold output
            for (int j = N_REGS - 1; j >= 1; j--)
                dout_gold[j] = dout_gold[j - 1];
            dout_gold[0] = din;

            // verify
            for (int j = 0; j < N_REGS; j++) {
                if (dout_gold[j] != dout[j]) {
                    pass = false;
                    printf(
                        "Different: select=%d i=%d j=%d dout_gold=%d dout=%d\n",
                        select, i, j, dout_gold[j], dout[j]);
                }
            }
        }
    }
    return pass;
}


int main()
{
    bool (*tb[])() = {shift_reg_tb, shift_reg_template_tb};

    for (int i = 0; i < sizeof(tb) / sizeof(tb[0]); i++) {
        puts("--------------");
        if (tb[i]()) {
            puts("Test passed");
        } else {
            puts("!! Test failed !!");
        }
        puts("--------------");
    }
}
