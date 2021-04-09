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


// wrapc file define: "leadone_in_V"
#define AUTOTB_TVIN_leadone_in_V  "../tv/cdatafile/c.top.autotvin_leadone_in_V.dat"
// wrapc file define: "leadone_out_V"
#define AUTOTB_TVOUT_leadone_out_V  "../tv/cdatafile/c.top.autotvout_leadone_out_V.dat"
// wrapc file define: "leadone_ret"
#define AUTOTB_TVOUT_leadone_ret  "../tv/cdatafile/c.top.autotvout_leadone_ret.dat"
// wrapc file define: "mux_in_0_V"
#define AUTOTB_TVIN_mux_in_0_V  "../tv/cdatafile/c.top.autotvin_mux_in_0_V.dat"
// wrapc file define: "mux_in_1_V"
#define AUTOTB_TVIN_mux_in_1_V  "../tv/cdatafile/c.top.autotvin_mux_in_1_V.dat"
// wrapc file define: "mux_in_2_V"
#define AUTOTB_TVIN_mux_in_2_V  "../tv/cdatafile/c.top.autotvin_mux_in_2_V.dat"
// wrapc file define: "mux_in_3_V"
#define AUTOTB_TVIN_mux_in_3_V  "../tv/cdatafile/c.top.autotvin_mux_in_3_V.dat"
// wrapc file define: "mux_in_4_V"
#define AUTOTB_TVIN_mux_in_4_V  "../tv/cdatafile/c.top.autotvin_mux_in_4_V.dat"
// wrapc file define: "mux_in_5_V"
#define AUTOTB_TVIN_mux_in_5_V  "../tv/cdatafile/c.top.autotvin_mux_in_5_V.dat"
// wrapc file define: "mux_in_6_V"
#define AUTOTB_TVIN_mux_in_6_V  "../tv/cdatafile/c.top.autotvin_mux_in_6_V.dat"
// wrapc file define: "mux_in_7_V"
#define AUTOTB_TVIN_mux_in_7_V  "../tv/cdatafile/c.top.autotvin_mux_in_7_V.dat"
// wrapc file define: "mux_sel_onehot_V"
#define AUTOTB_TVIN_mux_sel_onehot_V  "../tv/cdatafile/c.top.autotvin_mux_sel_onehot_V.dat"
// wrapc file define: "mux_sel0_V"
#define AUTOTB_TVIN_mux_sel0_V  "../tv/cdatafile/c.top.autotvin_mux_sel0_V.dat"
// wrapc file define: "mux_sel1_V"
#define AUTOTB_TVIN_mux_sel1_V  "../tv/cdatafile/c.top.autotvin_mux_sel1_V.dat"
// wrapc file define: "mux_s"
#define AUTOTB_TVIN_mux_s  "../tv/cdatafile/c.top.autotvin_mux_s.dat"
// wrapc file define: "mux_ret_V"
#define AUTOTB_TVOUT_mux_ret_V  "../tv/cdatafile/c.top.autotvout_mux_ret_V.dat"
// wrapc file define: "max_in_0"
#define AUTOTB_TVIN_max_in_0  "../tv/cdatafile/c.top.autotvin_max_in_0.dat"
// wrapc file define: "max_in_1"
#define AUTOTB_TVIN_max_in_1  "../tv/cdatafile/c.top.autotvin_max_in_1.dat"
// wrapc file define: "max_in_2"
#define AUTOTB_TVIN_max_in_2  "../tv/cdatafile/c.top.autotvin_max_in_2.dat"
// wrapc file define: "max_in_3"
#define AUTOTB_TVIN_max_in_3  "../tv/cdatafile/c.top.autotvin_max_in_3.dat"
// wrapc file define: "max_in_4"
#define AUTOTB_TVIN_max_in_4  "../tv/cdatafile/c.top.autotvin_max_in_4.dat"
// wrapc file define: "max_in_5"
#define AUTOTB_TVIN_max_in_5  "../tv/cdatafile/c.top.autotvin_max_in_5.dat"
// wrapc file define: "max_in_6"
#define AUTOTB_TVIN_max_in_6  "../tv/cdatafile/c.top.autotvin_max_in_6.dat"
// wrapc file define: "max_in_7"
#define AUTOTB_TVIN_max_in_7  "../tv/cdatafile/c.top.autotvin_max_in_7.dat"
// wrapc file define: "max_out"
#define AUTOTB_TVOUT_max_out  "../tv/cdatafile/c.top.autotvout_max_out.dat"
// wrapc file define: "mode"
#define AUTOTB_TVIN_mode  "../tv/cdatafile/c.top.autotvin_mode.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "leadone_out_V"
#define AUTOTB_TVOUT_PC_leadone_out_V  "../tv/rtldatafile/rtl.top.autotvout_leadone_out_V.dat"
// tvout file define: "leadone_ret"
#define AUTOTB_TVOUT_PC_leadone_ret  "../tv/rtldatafile/rtl.top.autotvout_leadone_ret.dat"
// tvout file define: "mux_ret_V"
#define AUTOTB_TVOUT_PC_mux_ret_V  "../tv/rtldatafile/rtl.top.autotvout_mux_ret_V.dat"
// tvout file define: "max_out"
#define AUTOTB_TVOUT_PC_max_out  "../tv/rtldatafile/rtl.top.autotvout_max_out.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			leadone_in_V_depth = 0;
			leadone_out_V_depth = 0;
			leadone_ret_depth = 0;
			mux_in_0_V_depth = 0;
			mux_in_1_V_depth = 0;
			mux_in_2_V_depth = 0;
			mux_in_3_V_depth = 0;
			mux_in_4_V_depth = 0;
			mux_in_5_V_depth = 0;
			mux_in_6_V_depth = 0;
			mux_in_7_V_depth = 0;
			mux_sel_onehot_V_depth = 0;
			mux_sel0_V_depth = 0;
			mux_sel1_V_depth = 0;
			mux_s_depth = 0;
			mux_ret_V_depth = 0;
			max_in_0_depth = 0;
			max_in_1_depth = 0;
			max_in_2_depth = 0;
			max_in_3_depth = 0;
			max_in_4_depth = 0;
			max_in_5_depth = 0;
			max_in_6_depth = 0;
			max_in_7_depth = 0;
			max_out_depth = 0;
			mode_depth = 0;
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
			total_list << "{leadone_in_V " << leadone_in_V_depth << "}\n";
			total_list << "{leadone_out_V " << leadone_out_V_depth << "}\n";
			total_list << "{leadone_ret " << leadone_ret_depth << "}\n";
			total_list << "{mux_in_0_V " << mux_in_0_V_depth << "}\n";
			total_list << "{mux_in_1_V " << mux_in_1_V_depth << "}\n";
			total_list << "{mux_in_2_V " << mux_in_2_V_depth << "}\n";
			total_list << "{mux_in_3_V " << mux_in_3_V_depth << "}\n";
			total_list << "{mux_in_4_V " << mux_in_4_V_depth << "}\n";
			total_list << "{mux_in_5_V " << mux_in_5_V_depth << "}\n";
			total_list << "{mux_in_6_V " << mux_in_6_V_depth << "}\n";
			total_list << "{mux_in_7_V " << mux_in_7_V_depth << "}\n";
			total_list << "{mux_sel_onehot_V " << mux_sel_onehot_V_depth << "}\n";
			total_list << "{mux_sel0_V " << mux_sel0_V_depth << "}\n";
			total_list << "{mux_sel1_V " << mux_sel1_V_depth << "}\n";
			total_list << "{mux_s " << mux_s_depth << "}\n";
			total_list << "{mux_ret_V " << mux_ret_V_depth << "}\n";
			total_list << "{max_in_0 " << max_in_0_depth << "}\n";
			total_list << "{max_in_1 " << max_in_1_depth << "}\n";
			total_list << "{max_in_2 " << max_in_2_depth << "}\n";
			total_list << "{max_in_3 " << max_in_3_depth << "}\n";
			total_list << "{max_in_4 " << max_in_4_depth << "}\n";
			total_list << "{max_in_5 " << max_in_5_depth << "}\n";
			total_list << "{max_in_6 " << max_in_6_depth << "}\n";
			total_list << "{max_in_7 " << max_in_7_depth << "}\n";
			total_list << "{max_out " << max_out_depth << "}\n";
			total_list << "{mode " << mode_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int leadone_in_V_depth;
		int leadone_out_V_depth;
		int leadone_ret_depth;
		int mux_in_0_V_depth;
		int mux_in_1_V_depth;
		int mux_in_2_V_depth;
		int mux_in_3_V_depth;
		int mux_in_4_V_depth;
		int mux_in_5_V_depth;
		int mux_in_6_V_depth;
		int mux_in_7_V_depth;
		int mux_sel_onehot_V_depth;
		int mux_sel0_V_depth;
		int mux_sel1_V_depth;
		int mux_s_depth;
		int mux_ret_V_depth;
		int max_in_0_depth;
		int max_in_1_depth;
		int max_in_2_depth;
		int max_in_3_depth;
		int max_in_4_depth;
		int max_in_5_depth;
		int max_in_6_depth;
		int max_in_7_depth;
		int max_out_depth;
		int mode_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void top (
ap_uint<32> (&leadone_in),
ap_uint<5> (&leadone_out),
bool (&leadone_ret),
ap_int<8> mux_in[8],
ap_uint<8> mux_sel_onehot,
ap_uint<3> mux_sel0,
ap_uint<3> mux_sel1,
bool mux_s,
ap_int<8> (&mux_ret),
int max_in[8],
int (&max_out),
int mode);

void AESL_WRAP_top (
ap_uint<32> (&leadone_in),
ap_uint<5> (&leadone_out),
bool (&leadone_ret),
ap_int<8> mux_in[8],
ap_uint<8> mux_sel_onehot,
ap_uint<3> mux_sel0,
ap_uint<3> mux_sel1,
bool mux_s,
ap_int<8> (&mux_ret),
int max_in[8],
int (&max_out),
int mode)
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


		// output port post check: "leadone_out_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_leadone_out_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_leadone_out_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_leadone_out_V, AESL_token); // data

			sc_bv<5> *leadone_out_V_pc_buffer = new sc_bv<5>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'leadone_out_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'leadone_out_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					leadone_out_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_leadone_out_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_leadone_out_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: leadone_out_V
				{
					// bitslice(4, 0)
					// {
						// celement: leadone_out.V(4, 0)
						// {
							sc_lv<5>* leadone_out_V_lv0_0_0_1 = new sc_lv<5>[1];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: leadone_out.V(4, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(leadone_out) != NULL) // check the null address if the c port is array or others
								{
									leadone_out_V_lv0_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(leadone_out_V_pc_buffer[hls_map_index].range(4, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: leadone_out.V(4, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : leadone_out
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : leadone_out
								// output_left_conversion : leadone_out
								// output_type_conversion : (leadone_out_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(leadone_out) != NULL) // check the null address if the c port is array or others
								{
									leadone_out = (leadone_out_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] leadone_out_V_pc_buffer;
		}

		// output port post check: "leadone_ret"
		aesl_fh.read(AUTOTB_TVOUT_PC_leadone_ret, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_leadone_ret, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_leadone_ret, AESL_token); // data

			sc_bv<1> *leadone_ret_pc_buffer = new sc_bv<1>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'leadone_ret', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'leadone_ret', possible cause: There are uninitialized variables in the C design." << endl;
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
					leadone_ret_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_leadone_ret, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_leadone_ret))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: leadone_ret
				{
					// bitslice(0, 0)
					// {
						// celement: leadone_ret(0, 0)
						// {
							sc_lv<1>* leadone_ret_lv0_0_0_1 = new sc_lv<1>[1];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: leadone_ret(0, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(leadone_ret) != NULL) // check the null address if the c port is array or others
								{
									leadone_ret_lv0_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(leadone_ret_pc_buffer[hls_map_index].range(0, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: leadone_ret(0, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : leadone_ret
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : leadone_ret
								// output_left_conversion : leadone_ret
								// output_type_conversion : (leadone_ret_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(leadone_ret) != NULL) // check the null address if the c port is array or others
								{
									leadone_ret = (leadone_ret_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] leadone_ret_pc_buffer;
		}

		// output port post check: "mux_ret_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_mux_ret_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_mux_ret_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_mux_ret_V, AESL_token); // data

			sc_bv<8> *mux_ret_V_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'mux_ret_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'mux_ret_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					mux_ret_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_mux_ret_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_mux_ret_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: mux_ret_V
				{
					// bitslice(7, 0)
					// {
						// celement: mux_ret.V(7, 0)
						// {
							sc_lv<8>* mux_ret_V_lv0_0_0_1 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: mux_ret.V(7, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(mux_ret) != NULL) // check the null address if the c port is array or others
								{
									mux_ret_V_lv0_0_0_1[hls_map_index].range(7, 0) = sc_bv<8>(mux_ret_V_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: mux_ret.V(7, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : mux_ret
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : mux_ret
								// output_left_conversion : mux_ret
								// output_type_conversion : (mux_ret_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(mux_ret) != NULL) // check the null address if the c port is array or others
								{
									mux_ret = (mux_ret_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] mux_ret_V_pc_buffer;
		}

		// output port post check: "max_out"
		aesl_fh.read(AUTOTB_TVOUT_PC_max_out, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_max_out, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_max_out, AESL_token); // data

			sc_bv<32> *max_out_pc_buffer = new sc_bv<32>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'max_out', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'max_out', possible cause: There are uninitialized variables in the C design." << endl;
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
					max_out_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_max_out, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_max_out))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: max_out
				{
					// bitslice(31, 0)
					// {
						// celement: max_out(31, 0)
						// {
							sc_lv<32>* max_out_lv0_0_0_1 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: max_out(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(max_out) != NULL) // check the null address if the c port is array or others
								{
									max_out_lv0_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(max_out_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: max_out(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : max_out
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : max_out
								// output_left_conversion : max_out
								// output_type_conversion : (max_out_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(max_out) != NULL) // check the null address if the c port is array or others
								{
									max_out = (max_out_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] max_out_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "leadone_in_V"
		char* tvin_leadone_in_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_leadone_in_V);

		// "leadone_out_V"
		char* tvout_leadone_out_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_leadone_out_V);

		// "leadone_ret"
		char* tvout_leadone_ret = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_leadone_ret);

		// "mux_in_0_V"
		char* tvin_mux_in_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_0_V);

		// "mux_in_1_V"
		char* tvin_mux_in_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_1_V);

		// "mux_in_2_V"
		char* tvin_mux_in_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_2_V);

		// "mux_in_3_V"
		char* tvin_mux_in_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_3_V);

		// "mux_in_4_V"
		char* tvin_mux_in_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_4_V);

		// "mux_in_5_V"
		char* tvin_mux_in_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_5_V);

		// "mux_in_6_V"
		char* tvin_mux_in_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_6_V);

		// "mux_in_7_V"
		char* tvin_mux_in_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_in_7_V);

		// "mux_sel_onehot_V"
		char* tvin_mux_sel_onehot_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_sel_onehot_V);

		// "mux_sel0_V"
		char* tvin_mux_sel0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_sel0_V);

		// "mux_sel1_V"
		char* tvin_mux_sel1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_sel1_V);

		// "mux_s"
		char* tvin_mux_s = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mux_s);

		// "mux_ret_V"
		char* tvout_mux_ret_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_mux_ret_V);

		// "max_in_0"
		char* tvin_max_in_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_0);

		// "max_in_1"
		char* tvin_max_in_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_1);

		// "max_in_2"
		char* tvin_max_in_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_2);

		// "max_in_3"
		char* tvin_max_in_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_3);

		// "max_in_4"
		char* tvin_max_in_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_4);

		// "max_in_5"
		char* tvin_max_in_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_5);

		// "max_in_6"
		char* tvin_max_in_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_6);

		// "max_in_7"
		char* tvin_max_in_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_max_in_7);

		// "max_out"
		char* tvout_max_out = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_max_out);

		// "mode"
		char* tvin_mode = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mode);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_leadone_in_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_leadone_in_V, tvin_leadone_in_V);

		sc_bv<32>* leadone_in_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: leadone_in_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: leadone_in.V(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : leadone_in
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : leadone_in
						// regulate_c_name       : leadone_in_V
						// input_type_conversion : (leadone_in).to_string(2).c_str()
						if (&(leadone_in) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> leadone_in_V_tmp_mem;
							leadone_in_V_tmp_mem = (leadone_in).to_string(2).c_str();
							leadone_in_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = leadone_in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_leadone_in_V, "%s\n", (leadone_in_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_leadone_in_V, tvin_leadone_in_V);
		}

		tcl_file.set_num(1, &tcl_file.leadone_in_V_depth);
		sprintf(tvin_leadone_in_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_leadone_in_V, tvin_leadone_in_V);

		// release memory allocation
		delete [] leadone_in_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_0_V, tvin_mux_in_0_V);

		sc_bv<8>* mux_in_0_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_0_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_0_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_0_V, "%s\n", (mux_in_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_0_V, tvin_mux_in_0_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_0_V_depth);
		sprintf(tvin_mux_in_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_0_V, tvin_mux_in_0_V);

		// release memory allocation
		delete [] mux_in_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_1_V, tvin_mux_in_1_V);

		sc_bv<8>* mux_in_1_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_1_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_1_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_1_V, "%s\n", (mux_in_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_1_V, tvin_mux_in_1_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_1_V_depth);
		sprintf(tvin_mux_in_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_1_V, tvin_mux_in_1_V);

		// release memory allocation
		delete [] mux_in_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_2_V, tvin_mux_in_2_V);

		sc_bv<8>* mux_in_2_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_2_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_2_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_2_V, "%s\n", (mux_in_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_2_V, tvin_mux_in_2_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_2_V_depth);
		sprintf(tvin_mux_in_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_2_V, tvin_mux_in_2_V);

		// release memory allocation
		delete [] mux_in_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_3_V, tvin_mux_in_3_V);

		sc_bv<8>* mux_in_3_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_3_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_3_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_3_V, "%s\n", (mux_in_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_3_V, tvin_mux_in_3_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_3_V_depth);
		sprintf(tvin_mux_in_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_3_V, tvin_mux_in_3_V);

		// release memory allocation
		delete [] mux_in_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_4_V, tvin_mux_in_4_V);

		sc_bv<8>* mux_in_4_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_4_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_4_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_4_V, "%s\n", (mux_in_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_4_V, tvin_mux_in_4_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_4_V_depth);
		sprintf(tvin_mux_in_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_4_V, tvin_mux_in_4_V);

		// release memory allocation
		delete [] mux_in_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_5_V, tvin_mux_in_5_V);

		sc_bv<8>* mux_in_5_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_5_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_5_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_5_V, "%s\n", (mux_in_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_5_V, tvin_mux_in_5_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_5_V_depth);
		sprintf(tvin_mux_in_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_5_V, tvin_mux_in_5_V);

		// release memory allocation
		delete [] mux_in_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_6_V, tvin_mux_in_6_V);

		sc_bv<8>* mux_in_6_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_6_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_6_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_6_V, "%s\n", (mux_in_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_6_V, tvin_mux_in_6_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_6_V_depth);
		sprintf(tvin_mux_in_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_6_V, tvin_mux_in_6_V);

		// release memory allocation
		delete [] mux_in_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_in_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_in_7_V, tvin_mux_in_7_V);

		sc_bv<8>* mux_in_7_V_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_in_7_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_in.V(7, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : mux_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_in[0]
						// regulate_c_name       : mux_in_V
						// input_type_conversion : (mux_in[i_0]).to_string(2).c_str()
						if (&(mux_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_in_V_tmp_mem;
							mux_in_V_tmp_mem = (mux_in[i_0]).to_string(2).c_str();
							mux_in_7_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = mux_in_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_in_7_V, "%s\n", (mux_in_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_in_7_V, tvin_mux_in_7_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_in_7_V_depth);
		sprintf(tvin_mux_in_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_in_7_V, tvin_mux_in_7_V);

		// release memory allocation
		delete [] mux_in_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mux_sel_onehot_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_sel_onehot_V, tvin_mux_sel_onehot_V);

		sc_bv<8> mux_sel_onehot_V_tvin_wrapc_buffer;

		// RTL Name: mux_sel_onehot_V
		{
			// bitslice(7, 0)
			{
				// celement: mux_sel_onehot.V(7, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : mux_sel_onehot
						// sub_1st_elem          : 
						// ori_name_1st_elem     : mux_sel_onehot
						// regulate_c_name       : mux_sel_onehot_V
						// input_type_conversion : (mux_sel_onehot).to_string(2).c_str()
						if (&(mux_sel_onehot) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_sel_onehot_V_tmp_mem;
							mux_sel_onehot_V_tmp_mem = (mux_sel_onehot).to_string(2).c_str();
							mux_sel_onehot_V_tvin_wrapc_buffer.range(7, 0) = mux_sel_onehot_V_tmp_mem.range(7, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_sel_onehot_V, "%s\n", (mux_sel_onehot_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_sel_onehot_V, tvin_mux_sel_onehot_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_sel_onehot_V_depth);
		sprintf(tvin_mux_sel_onehot_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_sel_onehot_V, tvin_mux_sel_onehot_V);

		// [[transaction]]
		sprintf(tvin_mux_sel0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_sel0_V, tvin_mux_sel0_V);

		sc_bv<3> mux_sel0_V_tvin_wrapc_buffer;

		// RTL Name: mux_sel0_V
		{
			// bitslice(2, 0)
			{
				// celement: mux_sel0.V(2, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : mux_sel0
						// sub_1st_elem          : 
						// ori_name_1st_elem     : mux_sel0
						// regulate_c_name       : mux_sel0_V
						// input_type_conversion : (mux_sel0).to_string(2).c_str()
						if (&(mux_sel0) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<3> mux_sel0_V_tmp_mem;
							mux_sel0_V_tmp_mem = (mux_sel0).to_string(2).c_str();
							mux_sel0_V_tvin_wrapc_buffer.range(2, 0) = mux_sel0_V_tmp_mem.range(2, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_sel0_V, "%s\n", (mux_sel0_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_sel0_V, tvin_mux_sel0_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_sel0_V_depth);
		sprintf(tvin_mux_sel0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_sel0_V, tvin_mux_sel0_V);

		// [[transaction]]
		sprintf(tvin_mux_sel1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_sel1_V, tvin_mux_sel1_V);

		sc_bv<3> mux_sel1_V_tvin_wrapc_buffer;

		// RTL Name: mux_sel1_V
		{
			// bitslice(2, 0)
			{
				// celement: mux_sel1.V(2, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : mux_sel1
						// sub_1st_elem          : 
						// ori_name_1st_elem     : mux_sel1
						// regulate_c_name       : mux_sel1_V
						// input_type_conversion : (mux_sel1).to_string(2).c_str()
						if (&(mux_sel1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<3> mux_sel1_V_tmp_mem;
							mux_sel1_V_tmp_mem = (mux_sel1).to_string(2).c_str();
							mux_sel1_V_tvin_wrapc_buffer.range(2, 0) = mux_sel1_V_tmp_mem.range(2, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_sel1_V, "%s\n", (mux_sel1_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_sel1_V, tvin_mux_sel1_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_sel1_V_depth);
		sprintf(tvin_mux_sel1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_sel1_V, tvin_mux_sel1_V);

		// [[transaction]]
		sprintf(tvin_mux_s, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mux_s, tvin_mux_s);

		sc_bv<1> mux_s_tvin_wrapc_buffer;

		// RTL Name: mux_s
		{
			// bitslice(0, 0)
			{
				// celement: mux_s(0, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : mux_s
						// sub_1st_elem          : 
						// ori_name_1st_elem     : mux_s
						// regulate_c_name       : mux_s
						// input_type_conversion : mux_s
						if (&(mux_s) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> mux_s_tmp_mem;
							mux_s_tmp_mem = mux_s;
							mux_s_tvin_wrapc_buffer.range(0, 0) = mux_s_tmp_mem.range(0, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mux_s, "%s\n", (mux_s_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mux_s, tvin_mux_s);
		}

		tcl_file.set_num(1, &tcl_file.mux_s_depth);
		sprintf(tvin_mux_s, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mux_s, tvin_mux_s);

		// [[transaction]]
		sprintf(tvin_max_in_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_0, tvin_max_in_0);

		sc_bv<32>* max_in_0_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_0_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_0, "%s\n", (max_in_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_0, tvin_max_in_0);
		}

		tcl_file.set_num(1, &tcl_file.max_in_0_depth);
		sprintf(tvin_max_in_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_0, tvin_max_in_0);

		// release memory allocation
		delete [] max_in_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_max_in_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_1, tvin_max_in_1);

		sc_bv<32>* max_in_1_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_1_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_1, "%s\n", (max_in_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_1, tvin_max_in_1);
		}

		tcl_file.set_num(1, &tcl_file.max_in_1_depth);
		sprintf(tvin_max_in_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_1, tvin_max_in_1);

		// release memory allocation
		delete [] max_in_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_max_in_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_2, tvin_max_in_2);

		sc_bv<32>* max_in_2_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_2_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_2, "%s\n", (max_in_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_2, tvin_max_in_2);
		}

		tcl_file.set_num(1, &tcl_file.max_in_2_depth);
		sprintf(tvin_max_in_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_2, tvin_max_in_2);

		// release memory allocation
		delete [] max_in_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_max_in_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_3, tvin_max_in_3);

		sc_bv<32>* max_in_3_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_3_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_3, "%s\n", (max_in_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_3, tvin_max_in_3);
		}

		tcl_file.set_num(1, &tcl_file.max_in_3_depth);
		sprintf(tvin_max_in_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_3, tvin_max_in_3);

		// release memory allocation
		delete [] max_in_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_max_in_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_4, tvin_max_in_4);

		sc_bv<32>* max_in_4_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_4
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_4_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_4, "%s\n", (max_in_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_4, tvin_max_in_4);
		}

		tcl_file.set_num(1, &tcl_file.max_in_4_depth);
		sprintf(tvin_max_in_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_4, tvin_max_in_4);

		// release memory allocation
		delete [] max_in_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_max_in_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_5, tvin_max_in_5);

		sc_bv<32>* max_in_5_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_5
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_5_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_5, "%s\n", (max_in_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_5, tvin_max_in_5);
		}

		tcl_file.set_num(1, &tcl_file.max_in_5_depth);
		sprintf(tvin_max_in_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_5, tvin_max_in_5);

		// release memory allocation
		delete [] max_in_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_max_in_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_6, tvin_max_in_6);

		sc_bv<32>* max_in_6_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_6
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_6_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_6, "%s\n", (max_in_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_6, tvin_max_in_6);
		}

		tcl_file.set_num(1, &tcl_file.max_in_6_depth);
		sprintf(tvin_max_in_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_6, tvin_max_in_6);

		// release memory allocation
		delete [] max_in_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_max_in_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_max_in_7, tvin_max_in_7);

		sc_bv<32>* max_in_7_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_in_7
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_in(31, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : max_in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_in[0]
						// regulate_c_name       : max_in
						// input_type_conversion : max_in[i_0]
						if (&(max_in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_in_tmp_mem;
							max_in_tmp_mem = max_in[i_0];
							max_in_7_tvin_wrapc_buffer[hls_map_index].range(31, 0) = max_in_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_max_in_7, "%s\n", (max_in_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_max_in_7, tvin_max_in_7);
		}

		tcl_file.set_num(1, &tcl_file.max_in_7_depth);
		sprintf(tvin_max_in_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_max_in_7, tvin_max_in_7);

		// release memory allocation
		delete [] max_in_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mode, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mode, tvin_mode);

		sc_bv<32> mode_tvin_wrapc_buffer;

		// RTL Name: mode
		{
			// bitslice(31, 0)
			{
				// celement: mode(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : mode
						// sub_1st_elem          : 
						// ori_name_1st_elem     : mode
						// regulate_c_name       : mode
						// input_type_conversion : mode
						if (&(mode) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> mode_tmp_mem;
							mode_tmp_mem = mode;
							mode_tvin_wrapc_buffer.range(31, 0) = mode_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mode, "%s\n", (mode_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mode, tvin_mode);
		}

		tcl_file.set_num(1, &tcl_file.mode_depth);
		sprintf(tvin_mode, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mode, tvin_mode);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		top(leadone_in, leadone_out, leadone_ret, mux_in, mux_sel_onehot, mux_sel0, mux_sel1, mux_s, mux_ret, max_in, max_out, mode);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_leadone_out_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_leadone_out_V, tvout_leadone_out_V);

		sc_bv<5>* leadone_out_V_tvout_wrapc_buffer = new sc_bv<5>[1];

		// RTL Name: leadone_out_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: leadone_out.V(4, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : leadone_out
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : leadone_out
						// regulate_c_name       : leadone_out_V
						// input_type_conversion : (leadone_out).to_string(2).c_str()
						if (&(leadone_out) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<5> leadone_out_V_tmp_mem;
							leadone_out_V_tmp_mem = (leadone_out).to_string(2).c_str();
							leadone_out_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = leadone_out_V_tmp_mem.range(4, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_leadone_out_V, "%s\n", (leadone_out_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_leadone_out_V, tvout_leadone_out_V);
		}

		tcl_file.set_num(1, &tcl_file.leadone_out_V_depth);
		sprintf(tvout_leadone_out_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_leadone_out_V, tvout_leadone_out_V);

		// release memory allocation
		delete [] leadone_out_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_leadone_ret, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_leadone_ret, tvout_leadone_ret);

		sc_bv<1>* leadone_ret_tvout_wrapc_buffer = new sc_bv<1>[1];

		// RTL Name: leadone_ret
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: leadone_ret(0, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : leadone_ret
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : leadone_ret
						// regulate_c_name       : leadone_ret
						// input_type_conversion : leadone_ret
						if (&(leadone_ret) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> leadone_ret_tmp_mem;
							leadone_ret_tmp_mem = leadone_ret;
							leadone_ret_tvout_wrapc_buffer[hls_map_index].range(0, 0) = leadone_ret_tmp_mem.range(0, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_leadone_ret, "%s\n", (leadone_ret_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_leadone_ret, tvout_leadone_ret);
		}

		tcl_file.set_num(1, &tcl_file.leadone_ret_depth);
		sprintf(tvout_leadone_ret, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_leadone_ret, tvout_leadone_ret);

		// release memory allocation
		delete [] leadone_ret_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_mux_ret_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_mux_ret_V, tvout_mux_ret_V);

		sc_bv<8>* mux_ret_V_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: mux_ret_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: mux_ret.V(7, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : mux_ret
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mux_ret
						// regulate_c_name       : mux_ret_V
						// input_type_conversion : (mux_ret).to_string(2).c_str()
						if (&(mux_ret) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> mux_ret_V_tmp_mem;
							mux_ret_V_tmp_mem = (mux_ret).to_string(2).c_str();
							mux_ret_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = mux_ret_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_mux_ret_V, "%s\n", (mux_ret_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_mux_ret_V, tvout_mux_ret_V);
		}

		tcl_file.set_num(1, &tcl_file.mux_ret_V_depth);
		sprintf(tvout_mux_ret_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_mux_ret_V, tvout_mux_ret_V);

		// release memory allocation
		delete [] mux_ret_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_max_out, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_max_out, tvout_max_out);

		sc_bv<32>* max_out_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: max_out
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: max_out(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : max_out
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : max_out
						// regulate_c_name       : max_out
						// input_type_conversion : max_out
						if (&(max_out) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> max_out_tmp_mem;
							max_out_tmp_mem = max_out;
							max_out_tvout_wrapc_buffer[hls_map_index].range(31, 0) = max_out_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_max_out, "%s\n", (max_out_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_max_out, tvout_max_out);
		}

		tcl_file.set_num(1, &tcl_file.max_out_depth);
		sprintf(tvout_max_out, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_max_out, tvout_max_out);

		// release memory allocation
		delete [] max_out_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "leadone_in_V"
		delete [] tvin_leadone_in_V;
		// release memory allocation: "leadone_out_V"
		delete [] tvout_leadone_out_V;
		// release memory allocation: "leadone_ret"
		delete [] tvout_leadone_ret;
		// release memory allocation: "mux_in_0_V"
		delete [] tvin_mux_in_0_V;
		// release memory allocation: "mux_in_1_V"
		delete [] tvin_mux_in_1_V;
		// release memory allocation: "mux_in_2_V"
		delete [] tvin_mux_in_2_V;
		// release memory allocation: "mux_in_3_V"
		delete [] tvin_mux_in_3_V;
		// release memory allocation: "mux_in_4_V"
		delete [] tvin_mux_in_4_V;
		// release memory allocation: "mux_in_5_V"
		delete [] tvin_mux_in_5_V;
		// release memory allocation: "mux_in_6_V"
		delete [] tvin_mux_in_6_V;
		// release memory allocation: "mux_in_7_V"
		delete [] tvin_mux_in_7_V;
		// release memory allocation: "mux_sel_onehot_V"
		delete [] tvin_mux_sel_onehot_V;
		// release memory allocation: "mux_sel0_V"
		delete [] tvin_mux_sel0_V;
		// release memory allocation: "mux_sel1_V"
		delete [] tvin_mux_sel1_V;
		// release memory allocation: "mux_s"
		delete [] tvin_mux_s;
		// release memory allocation: "mux_ret_V"
		delete [] tvout_mux_ret_V;
		// release memory allocation: "max_in_0"
		delete [] tvin_max_in_0;
		// release memory allocation: "max_in_1"
		delete [] tvin_max_in_1;
		// release memory allocation: "max_in_2"
		delete [] tvin_max_in_2;
		// release memory allocation: "max_in_3"
		delete [] tvin_max_in_3;
		// release memory allocation: "max_in_4"
		delete [] tvin_max_in_4;
		// release memory allocation: "max_in_5"
		delete [] tvin_max_in_5;
		// release memory allocation: "max_in_6"
		delete [] tvin_max_in_6;
		// release memory allocation: "max_in_7"
		delete [] tvin_max_in_7;
		// release memory allocation: "max_out"
		delete [] tvout_max_out;
		// release memory allocation: "mode"
		delete [] tvin_mode;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

