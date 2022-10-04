# Register

A register is a collection of flip flop (A flip flop is basicaaly a storage device capable of storing 1 bit of information). Hence a register is able to store
multiple bits of information. It is a very cruicial and important part of a computer. Even a very basic computer has atleast eight major reigsters.

These eight major registers are:
| Register Name             |Bits|              Function                            |
| :-----------------------: |:--:| :-------------------------------------:          |
|  Data register (DR)       | 16 |   Holds memory Operand                           |
| Address Register (AR)     | 12 | Holds address for memory                         |
|   Accumulator(AC)         | 16 | Processor Register used to arithmetic and logic  |
| Instruction Register (IR) | 16 | Holds the instruction code                       |
| Programme Counter (PC)    | 12 | Holds the address of the next instruction        |
| Temporary Register (TR)   | 16 | Holds the temporary data                         | 
| Input Register (INPR)     | 8  | Holds the input character                        |
| Output Register (OUTR)    | 8  | Holds the output character                       | 

These basic computer registers are connected by a common bus through which information is transferred among these registers and operations are performed.

If we talk about basic operations, then any basic register is capable of four operations:

1. Load - In this operation a value is laoded into the flip flops of the register.
2. Increment - In this operation the register functions as a counter and increments the data stored in it.
3. Clear - In this operation the registers clears the data in its flip flops i.e. whichever flip flop in the register has a state of 1 (High) is made 0 (low)
4. Shift - A register is capable of shifting the values in the flip flop leading to left shift(multiply by 2) or right shift(divide by 2) operations.
