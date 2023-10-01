library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity LFSR_Testbench is
end LFSR_Testbench;

architecture Behavioral of LFSR_Testbench is
    component LFSR is
        Port (
            clk   : in  std_logic;
            reset : in  std_logic;
            start : in  std_logic;
            Q     : out std_logic_vector(15 downto 0)
        );
    end component;
    
    signal clk_tb    : std_logic := '0';
    signal reset_tb  : std_logic := '1';
    signal start_tb  : std_logic := '0';
    signal Q_tb      : std_logic_vector(15 downto 0);
    
begin
    UUT : LFSR
    port map (
        clk   => clk_tb,
        reset => reset_tb,
        start => start_tb,
        Q     => Q_tb
    );
    
    clk_process : process
    begin
        while now < 5000 ns loop
            clk_tb <= not clk_tb;
            wait for 10 ns;
        end loop;
        wait;
    end process;
    
    stim_proc : process
    begin
        reset_tb <= '1';
        wait for 10 ns;
        start_tb <= '1';
        wait for 100 ns;
        start_tb <= '0';
        wait for 1000 ns;
        assert false report "End of simulation" severity failure;
    end process;
    
end Behavioral;
