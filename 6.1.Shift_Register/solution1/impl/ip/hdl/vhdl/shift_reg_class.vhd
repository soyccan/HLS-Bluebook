-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity shift_reg_class is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    din : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_0_read : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_1_read : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_2_read : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_3_read : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_4_read : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_5_read : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_6_read : IN STD_LOGIC_VECTOR (7 downto 0);
    load_data_7_read : IN STD_LOGIC_VECTOR (7 downto 0);
    srst : IN STD_LOGIC;
    load : IN STD_LOGIC;
    en : IN STD_LOGIC;
    ap_return_0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_4 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_5 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_6 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_7 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_8 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_9 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_10 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_11 : OUT STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of shift_reg_class is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0) := "01";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal shift_reg0_regs_7 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg1_regs_2 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg1_regs_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg1_regs_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg0_regs_6 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg0_regs_5 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg0_regs_4 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg0_regs_3 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg0_regs_2 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg0_regs_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg0_regs_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal shift_reg1_regs_3 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal select_ln25_fu_305_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal en_read_read_fu_58_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_1_fu_327_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln25_2_fu_349_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln25_3_fu_371_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln25_4_fu_393_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln25_5_fu_415_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln25_6_fu_437_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln50_1_fu_471_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_7_write_assig_reg_130 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_10_write_assi_reg_139 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_9_write_assig_reg_148 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_8_write_assig_reg_157 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_6_write_assig_reg_166 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_5_write_assig_reg_175 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_4_write_assig_reg_184 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_3_write_assig_reg_193 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_2_write_assig_reg_202 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_1_write_assig_reg_211 : STD_LOGIC_VECTOR (7 downto 0);
    signal dout0_0_write_assig_reg_220 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal select_ln52_fu_297_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_fu_305_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln52_fu_297_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln52_1_fu_319_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_1_fu_327_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln52_1_fu_319_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln52_2_fu_341_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_2_fu_349_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln52_2_fu_341_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln52_3_fu_363_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_3_fu_371_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln52_3_fu_363_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln52_4_fu_385_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_4_fu_393_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln52_4_fu_385_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln52_5_fu_407_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_5_fu_415_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln52_5_fu_407_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln52_6_fu_429_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln25_6_fu_437_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln52_6_fu_429_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal xor_ln50_fu_451_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln50_fu_457_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln50_fu_451_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln50_fu_463_p0 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln50_fu_457_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln50_fu_463_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_return_0_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_1_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_2_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_3_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_4_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_5_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_6_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_7_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_8_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_9_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_10_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_11_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (1 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_return_0_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_0_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_0_preg <= dout0_0_write_assig_reg_220;
                end if; 
            end if;
        end if;
    end process;


    ap_return_10_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_10_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_10_preg <= dout0_10_write_assi_reg_139;
                end if; 
            end if;
        end if;
    end process;


    ap_return_11_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_11_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_11_preg <= shift_reg1_regs_3;
                end if; 
            end if;
        end if;
    end process;


    ap_return_1_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_1_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_1_preg <= dout0_1_write_assig_reg_211;
                end if; 
            end if;
        end if;
    end process;


    ap_return_2_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_2_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_2_preg <= dout0_2_write_assig_reg_202;
                end if; 
            end if;
        end if;
    end process;


    ap_return_3_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_3_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_3_preg <= dout0_3_write_assig_reg_193;
                end if; 
            end if;
        end if;
    end process;


    ap_return_4_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_4_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_4_preg <= dout0_4_write_assig_reg_184;
                end if; 
            end if;
        end if;
    end process;


    ap_return_5_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_5_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_5_preg <= dout0_5_write_assig_reg_175;
                end if; 
            end if;
        end if;
    end process;


    ap_return_6_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_6_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_6_preg <= dout0_6_write_assig_reg_166;
                end if; 
            end if;
        end if;
    end process;


    ap_return_7_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_7_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_7_preg <= dout0_7_write_assig_reg_130;
                end if; 
            end if;
        end if;
    end process;


    ap_return_8_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_8_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_8_preg <= dout0_8_write_assig_reg_157;
                end if; 
            end if;
        end if;
    end process;


    ap_return_9_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_9_preg <= ap_const_lv8_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
                    ap_return_9_preg <= dout0_9_write_assig_reg_148;
                end if; 
            end if;
        end if;
    end process;


    dout0_0_write_assig_reg_220_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_0_write_assig_reg_220 <= shift_reg0_regs_0;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_0_write_assig_reg_220 <= select_ln50_1_fu_471_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_10_write_assi_reg_139_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_10_write_assi_reg_139 <= shift_reg1_regs_2;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_10_write_assi_reg_139 <= shift_reg1_regs_1;
                end if;
            end if; 
        end if;
    end process;

    dout0_1_write_assig_reg_211_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_1_write_assig_reg_211 <= shift_reg0_regs_1;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_1_write_assig_reg_211 <= select_ln25_6_fu_437_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_2_write_assig_reg_202_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_2_write_assig_reg_202 <= shift_reg0_regs_2;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_2_write_assig_reg_202 <= select_ln25_5_fu_415_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_3_write_assig_reg_193_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_3_write_assig_reg_193 <= shift_reg0_regs_3;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_3_write_assig_reg_193 <= select_ln25_4_fu_393_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_4_write_assig_reg_184_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_4_write_assig_reg_184 <= shift_reg0_regs_4;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_4_write_assig_reg_184 <= select_ln25_3_fu_371_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_5_write_assig_reg_175_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_5_write_assig_reg_175 <= shift_reg0_regs_5;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_5_write_assig_reg_175 <= select_ln25_2_fu_349_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_6_write_assig_reg_166_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_6_write_assig_reg_166 <= shift_reg0_regs_6;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_6_write_assig_reg_166 <= select_ln25_1_fu_327_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_7_write_assig_reg_130_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_7_write_assig_reg_130 <= shift_reg0_regs_7;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_7_write_assig_reg_130 <= select_ln25_fu_305_p3;
                end if;
            end if; 
        end if;
    end process;

    dout0_8_write_assig_reg_157_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_8_write_assig_reg_157 <= shift_reg1_regs_0;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_8_write_assig_reg_157 <= shift_reg0_regs_7;
                end if;
            end if; 
        end if;
    end process;

    dout0_9_write_assig_reg_148_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                if ((en_read_read_fu_58_p2 = ap_const_lv1_0)) then 
                    dout0_9_write_assig_reg_148 <= shift_reg1_regs_1;
                elsif ((en_read_read_fu_58_p2 = ap_const_lv1_1)) then 
                    dout0_9_write_assig_reg_148 <= shift_reg1_regs_0;
                end if;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((en_read_read_fu_58_p2 = ap_const_lv1_1) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                shift_reg0_regs_0 <= select_ln50_1_fu_471_p3;
                shift_reg0_regs_1 <= select_ln25_6_fu_437_p3;
                shift_reg0_regs_2 <= select_ln25_5_fu_415_p3;
                shift_reg0_regs_3 <= select_ln25_4_fu_393_p3;
                shift_reg0_regs_4 <= select_ln25_3_fu_371_p3;
                shift_reg0_regs_5 <= select_ln25_2_fu_349_p3;
                shift_reg0_regs_6 <= select_ln25_1_fu_327_p3;
                shift_reg0_regs_7 <= select_ln25_fu_305_p3;
                shift_reg1_regs_0 <= shift_reg0_regs_7;
                shift_reg1_regs_1 <= shift_reg1_regs_0;
                shift_reg1_regs_2 <= shift_reg1_regs_1;
                shift_reg1_regs_3 <= shift_reg1_regs_2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_0_assign_proc : process(dout0_0_write_assig_reg_220, ap_CS_fsm_state2, ap_return_0_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_0 <= dout0_0_write_assig_reg_220;
        else 
            ap_return_0 <= ap_return_0_preg;
        end if; 
    end process;


    ap_return_1_assign_proc : process(dout0_1_write_assig_reg_211, ap_CS_fsm_state2, ap_return_1_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_1 <= dout0_1_write_assig_reg_211;
        else 
            ap_return_1 <= ap_return_1_preg;
        end if; 
    end process;


    ap_return_10_assign_proc : process(dout0_10_write_assi_reg_139, ap_CS_fsm_state2, ap_return_10_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_10 <= dout0_10_write_assi_reg_139;
        else 
            ap_return_10 <= ap_return_10_preg;
        end if; 
    end process;


    ap_return_11_assign_proc : process(shift_reg1_regs_3, ap_CS_fsm_state2, ap_return_11_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_11 <= shift_reg1_regs_3;
        else 
            ap_return_11 <= ap_return_11_preg;
        end if; 
    end process;


    ap_return_2_assign_proc : process(dout0_2_write_assig_reg_202, ap_CS_fsm_state2, ap_return_2_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_2 <= dout0_2_write_assig_reg_202;
        else 
            ap_return_2 <= ap_return_2_preg;
        end if; 
    end process;


    ap_return_3_assign_proc : process(dout0_3_write_assig_reg_193, ap_CS_fsm_state2, ap_return_3_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_3 <= dout0_3_write_assig_reg_193;
        else 
            ap_return_3 <= ap_return_3_preg;
        end if; 
    end process;


    ap_return_4_assign_proc : process(dout0_4_write_assig_reg_184, ap_CS_fsm_state2, ap_return_4_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_4 <= dout0_4_write_assig_reg_184;
        else 
            ap_return_4 <= ap_return_4_preg;
        end if; 
    end process;


    ap_return_5_assign_proc : process(dout0_5_write_assig_reg_175, ap_CS_fsm_state2, ap_return_5_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_5 <= dout0_5_write_assig_reg_175;
        else 
            ap_return_5 <= ap_return_5_preg;
        end if; 
    end process;


    ap_return_6_assign_proc : process(dout0_6_write_assig_reg_166, ap_CS_fsm_state2, ap_return_6_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_6 <= dout0_6_write_assig_reg_166;
        else 
            ap_return_6 <= ap_return_6_preg;
        end if; 
    end process;


    ap_return_7_assign_proc : process(dout0_7_write_assig_reg_130, ap_CS_fsm_state2, ap_return_7_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_7 <= dout0_7_write_assig_reg_130;
        else 
            ap_return_7 <= ap_return_7_preg;
        end if; 
    end process;


    ap_return_8_assign_proc : process(dout0_8_write_assig_reg_157, ap_CS_fsm_state2, ap_return_8_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_8 <= dout0_8_write_assig_reg_157;
        else 
            ap_return_8 <= ap_return_8_preg;
        end if; 
    end process;


    ap_return_9_assign_proc : process(dout0_9_write_assig_reg_148, ap_CS_fsm_state2, ap_return_9_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_return_9 <= dout0_9_write_assig_reg_148;
        else 
            ap_return_9 <= ap_return_9_preg;
        end if; 
    end process;

    en_read_read_fu_58_p2 <= (0=>en, others=>'-');
    or_ln50_fu_457_p0 <= (0=>srst, others=>'-');
    or_ln50_fu_457_p2 <= (xor_ln50_fu_451_p2 or or_ln50_fu_457_p0);
    select_ln25_1_fu_327_p0 <= (0=>srst, others=>'-');
    select_ln25_1_fu_327_p3 <= 
        ap_const_lv8_0 when (select_ln25_1_fu_327_p0(0) = '1') else 
        select_ln52_1_fu_319_p3;
    select_ln25_2_fu_349_p0 <= (0=>srst, others=>'-');
    select_ln25_2_fu_349_p3 <= 
        ap_const_lv8_0 when (select_ln25_2_fu_349_p0(0) = '1') else 
        select_ln52_2_fu_341_p3;
    select_ln25_3_fu_371_p0 <= (0=>srst, others=>'-');
    select_ln25_3_fu_371_p3 <= 
        ap_const_lv8_0 when (select_ln25_3_fu_371_p0(0) = '1') else 
        select_ln52_3_fu_363_p3;
    select_ln25_4_fu_393_p0 <= (0=>srst, others=>'-');
    select_ln25_4_fu_393_p3 <= 
        ap_const_lv8_0 when (select_ln25_4_fu_393_p0(0) = '1') else 
        select_ln52_4_fu_385_p3;
    select_ln25_5_fu_415_p0 <= (0=>srst, others=>'-');
    select_ln25_5_fu_415_p3 <= 
        ap_const_lv8_0 when (select_ln25_5_fu_415_p0(0) = '1') else 
        select_ln52_5_fu_407_p3;
    select_ln25_6_fu_437_p0 <= (0=>srst, others=>'-');
    select_ln25_6_fu_437_p3 <= 
        ap_const_lv8_0 when (select_ln25_6_fu_437_p0(0) = '1') else 
        select_ln52_6_fu_429_p3;
    select_ln25_fu_305_p0 <= (0=>srst, others=>'-');
    select_ln25_fu_305_p3 <= 
        ap_const_lv8_0 when (select_ln25_fu_305_p0(0) = '1') else 
        select_ln52_fu_297_p3;
    select_ln50_1_fu_471_p3 <= 
        select_ln50_fu_463_p3 when (or_ln50_fu_457_p2(0) = '1') else 
        load_data_0_read;
    select_ln50_fu_463_p0 <= (0=>srst, others=>'-');
    select_ln50_fu_463_p3 <= 
        ap_const_lv8_0 when (select_ln50_fu_463_p0(0) = '1') else 
        din;
    select_ln52_1_fu_319_p0 <= (0=>load, others=>'-');
    select_ln52_1_fu_319_p3 <= 
        load_data_6_read when (select_ln52_1_fu_319_p0(0) = '1') else 
        shift_reg0_regs_5;
    select_ln52_2_fu_341_p0 <= (0=>load, others=>'-');
    select_ln52_2_fu_341_p3 <= 
        load_data_5_read when (select_ln52_2_fu_341_p0(0) = '1') else 
        shift_reg0_regs_4;
    select_ln52_3_fu_363_p0 <= (0=>load, others=>'-');
    select_ln52_3_fu_363_p3 <= 
        load_data_4_read when (select_ln52_3_fu_363_p0(0) = '1') else 
        shift_reg0_regs_3;
    select_ln52_4_fu_385_p0 <= (0=>load, others=>'-');
    select_ln52_4_fu_385_p3 <= 
        load_data_3_read when (select_ln52_4_fu_385_p0(0) = '1') else 
        shift_reg0_regs_2;
    select_ln52_5_fu_407_p0 <= (0=>load, others=>'-');
    select_ln52_5_fu_407_p3 <= 
        load_data_2_read when (select_ln52_5_fu_407_p0(0) = '1') else 
        shift_reg0_regs_1;
    select_ln52_6_fu_429_p0 <= (0=>load, others=>'-');
    select_ln52_6_fu_429_p3 <= 
        load_data_1_read when (select_ln52_6_fu_429_p0(0) = '1') else 
        shift_reg0_regs_0;
    select_ln52_fu_297_p0 <= (0=>load, others=>'-');
    select_ln52_fu_297_p3 <= 
        load_data_7_read when (select_ln52_fu_297_p0(0) = '1') else 
        shift_reg0_regs_6;
    xor_ln50_fu_451_p0 <= (0=>load, others=>'-');
    xor_ln50_fu_451_p2 <= (xor_ln50_fu_451_p0 xor ap_const_lv1_1);
end behav;
