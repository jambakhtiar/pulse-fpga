library ieee;
use ieee.std_logic_1164.all;

entity TOP is
	port(
		fpga_clk: in std_logic;
		fpga_rst: in std_logic;
		switch: in std_logic;
		led: out std_logic);
end entity;

--Complete the ARCH of TOP to sintetize PULSE(ARCH_2) with T_CLK*N_PULSE=10 milliseconds (F_CLK=100MHz)

architecture ARCH of TOP is
begin
	--INSTANCE OF PULSE(ARCH_2)

	
end architecture;