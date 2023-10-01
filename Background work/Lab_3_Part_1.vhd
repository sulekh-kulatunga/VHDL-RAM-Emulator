LIBRARY ieee;
USE ieee.std_logic_1164.all; 
ENTITY part_1 IS PORT ( 
clock reset start Q 
: IN STD_LOGIC; 
: IN STD_LOGIC; : IN STD_LOGIC; 
: OUT STD_LOGIC_VECTOR(7 DOWNTO 0) 
);
END part_1; 
ARCHITECTURE behave OF part_1 IS SIGNAL x0 : STD_LOGIC; 
SIGNAL x1 : STD_LOGIC; 
SIGNAL x2 : STD_LOGIC; 
SIGNAL x3 : STD_LOGIC; 
SIGNAL x4 : STD_LOGIC; 
SIGNAL x5 : STD_LOGIC;
 SIGNAL x6 : STD_LOGIC;
 SIGNAL x7 : STD_LOGIC; 
BEGIN 
PROCESS (clock, reset) BEGIN 
IF (reset = '1') THEN 
x0 <= '0'; 
x1 <= '0';
 x2 <= '1'; 
x3 <= '0';
 x4 <= '0';
 x5 <= '0'; 
x6 <= '1'; 
x7 <= '0'; 
ELSIF (clock'EVENT AND clock = '1') THEN IF (start = '1') THEN 
x0 <= x7;
x1 <= x7 XOR x0; x2 <= x7 XOR x1; x3 <= x7 XOR x2; x4 <= x7 XOR x2; x5 <= x4;
x6 <= x7 XOR x5; x7 <= x7 XOR x6; 
END IF; 
END IF; 
END PROCESS;
Q<=(x7 & x6 & x5 & x4 & x3 & x2 & x1 & x0); 
END behave;
