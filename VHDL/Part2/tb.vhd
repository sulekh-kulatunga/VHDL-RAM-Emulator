library ieee;
use ieee.std_logic_1164.all;

entity lfsr_tb is
end lfsr_tb;

architecture testbench of lfsr_tb is
  signal clk       : std_logic := '0';
  signal start     : std_logic := '0';
  signal reset     : std_logic := '1';
  signal q_out     : std_logic_vector(15 downto 0);
  
begin
  DUT: entity work.lfsr
    port map(
      clock     => clk ,    
      reset     => reset ,    
      start     => start,    
      q_out     => q_out
    ); 

  clk <= not clk after 10 ns;

  stimulus: process 
  begin
    -- Reset the LFSR
    reset <= '1';
    wait for 10 ns;
    reset <= '0';
    wait for 10 ns;
    
    -- Test 1: Start = '0'
    start <= '0';
    wait for 100 ns;
    
    -- Test 2: Start = '1', generate 10 cycles
    start <= '1';
    wait for 10 * 10 ns;
    start <= '0';
    wait for 10 ns;
    
    -- Test 3: Start = '1', generate 100 cycles
    start <= '1';
    wait for 100 * 10 ns;
    start <= '0';
    wait for 10 ns;
    
    -- Test 4: Reset during operation
    start <= '1';
    wait for 20 * 10 ns;
    reset <= '1';
    wait for 10 ns;
    reset <= '0';
    wait for 30 * 10 ns;
    start <= '0';
    
    -- Wait for some additional cycles
    wait for 10 ns;
    wait;
  end process;

end testbench;
