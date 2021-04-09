# 1 "D:/Repo/hls/labA/Multiplexor/max_algorithmic.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "D:/Repo/hls/labA/Multiplexor/max_algorithmic.cpp"
# 1 "D:/Repo/hls/labA/Multiplexor/max.h" 1





void max(int din[8], int &dout);

void max_algorithmic(int din[8], int &dout);
# 2 "D:/Repo/hls/labA/Multiplexor/max_algorithmic.cpp" 2

void max_algorithmic(int din[8], int &dout)
{
#pragma HLS INLINE off
    int max;
    int tmp;

    for (int i = 0; i < 8; i++) {
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
