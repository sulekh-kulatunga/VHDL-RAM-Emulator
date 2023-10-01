library ieee;
use ieee.std_logic_1164.all;

entity lfsr is
port ( 
    reset : in std_logic;
    clock : in std_logic;
    start : in std_logic;
    q_out : out std_logic_vector(15 downto 0)
);
end lfsr;

architecture behavior of lfsr is
  signal reg : std_logic_vector(15 downto 0);
begin

  process(clock, reset)
  begin
    if reset = '1' then
      reg <= (others => '1');
    elsif rising_edge(clock) then
      if start = '1' then
        -- XOR taps
        reg <= reg(14 downto 0) & 
                    (reg(15) xor reg(13) xor reg(12) xor reg(4));
      end if;
    end if;
  end process;

  q_out <= reg;

end behavior;