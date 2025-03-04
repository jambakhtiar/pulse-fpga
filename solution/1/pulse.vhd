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
		elsif cnt+1=N_PULSE
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

-- Part 1 added
architecture ARCH_2 of PULSE is
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
		elsif (cnt+1=N_PULSE-1) then --part 1 modifiation
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


--synthesis translate_off
library ieee;
use ieee.std_logic_1164.all;

entity TB_PULSE is
end entity;

architecture TEST of TB_PULSE is
constant T_CLK: time:=10 ns;
constant N_PULSE: integer:=6;
signal clk: std_logic:='0';
signal rst,i,o1,o2: std_logic;
begin
	clk<=not clk after T_CLK/2;
	rst<='1', '0' after 5*T_CLK;
	i<='0', '1' after 8*T_CLK, '0' after 9*T_CLK;
	
	DUT1: entity work.PULSE(ARCH_1) generic map(N_PULSE) port map(clk,rst,i,o1);
	DUT2: entity work.PULSE(ARCH_2) generic map(N_PULSE) port map(clk,rst,i,o2);
end architecture;
--synthesis translate_on
