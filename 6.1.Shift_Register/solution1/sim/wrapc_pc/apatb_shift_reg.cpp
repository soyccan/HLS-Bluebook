// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "din0"
#define AUTOTB_TVIN_din0  "../tv/cdatafile/c.shift_reg.autotvin_din0.dat"
// wrapc file define: "din1"
#define AUTOTB_TVIN_din1  "../tv/cdatafile/c.shift_reg.autotvin_din1.dat"
// wrapc file define: "load_data_0"
#define AUTOTB_TVIN_load_data_0  "../tv/cdatafile/c.shift_reg.autotvin_load_data_0.dat"
// wrapc file define: "load_data_1"
#define AUTOTB_TVIN_load_data_1  "../tv/cdatafile/c.shift_reg.autotvin_load_data_1.dat"
// wrapc file define: "load_data_2"
#define AUTOTB_TVIN_load_data_2  "../tv/cdatafile/c.shift_reg.autotvin_load_data_2.dat"
// wrapc file define: "load_data_3"
#define AUTOTB_TVIN_load_data_3  "../tv/cdatafile/c.shift_reg.autotvin_load_data_3.dat"
// wrapc file define: "load_data_4"
#define AUTOTB_TVIN_load_data_4  "../tv/cdatafile/c.shift_reg.autotvin_load_data_4.dat"
// wrapc file define: "load_data_5"
#define AUTOTB_TVIN_load_data_5  "../tv/cdatafile/c.shift_reg.autotvin_load_data_5.dat"
// wrapc file define: "load_data_6"
#define AUTOTB_TVIN_load_data_6  "../tv/cdatafile/c.shift_reg.autotvin_load_data_6.dat"
// wrapc file define: "load_data_7"
#define AUTOTB_TVIN_load_data_7  "../tv/cdatafile/c.shift_reg.autotvin_load_data_7.dat"
// wrapc file define: "load_data_8"
#define AUTOTB_TVIN_load_data_8  "../tv/cdatafile/c.shift_reg.autotvin_load_data_8.dat"
// wrapc file define: "load_data_9"
#define AUTOTB_TVIN_load_data_9  "../tv/cdatafile/c.shift_reg.autotvin_load_data_9.dat"
// wrapc file define: "load_data_10"
#define AUTOTB_TVIN_load_data_10  "../tv/cdatafile/c.shift_reg.autotvin_load_data_10.dat"
// wrapc file define: "load_data_11"
#define AUTOTB_TVIN_load_data_11  "../tv/cdatafile/c.shift_reg.autotvin_load_data_11.dat"
// wrapc file define: "dout0_0"
#define AUTOTB_TVOUT_dout0_0  "../tv/cdatafile/c.shift_reg.autotvout_dout0_0.dat"
// wrapc file define: "dout0_1"
#define AUTOTB_TVOUT_dout0_1  "../tv/cdatafile/c.shift_reg.autotvout_dout0_1.dat"
// wrapc file define: "dout0_2"
#define AUTOTB_TVOUT_dout0_2  "../tv/cdatafile/c.shift_reg.autotvout_dout0_2.dat"
// wrapc file define: "dout0_3"
#define AUTOTB_TVOUT_dout0_3  "../tv/cdatafile/c.shift_reg.autotvout_dout0_3.dat"
// wrapc file define: "dout0_4"
#define AUTOTB_TVOUT_dout0_4  "../tv/cdatafile/c.shift_reg.autotvout_dout0_4.dat"
// wrapc file define: "dout0_5"
#define AUTOTB_TVOUT_dout0_5  "../tv/cdatafile/c.shift_reg.autotvout_dout0_5.dat"
// wrapc file define: "dout0_6"
#define AUTOTB_TVOUT_dout0_6  "../tv/cdatafile/c.shift_reg.autotvout_dout0_6.dat"
// wrapc file define: "dout0_7"
#define AUTOTB_TVOUT_dout0_7  "../tv/cdatafile/c.shift_reg.autotvout_dout0_7.dat"
// wrapc file define: "dout0_8"
#define AUTOTB_TVOUT_dout0_8  "../tv/cdatafile/c.shift_reg.autotvout_dout0_8.dat"
// wrapc file define: "dout0_9"
#define AUTOTB_TVOUT_dout0_9  "../tv/cdatafile/c.shift_reg.autotvout_dout0_9.dat"
// wrapc file define: "dout0_10"
#define AUTOTB_TVOUT_dout0_10  "../tv/cdatafile/c.shift_reg.autotvout_dout0_10.dat"
// wrapc file define: "dout0_11"
#define AUTOTB_TVOUT_dout0_11  "../tv/cdatafile/c.shift_reg.autotvout_dout0_11.dat"
// wrapc file define: "dout1_0"
#define AUTOTB_TVOUT_dout1_0  "../tv/cdatafile/c.shift_reg.autotvout_dout1_0.dat"
// wrapc file define: "dout1_1"
#define AUTOTB_TVOUT_dout1_1  "../tv/cdatafile/c.shift_reg.autotvout_dout1_1.dat"
// wrapc file define: "dout1_2"
#define AUTOTB_TVOUT_dout1_2  "../tv/cdatafile/c.shift_reg.autotvout_dout1_2.dat"
// wrapc file define: "dout1_3"
#define AUTOTB_TVOUT_dout1_3  "../tv/cdatafile/c.shift_reg.autotvout_dout1_3.dat"
// wrapc file define: "srst"
#define AUTOTB_TVIN_srst  "../tv/cdatafile/c.shift_reg.autotvin_srst.dat"
// wrapc file define: "load"
#define AUTOTB_TVIN_load  "../tv/cdatafile/c.shift_reg.autotvin_load.dat"
// wrapc file define: "en"
#define AUTOTB_TVIN_en  "../tv/cdatafile/c.shift_reg.autotvin_en.dat"
// wrapc file define: "select_V"
#define AUTOTB_TVIN_select_V  "../tv/cdatafile/c.shift_reg.autotvin_select_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "dout0_0"
#define AUTOTB_TVOUT_PC_dout0_0  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_0.dat"
// tvout file define: "dout0_1"
#define AUTOTB_TVOUT_PC_dout0_1  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_1.dat"
// tvout file define: "dout0_2"
#define AUTOTB_TVOUT_PC_dout0_2  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_2.dat"
// tvout file define: "dout0_3"
#define AUTOTB_TVOUT_PC_dout0_3  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_3.dat"
// tvout file define: "dout0_4"
#define AUTOTB_TVOUT_PC_dout0_4  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_4.dat"
// tvout file define: "dout0_5"
#define AUTOTB_TVOUT_PC_dout0_5  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_5.dat"
// tvout file define: "dout0_6"
#define AUTOTB_TVOUT_PC_dout0_6  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_6.dat"
// tvout file define: "dout0_7"
#define AUTOTB_TVOUT_PC_dout0_7  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_7.dat"
// tvout file define: "dout0_8"
#define AUTOTB_TVOUT_PC_dout0_8  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_8.dat"
// tvout file define: "dout0_9"
#define AUTOTB_TVOUT_PC_dout0_9  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_9.dat"
// tvout file define: "dout0_10"
#define AUTOTB_TVOUT_PC_dout0_10  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_10.dat"
// tvout file define: "dout0_11"
#define AUTOTB_TVOUT_PC_dout0_11  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout0_11.dat"
// tvout file define: "dout1_0"
#define AUTOTB_TVOUT_PC_dout1_0  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout1_0.dat"
// tvout file define: "dout1_1"
#define AUTOTB_TVOUT_PC_dout1_1  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout1_1.dat"
// tvout file define: "dout1_2"
#define AUTOTB_TVOUT_PC_dout1_2  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout1_2.dat"
// tvout file define: "dout1_3"
#define AUTOTB_TVOUT_PC_dout1_3  "../tv/rtldatafile/rtl.shift_reg.autotvout_dout1_3.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			din0_depth = 0;
			din1_depth = 0;
			load_data_0_depth = 0;
			load_data_1_depth = 0;
			load_data_2_depth = 0;
			load_data_3_depth = 0;
			load_data_4_depth = 0;
			load_data_5_depth = 0;
			load_data_6_depth = 0;
			load_data_7_depth = 0;
			load_data_8_depth = 0;
			load_data_9_depth = 0;
			load_data_10_depth = 0;
			load_data_11_depth = 0;
			dout0_0_depth = 0;
			dout0_1_depth = 0;
			dout0_2_depth = 0;
			dout0_3_depth = 0;
			dout0_4_depth = 0;
			dout0_5_depth = 0;
			dout0_6_depth = 0;
			dout0_7_depth = 0;
			dout0_8_depth = 0;
			dout0_9_depth = 0;
			dout0_10_depth = 0;
			dout0_11_depth = 0;
			dout1_0_depth = 0;
			dout1_1_depth = 0;
			dout1_2_depth = 0;
			dout1_3_depth = 0;
			srst_depth = 0;
			load_depth = 0;
			en_depth = 0;
			select_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{din0 " << din0_depth << "}\n";
			total_list << "{din1 " << din1_depth << "}\n";
			total_list << "{load_data_0 " << load_data_0_depth << "}\n";
			total_list << "{load_data_1 " << load_data_1_depth << "}\n";
			total_list << "{load_data_2 " << load_data_2_depth << "}\n";
			total_list << "{load_data_3 " << load_data_3_depth << "}\n";
			total_list << "{load_data_4 " << load_data_4_depth << "}\n";
			total_list << "{load_data_5 " << load_data_5_depth << "}\n";
			total_list << "{load_data_6 " << load_data_6_depth << "}\n";
			total_list << "{load_data_7 " << load_data_7_depth << "}\n";
			total_list << "{load_data_8 " << load_data_8_depth << "}\n";
			total_list << "{load_data_9 " << load_data_9_depth << "}\n";
			total_list << "{load_data_10 " << load_data_10_depth << "}\n";
			total_list << "{load_data_11 " << load_data_11_depth << "}\n";
			total_list << "{dout0_0 " << dout0_0_depth << "}\n";
			total_list << "{dout0_1 " << dout0_1_depth << "}\n";
			total_list << "{dout0_2 " << dout0_2_depth << "}\n";
			total_list << "{dout0_3 " << dout0_3_depth << "}\n";
			total_list << "{dout0_4 " << dout0_4_depth << "}\n";
			total_list << "{dout0_5 " << dout0_5_depth << "}\n";
			total_list << "{dout0_6 " << dout0_6_depth << "}\n";
			total_list << "{dout0_7 " << dout0_7_depth << "}\n";
			total_list << "{dout0_8 " << dout0_8_depth << "}\n";
			total_list << "{dout0_9 " << dout0_9_depth << "}\n";
			total_list << "{dout0_10 " << dout0_10_depth << "}\n";
			total_list << "{dout0_11 " << dout0_11_depth << "}\n";
			total_list << "{dout1_0 " << dout1_0_depth << "}\n";
			total_list << "{dout1_1 " << dout1_1_depth << "}\n";
			total_list << "{dout1_2 " << dout1_2_depth << "}\n";
			total_list << "{dout1_3 " << dout1_3_depth << "}\n";
			total_list << "{srst " << srst_depth << "}\n";
			total_list << "{load " << load_depth << "}\n";
			total_list << "{en " << en_depth << "}\n";
			total_list << "{select_V " << select_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int din0_depth;
		int din1_depth;
		int load_data_0_depth;
		int load_data_1_depth;
		int load_data_2_depth;
		int load_data_3_depth;
		int load_data_4_depth;
		int load_data_5_depth;
		int load_data_6_depth;
		int load_data_7_depth;
		int load_data_8_depth;
		int load_data_9_depth;
		int load_data_10_depth;
		int load_data_11_depth;
		int dout0_0_depth;
		int dout0_1_depth;
		int dout0_2_depth;
		int dout0_3_depth;
		int dout0_4_depth;
		int dout0_5_depth;
		int dout0_6_depth;
		int dout0_7_depth;
		int dout0_8_depth;
		int dout0_9_depth;
		int dout0_10_depth;
		int dout0_11_depth;
		int dout1_0_depth;
		int dout1_1_depth;
		int dout1_2_depth;
		int dout1_3_depth;
		int srst_depth;
		int load_depth;
		int en_depth;
		int select_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void shift_reg (
signed char din0,
int din1,
signed char load_data[12],
signed char dout0[12],
int dout1[4],
bool srst,
bool load,
bool en,
ap_uint<3> select);

void AESL_WRAP_shift_reg (
signed char din0,
int din1,
signed char load_data[12],
signed char dout0[12],
int dout1[4],
bool srst,
bool load,
bool en,
ap_uint<3> select)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "dout0_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_0, AESL_token); // data

			sc_bv<8> *dout0_0_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_0
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_0_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_0_0_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_0_0_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_0_pc_buffer;
		}

		// output port post check: "dout0_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_1, AESL_token); // data

			sc_bv<8> *dout0_1_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_1
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_1_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_1_1_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_1_1_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_1_pc_buffer;
		}

		// output port post check: "dout0_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_2, AESL_token); // data

			sc_bv<8> *dout0_2_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_2
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_2_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_2_2_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_2_2_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_2_pc_buffer;
		}

		// output port post check: "dout0_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_3, AESL_token); // data

			sc_bv<8> *dout0_3_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_3
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_3_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_3_3_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_3_3_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_3_pc_buffer;
		}

		// output port post check: "dout0_4"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_4, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_4, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_4, AESL_token); // data

			sc_bv<8> *dout0_4_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_4_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_4, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_4))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_4
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_4_4_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_4_4_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_4_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_4_4_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_4_4_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_4_pc_buffer;
		}

		// output port post check: "dout0_5"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_5, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_5, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_5, AESL_token); // data

			sc_bv<8> *dout0_5_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_5_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_5, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_5))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_5
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_5_5_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_5_5_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_5_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_5_5_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_5_5_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_5_pc_buffer;
		}

		// output port post check: "dout0_6"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_6, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_6, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_6, AESL_token); // data

			sc_bv<8> *dout0_6_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_6_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_6, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_6))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_6
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_6_6_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_6_6_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_6_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_6_6_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_6_6_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_6_pc_buffer;
		}

		// output port post check: "dout0_7"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_7, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_7, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_7, AESL_token); // data

			sc_bv<8> *dout0_7_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_7_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_7, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_7))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_7
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_7_7_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_7_7_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_7_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_7_7_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_7_7_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_7_pc_buffer;
		}

		// output port post check: "dout0_8"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_8, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_8, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_8, AESL_token); // data

			sc_bv<8> *dout0_8_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_8', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_8', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_8_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_8, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_8))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_8
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_8_8_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_8_8_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_8_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_8_8_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_8_8_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_8_pc_buffer;
		}

		// output port post check: "dout0_9"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_9, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_9, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_9, AESL_token); // data

			sc_bv<8> *dout0_9_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_9', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_9', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_9_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_9, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_9))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_9
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_9_9_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_9_9_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_9_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_9_9_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_9_9_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_9_pc_buffer;
		}

		// output port post check: "dout0_10"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_10, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_10, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_10, AESL_token); // data

			sc_bv<8> *dout0_10_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_10', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_10', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_10_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_10, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_10))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_10
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_10_10_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_10_10_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_10_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_10_10_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_10_10_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_10_pc_buffer;
		}

		// output port post check: "dout0_11"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_11, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout0_11, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout0_11, AESL_token); // data

			sc_bv<8> *dout0_11_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_11', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout0_11', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout0_11_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout0_11, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout0_11))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout0_11
				{
					// bitslice(7, 0)
					// {
						// celement: dout0(7, 0)
						// {
							sc_lv<8>* dout0_lv0_11_11_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0_lv0_11_11_2[hls_map_index].range(7, 0) = sc_bv<8>(dout0_11_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: dout0(7, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout0[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout0[0]
								// output_left_conversion : dout0[i_0]
								// output_type_conversion : (dout0_lv0_11_11_2[hls_map_index]).to_uint64()
								if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
								{
									dout0[i_0] = (dout0_lv0_11_11_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout0_11_pc_buffer;
		}

		// output port post check: "dout1_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout1_0, AESL_token); // data

			sc_bv<32> *dout1_0_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout1_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout1_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout1_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout1_0
				{
					// bitslice(31, 0)
					// {
						// celement: dout1(31, 0)
						// {
							sc_lv<32>* dout1_lv0_0_0_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1_lv0_0_0_2[hls_map_index].range(31, 0) = sc_bv<32>(dout1_0_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout1[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout1[0]
								// output_left_conversion : dout1[i_0]
								// output_type_conversion : (dout1_lv0_0_0_2[hls_map_index]).to_uint64()
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1[i_0] = (dout1_lv0_0_0_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout1_0_pc_buffer;
		}

		// output port post check: "dout1_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout1_1, AESL_token); // data

			sc_bv<32> *dout1_1_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout1_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout1_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout1_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout1_1
				{
					// bitslice(31, 0)
					// {
						// celement: dout1(31, 0)
						// {
							sc_lv<32>* dout1_lv0_1_1_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1_lv0_1_1_2[hls_map_index].range(31, 0) = sc_bv<32>(dout1_1_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout1[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout1[0]
								// output_left_conversion : dout1[i_0]
								// output_type_conversion : (dout1_lv0_1_1_2[hls_map_index]).to_uint64()
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1[i_0] = (dout1_lv0_1_1_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout1_1_pc_buffer;
		}

		// output port post check: "dout1_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout1_2, AESL_token); // data

			sc_bv<32> *dout1_2_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout1_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout1_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout1_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout1_2
				{
					// bitslice(31, 0)
					// {
						// celement: dout1(31, 0)
						// {
							sc_lv<32>* dout1_lv0_2_2_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1_lv0_2_2_2[hls_map_index].range(31, 0) = sc_bv<32>(dout1_2_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout1[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout1[0]
								// output_left_conversion : dout1[i_0]
								// output_type_conversion : (dout1_lv0_2_2_2[hls_map_index]).to_uint64()
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1[i_0] = (dout1_lv0_2_2_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout1_2_pc_buffer;
		}

		// output port post check: "dout1_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout1_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout1_3, AESL_token); // data

			sc_bv<32> *dout1_3_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout1_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout1_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout1_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout1_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout1_3
				{
					// bitslice(31, 0)
					// {
						// celement: dout1(31, 0)
						// {
							sc_lv<32>* dout1_lv0_3_3_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1_lv0_3_3_2[hls_map_index].range(31, 0) = sc_bv<32>(dout1_3_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dout1(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : dout1[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout1[0]
								// output_left_conversion : dout1[i_0]
								// output_type_conversion : (dout1_lv0_3_3_2[hls_map_index]).to_uint64()
								if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
								{
									dout1[i_0] = (dout1_lv0_3_3_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout1_3_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "din0"
		char* tvin_din0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_din0);

		// "din1"
		char* tvin_din1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_din1);

		// "load_data_0"
		char* tvin_load_data_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_0);

		// "load_data_1"
		char* tvin_load_data_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_1);

		// "load_data_2"
		char* tvin_load_data_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_2);

		// "load_data_3"
		char* tvin_load_data_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_3);

		// "load_data_4"
		char* tvin_load_data_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_4);

		// "load_data_5"
		char* tvin_load_data_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_5);

		// "load_data_6"
		char* tvin_load_data_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_6);

		// "load_data_7"
		char* tvin_load_data_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_7);

		// "load_data_8"
		char* tvin_load_data_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_8);

		// "load_data_9"
		char* tvin_load_data_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_9);

		// "load_data_10"
		char* tvin_load_data_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_10);

		// "load_data_11"
		char* tvin_load_data_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load_data_11);

		// "dout0_0"
		char* tvout_dout0_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_0);

		// "dout0_1"
		char* tvout_dout0_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_1);

		// "dout0_2"
		char* tvout_dout0_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_2);

		// "dout0_3"
		char* tvout_dout0_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_3);

		// "dout0_4"
		char* tvout_dout0_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_4);

		// "dout0_5"
		char* tvout_dout0_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_5);

		// "dout0_6"
		char* tvout_dout0_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_6);

		// "dout0_7"
		char* tvout_dout0_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_7);

		// "dout0_8"
		char* tvout_dout0_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_8);

		// "dout0_9"
		char* tvout_dout0_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_9);

		// "dout0_10"
		char* tvout_dout0_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_10);

		// "dout0_11"
		char* tvout_dout0_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout0_11);

		// "dout1_0"
		char* tvout_dout1_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout1_0);

		// "dout1_1"
		char* tvout_dout1_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout1_1);

		// "dout1_2"
		char* tvout_dout1_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout1_2);

		// "dout1_3"
		char* tvout_dout1_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout1_3);

		// "srst"
		char* tvin_srst = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_srst);

		// "load"
		char* tvin_load = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_load);

		// "en"
		char* tvin_en = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_en);

		// "select_V"
		char* tvin_select_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_select_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_din0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_din0, tvin_din0);

		sc_bv<8> din0_tvin_wrapc_buffer;

		// RTL Name: din0
		{
			// bitslice(7, 0)
			{
				// celement: din0(7, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : din0
						// sub_1st_elem          : 
						// ori_name_1st_elem     : din0
						// regulate_c_name       : din0
						// input_type_conversion : din0
						if (&(din0) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> din0_tmp_mem;
							din0_tmp_mem = din0;
							din0_tvin_wrapc_buffer.range(7, 0) = din0_tmp_mem.range(7, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_din0, "%s\n", (din0_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_din0, tvin_din0);
		}

		tcl_file.set_num(1, &tcl_file.din0_depth);
		sprintf(tvin_din0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_din0, tvin_din0);

		// [[transaction]]
		sprintf(tvin_din1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_din1, tvin_din1);

		sc_bv<32> din1_tvin_wrapc_buffer;

		// RTL Name: din1
		{
			// bitslice(31, 0)
			{
				// celement: din1(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : din1
						// sub_1st_elem          : 
						// ori_name_1st_elem     : din1
						// regulate_c_name       : din1
						// input_type_conversion : din1
						if (&(din1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> din1_tmp_mem;
							din1_tmp_mem = din1;
							din1_tvin_wrapc_buffer.range(31, 0) = din1_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_din1, "%s\n", (din1_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_din1, tvin_din1);
		}

		tcl_file.set_num(1, &tcl_file.din1_depth);
		sprintf(tvin_din1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_din1, tvin_din1);

		// [[transaction]]
		sprintf(tvin_load_data_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_0, tvin_load_data_0);

		sc_bv<8>* load_data_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_0, "%s\n", (load_data_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_0, tvin_load_data_0);
		}

		tcl_file.set_num(1, &tcl_file.load_data_0_depth);
		sprintf(tvin_load_data_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_0, tvin_load_data_0);

		// release memory allocation
		delete [] load_data_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_1, tvin_load_data_1);

		sc_bv<8>* load_data_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_1, "%s\n", (load_data_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_1, tvin_load_data_1);
		}

		tcl_file.set_num(1, &tcl_file.load_data_1_depth);
		sprintf(tvin_load_data_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_1, tvin_load_data_1);

		// release memory allocation
		delete [] load_data_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_2, tvin_load_data_2);

		sc_bv<8>* load_data_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_2, "%s\n", (load_data_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_2, tvin_load_data_2);
		}

		tcl_file.set_num(1, &tcl_file.load_data_2_depth);
		sprintf(tvin_load_data_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_2, tvin_load_data_2);

		// release memory allocation
		delete [] load_data_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_3, tvin_load_data_3);

		sc_bv<8>* load_data_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_3, "%s\n", (load_data_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_3, tvin_load_data_3);
		}

		tcl_file.set_num(1, &tcl_file.load_data_3_depth);
		sprintf(tvin_load_data_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_3, tvin_load_data_3);

		// release memory allocation
		delete [] load_data_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_4, tvin_load_data_4);

		sc_bv<8>* load_data_4_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_4, "%s\n", (load_data_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_4, tvin_load_data_4);
		}

		tcl_file.set_num(1, &tcl_file.load_data_4_depth);
		sprintf(tvin_load_data_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_4, tvin_load_data_4);

		// release memory allocation
		delete [] load_data_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_5, tvin_load_data_5);

		sc_bv<8>* load_data_5_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_5, "%s\n", (load_data_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_5, tvin_load_data_5);
		}

		tcl_file.set_num(1, &tcl_file.load_data_5_depth);
		sprintf(tvin_load_data_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_5, tvin_load_data_5);

		// release memory allocation
		delete [] load_data_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_6, tvin_load_data_6);

		sc_bv<8>* load_data_6_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_6, "%s\n", (load_data_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_6, tvin_load_data_6);
		}

		tcl_file.set_num(1, &tcl_file.load_data_6_depth);
		sprintf(tvin_load_data_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_6, tvin_load_data_6);

		// release memory allocation
		delete [] load_data_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_7, tvin_load_data_7);

		sc_bv<8>* load_data_7_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_7, "%s\n", (load_data_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_7, tvin_load_data_7);
		}

		tcl_file.set_num(1, &tcl_file.load_data_7_depth);
		sprintf(tvin_load_data_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_7, tvin_load_data_7);

		// release memory allocation
		delete [] load_data_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_8, tvin_load_data_8);

		sc_bv<8>* load_data_8_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_8_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_8, "%s\n", (load_data_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_8, tvin_load_data_8);
		}

		tcl_file.set_num(1, &tcl_file.load_data_8_depth);
		sprintf(tvin_load_data_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_8, tvin_load_data_8);

		// release memory allocation
		delete [] load_data_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_9, tvin_load_data_9);

		sc_bv<8>* load_data_9_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_9_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_9, "%s\n", (load_data_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_9, tvin_load_data_9);
		}

		tcl_file.set_num(1, &tcl_file.load_data_9_depth);
		sprintf(tvin_load_data_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_9, tvin_load_data_9);

		// release memory allocation
		delete [] load_data_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_10, tvin_load_data_10);

		sc_bv<8>* load_data_10_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_10_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_10, "%s\n", (load_data_10_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_10, tvin_load_data_10);
		}

		tcl_file.set_num(1, &tcl_file.load_data_10_depth);
		sprintf(tvin_load_data_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_10, tvin_load_data_10);

		// release memory allocation
		delete [] load_data_10_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_load_data_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load_data_11, tvin_load_data_11);

		sc_bv<8>* load_data_11_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: load_data_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: load_data(7, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : load_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : load_data[0]
						// regulate_c_name       : load_data
						// input_type_conversion : load_data[i_0]
						if (&(load_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> load_data_tmp_mem;
							load_data_tmp_mem = load_data[i_0];
							load_data_11_tvin_wrapc_buffer[hls_map_index].range(7, 0) = load_data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load_data_11, "%s\n", (load_data_11_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load_data_11, tvin_load_data_11);
		}

		tcl_file.set_num(1, &tcl_file.load_data_11_depth);
		sprintf(tvin_load_data_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load_data_11, tvin_load_data_11);

		// release memory allocation
		delete [] load_data_11_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_srst, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_srst, tvin_srst);

		sc_bv<1> srst_tvin_wrapc_buffer;

		// RTL Name: srst
		{
			// bitslice(0, 0)
			{
				// celement: srst(0, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : srst
						// sub_1st_elem          : 
						// ori_name_1st_elem     : srst
						// regulate_c_name       : srst
						// input_type_conversion : srst
						if (&(srst) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> srst_tmp_mem;
							srst_tmp_mem = srst;
							srst_tvin_wrapc_buffer.range(0, 0) = srst_tmp_mem.range(0, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_srst, "%s\n", (srst_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_srst, tvin_srst);
		}

		tcl_file.set_num(1, &tcl_file.srst_depth);
		sprintf(tvin_srst, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_srst, tvin_srst);

		// [[transaction]]
		sprintf(tvin_load, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_load, tvin_load);

		sc_bv<1> load_tvin_wrapc_buffer;

		// RTL Name: load
		{
			// bitslice(0, 0)
			{
				// celement: load(0, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : load
						// sub_1st_elem          : 
						// ori_name_1st_elem     : load
						// regulate_c_name       : load
						// input_type_conversion : load
						if (&(load) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> load_tmp_mem;
							load_tmp_mem = load;
							load_tvin_wrapc_buffer.range(0, 0) = load_tmp_mem.range(0, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_load, "%s\n", (load_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_load, tvin_load);
		}

		tcl_file.set_num(1, &tcl_file.load_depth);
		sprintf(tvin_load, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_load, tvin_load);

		// [[transaction]]
		sprintf(tvin_en, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_en, tvin_en);

		sc_bv<1> en_tvin_wrapc_buffer;

		// RTL Name: en
		{
			// bitslice(0, 0)
			{
				// celement: en(0, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : en
						// sub_1st_elem          : 
						// ori_name_1st_elem     : en
						// regulate_c_name       : en
						// input_type_conversion : en
						if (&(en) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> en_tmp_mem;
							en_tmp_mem = en;
							en_tvin_wrapc_buffer.range(0, 0) = en_tmp_mem.range(0, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_en, "%s\n", (en_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_en, tvin_en);
		}

		tcl_file.set_num(1, &tcl_file.en_depth);
		sprintf(tvin_en, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_en, tvin_en);

		// [[transaction]]
		sprintf(tvin_select_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_select_V, tvin_select_V);

		sc_bv<3> select_V_tvin_wrapc_buffer;

		// RTL Name: select_V
		{
			// bitslice(2, 0)
			{
				// celement: select.V(2, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : select
						// sub_1st_elem          : 
						// ori_name_1st_elem     : select
						// regulate_c_name       : select_V
						// input_type_conversion : (select).to_string(2).c_str()
						if (&(select) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<3> select_V_tmp_mem;
							select_V_tmp_mem = (select).to_string(2).c_str();
							select_V_tvin_wrapc_buffer.range(2, 0) = select_V_tmp_mem.range(2, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_select_V, "%s\n", (select_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_select_V, tvin_select_V);
		}

		tcl_file.set_num(1, &tcl_file.select_V_depth);
		sprintf(tvin_select_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_select_V, tvin_select_V);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		shift_reg(din0, din1, load_data, dout0, dout1, srst, load, en, select);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_dout0_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_0, tvout_dout0_0);

		sc_bv<8>* dout0_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_0, "%s\n", (dout0_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_0, tvout_dout0_0);
		}

		tcl_file.set_num(1, &tcl_file.dout0_0_depth);
		sprintf(tvout_dout0_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_0, tvout_dout0_0);

		// release memory allocation
		delete [] dout0_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_1, tvout_dout0_1);

		sc_bv<8>* dout0_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_1, "%s\n", (dout0_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_1, tvout_dout0_1);
		}

		tcl_file.set_num(1, &tcl_file.dout0_1_depth);
		sprintf(tvout_dout0_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_1, tvout_dout0_1);

		// release memory allocation
		delete [] dout0_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_2, tvout_dout0_2);

		sc_bv<8>* dout0_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_2, "%s\n", (dout0_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_2, tvout_dout0_2);
		}

		tcl_file.set_num(1, &tcl_file.dout0_2_depth);
		sprintf(tvout_dout0_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_2, tvout_dout0_2);

		// release memory allocation
		delete [] dout0_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_3, tvout_dout0_3);

		sc_bv<8>* dout0_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_3, "%s\n", (dout0_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_3, tvout_dout0_3);
		}

		tcl_file.set_num(1, &tcl_file.dout0_3_depth);
		sprintf(tvout_dout0_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_3, tvout_dout0_3);

		// release memory allocation
		delete [] dout0_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_4, tvout_dout0_4);

		sc_bv<8>* dout0_4_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_4_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_4, "%s\n", (dout0_4_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_4, tvout_dout0_4);
		}

		tcl_file.set_num(1, &tcl_file.dout0_4_depth);
		sprintf(tvout_dout0_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_4, tvout_dout0_4);

		// release memory allocation
		delete [] dout0_4_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_5, tvout_dout0_5);

		sc_bv<8>* dout0_5_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_5_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_5, "%s\n", (dout0_5_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_5, tvout_dout0_5);
		}

		tcl_file.set_num(1, &tcl_file.dout0_5_depth);
		sprintf(tvout_dout0_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_5, tvout_dout0_5);

		// release memory allocation
		delete [] dout0_5_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_6, tvout_dout0_6);

		sc_bv<8>* dout0_6_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_6_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_6, "%s\n", (dout0_6_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_6, tvout_dout0_6);
		}

		tcl_file.set_num(1, &tcl_file.dout0_6_depth);
		sprintf(tvout_dout0_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_6, tvout_dout0_6);

		// release memory allocation
		delete [] dout0_6_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_7, tvout_dout0_7);

		sc_bv<8>* dout0_7_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_7_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_7, "%s\n", (dout0_7_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_7, tvout_dout0_7);
		}

		tcl_file.set_num(1, &tcl_file.dout0_7_depth);
		sprintf(tvout_dout0_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_7, tvout_dout0_7);

		// release memory allocation
		delete [] dout0_7_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_8, tvout_dout0_8);

		sc_bv<8>* dout0_8_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_8_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_8, "%s\n", (dout0_8_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_8, tvout_dout0_8);
		}

		tcl_file.set_num(1, &tcl_file.dout0_8_depth);
		sprintf(tvout_dout0_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_8, tvout_dout0_8);

		// release memory allocation
		delete [] dout0_8_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_9, tvout_dout0_9);

		sc_bv<8>* dout0_9_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_9_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_9, "%s\n", (dout0_9_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_9, tvout_dout0_9);
		}

		tcl_file.set_num(1, &tcl_file.dout0_9_depth);
		sprintf(tvout_dout0_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_9, tvout_dout0_9);

		// release memory allocation
		delete [] dout0_9_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_10, tvout_dout0_10);

		sc_bv<8>* dout0_10_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_10_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_10, "%s\n", (dout0_10_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_10, tvout_dout0_10);
		}

		tcl_file.set_num(1, &tcl_file.dout0_10_depth);
		sprintf(tvout_dout0_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_10, tvout_dout0_10);

		// release memory allocation
		delete [] dout0_10_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout0_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout0_11, tvout_dout0_11);

		sc_bv<8>* dout0_11_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: dout0_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: dout0(7, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout0[0]
						// regulate_c_name       : dout0
						// input_type_conversion : dout0[i_0]
						if (&(dout0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> dout0_tmp_mem;
							dout0_tmp_mem = dout0[i_0];
							dout0_11_tvout_wrapc_buffer[hls_map_index].range(7, 0) = dout0_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout0_11, "%s\n", (dout0_11_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout0_11, tvout_dout0_11);
		}

		tcl_file.set_num(1, &tcl_file.dout0_11_depth);
		sprintf(tvout_dout0_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout0_11, tvout_dout0_11);

		// release memory allocation
		delete [] dout0_11_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout1_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout1_0, tvout_dout1_0);

		sc_bv<32>* dout1_0_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: dout1_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: dout1(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout1[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout1[0]
						// regulate_c_name       : dout1
						// input_type_conversion : dout1[i_0]
						if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> dout1_tmp_mem;
							dout1_tmp_mem = dout1[i_0];
							dout1_0_tvout_wrapc_buffer[hls_map_index].range(31, 0) = dout1_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout1_0, "%s\n", (dout1_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout1_0, tvout_dout1_0);
		}

		tcl_file.set_num(1, &tcl_file.dout1_0_depth);
		sprintf(tvout_dout1_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout1_0, tvout_dout1_0);

		// release memory allocation
		delete [] dout1_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout1_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout1_1, tvout_dout1_1);

		sc_bv<32>* dout1_1_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: dout1_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: dout1(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout1[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout1[0]
						// regulate_c_name       : dout1
						// input_type_conversion : dout1[i_0]
						if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> dout1_tmp_mem;
							dout1_tmp_mem = dout1[i_0];
							dout1_1_tvout_wrapc_buffer[hls_map_index].range(31, 0) = dout1_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout1_1, "%s\n", (dout1_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout1_1, tvout_dout1_1);
		}

		tcl_file.set_num(1, &tcl_file.dout1_1_depth);
		sprintf(tvout_dout1_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout1_1, tvout_dout1_1);

		// release memory allocation
		delete [] dout1_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout1_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout1_2, tvout_dout1_2);

		sc_bv<32>* dout1_2_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: dout1_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: dout1(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout1[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout1[0]
						// regulate_c_name       : dout1
						// input_type_conversion : dout1[i_0]
						if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> dout1_tmp_mem;
							dout1_tmp_mem = dout1[i_0];
							dout1_2_tvout_wrapc_buffer[hls_map_index].range(31, 0) = dout1_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout1_2, "%s\n", (dout1_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout1_2, tvout_dout1_2);
		}

		tcl_file.set_num(1, &tcl_file.dout1_2_depth);
		sprintf(tvout_dout1_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout1_2, tvout_dout1_2);

		// release memory allocation
		delete [] dout1_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout1_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout1_3, tvout_dout1_3);

		sc_bv<32>* dout1_3_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: dout1_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: dout1(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : dout1[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout1[0]
						// regulate_c_name       : dout1
						// input_type_conversion : dout1[i_0]
						if (&(dout1[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> dout1_tmp_mem;
							dout1_tmp_mem = dout1[i_0];
							dout1_3_tvout_wrapc_buffer[hls_map_index].range(31, 0) = dout1_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout1_3, "%s\n", (dout1_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout1_3, tvout_dout1_3);
		}

		tcl_file.set_num(1, &tcl_file.dout1_3_depth);
		sprintf(tvout_dout1_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout1_3, tvout_dout1_3);

		// release memory allocation
		delete [] dout1_3_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "din0"
		delete [] tvin_din0;
		// release memory allocation: "din1"
		delete [] tvin_din1;
		// release memory allocation: "load_data_0"
		delete [] tvin_load_data_0;
		// release memory allocation: "load_data_1"
		delete [] tvin_load_data_1;
		// release memory allocation: "load_data_2"
		delete [] tvin_load_data_2;
		// release memory allocation: "load_data_3"
		delete [] tvin_load_data_3;
		// release memory allocation: "load_data_4"
		delete [] tvin_load_data_4;
		// release memory allocation: "load_data_5"
		delete [] tvin_load_data_5;
		// release memory allocation: "load_data_6"
		delete [] tvin_load_data_6;
		// release memory allocation: "load_data_7"
		delete [] tvin_load_data_7;
		// release memory allocation: "load_data_8"
		delete [] tvin_load_data_8;
		// release memory allocation: "load_data_9"
		delete [] tvin_load_data_9;
		// release memory allocation: "load_data_10"
		delete [] tvin_load_data_10;
		// release memory allocation: "load_data_11"
		delete [] tvin_load_data_11;
		// release memory allocation: "dout0_0"
		delete [] tvout_dout0_0;
		// release memory allocation: "dout0_1"
		delete [] tvout_dout0_1;
		// release memory allocation: "dout0_2"
		delete [] tvout_dout0_2;
		// release memory allocation: "dout0_3"
		delete [] tvout_dout0_3;
		// release memory allocation: "dout0_4"
		delete [] tvout_dout0_4;
		// release memory allocation: "dout0_5"
		delete [] tvout_dout0_5;
		// release memory allocation: "dout0_6"
		delete [] tvout_dout0_6;
		// release memory allocation: "dout0_7"
		delete [] tvout_dout0_7;
		// release memory allocation: "dout0_8"
		delete [] tvout_dout0_8;
		// release memory allocation: "dout0_9"
		delete [] tvout_dout0_9;
		// release memory allocation: "dout0_10"
		delete [] tvout_dout0_10;
		// release memory allocation: "dout0_11"
		delete [] tvout_dout0_11;
		// release memory allocation: "dout1_0"
		delete [] tvout_dout1_0;
		// release memory allocation: "dout1_1"
		delete [] tvout_dout1_1;
		// release memory allocation: "dout1_2"
		delete [] tvout_dout1_2;
		// release memory allocation: "dout1_3"
		delete [] tvout_dout1_3;
		// release memory allocation: "srst"
		delete [] tvin_srst;
		// release memory allocation: "load"
		delete [] tvin_load;
		// release memory allocation: "en"
		delete [] tvin_en;
		// release memory allocation: "select_V"
		delete [] tvin_select_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

