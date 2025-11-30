-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom is 
    generic(
             DWIDTH     : integer := 119; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 10
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010110000110011110000000000110010000111110001111010110000000111111110111100110000001011110110101110100000110011101111", 
    1 => "00010011111100000001100111010101110110100000110000011110000101111100110000010011110111000010110000101011110010100000000", 
    2 => "10111011110110111111100000000111110011100000001111111111110111111110010111100110000000000001101111100011111110011111101", 
    3 => "11000101111000000000111000000010001000011101101000011110001000011110001000000000000111100000101000101110001010111101111", 
    4 => "11101011110010111111111000010100000100111110001111101001111100011111000111011010000010011111110111111001110101011111111", 
    5 => "10110110001001100000100000010101110000011100011000101010001000000001001000001001110011111110111000001100000101011101110", 
    6 => "00011010000010111110111111100111111100000001110111110000001101111110110111011111110111000000101111011010001101111111100", 
    7 => "00110100000011100000111000100111110111000010000111110010000111111111101111110001111010111111101111011111110101000001011", 
    8 => "11100000000011011111011000001010000001011111011000101100000001100000110111111010000010011100100000001011111110100010000", 
    9 => "11110001111101000010101111101111111110011110111000011000000111011101011000011101110010111110001111000010000100000010000" );

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

entity dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V is
    generic (
        DataWidth : INTEGER := 119;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V is
    component dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom_U :  component dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


