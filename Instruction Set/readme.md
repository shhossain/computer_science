# Instruction Set

An instruction set, used in the Instruction Set Architecture, is code that the CPU can understand. The language is 1s and 0s, i.e. machine language. It contains instructions or tasks that control the movement of bits within the processor. Systems programmers use assembly language, which is a type of programming language to communicate with the processor. The statements are assembled into machine language. Assembly language is a lot like machine language with labels because it would be hard to keep track of a series of binary digit code.

In computer science, an instruction set architecture, also called computer architecture, is an abstract model of a computer. A device that executes instructions described by that ISA, such as a central processing unit, is called an implementation.

The instruction set consists of a limited set of unique codes that let the processor know what to do next, along with some basic rules of how to express them. It consists of:

* Instruction length (varies depending on architecture)
* Opcodes (the command to be carried out)
* Operands (what the command will operate on)
* Registers (internal locations which are limited in number and ability, but quick to access)
* Memory (external storage which is a larger and more versatile number of locations, but slower to access)


------------


## What is an Instruction?

An instruction can vary in length. For instance in 8085 microprocessor, the instruction can be 1, 2 or 3 bytes long. The first byte is for the opcode plus either 0/1/2 bytes for operands. Some instructions like ADD do not require operands to be explicitly provided in the instruction as they are already stroed in the register. Other instructions take 1 byte data (e.g. MVI) or 2 byte hexadecimal address of memory (e.g. LDA)




### About an Instruction :

An instruction can vary in length depending on the architecture. In x86 systems, the length of the instruction is typically 1 to 3 bytes (for the opcode), plus a number of bytes needed for the operands, depending on the addressing mode. What's an addressing mode? Different operations may be performed directly on pure numbers, indirectly on numbers in internal registers, or very indirectly on locations in main memory. Each of those is a different addressing mode.

------------


## What is a program?

A computer program is a sequence or set of instructions for a computer to execute. The program enables the computer to perform a particular task or an operation.
