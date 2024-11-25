# 8086 MICROPROCESSOR
The 8086 microprocessor is an **8-bit/16-bit** microprocessor designed by Intel in the late 1970s. It is the first member of the x86 family of microprocessors, which includes many popular CPUs used in personal computers. It was followed by 80186, 80286…80486 with increasing speed, memory, register size etc.
The 8086 microprocessor has a 20-bit address bus, which can address up to 1 MB of memory, and a 16-bit data bus, which can transfer data between the microprocessor and memory or I/O devices.
The 8086 microprocessor has a segmented memory architecture, which means that memory is divided into segments that are addressed using both a segment register and an offset. The segment register points to the start of a segment, while the offset specifies the location of a specific byte within the segment. This allows the 8086 microprocessor to access large amounts of memory, while still using a 16-bit registers and data bus.
A bus is a communication system (like electric wires) for transferring data within the processor or between components inside a computer, 
8086 ARCHITECTURE
 
### The 8086 is divided into two parts:

•	Bus Interface Unit (BIU)

•	Execution Unit (EU)

### Bus Interface Unit (BIU):
```
The BIU consists of the following units, like the Instruction Queue, Segment Registers, Instruction Pointer etc
It interfaces the processor to the outside i.e it is responsible for performing all external bus operations like fetch, read, write, input and output of data to the processor.

The BIU uses instruction queue for the pipelined operation. The instruction queue is a 6-byte first-in-first-out register which can be understood as a cache memory. The queue permits the pre-fetch of up to 6-bytes of the instruction code.
```
## Execution Unit(EU):

```
The EU consists of the following units like the ALU(arithmetic and logic unit), Flag register, General Purpose Registers, Pointers and Index Registers etc
The EU decodes and executes the instructions pre-fetched by the BIU.
```

It also tests the status and control flags and updates the flags based on the results of the instruction.

## THE REGISTER ORGANISATION:
8086 microprocessor has a powerful set of registers of 16-bit each. The registers are categorised into four groups:

•	General purpose Registers
•	Segment Registers
•	Pointers and Index Registers
•	Flag Register
GENERAL PURPOSE REGISTERS:
16-BIT
8-BIT	8-BIT

AX --> AH	& AL

BX --> BH &	BL

CX --> CH	& CL

DX --> DH &	DL

The 8086 microprocessor contains four general purpose registers: AX, BX, CX and DX registers
They are used to hold data, variables, results etc temporarily for faster operations.

### Accumulator (AX)
AX is used as a 16-bit register accumulator, with the lower 8-bits designated as AL and the higher 8-bits as AH for 8-bit operations.
It performs all the arithmetic and logic operations and the result is also stored in the accumulator for most operations.

### Base Register (BX)
BX register also called base register is used as a general purpose register as well as to store the offset for forming physical address in certain addressing mode. Remember the physical address (and address bus) are 20-bits while the registers are 16-bit.

### Count Register (CX)
CX register is used as a default counter in case of string and loop instructions.
CX register is also used for the count of the number of bits by which the content of an operand must be shifted or rotated during the execution of multi-bit shift or rotate instructions.

### Data Register (DX)
DX register is used in input/output (I/O) operations to hold the address of I/O port.
DX register also holds the remainder after a word division and holds the higher order bits (most significant bits MSB) of the result of  word(16-bit) multiplication.

## SEGMENT REGISTERS:
There are four segment register: Code Segment (CS) register, Stack Segment (SS) register, Data Segment (DS) register and Extra Segment (ES) register.
Each of them contains a 16-bit base address that points to the corresponding segment in memory.

### Code Segment (CS):
It is used for the addressing memory locations in the code segment of memory where the executable program(instructions) are stored.

### Stack Segment (SS):
It is used for addressing stack segment of the memory which is used to stack data.

### Data Segment (DS):
The data segment register points to the data segment of the memory where data is stored. 

### Extra Segment (ES):
This register points to the extra segment of the memory. The ES is used as another data segment of memory.

**NOTE:** memory is segmented and each segment is 64Kb in size while the 8086 can have 1 MB memory.

## POINTERS AND INDEX REGISTERS:
There are three pointers: Instruction Pointer (IP), Base Pointer (BP) and Stack Pointer (SP). While there are two index registers: Source Index register (SI) and Destination Index register (DI).

### Instruction Pointer (IP)
The function of IP is similar to program counter, but it contains the offset address instead of the actual address of the next instruction to execute.
IP contains the offset address within the code segment.
IP is combined with the CS register content to generate the address of the next instruction to be executed.

### Stack Pointer (SP)
The content of SP is used as offset from the current value of stack segment (SS) during the execution of instructions that involve the stack segment.

### Base Pointer (BP)
BP also contains an offset within the stack segment (SS). BP contains the offset in the based address mode.
Index registers are used as general purpose registers as well as for offset storage purpose. 

The SI register is used to store the offset of source data in the data segment and DI register is used to store the offset of destination data in the data or extra segment.

### Default segment and offset registers:

| **Segment**  | **Offset** |
|--------------|------------|
| CS           | IP         |
| SS           | SP or BP   |
| DS           | BX, SI, DI |
| ES           | DI         |


## FLAG REGISTER
In 8086 the EU contains a 16-bit flag register which contains 9 active flags and the remaining 7 bits are undefined.

**The flag register is divided into two parts:**

1. Conditional or status flags

2. Machine control flags

```
The conditional or status flags are set or reset on the basis of the result generated from the ALU. By set we mean made 1 while reset means made 0.
The lower bit of the flag register along with the overflow flag contains the conditional flags.
The control flags are: Direction Flag (DF), Interrupt Flag (IF) and Trap Flag (TF)
These flags are used to control the program flow and for controlling the microprocessor.
```
 
### Carry Flag (CF):
This flag is set( CF=1) when there is a carry from the MSB (most significant bit) in case of addition or borrow in the case of subtraction.
 i.e 	carry from D15 bit for 16-bit operation or
carry from D7 bit for 8-bit operation

--------------------------------------------------------------------------------------------------------------------------
|D15	| D14	| D13	| D12	| D11	| D10	|D9	| D8	| D7	| D6	| D5	| D4	| D3	| D2	| D1	| D0 |
--------------------------------------------------------------------------------------------------------------------------         											                                                                        
MSB- most significant bit
LSB- least significant bit

### Parity Flag (PF):
Parity flag is set (PF=1) when the ALU output has even parity. Ie even number of 1’s. And is reset (PF=0) when the ALU output has odd parity ie odd number of 1’s. 
NOTE: even if the result is a word (16 bits) only the 8 low bits are analysed (considered). So only  the number of 1’s in AL not all of AX determine PF status.

### Auxiliary Carry Flag (AF or AC):
The AF flag is set when there is a carry after addition or borrow after subtraction between bit D3 and D4 positions in 8-bit operations.
Zero Flag (ZF):
This flag shows that the result an ALU operation is zero or non zero.
i.e if ZF=1, the result is zero.
 If ZF=0, the result is non zero.
Sign Flag (SF):
This flag is set (SF=1) when the result of any ALU operation is negative. (SF=0) when the result is positive.
The MSB of the result indicates the sign bit.
If sign bit =0 the number is positive
If sign bit=1 the number is negative
For 8-bit operation D7 bit represents the sign bit while for 16-bit operation D15 bit represents the sign bit.

### Overflow Flag (OF):
It is based on the (n-1) bit carry of the result.
Overflow occurs when signed numbers are added or subtracted.
If the result of a signed number operation is large enough to be accommodated in a destination register, then overflow occurs.
i.e for 8-bit signed operation,if there is a carry from D6 to D7 bit OF flag is set(1).
For 16-bit signed operation, if there is a carry D14 to D15 bit of the result OF flag is set (1).
Eg +127= 7F hex=  0111 1111
     +01=01 hex   =  0000 0001
		  =  1000 0000 		OF=1(set) (because the is carry from D6 to D7

### Trap Flag (TF):
If  TF=1 (set)  the 8086 processor enters into the single step mode. Else it is reset.
In the single step mode the processor executes one instruction at a time and it is useful for debugging programs.

### The Interrupt Flag (IF):
This flag (IF) is set (1) when the maskable interrupt or INTR is received by the processor.
 IF=1 (set), if the INTR pin on the 8086 processor chip is enabled
IF=0 (reset), if the INTR pin on the 8086 processor chip is disabled.

### Direction Flag (DF):
It is used for string manipulation instructions ie the direction flag selects the increment or decrement mode for DI and SI registers in string instructions.
If DF=1 (set), the registers are automatically decremented
If DF=0 (reset), the registers are automatically incremented 

## INSTRUCTION SET
An instruction set is a group of commands for a CPU in machine language. A set of instructions that a microprocessor understands. It is design based and architecture dependent as such differs from one microprocessor to the other especial by different manufactures.
Within the same family of microprocessors like 8086, 80x86 there is backward compatibility 
where by the later processors understand the instruction set of the older 8086.
#### The 8086 microprocessor supports 8 types of instructions −
•	Data Transfer Instructions

•	Arithmetic Instructions

•	Bit Manipulation Instructions

•	String Instructions

•	Program Execution Transfer Instructions (Branch & Loop Instructions)

•	Processor Control Instructions

•	Iteration Control Instructions

•	Interrupt Instructions

### Data Transfer Instructions
These instructions are used to transfer the data from the source operand to the destination operand
Some Instructions to transfer a word

•	MOV − Used to copy the byte or word from the provided source to the provided destination.

•	POP − Used to get a word from the top of the stack to the provided location.

•	PUSHA − Used to put all the registers into the stack.

•	POPA − Used to get words from the stack to all registers.

•	XCHG − Used to exchange the data from two locations.

### Instructions to transfer the address
•	LEA − Used to load the address of operand into the provided register.

•	LDS − Used to load DS register and other provided register from the memory.

•	LES − Used to load ES register and other provided register from the memory.

### Arithmetic Instructions
These instructions are used to perform arithmetic operations like addition, subtraction, multiplication, division, etc.

**Some Instructions to perform addition**

•	ADD − Used to add the provided byte to byte/word to word.

•	ADC − Used to add with carry.

•	INC − Used to increment the provided byte/word by 1.

**Some Instructions to perform subtraction**

•	SUB − Used to subtract the byte from byte/word from word.

•	SBB − Used to perform subtraction with borrow.

•	DEC − Used to decrement the provided byte/word by 1.

•	CMP − Used to compare 2 provided byte/word.

**Some Instruction to perform multiplication**

•	MUL − Used to multiply unsigned byte by byte/word by word.

•	IMUL − Used to multiply signed byte by byte/word by word.

**Some Instructions to perform division**

•	DIV − Used to divide the unsigned word by byte or unsigned double word by word.

•	IDIV − Used to divide the signed word by byte or signed double word by word.

**Some Bit Manipulation Instructions**

These instructions are used to perform operations where data bits are involved, i.e. operations like logical, shift, etc.
Following is the list of instructions under this group −

**Some Instructions to perform logical operation**

•	NOT − Used to invert each bit of a byte or word.( 1111 becomes 0000)

•	AND − Used for adding each bit in a byte/word with the corresponding bit in another byte/word.

•	OR − Used to multiply each bit in a byte/word with the corresponding bit in another byte/word. Logical OR operation.

•	XOR − Used to perform Exclusive-OR operation over each bit in a byte/word with the corresponding bit in another byte/word.

**Instructions to perform shift operations**

•	SHL/SAL − Used to shift bits of a byte/word towards left and put zero(S) in LSBs(least significant bit).

•	SHR − Used to shift bits of a byte/word towards the right and put zero(S) in MSBs(most significant bit).

•	SAR − Used to shift bits of a byte/word towards the right and copy the old MSB into the new MSB.

**Instructions to perform rotate operations**

•	ROL − Used to rotate bits of byte/word towards the left, i.e. MSB to LSB and to Carry Flag [CF].

•	ROR − Used to rotate bits of byte/word towards the right, i.e. LSB to MSB and to Carry Flag [CF].

•	RCR − Used to rotate bits of byte/word towards the right, i.e. LSB to CF and CF to MSB.
•	RCL − Used to rotate bits of byte/word towards the left, i.e. MSB to CF and CF to LSB.

**Some String Instructions**

String is a group of bytes/words and their memory is always allocated in a sequential order.
Following is the list of instructions under this group −

•	REP − Used to repeat the given instruction till CX ≠ 0.

•	REPE/REPZ − Used to repeat the given instruction until CX = 0 or zero flag ZF = 1.

•	REPNE/REPNZ − Used to repeat the given instruction until CX = 0 or zero flag ZF = 1.

•	MOVS/MOVSB/MOVSW − Used to move the byte/word from one string to another.

•	COMS/COMPSB/COMPSW − Used to compare two string bytes/words.

•	LODS/LODSB/LODSW − Used to store the string byte into AL or string word into AX.

•	LODSB- The LODSB loads the byte addressed by DS:[SI] into register AL. SI is then incremented (if DF=0) or decremented (if DF=1) by 1. That is it loads the byte in the data segment whose address is in the source Index(SI)  and increment SI (when DF=0).
Program Execution Transfer Instructions (Branch and Loop Instructions)
These instructions are used to transfer/branch the instructions during an execution. It includes the following instructions −
**Instructions to transfer the instruction during an execution without any condition**

•	CALL − Used to call a procedure and save their return address to the stack.

•	RET − Used to return from the procedure to the main program.

•	JMP − Used to jump to the provided address to proceed to the next instruction.

**Some Instructions to transfer the instruction during an execution with some conditions −**

•	JC − Used to jump if carry flag CF = 1

•	JE/JZ − Used to jump if equal/zero flag ZF = 1

•	JNC − Used to jump if no carry flag (CF = 0)

•	JNE/JNZ − Used to jump if not equal/zero flag ZF = 0

•	JNO − Used to jump if no overflow flag OF = 0

•	JNP/JPO − Used to jump if not parity/parity odd PF = 0

•	JNS − Used to jump if not sign SF = 0

•	JO − Used to jump if overflow flag OF = 1

•	JS − Used to jump if sign flag SF = 1

**Processor Control Instructions**

These instructions are used to control the processor action by setting/resetting the flag values.
Following are the instructions under this group −

•	STC − Used to set carry flag CF to 1

•	CLC − Used to clear/reset carry flag CF to 0

•	CMC − Used to put complement at the state of carry flag CF.

•	STD − Used to set the direction flag DF to 1

•	CLD − Used to clear/reset the direction flag DF to 0

•	STI − Used to set the interrupt enable flag to 1, i.e., enable INTR input.

•	CLI − Used to clear the interrupt enable flag to 0, i.e., disable INTR input.

**Iteration Control Instructions**

These instructions are used to execute the given instructions for number of times. Following is the list of instructions under this group −

•	LOOP − Used to loop a group of instructions until the condition satisfies, i.e., CX = 0

•	LOOPE/LOOPZ − Used to loop a group of instructions till it satisfies ZF = 1 & CX = 0

•	LOOPNE/LOOPNZ − Used to loop a group of instructions till it satisfies ZF = 0 & CX = 0

•	JCXZ − Used to jump to the provided address if CX = 0

**Interrupt Instructions**

These instructions are used to call the interrupt during program execution.

•	INT − Used to interrupt the program during execution and calling service specified.

•	INTO − Used to interrupt the program during execution if OF = 1

•	IRET − Used to return from interrupt service to the main program

## SYNTAX OF AN ALLEMBLY LANGUAGE INSTRUCTION

Each assembly line begins with either a label, a blank (tab), an asterisk, or a semicolon l Each line has four fields: 

``` assembly
[label]   mnemonic   [operands]   [;comment]
```
The fields in the square brackets are optional. A basic instruction has two parts, the first one is the name of the instruction (or the mnemonic or opcode), which is to be executed, and the second are the operands or the parameters of the command.
Following are some examples of typical assembly language statements −
```
INC COUNT     	     ; Increment the memory variable COUNT

MOV TOTAL, 48   	 ; Transfer the value 48 in the 
		             ; memory variable TOTAL
					
ADD AH, BH      	 ; Add the content of the 
		             ; BH register into the AH register
```

## ADDRESSING MODES IN 8086 MICROPROCESSOR

```
An instruction consists of an opcode  (operation code) and an operand. The operand may reside in the accumulator(AX), or in a general purpose register (eg BX,CX) or in a memory location. The manner in which an operand is specified (or referred to) in an instruction is called addressing mode.
.
Example MOV AX, BX  here MOV is the opcode while AX and AX are the registers holding the operands.
```

#### REGISTER MODE – In this type of addressing mode both the operands are registers.
Example:

```
MOV AX, BX	; Moves/copies content of BX to AX register

XOR AX, DX	; exclusive OR the content of Ax and DX with the result in AX

ADD AL, BL	; adds content of BL to AL and the result in AL register
```

#### IMMEDIATE MODE  – In this type of addressing mode the source operand is an 8 bit or 16 bit data. Example:
```
MOV AX, 2000	; moves 2000 to AX register

MOV CL, 0A

ADD AL, 45	; adds 45 to the contents of AL register and the result in AL register.

AND AX, 0000
```
#### DISPLACEMENT OR DIRECT MODE – In this type of addressing mode the effective address is directly given in the instruction as displacement.
Example:
```
MOV AX, [DISP]	 ; DISP is the displacement 

MOV AX, [0500]	; displacement of 0500 in the data segment.
```

#### REGISTER INDIRECT MODE – In this addressing mode the effective address is in SI, DI or BX registers.
Example:
```
MOV AX, [DI]	; moves contents of the address location DI is holding

ADD AL, [BX]	; adds the contents of the address BX is holding to AL and the result in AL.

MOV AX, [SI] moves contents of the address location SI is holding
```
#### BASED INDEXED MODE – In this the effective address is sum of base register and index register.

```
Base registers are: BX and BP
Index registers are : SI and DI 
```
The physical memory address is calculated according to the base register.
Example of based indexed addressing mode:

MOV AL, [BP+SI]

MOV AX, [BX+DI]

#### INDEXED MODE – In this type of addressing mode the effective address is sum of index register and displacement.

Example:
```
MOV AX, [SI+2000]	; move the contents at address SI is holding plus a displacement    ; of 2000
MOV AL, [DI+3000]
```

#### BASED MODE – In this the effective address is the sum of base register and displacement.
Example:
```
MOV AL, [BP+ 0100]
BASED INDEXED DISPLACEMENT MODE – In this type of addressing mode the effective address is the sum of index register, base register and displacement.
Example:
MOV AL, [SI+BP+2000] 
```

## SIGNED  NUMBER REPRESENTATION

There are three ways in which signed binary numbers may be expressed:  
1.	Signed magnitude or sign and magnitude
2.	One’s complement (1’s complement)
3.	Two’s complement (2’s complement)

### Signed Magnitude:
The left most digit (MSB) designate the sign while the rest represent the magnitude. 
In an 8-bit word, signed magnitude representation places the absolute value of the number in the 7 bits to the right of the sign bit.

Exercise:  in 8-bit signed magnitude(SM),                positive 3 is:	00000011
                                                             Negative 3 is:	10000011
 
When 4 bits are used: +ve 3 is 0011
			 -ve 3 is  1011
 SM has the disadvantage of having positive zero and negative zero (for example 4-bit 0000 and 1000).
To represent a number in signed magnitude: 
 	convert the number to binary
if the number is positive attach 0 to the left 
or if the number is negative attach 1 to the left.
NOTE: Any binary number that is signed magnitude or 1’s or 2’s complement for that matter that has the MSB as 1 is negative. If the MSB is 0 then it is positive.
Exercise  Represent + and -7 in SM using 8 bits
S is the MSB while the remaining 7 bits for magnitude.
7 base 10 to binary (7 bits) is 0000111
For +7 the sign is positive so MSB is 0
so +ve 7 is 00000111
for -7 the MSB is 1
so –ve 7 is 10000111

One’s  Complement:
 To convert a number to 1’s complement :
Convert the number to binary
Add sign bit MSB (0 )
If the number is negative complement all bits including the sign bit. By complementing each bit we mean flip the bit. Zero becomes 1 and 1 becomes zero.
Exercise:  in 4-bit one’s complement,             positive 3 is: 		0011
                                                        Negative 3 is:	1100 

Note that 3 can be represented by as little as 3 digits no less. 


Two’s Complement:
 2’s complement is obtained by finding the 1’s complement and adding 1 to it.
As such 2’s complement= 1’s complement +1.

Exercise:  Adding 1 to -3 in 1’s complement (1100 ) gives us -3 in two’s complement form:       1101

Exercise:  convert using SM method (01011001)2 back to decimal  = +(1 * 26 + 0 * 25 + 1 * 24 + 1 * 23 + 0 * 22 + 0 * 21        + 1 * 20)
                     = + (64 + 0 + 16 + 8 + 0 + 0 + 1)
              = (+89)10              
Exercise:  convert using SM method (10011100)2 = - (0 * 26 + 0 * 25 + 1 * 24 + 1 * 23 + 1 * 22 + 0 * 21 + 0 * 20)
                     = - (0 + 0 + 16 + 8 + 4 + 0 + 0)	  = (-28)10               
MOV  INSTRUCTION

SYNTAX 
– MOV Destination, Source or MOV first operand, second operand
The MOV instruction copies a word or byte of data from a specified source to a specified destination. The destination can be a register or a memory location. The source can be a register, a memory location or an immediate number. The source and destination cannot both be memory locations. They must both be of the same type (bytes or words). MOV instruction does not affect any flag. Both source and destination must be the same size which can by byte or word.
Examples of MOV

    MOV CX, 037AH	 ;Put immediate number 037AH to CX 
                MOV BL, [437AH]	; Copy byte in DS at offset 437AH to BL 
                MOV AX, BX 		;Copy content of register BX to AX 
                MOV DL, [BX]	; Copy byte from memory at [BX] to DL 
                MOV DS, BX		; Copy word from BX to DS register 

NOTE: MOV instruction cannot:
•	set the value of the CS and IP registers.

•	copy value of one segment register to another segment register (should copy to
              general register first).

•	copy immediate value to segment register (should copy to general register first).


#### MULTIPLICATION IN 8086
when operand is a byte:

AX <= AL * operand.
when operand is a word:
(DX AX) <= AX * operand. (that is the result is 32-bit:  the higher part is stored in DX while the lower part in AX)

Exercise: Program to multiply two 8-bit numbers.
```
MOV AL, 05H	   ; copy 05 hex to AL it can be written  
                as 0x05 as well
MOV BL, 08H	; copy 08 hex to BL
MUL BL	; mutiplies BL with AL and the result is in AX (16 bits)
```
| Memory Address | Content |
|----------------|---------|
| 1100           | 1A      |
| 1101           | EF      |
| 1102           | 50      |
| 1103           | CD      |
| 1104           | 20      |
| 1105           | 8A      |
| 1106           | C2      |
| 1107           | BF      |
| 1108           |         |

Exercise: Write a program to multiply the data in memory location (offset) 1100-1103 and store the result.
```
MOV SI, 1100H	 ; load address of data in SI register
MOV AX, [SI] 		; copy first operand
MOV BX, [SI+2]	; copy second operand
MUL BX		; multiply
MOV [SI+4], AX 	; copy result lower byte to memory
MOV [SI+6], DX	; copy result higher byte to memory
HLT			 ; halt
```

#### DIVISION IN 8086
8086 can divide 16-bit by 8-bit the result quotient will be in AL register while the remainder in AH register.
or 32-bit by 16-bit and the result quotient will be stored in AX register while the remainder in DX register.
Exercise: divide 1389h by 19h.

```
MOV AX, 1389H
MOV BL, 19H
DIV BL			; divides AX by BL and Q in AL while R
                ;in AH registers
```
Exercise  A program to display a character on screen using EMU8086 emulator.
```
ORG 100H ; this is an assembler directive to start 
          ;code at 100h in the code segment.
MOV AH, 0Eh; 0E HEX IN AH is required by the INT 10h 
           ;bios interrupt to display
MOV AL, ‘A’; the character to display
INT 10h ; the interrupt routine will display what is 
          ;in AL
HLT
```
Exercise  A program to display ‘hello world’on screen using EMU8086 emulator.
```
org 100h
JMP MAIN	 ; jump to label main 
MESSAGE: DB 'HELLO WORLD',0 ; databyte store the string hello world in contagious 
                                                                  ;   location in the data segment 
PRINT:  MOV AH,0EH		 ; set Ah for INT 10h interrupt to display AL content
LOOP:	LODSB 		; this copies data at SI and increments SI to point to the next data
CMP AL, 0	 ; compare AL to 0 to check the end of characters to display
JE DONE 	; jump to done when AL=0 that is ZF=1
INT 10H	; display what is in AL
JMP LOOP	; jump to label loop to get the next character to display
DONE:	RET		 ; return from call
MAIN:	MOV SI, MESSAGE
CALL PRINT; call is like jump to label print
RET		; or hlt
```