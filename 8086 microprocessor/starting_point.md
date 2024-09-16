Types of Programming Languages

The computer language is defined as code or syntax which is used to write computer programs or any specific applications. The computer language is used to communicate with computers. Broadly the computer language can be classified into types:
•	Machine language
•	Assembly language
•	High-level language.

1.	Machine Language
The machine language is considered as oldest computer language among all three. In machine language, the input is directly given as binary input which is processed by the machine. Binary inputs mean one and zero form. For computer language processing the system needs compiler and interpreter to convert the language in computer language so that it can be processed by a machine (the computer).
The machine language is sometimes referred to as machine code or object code which is set of binary digits 0 and 1. These binary digits are understood and read by a computer system and interpret it easily. It is considered a native language as it can be directly understood by a central processing unit (CPU). The machine language is not so easy to understand, as the language uses the binary system in which the commands are written in 1 and 0 form which is not easy to interpret. There is only one language which is understood by computer language which is machine language. The operating system of the computer system is used to identify the exact machine language used for that particular system.
The operating system defines how the program should write so that it can be converted to machine language and the system takes appropriate action. The computer programs and scripts can also be written in other programming languages like C, C++, and JAVA. However, these languages cannot be directly understood by a computer system so there is a need for a program that can convert these computer programs to machine language. The compiler is used to convert the programs to machine language which can be easily understood by computer systems. The compiler generates the binary file and executable file.
Example of machine language for the text “Hello World”.
01001000 0110101 01101100 01101100 01101111 00100000 01010111 01101111 01110010 01101100 01100100.
2. Assembly Language
The assembly language is considered a low-level language for microprocessors and many other programmable devices. The assembly language is also considered as second-generation language. The first generation language is machine language. The assembly language is mostly famous for writing an operating system and also in writing different desktop applications. The operations carried out by programmers using assembly language are memory management, registry access, and clock cycle operations. The drawback of assembly language is the code cannot be reused and the language is not so easy to understand. The assembly language is considered a group of other languages. It is used to implements the symbolic representation of machine code which is used to program CPU architecture. The other name of assembly language is assembly code. For any processor, the most used programming language is assembly language.
In assembly language, the programmer does the operation which can be directly executed on a central processing unit (CPU). The language has certain drawbacks as it does not contain any variables or functions in programs and also the program is not portable on different processors. The assembly language uses the same structure and commands which machine language does use but it uses names in place of numbers. The operations performed using the assembly language is very fast. The operations are much faster when it is compared to high-level language.
3. High-Level Language
The development of high-level language was done when the programmers face the issue in writing programs as the older language has portability issues which mean the code written in one machine cannot be transferred to other machines. Thus lead to the development of high-level language. The high-level language is easy to understand and the code can be written easily as the programs written are user-friendly in a high-level language. The other advantage of code written in a high-level language is the code is independent of a computer system which means the code can be transferred to other machines. The high-level of language uses the concept of abstraction and also focus on programming language rather than focusing on computer hardware components like register utilization or memory utilization.
Differences between Machine Language and Assembly Language:
Machine Language	Assembly Language
Machine language is only understand by the computers.	Assembly language is only understand by human beings not by the computers.
In machine language data only represented with the help of binary format(0s and 1s), hexadecimal and octadecimal.	In assembly language data can be represented with the help of mnemonics such as Mov, Add, Sub, End etc.
Machine language is very difficult to understand by the human beings.	Assembly language is easy to understand by the human being as compare to machine language.
Modifications and error fixing cannot be done in machine language.	Modifications and error fixing can be done in assembly language.
Machine language is very difficult to memorize so it is not possible to learn the machine language.	Easy to memorize the assembly language because some alphabets and mnemonics are used.
Execution is fast in machine language because all data is already present in binary format.	Execution is slow as compared to machine language.
There is no need of translator.The machine understandable form is the machine language.	Assembler is used as translator to convert mnemonics into machine understandable form.
Machine language is hardware dependent.	Assembly language is the machine dependent and it is not portable.

Language Processors: Assembler, Compiler and Interpreter

Compilers, interpreters, translate programs written in high-level languages into machine code that a computer understands. And assemblers translate programs written in low-level or assembly language into machine code. In the compilation process, there are several stages. To help programmers write error-free code, tools are available.
Assembly language is machine-dependent, yet mnemonics(eg MOV, ADD) used to represent instructions in it are not directly understandable by machine and high-Level language is machine-independent. A computer understands instructions in machine code, i.e. in the form of 0s and 1s. It is a tedious task to write a computer program directly in machine code. The programs are written mostly in high-level languages like Java, C++, Python etc. and are called source code. These source code cannot be executed directly by the computer and must be converted into machine language to be executed. Hence, a special translator system software is used to translate the program written in a high-level language into machine code is called Language Processor and the program after translated into machine code (object program/object code).  



The language processors can be any of the following three types:  
1.	Compiler : 

The language processor that reads the complete source program written in high-level language as a whole in one go and translates it into an equivalent program in machine language is called a Compiler.  Example: C, C++, C#, Java.   
In a compiler, the source code is translated to object code successfully if it is free of errors. The compiler specifies the errors at the end of the compilation with line numbers when there are any errors in the source code. The errors must be removed before the compiler can successfully recompile the source code again
 
 
2.	Assembler :

The Assembler is used to translate the program written in Assembly language into machine code. The source program is an input of an assembler that contains assembly language instructions. The output generated by the assembler is the object code or machine code understandable by the computer. Assembler is basically the 1st interface that is able to communicate humans with the machine. We need an Assembler to fill the gap between human and machine so that they can communicate with each other. code written in assembly language is some sort of mnemonics(instructions) like ADD, MUL, MUX, SUB, DIV, MOV and so on. And the assembler is basically able to convert these mnemonics in to binary code. Here, these mnemonics also depend upon the architecture of the machine. 
For example, the architecture of Intel 8085 and Intel 8086 are different even as they are made by the same manufacturer.

 
 
3.	Interpreter : 

The translation of a single statement of the source program into machine code is done by a language processor and executes immediately before moving on to the next line is called an interpreter. If there is an error in the statement, the interpreter terminates its translating process at that statement and displays an error message. The interpreter moves on to the next line for execution only after the removal of the error. An Interpreter directly executes instructions written in a programming or scripting language without previously converting them to an object code or machine code.            
Example: Perl, Python and Matlab.
 
 



## Difference between Compiler and Interpreter – 
 
```
--> Compiler	Interpreter
A compiler is a program that converts the entire source code of a programming language into executable machine code for a CPU. 

--> An interpreter takes a source program and runs it line by line, translating each line as it comes to it.

--> The compiler takes a large amount of time to analyze the entire source code but the overall execution time of the program is comparatively faster.

--> An interpreter takes less amount of time to analyze the source code but the overall execution time of the program is slower.

--> The compiler generates the error message only after scanning the whole program, so debugging is comparatively hard as the error can be present anywhere in the program. 

--> Interpreter: Its Debugging is easier as it continues translating the program until the error is met.

--> The compiler requires a lot of memory for generating object codes.

--> Interpreter: It requires less memory than a compiler because no object code is generated.

--> Compiler: Generates intermediate object code.

--> Interpreter: No intermediate object code is generated.

--> For Security purpose compiler is more useful.	

--> The interpreter is a little vulnerable in case of security.
```

