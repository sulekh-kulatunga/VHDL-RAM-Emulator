library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity memory is
    port (
        clk : in std_logic;
        rst : in std_logic;
        wr_rd : in std_logic;
        address : in std_logic_vector(2 downto 0);
        din : in std_logic_vector(3 downto 0);
        seg : out std_logic_vector(6 downto 0)
    );
end entity;

architecture rtl of memory is
    type memory_array is array (0 to 7) of std_logic_vector(3 downto 0);
    signal mem : memory_array := (others => "0000");
    signal mux_out : std_logic_vector(3 downto 0);
begin
    process (clk, rst)
    begin
        if rst = '1' then
            mem <= (others => "0000");
        elsif rising_edge(clk) then
            if wr_rd = '1' then -- Write mode
                mem(to_integer(unsigned(address))) <= din;
                seg <= "0000000";
            else -- Read mode
                mux_out <= mem(to_integer(unsigned(address)));
                case mux_out is
                    when "0000" => seg <= "0000001"; -- 0
                    when "0001" => seg <= "1001111"; -- 1
                    when "0010" => seg <= "0010010"; -- 2
                    when "0011" => seg <= "0000110"; -- 3
                    when "0100" => seg <= "1001100"; -- 4
                    when "0101" => seg <= "0100100"; -- 5
                    when "0110" => seg <= "0100000"; -- 6
                    when "0111" => seg <= "0001111"; -- 7
                    when "1000" => seg <= "0000000"; -- 8
                    when "1001" => seg <= "0000100"; -- 9
                    when "1010" => seg <= "0001000"; -- A
                    when "1011" => seg <= "1100000"; -- B
                    when "1100" => seg <= "0110001"; -- C
                    when "1101" => seg <= "1000010"; -- D
                    when "1110" => seg <= "0110000"; -- E
                    when others => seg <= "0111000"; -- F
                end case;
            end if;
        end if;
    end process;
end architecture;
