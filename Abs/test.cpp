template<typename DTYPE, unsigned int BITWIDTH = 32>
class ap_shift_reg {
  public:
    /// Constructors
    ap_shift_reg() { }
    ap_shift_reg(const char* name) { }
    /// Destructor
    virtual ~ap_shift_reg() { }

  private:
    /// Make copy constructor and assignment operator private
    ap_shift_reg(const ap_shift_reg<DTYPE, BITWIDTH>& shreg) { /*...*/ }
		/// Operator assigment
    ap_shift_reg& operator = (const ap_shift_reg<DTYPE, BITWIDTH>& shreg) { /*...*/ }

  public:
    // Shift the queue, push to back and read from a given address.
    DTYPE shift(DTYPE DataIn, unsigned int Addr = BITWIDTH - 1, bool Enable = true) {
        DTYPE ret = Array[Addr];
        if (Enable) {
            for (unsigned int i = BITWIDTH - 1; i > 0; --i)
                Array[i] = Array[i-1];
            Array[0] = DataIn;
        }
        return ret;
    }

    // Read from a given address.
    DTYPE read(unsigned int Addr = BITWIDTH - 1) const {
        return Array[Addr];
    }

  protected:
    DTYPE Array[BITWIDTH];
};
