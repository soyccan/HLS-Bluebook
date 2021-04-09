#ifndef __SHIFT_CLASS__
#define __SHIFT_CLASS__

template <typename dataType, int NUM_REGS>
class shift_class
{
private:
	dataType regs[NUM_REGS];
    bool en;
    bool sync_rst;
    bool ld;
//    dataType* load_data;

public:
    shift_class() : en(true), sync_rst(false), ld(false) {
#pragma HLS INLINE
#pragma HLS ARRAY_PARTITION variable=regs complete dim=1
    }

//    shift_class(dataType din[NUM_REGS]) : en(true), sync_rst(false), ld(false)
//    {
//    	load_data = din;
//    }

    void set_sync_rst(bool srst)
    {
#pragma HLS INLINE
        sync_rst = srst;
    }

    void load(bool load_in)
    {
#pragma HLS INLINE
        ld = load_in;
    }

    void set_enable(bool enable)
    {
#pragma HLS INLINE
        en = enable;
    }

    void shift(dataType din, dataType load_data[NUM_REGS])
    {
#pragma HLS INLINE
    SHIFT:
        for (int i = NUM_REGS - 1; i >= 0; i--) {
#pragma HLS UNROLL
            if (en) {
                if (sync_rst)
                    regs[i] = 0;
                else if (ld)
                    regs[i] = load_data[i];
                else if (i == 0)
                	regs[i] = din;
                else
                    regs[i] = regs[i - 1];
            }
        }
    }

    dataType operator[](int i)
    {
#pragma HLS INLINE
        return regs[i];
    }
};
#endif
