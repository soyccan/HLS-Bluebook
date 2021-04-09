#include "max.h"

void max_algorithmic(int din[N_REGS], int &dout)
{
#pragma HLS INLINE off
    int max;
    int tmp;

    for (int i = 0; i < N_REGS; i++) {
        #pragma HLS UNROLL
        if (i == 0)
            max = din[i];
        else {
            tmp = din[i];
            if (tmp > max)
                max = tmp;
        }
    }
    dout = max;
}
