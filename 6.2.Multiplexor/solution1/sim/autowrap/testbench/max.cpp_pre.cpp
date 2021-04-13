# 1 "D:/Repo/hls/labA/Multiplexor/max.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "D:/Repo/hls/labA/Multiplexor/max.cpp"
# 1 "D:/Repo/hls/labA/Multiplexor/max.h" 1





void max(int din[8], int &dout);

void max_algorithmic(int din[8], int &dout);
# 2 "D:/Repo/hls/labA/Multiplexor/max.cpp" 2
# 1 "D:/Repo/hls/labA/Multiplexor/max_tmpl.h" 1
template <int N>
struct max_s {
    template <typename T>
    static T max(T *a)
    {
        T m0 = max_s<N / 2>::max(a);
        T m1 = max_s<N - N / 2>::max(a + N / 2);
        return m0 > m1 ? m0 : m1;
    }
};


template <>
struct max_s<1> {
    template <typename T>
    static T max(T *a)
    {
        return a[0];
    }
};

template <int N, typename T>
T max(T *a)
{
    return max_s<N>::max(a);
}
# 3 "D:/Repo/hls/labA/Multiplexor/max.cpp" 2
void max(int din[8], int &dout)
{
#pragma HLS INLINE off
    dout = max<8>(din);
}
