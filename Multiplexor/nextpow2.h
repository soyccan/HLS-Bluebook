#ifndef __NEXTPOW2__
#define __NEXTPOW2__

// Calculates X such that X=2^Y and 2^(Y-1) < N_VAL <= 2^Y
template <int N_VAL>
struct NEXT_POW2 {
    enum {
        val = N_VAL <= 1     ? 1 :
              N_VAL <= 2     ? 2 :
              N_VAL <= 4     ? 4 :
              N_VAL <= 8     ? 8 :
              N_VAL <= 16    ? 16 :
              N_VAL <= 32    ? 32 :
              N_VAL <= 64    ? 64 :
              N_VAL <= 128   ? 128 :
              N_VAL <= 256   ? 256 :
              N_VAL <= 512   ? 512 :
              N_VAL <= 1024  ? 1024 :
              N_VAL <= 2048  ? 2048 :
              N_VAL <= 4096  ? 4096 :
              N_VAL <= 8192  ? 8192 :
              N_VAL <= 16384 ? 16384 :
              N_VAL <= 32768 ? 32768 :
              N_VAL <= 65536 ? 65536 :
                               1048576
    };
};

#endif
