-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity relu_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_relu_config4_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_0_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
    data_1_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
    data_2_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
    data_3_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
    data_4_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (16 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (16 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (16 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (16 downto 0);
    ap_return_4 : OUT STD_LOGIC_VECTOR (16 downto 0) );
end;


architecture behav of relu_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_relu_config4_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv18_0 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    constant ap_const_lv17_0 : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal ap_block_state1 : BOOLEAN;
    signal icmp_ln1494_fu_62_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln1494_fu_58_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal icmp_ln1494_1_fu_80_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln1494_1_fu_76_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal icmp_ln1494_2_fu_98_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln1494_2_fu_94_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal icmp_ln1494_3_fu_116_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln1494_3_fu_112_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal icmp_ln1494_4_fu_134_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln1494_4_fu_130_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal select_ln45_fu_68_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal select_ln45_1_fu_86_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal select_ln45_2_fu_104_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal select_ln45_3_fu_122_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal select_ln45_4_fu_140_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_return_0_preg : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
    signal ap_return_1_preg : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
    signal ap_return_2_preg : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
    signal ap_return_3_preg : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
    signal ap_return_4_preg : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);


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


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_return_0_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_0_preg <= ap_const_lv17_0;
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_return_0_preg <= select_ln45_fu_68_p3;
                end if; 
            end if;
        end if;
    end process;


    ap_return_1_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_1_preg <= ap_const_lv17_0;
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_return_1_preg <= select_ln45_1_fu_86_p3;
                end if; 
            end if;
        end if;
    end process;


    ap_return_2_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_2_preg <= ap_const_lv17_0;
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_return_2_preg <= select_ln45_2_fu_104_p3;
                end if; 
            end if;
        end if;
    end process;


    ap_return_3_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_3_preg <= ap_const_lv17_0;
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_return_3_preg <= select_ln45_3_fu_122_p3;
                end if; 
            end if;
        end if;
    end process;


    ap_return_4_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_4_preg <= ap_const_lv17_0;
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_return_4_preg <= select_ln45_4_fu_140_p3;
                end if; 
            end if;
        end if;
    end process;


    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);

    ap_block_state1_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_block_state1 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_done_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
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


    ap_ready_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_0_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, select_ln45_fu_68_p3, ap_return_0_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_return_0 <= select_ln45_fu_68_p3;
        else 
            ap_return_0 <= ap_return_0_preg;
        end if; 
    end process;


    ap_return_1_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, select_ln45_1_fu_86_p3, ap_return_1_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_return_1 <= select_ln45_1_fu_86_p3;
        else 
            ap_return_1 <= ap_return_1_preg;
        end if; 
    end process;


    ap_return_2_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, select_ln45_2_fu_104_p3, ap_return_2_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_return_2 <= select_ln45_2_fu_104_p3;
        else 
            ap_return_2 <= ap_return_2_preg;
        end if; 
    end process;


    ap_return_3_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, select_ln45_3_fu_122_p3, ap_return_3_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_return_3 <= select_ln45_3_fu_122_p3;
        else 
            ap_return_3 <= ap_return_3_preg;
        end if; 
    end process;


    ap_return_4_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, select_ln45_4_fu_140_p3, ap_return_4_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_return_4 <= select_ln45_4_fu_140_p3;
        else 
            ap_return_4 <= ap_return_4_preg;
        end if; 
    end process;

    icmp_ln1494_1_fu_80_p2 <= "1" when (signed(data_1_V_read) > signed(ap_const_lv18_0)) else "0";
    icmp_ln1494_2_fu_98_p2 <= "1" when (signed(data_2_V_read) > signed(ap_const_lv18_0)) else "0";
    icmp_ln1494_3_fu_116_p2 <= "1" when (signed(data_3_V_read) > signed(ap_const_lv18_0)) else "0";
    icmp_ln1494_4_fu_134_p2 <= "1" when (signed(data_4_V_read) > signed(ap_const_lv18_0)) else "0";
    icmp_ln1494_fu_62_p2 <= "1" when (signed(data_0_V_read) > signed(ap_const_lv18_0)) else "0";
    select_ln45_1_fu_86_p3 <= 
        trunc_ln1494_1_fu_76_p1 when (icmp_ln1494_1_fu_80_p2(0) = '1') else 
        ap_const_lv17_0;
    select_ln45_2_fu_104_p3 <= 
        trunc_ln1494_2_fu_94_p1 when (icmp_ln1494_2_fu_98_p2(0) = '1') else 
        ap_const_lv17_0;
    select_ln45_3_fu_122_p3 <= 
        trunc_ln1494_3_fu_112_p1 when (icmp_ln1494_3_fu_116_p2(0) = '1') else 
        ap_const_lv17_0;
    select_ln45_4_fu_140_p3 <= 
        trunc_ln1494_4_fu_130_p1 when (icmp_ln1494_4_fu_134_p2(0) = '1') else 
        ap_const_lv17_0;
    select_ln45_fu_68_p3 <= 
        trunc_ln1494_fu_58_p1 when (icmp_ln1494_fu_62_p2(0) = '1') else 
        ap_const_lv17_0;
    trunc_ln1494_1_fu_76_p1 <= data_1_V_read(17 - 1 downto 0);
    trunc_ln1494_2_fu_94_p1 <= data_2_V_read(17 - 1 downto 0);
    trunc_ln1494_3_fu_112_p1 <= data_3_V_read(17 - 1 downto 0);
    trunc_ln1494_4_fu_130_p1 <= data_4_V_read(17 - 1 downto 0);
    trunc_ln1494_fu_58_p1 <= data_0_V_read(17 - 1 downto 0);
end behav;