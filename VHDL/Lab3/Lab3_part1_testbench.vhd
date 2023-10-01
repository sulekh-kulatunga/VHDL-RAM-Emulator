library ieee;
use ieee.std_logic_1164.all;

entity memory_tb is
end entity;

architecture test of memory_tb is
    -- Component declaration
    component memory is
        port (
            clk : in std_logic;
            rst : in std_logic;
            wr_rd : in std_logic;
            address : in std_logic_vector(2 downto 0);
            din : in std_logic_vector(3 downto 0);
            seg : out std_logic_vector(6 downto 0)
        );
    end component;

    -- Signals declaration
    signal clk : std_logic := '0';
    signal rst : std_logic := '0';
    signal wr_rd : std_logic;
    signal address : std_logic_vector(2 downto 0);
    signal din : std_logic_vector(3 downto 0);
    signal seg : std_logic_vector(6 downto 0);

begin

    -- Instantiate the memory component
    uut: memory port map (
        clk => clk,
        rst => rst,
        wr_rd => wr_rd,
        address => address,
        din => din,
        seg => seg
    );

    -- Clock generation
    process
    begin
        clk <= '0';
        wait for 5 ns;
        clk <= '1';
        wait for 5 ns;
    end process;

    -- Stimulus process
    process
    begin
        -- Perform a reset
        rst <= '1';
        wait for 100 ns;
        rst <= '0';
        wait for 100 ns;

        -- Write some values to memory
        wr_rd <= '1';
        address <= "000";
        din <= "0010";
        wait for 10 ns;

        address <= "010";
        din <= "1010";
        wait for 10 ns;

        address <= "111";
        din <= "0100";
        wait for 10 ns;

        -- Read values from memory
        wr_rd <= '0';
        address <= "000";
        wait for 10 ns;

        address <= "010";
        wait for 10 ns;

        address <= "111";
        wait for 10 ns;

        -- End the simulation
        wait;
    end process;

end architecture;
