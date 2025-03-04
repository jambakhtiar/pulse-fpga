library ieee;
use ieee.std_logic_1164.all;

package pack_exam is
	function F_NCOUNTS(nbits: integer) return integer;
	function F_NBITS(ncounts: integer) return integer;
end package;

package body pack_exam is

	function F_NCOUNTS(nbits: integer) return integer is
	variable ncounts: integer;
	begin
		ncounts:=2**nbits;
		return ncounts;
	end function;

	function F_NBITS(ncounts: integer) return integer is
	variable nbits: integer:=-1;
	variable b: boolean:=false;
	begin
		while not b loop
			nbits:=nbits+1;
			if (2**nbits)>=ncounts then b:=true; end if;
		end loop;
		return nbits;
	end function;

end package body;

