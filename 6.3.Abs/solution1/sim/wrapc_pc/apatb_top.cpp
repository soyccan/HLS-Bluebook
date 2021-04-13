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


// wrapc file define: "val_V"
#define AUTOTB_TVIN_val_V  "../tv/cdatafile/c.top.autotvin_val_V.dat"
// wrapc file define: "mode"
#define AUTOTB_TVIN_mode  "../tv/cdatafile/c.top.autotvin_mode.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.top.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.top.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			val_V_depth = 0;
			mode_depth = 0;
			ap_return_depth = 0;
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
			total_list << "{val_V " << val_V_depth << "}\n";
			total_list << "{mode " << mode_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int val_V_depth;
		int mode_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern ap_int<8> top (
ap_int<8> val,
int mode);

ap_int<8> AESL_WRAP_top (
ap_int<8> val,
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

		ap_int<8> AESL_return;

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<8> ap_return_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
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
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(7, 0)
					// {
						// celement: agg.result.V(7, 0)
						// {
							sc_lv<8> agg_result_V_lv0_0_0_0;
						// }
					// }

					// bitslice(7, 0)
					{
						// celement: agg.result.V(7, 0)
						{
							// carray: (0) => (0) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									agg_result_V_lv0_0_0_0.range(7, 0) = sc_bv<8>(ap_return_pc_buffer.range(7, 0));
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						// celement: agg.result.V(7, 0)
						{
							// carray: (0) => (0) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (agg_result_V_lv0_0_0_0).to_string(SC_BIN).c_str()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (agg_result_V_lv0_0_0_0).to_string(SC_BIN).c_str();
								}
							}
						}
					}
				}
			}
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "val_V"
		char* tvin_val_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_val_V);

		// "mode"
		char* tvin_mode = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mode);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_val_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_val_V, tvin_val_V);

		sc_bv<8> val_V_tvin_wrapc_buffer;

		// RTL Name: val_V
		{
			// bitslice(7, 0)
			{
				// celement: val.V(7, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : val
						// sub_1st_elem          : 
						// ori_name_1st_elem     : val
						// regulate_c_name       : val_V
						// input_type_conversion : (val).to_string(2).c_str()
						if (&(val) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> val_V_tmp_mem;
							val_V_tmp_mem = (val).to_string(2).c_str();
							val_V_tvin_wrapc_buffer.range(7, 0) = val_V_tmp_mem.range(7, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_val_V, "%s\n", (val_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_val_V, tvin_val_V);
		}

		tcl_file.set_num(1, &tcl_file.val_V_depth);
		sprintf(tvin_val_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_val_V, tvin_val_V);

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
		ap_int<8> AESL_return = top(val, mode);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<8> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(7, 0)
			{
				// celement: agg.result.V(7, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : agg_result_V
						// input_type_conversion : (AESL_return).to_string(2).c_str()
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> agg_result_V_tmp_mem;
							agg_result_V_tmp_mem = (AESL_return).to_string(2).c_str();
							ap_return_tvout_wrapc_buffer.range(7, 0) = agg_result_V_tmp_mem.range(7, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "val_V"
		delete [] tvin_val_V;
		// release memory allocation: "mode"
		delete [] tvin_mode;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

