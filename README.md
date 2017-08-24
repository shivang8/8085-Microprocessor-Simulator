# 8085-Microprocessor-Simulator

## Objective: Design and Develop a desktop Application to emulate the fuctionality of 8085 Microprocessor.  

This microprocessor constains following instructions:<br/>
**A. Load and Store:**<br />
    1. MOV<br/>
    2. MVI<br/>
    3. LXI<br/>
    4. LDA<br/>
    5. STA<br/>
    6. LHLD<br/>
    7. SHLD<br/>
    8. STAX<br/>
    9. XCHG<br/>
**B. Arithmetic:**<br/>
    1. ADD<br/>
    2. ADI<br/>
    3. SUB<br/>
    4. INR<br/>
    5. DCR<br/>
    6. INX<br/>
    7. DCX<br/>
    8. DAD<br/>
    9. SUI<br/>
**C. Logical:**<br/>
    1. CMA<br/>
    2. CMP<br/>
**D. Branching:**<br/>
    1. JMP<br/>
    2. JC<br/>
    3. JNC<br/>
    4. JZ<br/>
    5. JNZ<br />
**E. Extra**:<br/>
	  An additional command SET is used to set data into memory location.<br/>
  	SYNTAX:	`SET <Memory Address>, <2 Byte Hexadecimal Data>`<br/>
		  eg: `SET 2500, FF`

You can also use inbuilt debugger to debug your 8085 program. The debugger has following 6 functionality/ commands:<br/>
      1. break or b <line number>: It will set breakpoint on given line number.<br/>
        Eg: `break 10 or b 10`<br/>
      2. run or r : It will run the program until end of code or breakpoint is encountered.
        Eg: `run or r`<br/>
      3. step or s : It will run the program one instruction at a time.
        Eg: `step or s`<br/>
      4. print or p : It will print value of register, flags, current line number or memory location.<br/> 
        To print value of register use print or p <Register>. Eg: `print A` or `p A`.<br/>
        To print value flag use print or p flag. Eg: `print flag` or `p flag`.<br/>
        To print current line number use print or p loc. Eg: `print loc` or `p loc`.<br/>
        To print value of memory location use print or p x<memory address>. Eg: `print x2000` or `p x2000.`<br/>
      5. Quit or q :** Quits the debugger.<br/>
        Eg: `quit` or `q`<br/>
      6. help : It will show all the commands of the debugger.<br/>
        Eg: `help`<br/>

**HOW TO RUN THE 8085 MICROPROCESSOR SIMUATOR**<br/>
  1. Download and extract the files from this repository.<br/>
  2. Copy all files from src directory and paste this in its parent directory directly.<br/>
  3. Open command prompt/ terminal and set its current path to the directory where you have stored your files.<br/>
  4. Type make in the terminal or command prompt.<br/>
  5. This will create your executable file of the code named 8085.<br/>
  6. Now that everything is ready you can run your code by following methods:<br/>
      i.)	To directly use the 8085 microprocessor simulator.<br/>
	        Eg: `./8085`<br/>
      ii.)	To use debugger pass --debugger as argument.<br/>
	        Eg: `./8085 --debugger`<br/>
      iii.)	You can also take input from file by passing the file name/path as argument.<br/>
	        Eg: `./8085 input.asm`<br/>
      iv.)	Or you can also both together by passing both as arguments together.<br/>
	        Eg: `./8085 input.asm --debugger`<br/>

**IF YOU ENCOUNTER ANY BUGS OR FOR ANY SUGGESTIONS REGARDING THE IMPROVEMENT OF THE 8085 MICROPROCESSOR SIMULATOR FEEL FREE TO CONTACT US:**

Shivani Mittal		  -	mittal.shivani@geu.ac.in<br/>
Shivang Srivastava	-	shivang.8@geu.ac.in<br/>
