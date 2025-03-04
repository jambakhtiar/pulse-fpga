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

------------------------------------------------------------------------------------------------------------
---Part 4 modifications
constant N_PULSE: integer := 10000000; --100×106Hz×100×10−3s = 10,000,000 clock cycles to produce 100ms pulse
begin
	--INSTANCE OF PULSE(ARCH_2)
	i0: entity work.PULSE(ARCH_2) generic map(N_PULSE) port map( fpga_clk, fpga_rst, switch, led);

-------------------------------------------------------------------------------------------------------------


end architecture;