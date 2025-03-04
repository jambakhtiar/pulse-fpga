library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use work.pack_exam.all;

entity PULSE is
	generic(
		N_PULSE: integer:=6);
	port(
		clk, rst: in std_logic;
		i: in std_logic;
		o:	out std_logic);
end entity;

---------------------------------------------------------

architecture ARCH_1 of PULSE is
constant N_BITS: integer:=F_NBITS(N_PULSE);
signal cnt: unsigned(N_BITS-1 downto 0);
signal start,started,finished: std_logic;
begin
	start<=i;
	o<=started;
		
	fsm: process
	begin
		wait until rising_edge(clk);
		if rst='1' then
			started<='0';
			finished<='0';
		elsif start='1' then 
			started<='1';
			finished<='0';
		elsif (cnt+1=N_PULSE-1) then ---part 2 modification
			started<='0';
			finished<='1';
		end if;
	end process;
	
	counter: process 
	begin
		wait until rising_edge(clk);
		cnt<=(others=>'0');
		if started='1' and finished='0' then
			cnt<=cnt+1;
		end if;
	end process;
end architecture;

---------------------------------------------------------

--Copy the ARCH_1 to describe a new architecture ARCH_2
--Modify the ARCH_2 according to the exercise

architecture ARCH_2 of PULSE is
constant N_BITS: integer:=F_NBITS(N_PULSE);
signal cnt: unsigned(N_BITS-1 downto 0);
signal start,started,finished: std_logic;
begin
	start<=i;
		o <= '1' when(i = '1' or cnt+1=N_PULSE-1) else '0';--part 3 modification: replacing	o<=started with (i = '1' or cnt+1=N_PULSE-1)	

		
	fsm: process
	begin
		wait until rising_edge(clk);
		if rst='1' then
			started<='0';
			finished<='0';
		elsif start='1' then 
			started<='1';
			finished<='0';
		elsif (cnt+1=N_PULSE-1) then --part 1 modifiation
			started<='0';
			finished<='1';
		end if;
	end process;
	
	counter: process 
	begin
		wait until rising_edge(clk);
		cnt<=(others=>'0');
		if start = '1' then --part 2 modification, resets cnt every time star is pressed
			cnt <= x"000000"; --part 2 modification
		elsif started='1' and finished='0' then
			cnt<=cnt+1;
		end if;
	end process;
end architecture;


---------------------------------------------------------

--synthesis translate_off
library ieee;
use ieee.std_logic_1164.all;

entity TB_PULSE is
end entity;

architecture TEST of TB_PULSE is
constant T_CLK: time:=10 ns;
constant N_PULSE: integer:=8;
signal clk: std_logic:='0';
signal rst,i,o1,o2: std_logic;
begin
	clk<=not clk after T_CLK/2;
	--rst<='1', '0' after 1*T_CLK; --part 2 modified from 5*T_CLK to 1*T_CLK
	
	rst<='1', '0' after 1*T_CLK; --part 3 modified restoring  1*T_CLK to 5*T_CLK
	
	--part 2 solution modified 
	--i<='0', '1' after 2*T_CLK, '0' after 3*T_CLK, '1' after 6*T_CLK, '0' after 7*T_CLK;
	
	
	--part 3 solution modified; restoring back to 1 pulse 
	i<='0', '1' after 8*T_CLK, '0' after 9*T_CLK;
	
	DUT1: entity work.PULSE(ARCH_1) generic map(N_PULSE) port map(clk,rst,i,o1);
	DUT2: entity work.PULSE(ARCH_2) generic map(N_PULSE) port map(clk,rst,i,o2);
end architecture;
--synthesis translate_on
