-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_rom is 
    generic(
             DWIDTH     : integer := 78; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 15
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000001000010111111010000001001111100111111010011111011111100000000001000001101", 
    1 => "001111000000101111011111100100111010101111100111101111111101011111000011101101", 
    2 => "111010111101000000101011111101000001001111100000000001000000110000000100001101", 
    3 => "101000000001100000010100010000111101110001000100000001111111101111011111111100", 
    4 => "111101000000100000101100000111111101111111000011111101000011101111010000001110", 
    5 => "110010000000101111001011110110111111011111011011101011111111011111010000001100", 
    6 => "001011111111110000101100000111111011001111101100001101000010011111111111111011", 
    7 => "100111000000101110110111101111000001110000010111110111111110010000100011111100", 
    8 => "110111111110011110111100001001111101110000011011101001000010001111100100001101", 
    9 => "110100111011001111101011111110000000110000100011100111000101001110100100000101", 
    10 => "111011000010000000111100001101111011111111100011111110111101111111011000000001", 
    11 => "010000000000101111010100001101000100001111101111111111111111101111110011111001", 
    12 => "111011111101010000101111110110000000001110100100000001000011001111110111101111", 
    13 => "101001000011010000001011101100000000001111100111110101000100010000011111110100", 
    14 => "111111000001100000011000000100000001110000111111110011000000111111100000001000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V is
    generic (
        DataWidth : INTEGER := 78;
        AddressRange : INTEGER := 15;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V is
    component dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_rom_U :  component dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_w18_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


