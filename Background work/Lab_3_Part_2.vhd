library ieee;
use ieee.std_logic_1164.all;

entity prng is
port (
    clk : in std_logic;
    reset : in std_logic;
    start : in std_logic;
    prn_out : out std_logic_vector(15 downto 0)
);
end prng;

architecture Behavioral of prng is
signal Q : std_logic_vector(15 downto 0) := "0000000000000000";
signal enable : std_logic;

begin

-- Toggle the enable signal when start input goes high
process (start)
begin
    if (start = '1') then
        enable <= not enable;
    end if;
end process;

-- LFSR circuit
process (clk)
begin
    if (rising_edge(clk)) then
        if (reset = '1') then
            Q <= "0000000000000000";
        else
            if (enable = '1') then
                Q <= Q(14 downto 0) & (Q(0) xor Q(2) xor Q(3) xor Q(5) xor Q(7) xor Q(9) xor Q(10) xor Q(14));
            end if;
        end if;
    end if;
end process;

-- Output the 16-bit random number sequence
prn_out <= Q;

end Behavioral;
