# Central Processing Unit(CPU)
A central processing unit (CPU) is an important part of every computer. The CPU sends signals to control the other parts of the computer, almost like how a brain controls a body.
The CPU is an electronic machine that works on a list of computer things to do, called instructions. It reads the list of instructions and runs (executes) each one in order. A list of instructions that a CPU can run is a computer program. A CPU can process more than one instruction at a time on sections called Cores. A CPU with four cores may process four programs at once.
The CPU itself is made of three main components. They are:
1. [Memory or storage Unit](#memory-or-storage-unit)
2. [Control Unit](#control-unit)
3. [Arithmetic and Logic unit (ALU)](#arithmetic-and-logic-unit-alu)

## Memory or Storage Unit:
The memory or storage unit stores vital information such as instructions, data, and intermediate results. The memory unit is responsible for transferring information to other units of the computer when needed. It is also known as an internal storage unit or the main memory or the primary storage or Random Access Memory (RAM) as all these are storage devices.

## Control Unit:
The control unit controls the operations of all parts of the computer but does not carry out any actual data processing operations. Its functions include:
a) controlling the transfer of data and instructions among other units of a computer.
b) managing and co-ordinating all the units of the computer.
c) obtaining the instructions from the memory, interpreting them, and directing the operations of the computer.
d) responsible for the communication with peripheral devices such as input and output devices.

## Arithmetic and Logic Unit (ALU):
The ALU, as can be seen, is made of two sections. They are:
1. The Arithmetic Unit: It is responsible for the arithmetic operations such as addition, subtraction, multiplication and division. Any complicated actions are done by repeating the same steps over and over to achieve the final result
2. The Logic Unit: As the name gives it away, it performs all the logical operations such as selecting, comparing, matching and merging of data

An arithmetic logic unit (ALU) is a key component of a computer's central processor unit. The ALU performs all arithmetic and logic operations that must be performed on instruction words. The ALU is split into two parts in some microprocessor architectures: the AU and the LU.



## Cache
The CPU never directly accesses RAM. Modern CPUs have one or more layers of cache. The CPU's ability to perform calculations is much faster than the RAM's ability to feed data to the CPU. The reasons for this are beyond the scope of this article, but I will explore it further in the next article.

Cache memory is faster than the system RAM, and it is closer to the CPU because it is on the processor chip. The cache provides data storage and instructions to prevent the CPU from waiting for data to be retrieved from RAM. When the CPU needs data—and program instructions are also considered to be data—the cache determines whether the data is already in residence and provides it to the CPU.

If the requested data is not in the cache, it's retrieved from RAM and uses predictive algorithms to move more data from RAM into the cache. The cache controller analyzes the requested data and tries to predict what additional data will be needed from RAM. It loads the anticipated data into the cache. By keeping some data closer to the CPU in a cache that is faster than RAM, the CPU can remain busy and not waste cycles waiting for data.
