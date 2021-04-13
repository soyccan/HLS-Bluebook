#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <ap_int.h>

#include "top.h"

int main()
{
    ap_uint<NUM_BITS> leadone_in;
    ap_uint<LOG2_CEIL<NUM_BITS>::val> leadone_out;
    bool leadone_ret;
    dType mux_in[N_REGS];
    ap_uint<N_REGS> mux_sel_onehot;
    sType mux_sel0;
    sType mux_sel1;
    bool mux_s;
    dType mux_ret;
    int max_in[N_REGS];
    int max_out;
    bool pass = true;


    ap_uint<LOG2_CEIL<NUM_BITS>::val> leadone_out_gold;
    bool leadone_ret_gold;
    dType mux_ret_gold;
    int max_out_gold;

    // Set fixed seed
    // otherwise co-sim will fail
    srand(0);

    for (int i = 0; i < 10; i++) {
        // leading one
        // generate input
        leadone_in = rand();

        // generate golden output
        leadone_ret_gold = 0;
        for (int j = NUM_BITS - 1; j >= 0; j--)
            if ((leadone_in >> j) & 1) {
                leadone_out_gold = j;
                leadone_ret_gold = 1;
                break;
            }

        for (int mode = 0; mode <= 3; mode++) {
            // get result of DUT
            top(leadone_in, leadone_out, leadone_ret, mux_in, mux_sel_onehot,
                mux_sel0, mux_sel1, mux_s, mux_ret, max_in, max_out, mode);

            // verify
            if (leadone_ret_gold != leadone_ret ||
                leadone_out_gold != leadone_out) {
                pass = false;
                printf(
                    "Different: i=%d mode=%d leadone_in=%d "
                    "leadone_out=%d leadone_out_gold=%d leadone_ret=%d "
                    "leadone_ret_gold=%d\n",
                    i, mode, leadone_in.to_int(), leadone_out.to_int(),
                    leadone_out_gold.to_int(), leadone_ret, leadone_ret_gold);
            }
        }

        // mux
        // generate input
        for (int j = 0; j < N_REGS; j++)
            mux_in[j] = rand();
        mux_sel_onehot = (1 << (rand() % N_REGS));
        mux_sel0 = rand();
        mux_sel1 = rand();
        mux_s = rand();

        for (int mode = 4; mode <= 9; mode++) {
            // generate golden output
            if (mode == 4)
                mux_ret_gold = mux_s ? mux_in[1] : mux_in[0];
            else if (mode == 5)
                mux_ret_gold = mux_in[mux_sel0];
            else if (mode == 6 || mode == 7)
                for (int j = N_REGS - 1; j >= 0; j--) {
                    if ((mux_sel_onehot >> j) & 1)
                        mux_ret_gold = mux_in[j];
                }
            else if (mode == 8)
                mux_ret_gold = mux_s ? mux_in[mux_sel0] : mux_in[mux_sel1];
            else if (mode == 9)
                mux_ret_gold = mux_s ? mux_in[mux_sel0] : mux_in[mux_sel1];

            // get result of DUT
            top(leadone_in, leadone_out, leadone_ret, mux_in, mux_sel_onehot,
                mux_sel0, mux_sel1, mux_s, mux_ret, max_in, max_out, mode);

            // verify
            if (mux_ret_gold != mux_ret) {
                pass = false;
                printf(
                    "Different: i=%d mode=%d mux_sel_onehot=%d mux_sel0=%d "
                    "mux_sel1=%d mux_s=%d "
                    "mux_ret=%d mux_ret_gold=%d\n",
                    i, mode, mux_sel_onehot.to_int(), mux_sel0.to_int(),
                    mux_sel1.to_int(), mux_s, mux_ret.to_int(),
                    mux_ret_gold.to_int());
                for (int j = 0; j < N_REGS; j++)
                    printf("mux_in[%d] = %d\n", j, mux_in[j].to_int());
            }
        }

        // max
        // generate input
        for (int j = 0; j < N_REGS; j++) {
            max_in[j] = (rand() << 16) | rand();
        }

        // generate golden output
        max_out_gold = -2147483648;
        for (int j = 0; j < N_REGS; j++) {
            if (max_in[j] > max_out_gold) {
                max_out_gold = max_in[j];
            }
        }

        for (int mode = 10; mode <= 11; mode++) {
            // get result of DUT
            top(leadone_in, leadone_out, leadone_ret, mux_in, mux_sel_onehot,
                mux_sel0, mux_sel1, mux_s, mux_ret, max_in, max_out, mode);

            // verify
            if (max_out_gold != max_out) {
                pass = false;

                printf(
                    "Different: i=%d mode=%d "
                    "max_out=%d max_out_gold=%d\n",
                    i, mode, max_out, max_out_gold);

                for (int j = 0; j < N_REGS; j++)
                    printf("max_in[%d] = %d\n", j, max_in[j]);
            }
        }
    }


    if (pass)
        puts("Test passed");
    else
        puts("!!! TEST FAILED !!!");
}
