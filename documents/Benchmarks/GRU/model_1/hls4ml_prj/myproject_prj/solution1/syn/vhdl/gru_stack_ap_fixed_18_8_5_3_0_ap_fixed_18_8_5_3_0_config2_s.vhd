-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity gru_stack_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_V : IN STD_LOGIC_VECTOR (2159 downto 0);
    data_V_ap_vld : IN STD_LOGIC;
    ap_return_0 : OUT STD_LOGIC_VECTOR (17 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (17 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (17 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (17 downto 0);
    ap_return_4 : OUT STD_LOGIC_VECTOR (17 downto 0) );
end;


architecture behav of gru_stack_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv5_14 : STD_LOGIC_VECTOR (4 downto 0) := "10100";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv8_2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_const_lv8_3 : STD_LOGIC_VECTOR (7 downto 0) := "00000011";
    constant ap_const_lv8_4 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_const_lv8_5 : STD_LOGIC_VECTOR (7 downto 0) := "00000101";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal h_state_V114_0 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    signal h_state_V114_1 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    signal h_state_V114_2 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    signal h_state_V114_3 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    signal h_state_V114_4 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    signal data_V_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln487_fu_125_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal iloop_fu_131_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal iloop_reg_536 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_block_state2 : BOOLEAN;
    signal data_in_0_V_fu_199_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_0_V_reg_541 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_1_V_fu_245_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_1_V_reg_546 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_2_V_fu_291_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_2_V_reg_551 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_3_V_fu_337_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_3_V_reg_556 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_4_V_fu_383_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_4_V_reg_561 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_5_V_fu_429_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal data_in_5_V_reg_566 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start : STD_LOGIC;
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_done : STD_LOGIC;
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_idle : STD_LOGIC;
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_ready : STD_LOGIC;
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_reset_state : STD_LOGIC;
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_0 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_1 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_2 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_3 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_4 : STD_LOGIC_VECTOR (17 downto 0);
    signal reset_state_0_reg_74 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_block_state1 : BOOLEAN;
    signal iloop_0_reg_88 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start_reg : STD_LOGIC := '0';
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal shl_ln490_1_fu_145_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal shl_ln_fu_137_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal zext_ln203_fu_153_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sub_ln203_fu_157_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl2_fu_171_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl1_fu_163_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_1_fu_179_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln203_4_fu_183_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_2_fu_189_p1 : STD_LOGIC_VECTOR (2159 downto 0);
    signal lshr_ln203_fu_193_p2 : STD_LOGIC_VECTOR (2159 downto 0);
    signal or_ln203_fu_203_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl4_fu_217_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl3_fu_209_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_3_fu_225_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln203_5_fu_229_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_4_fu_235_p1 : STD_LOGIC_VECTOR (2159 downto 0);
    signal lshr_ln203_1_fu_239_p2 : STD_LOGIC_VECTOR (2159 downto 0);
    signal add_ln203_fu_249_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl6_fu_263_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl5_fu_255_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_5_fu_271_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln203_6_fu_275_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_6_fu_281_p1 : STD_LOGIC_VECTOR (2159 downto 0);
    signal lshr_ln203_2_fu_285_p2 : STD_LOGIC_VECTOR (2159 downto 0);
    signal add_ln203_1_fu_295_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl8_fu_309_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl7_fu_301_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_7_fu_317_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln203_7_fu_321_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_8_fu_327_p1 : STD_LOGIC_VECTOR (2159 downto 0);
    signal lshr_ln203_3_fu_331_p2 : STD_LOGIC_VECTOR (2159 downto 0);
    signal add_ln203_2_fu_341_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl10_fu_355_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl9_fu_347_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_9_fu_363_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln203_8_fu_367_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_10_fu_373_p1 : STD_LOGIC_VECTOR (2159 downto 0);
    signal lshr_ln203_4_fu_377_p2 : STD_LOGIC_VECTOR (2159 downto 0);
    signal add_ln203_3_fu_387_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl11_fu_401_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl_fu_393_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_11_fu_409_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln203_9_fu_413_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln203_12_fu_419_p1 : STD_LOGIC_VECTOR (2159 downto 0);
    signal lshr_ln203_5_fu_423_p2 : STD_LOGIC_VECTOR (2159 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (3 downto 0);

    component gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        reset_state : IN STD_LOGIC;
        data_0_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
        data_1_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
        data_2_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
        data_3_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
        data_4_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
        data_5_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
        ap_return_0 : OUT STD_LOGIC_VECTOR (17 downto 0);
        ap_return_1 : OUT STD_LOGIC_VECTOR (17 downto 0);
        ap_return_2 : OUT STD_LOGIC_VECTOR (17 downto 0);
        ap_return_3 : OUT STD_LOGIC_VECTOR (17 downto 0);
        ap_return_4 : OUT STD_LOGIC_VECTOR (17 downto 0) );
    end component;



begin
    grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99 : component gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start,
        ap_done => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_done,
        ap_idle => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_idle,
        ap_ready => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_ready,
        reset_state => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_reset_state,
        data_0_V_read => data_in_0_V_reg_541,
        data_1_V_read => data_in_1_V_reg_546,
        data_2_V_read => data_in_2_V_reg_551,
        data_3_V_read => data_in_3_V_reg_556,
        data_4_V_read => data_in_4_V_reg_561,
        data_5_V_read => data_in_5_V_reg_566,
        ap_return_0 => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_0,
        ap_return_1 => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_1,
        ap_return_2 => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_2,
        ap_return_3 => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_3,
        ap_return_4 => grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_4);





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


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((not(((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0))) and (icmp_ln487_fu_125_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                    grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_ready = ap_const_logic_1)) then 
                    grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    iloop_0_reg_88_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                iloop_0_reg_88 <= ap_const_lv5_0;
            elsif (((grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                iloop_0_reg_88 <= iloop_reg_536;
            end if; 
        end if;
    end process;

    reset_state_0_reg_74_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                reset_state_0_reg_74 <= ap_const_lv1_1;
            elsif (((grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                reset_state_0_reg_74 <= ap_const_lv1_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0))) and (icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                data_in_0_V_reg_541 <= data_in_0_V_fu_199_p1;
                data_in_1_V_reg_546 <= data_in_1_V_fu_245_p1;
                data_in_2_V_reg_551 <= data_in_2_V_fu_291_p1;
                data_in_3_V_reg_556 <= data_in_3_V_fu_337_p1;
                data_in_4_V_reg_561 <= data_in_4_V_fu_383_p1;
                data_in_5_V_reg_566 <= data_in_5_V_fu_429_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                h_state_V114_0 <= grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_0;
                h_state_V114_1 <= grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_1;
                h_state_V114_2 <= grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_2;
                h_state_V114_3 <= grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_3;
                h_state_V114_4 <= grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_return_4;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                iloop_reg_536 <= iloop_fu_131_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, data_V_ap_vld, ap_CS_fsm_state2, icmp_ln487_fu_125_p2, grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_done, ap_CS_fsm_state4)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if ((not(((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0))) and (icmp_ln487_fu_125_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                elsif ((not(((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0))) and (icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                if (((grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXX";
        end case;
    end process;
    add_ln203_1_fu_295_p2 <= std_logic_vector(unsigned(ap_const_lv8_3) + unsigned(sub_ln203_fu_157_p2));
    add_ln203_2_fu_341_p2 <= std_logic_vector(unsigned(ap_const_lv8_4) + unsigned(sub_ln203_fu_157_p2));
    add_ln203_3_fu_387_p2 <= std_logic_vector(unsigned(ap_const_lv8_5) + unsigned(sub_ln203_fu_157_p2));
    add_ln203_4_fu_183_p2 <= std_logic_vector(unsigned(p_shl1_fu_163_p3) + unsigned(zext_ln203_1_fu_179_p1));
    add_ln203_5_fu_229_p2 <= std_logic_vector(unsigned(p_shl3_fu_209_p3) + unsigned(zext_ln203_3_fu_225_p1));
    add_ln203_6_fu_275_p2 <= std_logic_vector(unsigned(p_shl5_fu_255_p3) + unsigned(zext_ln203_5_fu_271_p1));
    add_ln203_7_fu_321_p2 <= std_logic_vector(unsigned(p_shl7_fu_301_p3) + unsigned(zext_ln203_7_fu_317_p1));
    add_ln203_8_fu_367_p2 <= std_logic_vector(unsigned(p_shl9_fu_347_p3) + unsigned(zext_ln203_9_fu_363_p1));
    add_ln203_9_fu_413_p2 <= std_logic_vector(unsigned(p_shl_fu_393_p3) + unsigned(zext_ln203_11_fu_409_p1));
    add_ln203_fu_249_p2 <= std_logic_vector(unsigned(ap_const_lv8_2) + unsigned(sub_ln203_fu_157_p2));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);

    ap_block_state1_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_block_state1 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_block_state2_assign_proc : process(data_V_ap_vld, icmp_ln487_fu_125_p2)
    begin
                ap_block_state2 <= ((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0));
    end process;


    ap_done_assign_proc : process(ap_done_reg, data_V_ap_vld, ap_CS_fsm_state2, icmp_ln487_fu_125_p2)
    begin
        if ((not(((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0))) and (icmp_ln487_fu_125_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
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


    ap_ready_assign_proc : process(data_V_ap_vld, ap_CS_fsm_state2, icmp_ln487_fu_125_p2)
    begin
        if ((not(((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (data_V_ap_vld = ap_const_logic_0))) and (icmp_ln487_fu_125_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return_0 <= h_state_V114_0;
    ap_return_1 <= h_state_V114_1;
    ap_return_2 <= h_state_V114_2;
    ap_return_3 <= h_state_V114_3;
    ap_return_4 <= h_state_V114_4;

    data_V_blk_n_assign_proc : process(data_V_ap_vld, ap_CS_fsm_state2, icmp_ln487_fu_125_p2)
    begin
        if (((icmp_ln487_fu_125_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            data_V_blk_n <= data_V_ap_vld;
        else 
            data_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    data_in_0_V_fu_199_p1 <= lshr_ln203_fu_193_p2(18 - 1 downto 0);
    data_in_1_V_fu_245_p1 <= lshr_ln203_1_fu_239_p2(18 - 1 downto 0);
    data_in_2_V_fu_291_p1 <= lshr_ln203_2_fu_285_p2(18 - 1 downto 0);
    data_in_3_V_fu_337_p1 <= lshr_ln203_3_fu_331_p2(18 - 1 downto 0);
    data_in_4_V_fu_383_p1 <= lshr_ln203_4_fu_377_p2(18 - 1 downto 0);
    data_in_5_V_fu_429_p1 <= lshr_ln203_5_fu_423_p2(18 - 1 downto 0);
    grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start <= grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_ap_start_reg;
    grp_gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_99_reset_state <= reset_state_0_reg_74(0);
    icmp_ln487_fu_125_p2 <= "1" when (iloop_0_reg_88 = ap_const_lv5_14) else "0";
    iloop_fu_131_p2 <= std_logic_vector(unsigned(iloop_0_reg_88) + unsigned(ap_const_lv5_1));
    lshr_ln203_1_fu_239_p2 <= std_logic_vector(shift_right(unsigned(data_V),to_integer(unsigned('0' & zext_ln203_4_fu_235_p1(31-1 downto 0)))));
    lshr_ln203_2_fu_285_p2 <= std_logic_vector(shift_right(unsigned(data_V),to_integer(unsigned('0' & zext_ln203_6_fu_281_p1(31-1 downto 0)))));
    lshr_ln203_3_fu_331_p2 <= std_logic_vector(shift_right(unsigned(data_V),to_integer(unsigned('0' & zext_ln203_8_fu_327_p1(31-1 downto 0)))));
    lshr_ln203_4_fu_377_p2 <= std_logic_vector(shift_right(unsigned(data_V),to_integer(unsigned('0' & zext_ln203_10_fu_373_p1(31-1 downto 0)))));
    lshr_ln203_5_fu_423_p2 <= std_logic_vector(shift_right(unsigned(data_V),to_integer(unsigned('0' & zext_ln203_12_fu_419_p1(31-1 downto 0)))));
    lshr_ln203_fu_193_p2 <= std_logic_vector(shift_right(unsigned(data_V),to_integer(unsigned('0' & zext_ln203_2_fu_189_p1(31-1 downto 0)))));
    or_ln203_fu_203_p2 <= (sub_ln203_fu_157_p2 or ap_const_lv8_1);
    p_shl10_fu_355_p3 <= (add_ln203_2_fu_341_p2 & ap_const_lv1_0);
    p_shl11_fu_401_p3 <= (add_ln203_3_fu_387_p2 & ap_const_lv1_0);
    p_shl1_fu_163_p3 <= (sub_ln203_fu_157_p2 & ap_const_lv4_0);
    p_shl2_fu_171_p3 <= (sub_ln203_fu_157_p2 & ap_const_lv1_0);
    p_shl3_fu_209_p3 <= (or_ln203_fu_203_p2 & ap_const_lv4_0);
    p_shl4_fu_217_p3 <= (or_ln203_fu_203_p2 & ap_const_lv1_0);
    p_shl5_fu_255_p3 <= (add_ln203_fu_249_p2 & ap_const_lv4_0);
    p_shl6_fu_263_p3 <= (add_ln203_fu_249_p2 & ap_const_lv1_0);
    p_shl7_fu_301_p3 <= (add_ln203_1_fu_295_p2 & ap_const_lv4_0);
    p_shl8_fu_309_p3 <= (add_ln203_1_fu_295_p2 & ap_const_lv1_0);
    p_shl9_fu_347_p3 <= (add_ln203_2_fu_341_p2 & ap_const_lv4_0);
    p_shl_fu_393_p3 <= (add_ln203_3_fu_387_p2 & ap_const_lv4_0);
    shl_ln490_1_fu_145_p3 <= (iloop_0_reg_88 & ap_const_lv1_0);
    shl_ln_fu_137_p3 <= (iloop_0_reg_88 & ap_const_lv3_0);
    sub_ln203_fu_157_p2 <= std_logic_vector(unsigned(shl_ln_fu_137_p3) - unsigned(zext_ln203_fu_153_p1));
    zext_ln203_10_fu_373_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_8_fu_367_p2),2160));
    zext_ln203_11_fu_409_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl11_fu_401_p3),12));
    zext_ln203_12_fu_419_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_9_fu_413_p2),2160));
    zext_ln203_1_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl2_fu_171_p3),12));
    zext_ln203_2_fu_189_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_4_fu_183_p2),2160));
    zext_ln203_3_fu_225_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl4_fu_217_p3),12));
    zext_ln203_4_fu_235_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_5_fu_229_p2),2160));
    zext_ln203_5_fu_271_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl6_fu_263_p3),12));
    zext_ln203_6_fu_281_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_6_fu_275_p2),2160));
    zext_ln203_7_fu_317_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl8_fu_309_p3),12));
    zext_ln203_8_fu_327_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln203_7_fu_321_p2),2160));
    zext_ln203_9_fu_363_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl10_fu_355_p3),12));
    zext_ln203_fu_153_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(shl_ln490_1_fu_145_p3),8));
end behav;