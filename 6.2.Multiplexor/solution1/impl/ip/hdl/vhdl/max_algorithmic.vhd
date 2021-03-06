-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity max_algorithmic is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    din_0_read : IN STD_LOGIC_VECTOR (31 downto 0);
    din_1_read : IN STD_LOGIC_VECTOR (31 downto 0);
    din_2_read : IN STD_LOGIC_VECTOR (31 downto 0);
    din_3_read : IN STD_LOGIC_VECTOR (31 downto 0);
    din_4_read : IN STD_LOGIC_VECTOR (31 downto 0);
    din_5_read : IN STD_LOGIC_VECTOR (31 downto 0);
    din_6_read : IN STD_LOGIC_VECTOR (31 downto 0);
    din_7_read : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of max_algorithmic is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv3_5 : STD_LOGIC_VECTOR (2 downto 0) := "101";
    constant ap_const_lv3_6 : STD_LOGIC_VECTOR (2 downto 0) := "110";
    constant ap_const_lv3_7 : STD_LOGIC_VECTOR (2 downto 0) := "111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal select_ln15_1_fu_104_p3 : STD_LOGIC_VECTOR (1 downto 0);
    signal select_ln15_1_reg_311 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal zext_ln15_2_fu_142_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal zext_ln15_2_reg_325 : STD_LOGIC_VECTOR (2 downto 0);
    signal phi_ln15_2_fu_146_p10 : STD_LOGIC_VECTOR (31 downto 0);
    signal phi_ln15_2_reg_330 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal select_ln14_1_fu_170_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal select_ln14_1_reg_351 : STD_LOGIC_VECTOR (2 downto 0);
    signal icmp_ln15_4_fu_195_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln15_4_reg_356 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal select_ln15_3_fu_227_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal select_ln15_3_reg_368 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal icmp_ln15_fu_80_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln15_fu_86_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln15_1_fu_94_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln15_fu_100_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal phi_ln15_1_fu_115_p9 : STD_LOGIC_VECTOR (2 downto 0);
    signal phi_ln15_1_fu_115_p10 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln15_2_fu_129_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln15_2_fu_135_p3 : STD_LOGIC_VECTOR (1 downto 0);
    signal phi_ln15_2_fu_146_p9 : STD_LOGIC_VECTOR (2 downto 0);
    signal icmp_ln15_3_fu_165_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal phi_ln15_3_fu_177_p9 : STD_LOGIC_VECTOR (2 downto 0);
    signal phi_ln15_3_fu_177_p10 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln14_2_fu_201_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal phi_ln15_4_fu_207_p10 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln15_5_fu_221_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal phi_ln15_5_fu_235_p10 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln15_6_fu_248_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_261_p9 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_fu_261_p10 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);

    component top_mux_83_32_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        din5_WIDTH : INTEGER;
        din6_WIDTH : INTEGER;
        din7_WIDTH : INTEGER;
        din8_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        din2 : IN STD_LOGIC_VECTOR (31 downto 0);
        din3 : IN STD_LOGIC_VECTOR (31 downto 0);
        din4 : IN STD_LOGIC_VECTOR (31 downto 0);
        din5 : IN STD_LOGIC_VECTOR (31 downto 0);
        din6 : IN STD_LOGIC_VECTOR (31 downto 0);
        din7 : IN STD_LOGIC_VECTOR (31 downto 0);
        din8 : IN STD_LOGIC_VECTOR (2 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    top_mux_83_32_1_1_U71 : component top_mux_83_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 32,
        din6_WIDTH => 32,
        din7_WIDTH => 32,
        din8_WIDTH => 3,
        dout_WIDTH => 32)
    port map (
        din0 => din_0_read,
        din1 => din_1_read,
        din2 => din_2_read,
        din3 => din_2_read,
        din4 => din_2_read,
        din5 => din_2_read,
        din6 => din_2_read,
        din7 => din_2_read,
        din8 => phi_ln15_1_fu_115_p9,
        dout => phi_ln15_1_fu_115_p10);

    top_mux_83_32_1_1_U72 : component top_mux_83_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 32,
        din6_WIDTH => 32,
        din7_WIDTH => 32,
        din8_WIDTH => 3,
        dout_WIDTH => 32)
    port map (
        din0 => din_0_read,
        din1 => din_1_read,
        din2 => din_2_read,
        din3 => din_3_read,
        din4 => din_3_read,
        din5 => din_3_read,
        din6 => din_3_read,
        din7 => din_3_read,
        din8 => phi_ln15_2_fu_146_p9,
        dout => phi_ln15_2_fu_146_p10);

    top_mux_83_32_1_1_U73 : component top_mux_83_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 32,
        din6_WIDTH => 32,
        din7_WIDTH => 32,
        din8_WIDTH => 3,
        dout_WIDTH => 32)
    port map (
        din0 => din_0_read,
        din1 => din_1_read,
        din2 => din_2_read,
        din3 => din_3_read,
        din4 => din_4_read,
        din5 => din_4_read,
        din6 => din_4_read,
        din7 => din_4_read,
        din8 => phi_ln15_3_fu_177_p9,
        dout => phi_ln15_3_fu_177_p10);

    top_mux_83_32_1_1_U74 : component top_mux_83_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 32,
        din6_WIDTH => 32,
        din7_WIDTH => 32,
        din8_WIDTH => 3,
        dout_WIDTH => 32)
    port map (
        din0 => din_0_read,
        din1 => din_1_read,
        din2 => din_2_read,
        din3 => din_3_read,
        din4 => din_4_read,
        din5 => din_5_read,
        din6 => din_5_read,
        din7 => din_5_read,
        din8 => select_ln14_2_fu_201_p3,
        dout => phi_ln15_4_fu_207_p10);

    top_mux_83_32_1_1_U75 : component top_mux_83_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 32,
        din6_WIDTH => 32,
        din7_WIDTH => 32,
        din8_WIDTH => 3,
        dout_WIDTH => 32)
    port map (
        din0 => din_0_read,
        din1 => din_1_read,
        din2 => din_2_read,
        din3 => din_3_read,
        din4 => din_4_read,
        din5 => din_5_read,
        din6 => din_6_read,
        din7 => din_6_read,
        din8 => select_ln15_3_reg_368,
        dout => phi_ln15_5_fu_235_p10);

    top_mux_83_32_1_1_U76 : component top_mux_83_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 32,
        din6_WIDTH => 32,
        din7_WIDTH => 32,
        din8_WIDTH => 3,
        dout_WIDTH => 32)
    port map (
        din0 => din_0_read,
        din1 => din_1_read,
        din2 => din_2_read,
        din3 => din_3_read,
        din4 => din_4_read,
        din5 => din_5_read,
        din6 => din_6_read,
        din7 => din_7_read,
        din8 => tmp_fu_261_p9,
        dout => tmp_fu_261_p10);





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


    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg <= ap_const_lv32_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                    ap_return_preg <= tmp_fu_261_p10;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                icmp_ln15_4_reg_356 <= icmp_ln15_4_fu_195_p2;
                select_ln14_1_reg_351 <= select_ln14_1_fu_170_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                phi_ln15_2_reg_330 <= phi_ln15_2_fu_146_p10;
                    zext_ln15_2_reg_325(1 downto 0) <= zext_ln15_2_fu_142_p1(1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                select_ln15_1_reg_311 <= select_ln15_1_fu_104_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                select_ln15_3_reg_368 <= select_ln15_3_fu_227_p3;
            end if;
        end if;
    end process;
    zext_ln15_2_reg_325(2) <= '0';

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(ap_CS_fsm_state5, tmp_fu_261_p10, ap_return_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            ap_return <= tmp_fu_261_p10;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;

    icmp_ln15_1_fu_94_p2 <= "1" when (signed(select_ln15_fu_86_p3) < signed(din_2_read)) else "0";
    icmp_ln15_2_fu_129_p2 <= "1" when (signed(phi_ln15_1_fu_115_p10) < signed(din_3_read)) else "0";
    icmp_ln15_3_fu_165_p2 <= "1" when (signed(phi_ln15_2_reg_330) < signed(din_4_read)) else "0";
    icmp_ln15_4_fu_195_p2 <= "1" when (signed(phi_ln15_3_fu_177_p10) < signed(din_5_read)) else "0";
    icmp_ln15_5_fu_221_p2 <= "1" when (signed(phi_ln15_4_fu_207_p10) < signed(din_6_read)) else "0";
    icmp_ln15_6_fu_248_p2 <= "1" when (signed(phi_ln15_5_fu_235_p10) < signed(din_7_read)) else "0";
    icmp_ln15_fu_80_p2 <= "1" when (signed(din_1_read) > signed(din_0_read)) else "0";
    phi_ln15_1_fu_115_p9 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln15_1_reg_311),3));
    phi_ln15_2_fu_146_p9 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln15_2_fu_135_p3),3));
    phi_ln15_3_fu_177_p9 <= 
        ap_const_lv3_4 when (icmp_ln15_3_fu_165_p2(0) = '1') else 
        zext_ln15_2_reg_325;
    select_ln14_1_fu_170_p3 <= 
        ap_const_lv3_4 when (icmp_ln15_3_fu_165_p2(0) = '1') else 
        zext_ln15_2_reg_325;
    select_ln14_2_fu_201_p3 <= 
        ap_const_lv3_5 when (icmp_ln15_4_reg_356(0) = '1') else 
        select_ln14_1_reg_351;
    select_ln15_1_fu_104_p3 <= 
        ap_const_lv2_2 when (icmp_ln15_1_fu_94_p2(0) = '1') else 
        zext_ln15_fu_100_p1;
    select_ln15_2_fu_135_p3 <= 
        ap_const_lv2_3 when (icmp_ln15_2_fu_129_p2(0) = '1') else 
        select_ln15_1_reg_311;
    select_ln15_3_fu_227_p3 <= 
        ap_const_lv3_6 when (icmp_ln15_5_fu_221_p2(0) = '1') else 
        select_ln14_2_fu_201_p3;
    select_ln15_fu_86_p3 <= 
        din_1_read when (icmp_ln15_fu_80_p2(0) = '1') else 
        din_0_read;
    tmp_fu_261_p9 <= 
        ap_const_lv3_7 when (icmp_ln15_6_fu_248_p2(0) = '1') else 
        select_ln15_3_reg_368;
    zext_ln15_2_fu_142_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln15_2_fu_135_p3),3));
    zext_ln15_fu_100_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(icmp_ln15_fu_80_p2),2));
end behav;
