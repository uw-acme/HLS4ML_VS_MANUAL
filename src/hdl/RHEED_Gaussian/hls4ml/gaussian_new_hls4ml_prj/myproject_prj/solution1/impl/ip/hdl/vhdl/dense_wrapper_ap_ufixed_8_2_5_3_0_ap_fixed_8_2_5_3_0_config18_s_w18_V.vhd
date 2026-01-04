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
    0 => "110100000000100000111000000101111100111110100011111010111100110000010011111100", 
    1 => "010001000011111111101100001000111111110001100111110001111110001111101100000111", 
    2 => "110001000000100000101100001110000000000000000100001110111101111111111111111000", 
    3 => "000001111110101111111011110111111111101111100011111010000001101111111000001010", 
    4 => "110100000000001111010111110101111111110000001100000011000010000000000111100101", 
    5 => "101001000001000000001011111001000100111111111100000011000000000000000011111100", 
    6 => "110011000010010000010000000000111100001110111100010001111110101111010111110101", 
    7 => "100110000000111111010111111010000000101110010000000010000010100000101111110101", 
    8 => "000000000011110000100111111000111101100001001000000010000010011111110111111011", 
    9 => "111101000100101111011011111110111110110000100111110111000100010000000100000110", 
    10 => "000011000101011110111011110100000010011111001111101110000000001110101100000101", 
    11 => "000011111111011111111011101100111110110001000111111011111111010000110000000100", 
    12 => "111010111111101111101000000100111110101110111100000010000000110000011000000100", 
    13 => "111010000000001111110011111111111101101111110000000001111111100000001000000001", 
    14 => "111000000000111110110000000111000010011111111100000110111110010000011011110000" );

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


