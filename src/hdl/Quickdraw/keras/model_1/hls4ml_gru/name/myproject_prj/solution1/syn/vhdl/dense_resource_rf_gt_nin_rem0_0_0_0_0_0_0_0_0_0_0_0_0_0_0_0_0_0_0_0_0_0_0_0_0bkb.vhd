-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_rom is 
    generic(
             DWIDTH     : integer := 7; 
             AWIDTH     : integer := 9; 
             MEM_SIZE    : integer := 288
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 2=> "0000000", 3 to 5=> "0000001", 6 to 8=> "0000010", 9 to 11=> "0000011", 
    12 to 14=> "0000100", 15 to 17=> "0000101", 18 to 20=> "0000110", 21 to 23=> "0000111", 
    24 to 26=> "0001000", 27 to 29=> "0001001", 30 to 32=> "0001010", 33 to 35=> "0001011", 
    36 to 38=> "0001100", 39 to 41=> "0001101", 42 to 44=> "0001110", 45 to 47=> "0001111", 
    48 to 50=> "0010000", 51 to 53=> "0010001", 54 to 56=> "0010010", 57 to 59=> "0010011", 
    60 to 62=> "0010100", 63 to 65=> "0010101", 66 to 68=> "0010110", 69 to 71=> "0010111", 
    72 to 74=> "0011000", 75 to 77=> "0011001", 78 to 80=> "0011010", 81 to 83=> "0011011", 
    84 to 86=> "0011100", 87 to 89=> "0011101", 90 to 92=> "0011110", 93 to 95=> "0011111", 
    96 to 98=> "0100000", 99 to 101=> "0100001", 102 to 104=> "0100010", 105 to 107=> "0100011", 
    108 to 110=> "0100100", 111 to 113=> "0100101", 114 to 116=> "0100110", 117 to 119=> "0100111", 
    120 to 122=> "0101000", 123 to 125=> "0101001", 126 to 128=> "0101010", 129 to 131=> "0101011", 
    132 to 134=> "0101100", 135 to 137=> "0101101", 138 to 140=> "0101110", 141 to 143=> "0101111", 
    144 to 146=> "0110000", 147 to 149=> "0110001", 150 to 152=> "0110010", 153 to 155=> "0110011", 
    156 to 158=> "0110100", 159 to 161=> "0110101", 162 to 164=> "0110110", 165 to 167=> "0110111", 
    168 to 170=> "0111000", 171 to 173=> "0111001", 174 to 176=> "0111010", 177 to 179=> "0111011", 
    180 to 182=> "0111100", 183 to 185=> "0111101", 186 to 188=> "0111110", 189 to 191=> "0111111", 
    192 to 194=> "1000000", 195 to 197=> "1000001", 198 to 200=> "1000010", 201 to 203=> "1000011", 
    204 to 206=> "1000100", 207 to 209=> "1000101", 210 to 212=> "1000110", 213 to 215=> "1000111", 
    216 to 218=> "1001000", 219 to 221=> "1001001", 222 to 224=> "1001010", 225 to 227=> "1001011", 
    228 to 230=> "1001100", 231 to 233=> "1001101", 234 to 236=> "1001110", 237 to 239=> "1001111", 
    240 to 242=> "1010000", 243 to 245=> "1010001", 246 to 248=> "1010010", 249 to 251=> "1010011", 
    252 to 254=> "1010100", 255 to 257=> "1010101", 258 to 260=> "1010110", 261 to 263=> "1010111", 
    264 to 266=> "1011000", 267 to 269=> "1011001", 270 to 272=> "1011010", 273 to 275=> "1011011", 
    276 to 278=> "1011100", 279 to 281=> "1011101", 282 to 284=> "1011110", 285 to 287=> "1011111" );


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

entity dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 288;
        AddressWidth : INTEGER := 9);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb is
    component dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_rom_U :  component dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0bkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


