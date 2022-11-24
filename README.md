# Computer Science
<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->
[![All Contributors](https://img.shields.io/badge/all_contributors-111-orange.svg?style=flat-square)](#contributors-)
<!-- ALL-CONTRIBUTORS-BADGE:END -->

## Table of Contents

- [Introduction](#introduction)
- [Electronic Computing](#electronic-computing)
- [Boolean Logic](#boolean-logic)
- [Number Systems](#number-systems)
- [Central Processing Unit(CPU)](#central-processing-unit-cpu)
- [Registers, Cache and RAM](#registers-cache-and-ram)
- [Instruction and Program](#instruction-and-program)
- [Programming Language](#programming-language)
- [Data Types](#data-types)
- [Statements and Functions](#statements-and-functions)
- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [Alan Turing](#alan-turing)
- [Software Engineering](#software-engineering)
- [Integrated Circuits](#integrated-circuits)
- [Object Oriented Programming](#object-oriented-programming)
- [Operating Systems](#operating-systems)
- [Memory and Storage](#memory-and-storage)
- [File System](#file-system)
- [Cloud Computing](#cloud-computing)
- [Machine Learning](#machine-learning)
- [Web Technology](#web-technology)
- [Networking](#networking)
- [Internet](#internet)
- [DBMS(Database Management System)](#dbms)
- [Cryptography](#cryptography)
- [Theory of Computation](#theory-of-computation)


## Introduction
Computer science is the study of computers and computing as well as their theoretical and practical applications. Computer science applies the principles of mathematics, engineering, and logic to a plethora of functions. Those include algorithm formulation, software/hardware development, and artificial intelligence.

## [Electronic Computing](Not-Added)
A device that computes, especially a programmable electronic machine that performs high-speed mathematical or logical operations or that assembles, stores, correlates, or otherwise processes information.

## [Boolean Logic](Boolean%20Logic/readme.md)
Boolean logic is a branch of mathematics that deals with the values of truth and falsehood. It is a system of logic that uses only two values, 0 and 1, to represent false and true, respectively. It is also known as Boolean algebra, named after George Boole, who first described it in 1854.

### Common Boolean Operators
| Operator | Name |               Description               |
| :------: | :--: | :-------------------------------------: |
|    !     | NOT  |    Negates the value of the operand.    |
|    &&    | AND  | Returns **true** if both operands are true. |
|   \|\|   |  OR  | Returns **true** if one or all operands are true. |

### Nice to know Boolean Operators
| Operator | Name |               Description               |
| :------: | :--: | :-------------------------------------: |
|    ()    | Parentheses     |   Allows you to group together keywords and control the order in which the terms will be searched.    |
|    “”    | Quotation marks | Provides results with the exact phrase. |
|   *      |  Asterisk       | Provides results that contain a variation of the keyword. |
|   ⊕     |  XOR            | Returns **true** if the operands are different |
|   ⊽      |  NOR            | Returns **true** if all operands are false. |
|   ⊼      |  NAND           | Returns **false** only if both values of its two inputs are true.


## [Number Systems](Number%20System/readme.md#number-systems)
Number systems are mathematical systems for expressing numbers. A number system consists of a set of symbols that are used to represent numbers and a set of rules for manipulating those symbols. The symbols used in a number system are called numerals.

### [Types of Number Systems](Number%20System/readme.md#types-of-number-systems)
- [Positional Numeral System](Number%20System/readme.md#positional-numeral-system)
- [Sign-value Notation System](Number%20System/readme.md#sign-value-notation-system)

### [Common Positional Number Systems](Number%20System/readme.md#common-positional-number-systems)
- [Binary](Number%20System/readme.md#binary)
- [Octal](Number%20System/readme.md#octal)
- [Decimal](Number%20System/readme.md#decimal)
- [Hexadecimal](Number%20System/readme.md#hexadecimal)


### Importance Of Binary
Binary is a base-2 number system invented by Gottfried Leibniz that's made up of only two numbers or digits: 0 (zero) and 1 (one). This numbering system is the basis for all binary code, which is used to write digital data such as the computer processor instructions used every day. The 0s and 1s in binary represent OFF or ON, respectively. In a transistor, a "0" represents no flow of electricity, and a "1" represents electricity is allowed to flow. In this way, numbers are represented physically inside the computing device, permitting calculations.

Binary is still the primary language for computers and is used with electronics and computer hardware for the following reasons.

- It is a simple and elegant design.
- Binary's 0 and 1 method is quick to detect an electrical signal's off (false) or on (true) state.
- Having only two states placed far apart in an electrical signal makes it less susceptible to electrical interference.
- The positive and negative poles of magnetic media are quickly translated to binary.
- Binary is the most efficient way to control logic circuits.



## [Central Processing Unit (CPU)](CPU/readme.md#central-processing-unitcpu)
A Central Processing Unit (CPU) is the most important part of any computer. The CPU sends signals to control the other parts of the computer, almost like how a brain controls a body.
The CPU is an electronic machine that works on a list of computer things to do, called instructions. It reads the list of instructions and runs (executes) each one in order. A list of instructions that a CPU can run is a computer program. A CPU can process more than one instruction at a time on sections called "cores". A CPU with four cores may process four programs at once.
The CPU itself is made of three main components. They are:
1. [Memory or storage Unit](CPU/readme.md#memory-or-storage-unit)
2. [Control Unit](CPU/readme.md#control-unit)
3. [Arithmetic and Logic unit (ALU)](CPU/readme.md#arithmetic-and-logic-unit-alu)


## [Registers, Cache and RAM](/Registers%20Cache%20and%20RAM)

### [Register](/Registers%20Cache%20and%20RAM/readme.md#register)
Registers are small amounts of high-speed memory contained within the CPU. Registers are basically a collection of "flip-flops" (a circuit used to store 1 bit of memory). They are used by the processor to store small amounts of data that are needed during processing. A CPU may have several sets of registers that are called "cores". Register also helps in arithmetic and logic operations. Larger amounts of data may be stored in Cache (pronounced as "cash").  This is a very fast memory that is located on the same integrated circuit as the registers. It is used for data frequently needed as the program runs. Still larger amounts of data may be stored in RAM. These are integrated circuits not part of the CPU. RAM stands for Random-Access Memory. It is essentially data and instructions that have been moved from disk storage and held until the processor needs it.

### [Cache](/Registers%20Cache%20and%20RAM/readme.md#cache)
Cache memory is a chip-based computer component that makes retrieving data from the computer's memory more efficient. It acts as a temporary storage area that the computer's processor can retrieve data from easily. This temporary storage area, known as a cache, is more readily available to the processor than the computer's main memory source, typically some form of DRAM.

Cache memory is sometimes called CPU (central processing unit) memory because it is typically integrated directly into the CPU chip or placed on a separate chip that has a separate bus interconnect with the CPU. Therefore, it is more accessible to the processor, and able to increase efficiency, because it's physically close to the processor.

In order to be close to the processor, cache memory needs to be much smaller than main memory. Consequently, it has less storage space. It is also more expensive than main memory, as it is a more complex chip that yields higher performance.

What it sacrifices in size and price, it makes up for in speed. Cache memory operates between 10 to 100 times faster than RAM, requiring only a few nanoseconds to respond to a CPU request.

The name of the actual hardware that is used for cache memory is high-speed static random access memory (SRAM). The name of the hardware that is used in a computer's main memory is dynamic random-access memory (DRAM).

Cache memory is not to be confused with the broader term cache. Caches are temporary stores of data that can exist in both hardware and software. Cache memory refers to the specific hardware component that allows computers to create caches at various levels of the network. A cache is hardware or software that is used to store something, typically data, temporarily in a computing environment.


### [RAM](/Registers%20Cache%20and%20RAM/readme.md#ram)
RAM is the hardware in a computing device where the operating system (OS), application programs and data in current use are kept so they can be quickly reached by the device's processor. RAM is the main memory in a computer. It is much faster to read from and write to than other types of storage, such as a Hard Disk Drive (HDD), a Solid State Drive (SSD), or an optical drive.

## [Instruction and Program](Not-Added)
In computer science, an instruction is a single operation of a processor defined by the processor instruction set, a computer program is a list of instructions that tell a computer what to do. Everything a computer does is accomplished by using a computer program. Programs that are stored in the memory of a computer ("internal programming") let the computer do one thing after another, even with breaks in between.

## [Programming Language](Not-Added)
A programming language is any set of rules that convert strings, or graphical program elements in the case of visual programming languages, to various kinds of machine code output.[citation needed] Programming languages are one kind of computer language and are used in computer programming to implement algorithms.

Programming languages are mainly of two types : 
1. High-level language uses a syntax similar to the English language. The source code is converted into machine-understandable machine code using a compiler or an interpreter. Java, Python are some examples of high-level programming languages. These are usually slower than Low-level, but it comes with being easier.
2. Low-level programming languages work more closely to the hardware and have more control over it. They directly interact with the hardware. Two common examples of low-level languages are machine language and assembly language. These are usually faster than High-level, but is comes at the cost of a very high difficulty.

Some Languages Include:
- [Python](https://www.python.org)
- [Java](https://www.java.com/)
- [JavaScript](https://www.javascript.com/)
- [C++](https://www.cplusplus.com/)
- [C](No-Website)
- [C#](No-Website)
- [Go](https://www.go.dev/)
- [Swift](https://developer.apple.com/swift/)

### Scripting Languages
A scripting language is a computer language that doesn't have to be compiled. One advantage of Scripting languages is that the code can be quickly edited and can be re-executed. They can be used on the server side of web applications and the client side of web applications.

Some Scripting Languages include:
- [JavaScript](https://www.javascript.com/)
- [PHP](https://www.php.net/)
- [Python](https://www.python.org)
- [Perl](https://www.perl.org)

## [Data Types](Data%20Types/readme.md#data-types)
A data type, in programming, is a classification that specifies which type of value a variable has and what type of mathematical, relational or logical operations can be applied to it without causing an error.

### [Primitive Data Types](Data%20Types/readme.md#primitive-data-types)
Primitive data types are the most basic data types in a programming language. They are the building blocks of more complex data types. Primitive data types are predefined by the programming language and are named by a reserved keyword.

### [Common Primitive Data Types](Data%20Types/readme.md#common-primitive-data-types)
- [Integer](Data%20Types/readme.md#integer)
- [Float](Data%20Types/readme.md#float)
- [Boolean](Data%20Types/readme.md#boolean)
- [Character](Data%20Types/readme.md#character)
- [String](Data%20Types/readme.md#string)

### [Non-Primitive Data Types](Data%20Types/readme.md#non-primitive-data-types)
Non-primitive data types are also known as reference data types. They are created by the programmer and are not defined by the programming language. Non-primitive data types are also called composite data types because they are composed of other types.

### [Common Non-Primitive Data Types](Data%20Types/readme.md#common-non-primitive-data-types)
- [Array](Data%20Types/readme.md#array)
- [Struct](Data%20Types/readme.md#struct)
- [Union](Data%20Types/readme.md#union)
- [Pointer](Data%20Types/readme.md#pointer)
- [Function](Data%20Types/readme.md#function)
- [Class](Data%20Types/readme.md#class)

## [Statements and Functions](Statements%20and%20Functions/readme.md)
In computer programming, a statement is a syntactic unit of an imperative programming language that expresses some action to be carried out. A program written in such a language is formed by a sequence of one or more statements. A statement may have internal components (e.g., expressions).
There are two main types of statements in any programming language that is necessary to build the logic of a code.

1. [Conditional-Statements](Statements%20and%20Functions/readme.md#conditional-statements)

There are two types of conditional statements mainly:
- if
- if-else
- switch case


2. [Loops](Statements%20and%20Functions/readme.md#loops)

There are three types of conditional statements mainly:
- for loop
- while loop
- do - while loop (a variation of while loop)
- do - Until loop

------------

A function is a block of statements that performs a specific task. Functions accept data, process it, and return a result or execute it. Functions are written primarily to support the concept of reusability. Once a function is written, it can be called easily, without having to write the same code again and again.

Different functional languages use different syntax to write a function.

Read more about functions [here](Statements%20and%20Functions/readme.md#functions)


## [Data Structures](Data%20Structures/readme.md)
In computer science, a data structure is a data organization, management, and storage format that enables efficient access and modification. More precisely, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data.

### Types of Data Structures
- [Array](Data%20Structures/readme.md#array)
- [Linked List](Data%20Structures/readme.md#linkedlist)
- [Stack](Data%20Structures/readme.md#stack)
- [Queue](Data%20Structures/readme.md#queue)
- [Hash Table](Data%20Structures/readme.md#hashtable)
- [Heap](Data%20Structures/readme.md#heap)
- [Tree](Data%20Structures/readme.md#tree)
- [Graph](Data%20Structures/readme.md#graph)

## [Algorithms](Algorithms/readme.md)
Algorithms are the sets of steps necessary to complete computation. They are at the heart of what our devices do, and this isn’t a new concept. Since the development of math itself algorithms have been needed to help us complete tasks more efficiently, but today we’re going to take a look at a couple of modern computing problems like sorting and graph search and show how we’ve made them more efficient so you can more easily find cheap airfare or map directions to Winterfell... or like a restaurant or something.

### [Time Complexity](Algorithms/Time%20Complexity/readme.md)
The time complexity of an algorithm estimates how much time the algorithm will use for some input. The idea is to represent efficiency as a function whose parameter is the size of the input. By calculating the time complexity, we can find out whether the algorithm is fast enough without implementing it.

### [Space Complexity](Algorithms/Space%20Complexity/readme.md)
Space complexity refers to the total amount of memory space used by an algorithm/program, including the space of input values for execution. Calculate the space occupied by variables in an algorithm/program to determine space complexity.

### [Sorting](Algorithms/Sorting/readme.md)
Sorting is the process of arranging a list of items in a particular order. For example, if you had a list of names, you might want to sort them alphabetically. Alternatively, if you had a list of numbers, you might want to put them in order from smallest to largest. Sorting is a common task, and it’s one that we can do in many different ways.

### [Searching](Algorithms/Searching/readme.md)
Searching is algorithm for finding a certain target element inside a container. Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored.


### [Graph Search](Algorithms/Graph/readme.md)
Graph search is the process of searching through a graph to find a particular node. A graph is a data structure that consists of a finite (and possibly mutable) set of vertices or nodes or points, together with a set of unordered pairs of these vertices for an undirected graph or a set of ordered pairs for a directed graph. These pairs are known as edges, arcs, or lines for an undirected graph and as arrows, directed edges, directed arcs, or directed lines for a directed graph. The vertices may be part of the graph structure or may be external entities represented by integer indices or references. Graphs are one of the most useful data structures for many real-world applications. Graphs are used to model pairwise relations between objects. For example, the airline route network is a graph in which the cities are the vertices and the flight routes are the edges. Graphs are also used to represent networks. The Internet can be modelled as a graph in which the computers are the vertices and the links between computers are the edges. Graphs are also used on social networks like LinkedIn and Facebook. Graphs are used to represent many real-world applications: computer networks, circuit design, and aeronautical scheduling to name just a few.



### [Dynamic Programming](Algorithms/Dynamic%20Programming/README.md)
Dynamic programming is both a mathematical optimization method and a computer programming method. The method was developed by Richard Bellman in the 1950s and has found applications in numerous fields, from aerospace engineering to economics. In both contexts, it refers to simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manner. While some decision problems cannot be taken apart this way, decisions that span several points in time do often break apart recursively. Likewise, in computer science, if a problem can be solved optimally by breaking it into sub-problems and then recursively finding the optimal solutions to the sub-problems, then it is said to have an optimal substructure. Dynamic programming is one way to solve problems with these properties. The process of breaking a complicated problem down into simpler sub-problems is called "divide and conquer".



### [Greedy Algorithms](Algorithms/Greedy%20Algorithms/README.md)
Greedy algorithms are a simple, intuitive class of algorithms that can be used to find the optimal solution to some optimization problems. They are called greedy because at each step they make the choice that seems best at that moment. This means that greedy algorithms do not guarantee to return the globally optimal solution, but instead make locally optimal choices in the hope of finding a global optimum. Greedy algorithms are used for optimization problems. An optimization problem can be solved using Greedy if the problem has the following property: at every step, we can make a choice that looks best at the moment, and we get the optimal solution to the complete problem.


### [Backtracking](Algorithms/Backtracking/README.md)
Backtracking is an algorithmic technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point in time (by time, here, is referred to the time elapsed till reaching any level of the search tree).


### [Branch and Bound](Algorithms/Branch%20and%20Bound/README.md)
Branch and bound is a general technique for solving combinatorial optimization problems. It is a systematic enumeration technique that reduces the number of candidate solutions by using the problem's structure to eliminate candidate solutions that cannot possibly be optimal.


### [Time Complexity and Space Complexity of Different Searching and Sorting Algorithms](Not-Added)
**Time Complexity**: It is defined as the number of times a particular instruction set is expected to be executed rather than the total time is taken. Since time is a dependent phenomenon, time complexity may vary on some external factors like processor speed, the compiler used, etc.

**Space Complexity**: It is the total memory space consumed by the program for its execution.

Both are calculated as the function of input size(n). The time complexity of an algorithm is expressed in big O notation.

The efficiency of an algorithm depends on these two parameters.

Types Of Time Complexity :

- *Best Time Complexity*: The input for which algorithm takes less time or minimum time. In the best case, we calculate the lower bound time complexity of an algorithm. Example: if the data to be searched is present at the first location of large data array in a linear search, then the best case occurs.
- *Average Time Complexity*: We take all random inputs and calculate the computation time for all inputs. And then we divide it by the total number of inputs.
- *Worst Time Complexity*: Define the input for which algorithm takes a long time or maximum time. In the worst case, we calculate the upper bound of an algorithm. Example: If the data to be searched is present at the last location of large data array in a linear search algorithm, then the worst case occurs.

Some common time complexities are :

- **O(1)**: This denotes the constant time. O(1) usually means that an algorithm will have a constant time regardless of the input size. Hash Maps are perfect examples of constant time.

- **O(log n)**: This denotes logarithmic time. O(log n) means to decrease with each instance for the operations. Searching for elements in Binary Search Trees (BSTs) is a good example of logarithmic time.

- **O(n)**: This denotes linear time. O(n) means that the performance is directly proportional to the size of the input. In simple terms, the number of inputs and the time taken to execute those inputs will be proportional. Linear search in arrays is a great example of linear time complexity.

- **O(n*n)**: This denotes quadratic time. O(n^2) means that the performance is directly proportional to the square of the input taken. In simple, the time taken for execution will roughly take square times the input size. Nested loops are perfect examples of quadratic time complexity.

- **O(n log n)**: This denotes polynomial time complexity. O(n log n) means that the performance is n times that of O(log n), (which is a worst case complexity). A good example would be divide and conquer algorithms such as merge sort. This algorithm first divides the set, which takes O(log n) time, then conquers and sorts through the set, which takes O(n) time- therefore, Merge sort takes O(n log n) time.

| Algorithm	     |             |  Time Complexity|	       | Space Complexity |
|   :---:        |  :---:      |  :---: 	   |   :---: 	   |   :---:          |
|  	             | Best	       | Average	   |  Worst	     |  Worst           |
| Selection Sort | Ω(n^2)	     | θ(n^2)	     | O(n^2)	     | O(1)             |
| Bubble Sort	 | Ω(n)	         | θ(n^2)	     | O(n^2)	     | O(1)             |
| Insertion Sort | Ω(n)	       | θ(n^2)	     | O(n^2)	     | O(1)             |
| Heap Sort	     | Ω(n log(n)) | θ(n log(n)) | O(n log(n)) | O(1)             |
| Quick Sort	   | Ω(n log(n)) | θ(n log(n)) | O(n^2)	     | O(n)             |
| Merge Sort	   | Ω(n log(n)) | θ(n log(n)) | O(n log(n)) | O(n)             |
| Bucket Sort    | Ω(n +k)	   | θ(n +k)	   | O(n^2)	     | O(n)             |
| Radix Sort  	 | Ω(nk)	     | θ(nk)	     | O(nk)	     | O(n + k)         |
| Count Sort  	 | Ω(n +k)	   | θ(n +k)	   | O(n +k)	   | O(k)             |
| Shell Sort  	 | Ω(n log(n)) | θ(n log(n)) | O(n^2)	     | O(1)             |
| Tim Sort	     | Ω(n)	       | θ(n log(n)) | O(n log(n)) | O(n)             |
| Tree Sort   	 | Ω(n log(n)) | θ(n log(n)) | O(n^2)	     | O(n)             |
| Cube Sort	     | Ω(n)	       | θ(n log(n)) | O(n log(n)) | O(n)             |

| Algorithm	     |             |  Time Complexity|	     |
|   :---:        |  :---:      |  :---: 	 |   :---: 	   |  
|  	             | Best	       | Average	 |  Worst	     |
| Linear Search  | O(1)	       | O(N)	     | O(N)	       | O(1)  |
| Binary Search	 | O(1)	       | O(logN)   | O(logN)	   |



## [Alan Turing](Not-Added)
Alan Turing, (born June 23, 1912, London, Eng.—died June 7, 1954, Wilmslow, Cheshire), English mathematician and logician. He studied at the University of Cambridge and Princeton’s Institute for Advanced Study. In his seminal 1936 paper “On Computable Numbers,” he proved that there cannot exist any universal algorithmic method of determining truth in mathematics and that mathematics will always contain undecidable (as opposed to unknown) propositions. That paper also introduced the Turing machine. He believed that computers eventually would be capable of thought indistinguishable from that of a human and proposed a simple test (see Turing test) to assess this capability. His papers on the subject are widely acknowledged as the foundation of research in artificial intelligence. He did valuable work in cryptography during World War II, playing an important role in breaking the Enigma code used by Germany for radio communications. After the war he taught at the University of Manchester and began work on what is now known as artificial intelligence. In the midst of this groundbreaking work, Turing was found dead in his bed, poisoned by cyanide. His death followed his arrest for a homosexual act (then a crime) and sentence of 12 months of hormone therapy.


Following a public campaign in 2009, the British Prime Minister Gordon Brown made an official public apology on behalf of the British government for the appalling way Turing was treated. Queen Elizabeth II granted a posthumous pardon in 2013. The term "Alan Turing law" is now used informally to refer to a 2017 law in the United Kingdom that retroactively pardoned men cautioned or convicted under historical legislation that outlawed homosexual acts.

Turing has an extensive legacy with statues of him and many things named after him, including an annual award for computer science innovations. He appears on the current Bank of England £50 note, which was released on 23 June 2021, to coincide with his birthday. A 2019 BBC series, as voted by the audience, named him the greatest person of the 20th century.


## [Software Engineering](Software%20Engineering/readme.md)
Software engineering is the branch of computer science that deals with the design, development, testing, and maintenance of software applications. Software engineers apply engineering principles and knowledge of programming languages to build software solutions for end users.

Let’s look at the various definitions of software engineering:

- IEEE, in its standard 610.12-1990, defines software engineering as the application of a systematic, disciplined, which is a computable approach for the development, operation, and maintenance of software.
- Fritz Bauer defined it as ‘the establishment and used standard engineering principles. It helps you to obtain, economically, software which is reliable and works efficiently on the real machines’.
- Boehm defines software engineering, which involves, ‘the practical application of scientific knowledge to the creative design and building of computer programs. It also includes associated documentation needed for developing, operating, and maintaining them.’

### Software engineer tasks and responsibilities
Successful engineers know how to use the right programming languages, platforms, and architectures to develop everything from computer games to network control systems. In addition to building their own systems, software engineers also test, improve, and maintain software built by other engineers.

In this role, your day-to-day tasks might include:

- Designing and maintaining software systems
- Evaluating and testing new software programs
- Optimizing software for speed and scalability
- Writing and testing code
- Consulting with clients, engineers, security specialists, and other stakeholders
- Presenting new features to stakeholders and internal customers


### Why Software Engineering is Popular?

- Computer Science: Gives the scientific foundation for the software as electrical engineering mainly depends on physics.
- Management Science: Software engineering is labor-intensive work which demands both technical and managerial control. Therefore, it is widely used in management science.
- Economics: In this sector, software engineering helps you in resource estimation and cost control. Computing system must be developed, and data should be maintained regularly within a given budget.
- System Engineering: Most software is a component of a much larger system. For example, the software in an Industry monitoring system or the flight software on an airplane. Software engineering methods should be applied to the study of this type of systems.
- 

## [Integrated Circuits](Integrated%20Circuits/readme.md)
An integrated circuit or monolithic integrated circuit (also referred to as an IC, a chip, or a microchip) is a set of electronic circuits on one small flat piece (or "chip") of semiconductor material, usually silicon. Large numbers of tiny MOSFETs (metal–oxide–semiconductor field-effect transistors) integrate into a small chip. This results in circuits that are orders of magnitude smaller, faster, and less expensive than those constructed of discrete electronic components. The IC's mass production capability, reliability, and building-block approach to integrated circuit design has ensured the rapid adoption of standardized ICs in place of designs using discrete transistors. ICs are now used in virtually all electronic equipment and have revolutionized the world of electronics. Computers, mobile phones and other home appliances are now inextricable parts of the structure of modern societies, made possible by the small size and low cost of ICs such as modern computer processors and microcontrollers.

Very-large-scale integration was made practical by technological advancements in metal–oxide–silicon (MOS) semiconductor device fabrication. Since their origins in the 1960s, the size, speed, and capacity of chips have progressed enormously, driven by technical advances that fit more and more MOS transistors on chips of the same size – a modern chip may have many billions of MOS transistors in an area the size of a human fingernail. These advances, roughly following Moore's law, make the computer chips of today possess millions of times the capacity and thousands of times the speed of the computer chips of the early 1970s.

ICs have two main advantages over discrete circuits: cost and performance. The cost is low because the chips, with all their components, are printed as a unit by photolithography rather than being constructed one transistor at a time. Furthermore, packaged ICs use much less material than discrete circuits. Performance is high because the IC's components switch quickly and consume comparatively little power because of their small size and proximity. The main disadvantage of ICs is the high cost of designing them and fabricating the required photomasks. This high initial cost means ICs are only commercially viable when high production volumes are anticipated.

### Types
Modern electronic component distributors often further sub-categorize integrated circuits:

- Digital ICs are categorized as logic ICs (such as microprocessors and microcontrollers), memory chips (such as MOS memory and floating-gate memory), interface ICs (level shifters, serializer/deserializer, etc.), power management ICs, and programmable devices.
- Analog ICs are categorized as linear integrated circuits and RF circuits (radio frequency circuits).
- Mixed-signal integrated circuits are categorized as data acquisition ICs (including A/D converters, D/A converters, digital potentiometers), clock/timing ICs, switched capacitor (SC) circuits, and RF CMOS circuits.
- Three-dimensional integrated circuits (3D ICs) are categorized into through-silicon via (TSV) ICs and Cu-Cu connection ICs.


## [Object Oriented Programming](Object%20Oriented%20Programming/readme.md)
Object Oriented Programming is a fundamental programming paradigm which is based on the concepts of objects and data.

It is the standard way of code that every programmer has to abide by for better readability and reusability of the code. 

### * There are four basic concepts of Object Oriented Programming:
- Abstraction
- Encapsulation
- Inheritance
- Polymorphism 

Read more about these concepts of OOP [here](Object%20Oriented%20Programming/readme.md)


## [Operating Systems](Operating%20Systems/readme.md)
An operating system (or OS for short) acts as an intermediary between the user of a computer and computer hardware. The purpose of an operating system is to provide an environment in which an user can execute programs conveniently and efficiently.
An operating system is a software that manages computer hardware. The hardware must provide appropriate mechanisms to ensure the correct operation of the computer system and to prevent user programs from interfering with the proper operation of the system.
An even more common definition is that the operating system is the one program running at all times on the computer (usually called the kernel), with all else being application programs.

Operating systems can be viewed from two viewpoints: resource managers and
extended machines. In the resource-manager view, the operating system’s job is to
manage the different parts of the system efficiently. In the extended-machine view,
the job of the system is to provide the users with abstractions that are more con-
venient to use than the actual machine. These include processes, address spaces,
and files.
Operating systems have a long history, starting from the days when they replaced the operator, to modern multiprogramming systems. 
Highlights include early batch systems, multiprogramming systems, and personal computer systems.
Since operating systems interact closely with the hardware, some knowledge
of computer hardware is useful to understanding them. Computers are built up of
processors, memories, and I/O devices. These parts are connected by buses.
The basic concepts on which all operating systems are built are processes,
memory management, I/O management, the file system, and security.The heart of any operating system is the set of system calls that it can handle.
These tell what the operating system really does

### Operating system as a resource manager
the operating system is there to manage all the pieces of a complex system. Modern computers consist of processors, memories, timers, disks, mice, 
network interfaces, printers, and a wide variety of other devices. 
In the bottom-up view, the job of the operating system is to provide for an orderly and controlled allocation of the
processors, memories, and I/O devices among the various programs wanting them.
Modern operating systems allow multiple programs to be in memory and run
at the same time. Imagine what would happen if three programs running on some
computer all tried to print their output simultaneously on the same printer.
The result would be utter chaos. The operating system can bring order to the potential chaos 
by buffering all the output destined for the printer on the disk. 
When one program is finished, the operating system can
then copy its output from the disk file where it has been stored for the printer,
while at the same time the other program can continue generating more output,
oblivious to the fact that the output is not really going to the printer (yet).
When a computer (or network) has more than one user, the need for managing
and protecting the memory, I/O devices, and other resources is even more since the
users might otherwise interfere with one another. In addition, users often need to
share not only hardware, but information (files, databases, etc.) as well. In short,
this view of the operating system holds that its primary task is to keep track of
which programs are using which resource, to grant resource requests, to account
for usage, and to mediate conflicting requests from different programs and users

### Operating system as an extended machine
The architecture of most computers at the machine-language level is primitive and awkward to
program, especially for input/output. To make this point more concrete, consider
modern SATA (Serial ATA) hard disks used on most computers. What a programmer would have to know to use the disk. 
Since then, the interface has been revised multiple times and is more complicated than it was in
2007. Clearly, no sane programmer would want to deal with this disk at the hardware level. 
Instead, a piece of software, called a disk driver, deals with the hardware and provides an interface to read and write disk blocks, 
without getting into the details. 
Operating systems contain many drivers for controlling I/O devices.
But even this level is much too low for most applications. For this reason, all
operating systems provide yet another layer of abstraction for using disks: files.
Using this abstraction, programs can create, write, and read files, without having to
deal with the messy details of how the hardware actually works.
This abstraction is the key to managing all this complexity. Good abstractions
turn a nearly impossible task into two manageable ones. The first is defining and
implementing the abstractions. The second is using these abstractions to solve the
problem at hand.

### History of Operating Systems
- **First Generation (1945-55)**: Little progress was achieved in building digital computers after Babbage's disastrous efforts until the World War II era. At Iowa State University, Professor John Atanasoff and his graduate student Clifford Berry created what is today recognised as the first operational digital computer. Konrad Zuse in Berlin constructed the Z3 computer using electromechanical relays around the same time. The Mark I was created by Howard Aiken at Harvard, the Colossus by a team of scientists at Bletchley Park in England, and the ENIAC by William Mauchley and his doctoral student J. Presper Eckert at the University of Pennsylvania in 1944.

- **Second Generation (1955-65)**: The transistor's invention in the middle of the 1950s drastically altered the situation. Computers became dependable enough that they could be manufactured and sold to paying customers with the assumption that they would keep working long enough to conduct some meaningful job. Mainframes, as these machines are now known, were kept locked up in huge, particularly air-conditioned computer rooms, with teams of qualified operators to manage them. Only huge businesses, significant government entities, or institutions could afford the price tag of several million dollars.

- **Third Generation (1965-80)**: In comparison to second-generation computers, which were constructed from individual transistors, the IBM 360 was the first major computer line to employ (small-scale) ICs (Integrated Circuits). As a result, it offered a significant price/performance benefit. It was an instant hit, and all the other big manufacturers quickly embraced the concept of a family of interoperable computers. All software, including the OS/360 operating system, was supposed to be compatible with all models in the original design. It had to run on both extremely big systems, which frequently replaced 7094s for heavy computation and weather forecasting, and tiny systems, which frequently merely replaced 1401s for transferring cards to tape. Both systems with few peripherals and systems with many of peripherals needed to function well with it. It had to function both in professional and academic settings. Above all, it had to be effective for each of these many applications.

- **Fourth Generation (1980-Present)**: The era of the personal computer began with the creation of LSI (Large Scale Integration) circuits, processors with thousands of transistors on a square centimetre of silicon. Although personal computers, originally known as microcomputers, did not change significantly in architecture from minicomputers of the PDP-11 class, they did differ significantly in price.

- **Fifth Generation (1990-Present)**: People have yearned for a portable communication gadget ever since detective Dick Tracy in the 1940s comic strip began conversing with his "two-way radio wrist watch." In 1946, a real mobile phone made its debut and it weighed about 40 kilogrammes. The first real portable phone debuted in the 1970s and was incredibly lightweight at about one kilogramme. It was jokingly referred to as "the brick." Soon, everyone was clamouring for one.

### Functions of an OS
- **Convenience**: An OS makes a computer more convenient to use.
- **Efficiency**: An OS allows the computer system resources to be used efficiently.
- **Ability to Evolve**: An OS should be constructed in such a way as to permit the effective development, testing, and introduction of new system functions at the same time without interfering with service.
- **Throughput**: An OS should be constructed so that It can give maximum throughput(Number of tasks per unit time).

### Major functionalities of an OS
- **Resource Management**: When parallel accessing happens in the OS means when multiple users are accessing the system the OS works as a Resource Manager, Its responsibility is to provide hardware to the user. It decreases the load in the system.
- **Process Management**: It includes various tasks like scheduling and termination of the process. OS manages various tasks at a time. Here CPU Scheduling happens means all the tasks would be done by the many algorithms that use for scheduling.
- **Storage Management**: The file system mechanism used for the management of the storage. NIFS, CFS, CIFS, NFS, etc. are some file systems. All the data is stored in various tracks of Hard disks that are all managed by the storage manager. It included Hard Disk.
- **Memory Management**: Refers to the management of primary memory. The operating system has to keep track, of how much memory has been used and by whom. It has to decide which process needs memory space and how much. OS also has to allocate and deallocate the memory space.
- **Security/Privacy Management**: Privacy is also provided by the Operating system by means of passwords so that unauthorized applications can’t access programs or data. For example, Windows uses **_Kerberos_** authentication to prevent unauthorized access to data.

### Types of Operating system
- **Mainframe OS**:
At the high end are the operating systems for mainframes, those room-sized
computers still found in major corporate data centers. These computers differ from
personal computers in terms of their I/O capacity. A mainframe with 1000 disks
and millions of gigabytes of data is not unusual; a personal computer with these
specifications would be the envy of its friends. Mainframes are also making some-
thing of a comeback as high-end Web servers, servers for large-scale electronic
commerce sites, and servers for business-to-business transactions.
The operating systems for mainframes are heavily oriented toward processing
many jobs at once, most of which need prodigious amounts of I/O. They typically
offer three kinds of services: batch, transaction processing, and timesharing

- **Server OS**:
One level down are the server operating systems. They run on servers, which
are either very large personal computers, workstations, or even mainframes. They
serve multiple users at once over a network and allow the users to share hardware
and software resources. Servers can provide print service, file service, or Web service. 
Internet providers run many server machines to support their customers
and Websites use servers to store the Web pages and handle the incoming requests.
Typical server operating systems are Solaris, FreeBSD, Linux and Windows Server
201x.

- **Multiprocessor OS**:
An increasingly common way to get major-league computing power is to connect multiple CPUs into a single system. 
Depending on precisely how they are connected and what is shared, these systems are called parallel computers, multi-computers, or multiprocessors. 
They need special operating systems, but often these are variations on the server operating systems, 
with special features for communication, connectivity, and consistency.

- **Personal Computer OS**:
The next category is the personal computer operating system. Modern ones all
support multiprogramming, often with dozens of programs started up at boot time.
Their job is to provide good support to a single user. They are widely used for
word processing, spreadsheets, games, and Internet access. Common examples are
Linux, FreeBSD, Windows 7, Windows 8, and Apple’s OS X. Personal computer
operating systems are so widely known that probably little introduction is needed.
In fact, many people are not even aware that other kinds exist.

- **Embedded OS**:
Embedded systems run on the computers that control devices that are not generally thought of as computers and which do not accept user-installed software.
Typical examples are microwave ovens, TV sets, cars, DVD recorders, traditional
phones, and MP3 players. The main property which distinguishes embedded systems from handhelds is the certainty that no untrusted software will ever run on it.
You cannot download new applications to your microwave oven—all the software
is in ROM. This means that there is no need for protection between applications,
leading to design simplification. Systems such as Embedded Linux, QNX and
VxWorks are popular in this domain.

- **Smart Card OS**:
The smallest operating systems run on smart cards, which are credit-card-sized
devices containing a CPU chip. They hav e very severe processing power and memory constraints. 
Some are powered by contacts in the reader into which they are
inserted, but contactless smart cards are inductively powered, which greatly limits
what they can do. Some of them can handle only a single function, such as electronic payments, but others can handle multiple functions. 
Often these are proprietary systems.
Some smart cards are Java oriented. This means that the ROM on the smart
card holds an interpreter for the Java Virtual Machine (JVM). Java applets (small
programs) are downloaded to the card and are interpreted by the JVM interpreter.
Some of these cards can handle multiple Java applets at the same time, leading to
multiprogramming and the need to schedule them. Resource management and protection also become an issue when two or more applets are present at the same
time. These issues must be handled by the (usually extremely primitive) operating system present on the card.

## [Memory and Storage](Memory%20and%20Storage/readme.md)
If you are unsure about the difference between memory and storage in computers, this article covers the differences between the two.

### Memory
The term _memory_ refers to the component within your computer that allows for short-term data access. You may recognise this component as DRAM, or dynamic random-access memory. Your computer performs many operations by accessing data stored in its short-term memory. Some examples of such operations include editing a document, loading applications and browsing the internet. The speed and performance of your system depend on the amount of memory that is installed on your computer.

If you have a desk and a filing cabinet, the desk represents the memory of your computer. Items you need to use immediately are kept on your desk for easy access. However, not much can be stored on a desk due to its size limitations.

### Storage
Whereas memory refers to the location of short-term data, _storage_ is the component within your computer that allows you to store and access data on a long-term basis. Usually, storage comes in the form of a solid-state drive or a hard drive. Storage houses your applications, operating system and files for an indefinite period. Computers need to write information and read it from the storage system, so the speed of the storage determines how fast your system can boot up, load and access what you’ve saved.

While the desk represents the computer's memory, the filing cabinet represents the storage of your computer. It holds items that need to be saved and stored but is not necessarily needed for immediate access. The size of the filing cabinet means that it can hold a large number of things.

**An important distinction** between memory and storage is that memory clears when the computer is turned off. On the other hand, storage remains intact no matter how many times you shut off your computer. Therefore, in the desk and filing cabinet analogy, any files that are left on your desk when you leave the office will be thrown away. Everything in your filing cabinet will remain.

## [File System](File%20System/readme.md)
In computing, a file system or filesystem (often abbreviated to fs) is a method and data structure that the operating system uses to control how data is stored and retrieved. Without a file system, data placed in a storage medium would be one large body of data with no way to tell where one piece of data stopped and the next began, or where any piece of data was located when it was time to retrieve it. By separating the data into pieces and giving each piece a name, the data is easily isolated and identified. Taking its name from the way a paper-based data management system is named, each group of data is called a "file". The structure and logic rules used to manage the groups of data and their names are called a "file system."

There are many kinds of file systems, each with unique structure and logic, properties of speed, flexibility, security, size and more. Some file systems have been designed to be used for specific applications. For example, the ISO 9660 file system is designed specifically for optical discs.

File systems can be used on many types of storage devices using various media. As of 2019, hard disk drives have been key storage devices and are projected to remain so for the foreseeable future. Other kinds of media that are used include SSDs, magnetic tapes, and optical discs. In some cases, such as with tmpfs, the computer's main memory (random-access memory, RAM) is used to create a temporary file system for short-term use.

Some file systems are used on local data storage devices; others provide file access via a network protocol (for example, NFS, SMB, or 9P clients). Some file systems are "virtual", meaning that the supplied "files" (called virtual files) are computed on request (such as procfs and sysfs) or are merely a mapping into a different file system used as a backing store. The file system manages access to both the content of files and the metadata about those files. It is responsible for arranging storage space; reliability, efficiency, and tuning with regard to the physical storage medium are important design considerations.

### How file systems work
A file system stores and organizes data and can be thought of as a type of index for all the data contained in a storage device. These devices can include hard drives, optical drives and flash drives.

File systems specify conventions for naming files, including the maximum number of characters in a name, which characters can be used and, in some systems, how long the file name suffix can be. In many file systems, file names are not case-sensitive.

Along with the file itself, file systems contain information such as the size of the file, as well as its attributes, location and hierarchy in the directory in the metadata. Metadata can also identify free blocks of available storage on the drive and how much space is available.

A file system also includes a format to specify the path to a file through the structure of directories. A file is placed in a directory -- or a folder in Windows OS -- or subdirectory at the desired place in the tree structure. PC and mobile OSes have file systems in which files are placed somewhere in a hierarchical tree structure.

Before files and directories are created on the storage medium, partitions should be put into place. A partition is a region of the hard disk or other storage that the OS manages separately. One file system is contained in the primary partition, and some OSes allow for multiple partitions on one disk. In this situation, if one file system gets corrupted, the data in a different partition will be safe.

### Types of file systems
There are several types of file systems, all with different logical structures and properties, such as speed and size. The type of file system can differ by OS and the needs of that OS. The three most common PC operating systems are Microsoft Windows, Mac OS X and Linux. Mobile OSes include Apple iOS and Google Android.

Major file systems include the following:

- File allocation table (FAT) is supported by Microsoft Windows OS. FAT is considered simple and reliable, and it is modelled after legacy file systems. FAT was designed in 1977 for floppy disks but was later adapted for hard disks. While efficient and compatible with most current OSes, FAT cannot match the performance and scalability of more modern file systems.

- Global file system (GFS) is a file system for the Linux OS, and it is a shared disk file system. GFS offers direct access to shared block storage and can be used as a local file system.

- GFS2 is an updated version with features not included in the original GFS, such as an updated metadata system. Under the terms of the GNU General Public License, both the GFS and GFS2 file systems are available as free software.

- Hierarchical file system (HFS) was developed for use with Mac operating systems. HFS can also be referred to as Mac OS Standard, and it was succeeded by Mac OS Extended. Originally introduced in 1985 for floppy and hard disks, HFS replaced the original Macintosh file system. It can also be used on CD-ROMs.

- The NT file system -- also known as the New Technology File System (NTFS) -- is the default file system for Windows products from Windows NT 3.1 OS onward. Improvements from the previous FAT file system include better metadata support, performance and use of disk space. NTFS is also supported in the Linux OS through a free, open-source NTFS driver. Mac OSes have read-only support for NTFS.

- Universal Disk Format (UDF) is a vendor-neutral file system used on optical media and DVDs. UDF replaces the ISO 9660 file system and is the official file system for DVD video and audio as chosen by the DVD Forum.


## [Cloud Computing](Cloud%20Computing/Readme.md)
Cloud computing is the ability to access information and applications over the Internet. Cloud computing allows users to access applications and data from any location, as long as they have an Internet connection.

Cloud computing is a type of Internet-based computing that provides shared computer processing resources and data to computers and other devices on demand.

It is a model for enabling ubiquitous, convenient, on-demand network access to a shared pool of configurable computing resources (e.g., networks, servers, storage, applications, and services) that can be rapidly provisioned and released with minimal management effort or service provider interaction.
 
 ## Top Benifits of cloud computing
 
Cloud computing is a big shift from the traditional way businesses think about IT resources. Here are seven common reasons organisations are turning to cloud computing services:


Cost
Cloud computing eliminates the capital expense of buying hardware and software and setting up and running on-site datacenters—the racks of servers, the round-the-clock electricity for power and cooling, the IT experts for managing the infrastructure. It adds up fast.


Speed
Most cloud computing services are provided self service and on demand, so even vast amounts of computing resources can be provisioned in minutes, typically with just a few mouse clicks, giving businesses a lot of flexibility and taking the pressure off capacity planning.


Global scale
The benefits of cloud computing services include the ability to scale elastically. In cloud speak, that means delivering the right amount of IT resources—for example, more or less computing power, storage, bandwidth—right when it is needed and from the right geographic location.


Productivity
On-site datacenters typically require a lot of “racking and stacking”—hardware setup, software patching, and other time-consuming IT management chores. Cloud computing removes the need for many of these tasks, so IT teams can spend time on achieving more important business goals.


Performance
The biggest cloud computing services run on a worldwide network of secure datacenters, which are regularly upgraded to the latest generation of fast and efficient computing hardware. This offers several benefits over a single corporate datacenter, including reduced network latency for applications and greater economies of scale.


Reliability
Cloud computing makes data backup, disaster recovery and business continuity easier and less expensive because data can be mirrored at multiple redundant sites on the cloud provider’s network.


Security
Many cloud providers offer a broad set of policies, technologies and controls that strengthen your security posture overall, helping protect your data, apps and infrastructure from potential threats.

### Types of Cloud Computing Services
- [Infrastructure as a Service (IaaS)](Cloud%20Computing/Readme.md#infrastructure-as-a-service-iaas)
- [Platform as a Service (PaaS)](Cloud%20Computing/Readme.md#platform-as-a-service-paas)
- [Software as a Service (SaaS)](Cloud%20Computing/Readme.md#software-as-a-service-saas)


## [Machine Learning]()
Machine learning is the practice of teaching a computer to learn. The concept uses pattern recognition, as well as other forms of predictive algorithms, to make judgments on incoming data. This field is closely related to artificial intelligence and computational statistics.

### There are three subcategories of machine learning:

### Supervised machine learning 
In this machine learning models are trained with labeled data sets, which allow the models to learn and grow more accurate over time. For example, an algorithm would be trained with pictures of dogs and other things, all labeled by humans, and the machine would learn ways to identify pictures of dogs on its own. Supervised machine learning is the most common type used today.

Practical applications of Supervised Learning – 
1. **Bioinformatics:** Bioinformatics is the study of how individuals retain biological knowledge such as fingerprints, eye texture, earlobes, and so on. Mobile phones are now clever enough to comprehend our biological data and then verify us in order to increase system security.
2. **Speech recognition:** It’s the type of program where you may convey your voice to the program, and it will identify you. The most well-known real-world gadgets are digital assistants such as Google Assistant or Siri, which respond to the term only with your voice.
3. **Spam detection:** This tool is used to prevent fictitious or machine-based communications from being sent. Gmail includes an algorithm that learns numerous wrong terms. The Oneplus Messages App asks the user to specify which terms should be prohibited, and the keyword will prevent such texts from the app.
4. **Object recognition for the vision:** This type of software is utilized when you have to define anything. You have a big dataset that you utilize to train the algorithm, and it can recognize a new object using this.

### Unsupervised machine learning
In Unsupervised machine learning a program looks for patterns in unlabeled data. Unsupervised machine learning can find patterns or trends that people aren’t explicitly looking for. For example, an unsupervised machine learning program could look through online sales data and identify different types of clients making purchases.

Practical applications of unsupervised Learning
1. **Clustering:** Clustering is the process of categorizing data into separate groups.  When we don’t know all of the details about the clusters, we can utilize unsupervised Learning to cluster them. Unsupervised Learning is used to analyze and organize data that doesn’t have pre-labeled classes or class properties. Clustering can help firms handle their data more effectively.
Suppose you have a YouTube channel. You may have a lot of information on your subscribers. If you want to find similar subscribers, you would need to use a clustering technique.
2. **Visualization:** The process of making diagrams, photos, graphs, charts, and so on to present information is known as visualization. Unsupervised machine learning can be used to implement this strategy.
Suppose you are a cricket coach with information regarding your team’s performance in a tournament. You might wish to quickly locate all of the match statistics. You can pass the unlabeled and complicated data to a visualization algorithm.
3. **Anomaly detection:** Anomaly detection is the discovery of unusual things, occurrences, or observations that raise suspicions by deviating greatly from regular data. In this situation, the system is programmed with a large number of typical cases. As a result, when it detects an unexpected occurrence, it can determine if it is an anomaly or not.
Credit card fraud detection is a good illustration of this.This issue is now being addressed utilizing unsupervised machine learning anomaly detection approaches. To avoid fraud, the system identifies unexpected credit card transactions.

### Semi-supervised machine learning
The disadvantage of supervised learning is that it requires hand-labeling by ML specialists or data scientists, and requires a high cost to process. Unsupervised learning also has a limited spectrum for its applications. To overcome these drawbacks of supervised learning and unsupervised learning algorithms, the concept of Semi-supervised learning is introduced. Typically, this combination contains a very small amount of labeled data and a large amount of unlabelled data. The basic procedure involved is that first, the programmer will cluster similar data using an unsupervised learning algorithm and then use the existing labeled data to label the rest of the unlabelled data.

Practical applications of Semi-Supervised Learning – 
1. **Speech Analysis:** Since labeling of audio files is a very intensive task, Semi-Supervised learning is a very natural approach to solve this problem.
2. **Internet Content:** Classification: Labeling each webpage is an impractical and unfeasible process and thus uses Semi-Supervised learning algorithms. Even the Google search algorithm uses a variant of Semi-Supervised learning to rank the relevance of a webpage for a given query.
3. **Protein Sequence Classification:** Since DNA strands are typically very large in size, the rise of Semi-Supervised learning has been imminent in this field.

### Reinforcement machine learning
This trains machines through trial and error to take the best action by establishing a reward system. Reinforcement learning can train models to play games or train autonomous vehicles to drive by telling the machine when it made the right decisions, which helps it learn over time what actions it should take.

Practical applications of Reinforcement Learning - 
1. **Production Systems** 
   eg. Google Cloud AutoML, Facebook Horizon, Recommendation, advertisement, search 
2. **Autonomous Driving**
3. **Business Management** 
   eg. solving the vehicle routing problem, fraudulent behaviour in e-commerce, Concurrent reinforcement learning from customer interactions
4. **Recommender systems**
   eg. for search, recommendation, and online advertising
   
### Machine learning is also associated with several other artificial intelligence subfields:

### Natural language processing

Natural language processing is a field of machine learning in which machines learn to understand natural language as spoken and written by humans, instead of the data and numbers normally used to program computers. This allows machines to recognize language, understand it, and respond to it, as well as create new text and translate between languages. Natural language processing enables familiar technology like chatbots and digital assistants like Siri or Alexa.

Practical applications of NLP:
1. **Question Answering:** Question Answering focuses on building systems that automatically answer the questions asked by humans in a natural language. 
2. **Spam Detection:** Spam detection is used to detect unwanted e-mails getting to a user's inbox.
3. **Sentiment Analysis:** Sentiment Analysis is also known as opinion mining. It is used on the web to analyse the attitude, behaviour, and emotional state of the sender. This application is implemented through a combination of NLP (Natural Language Processing) and statistics by assigning the values to the text (positive, negative, or natural), identify the mood of the context (happy, sad, angry, etc.)
4. **Machine Translation:** Machine translation is used to translate text or speech from one natural language to another natural language. eg. Google Translate
5. **Spelling correction:** Microsoft Corporation provides word processor software like MS-word, PowerPoint for the spelling correction.

### Neural networks

Neural networks are a commonly used, specific class of machine learning algorithms. Artificial neural networks are modeled on the human brain, in which thousands or millions of processing nodes are interconnected and organized into layers.

In an artificial neural network, cells, or nodes, are connected, with each cell processing inputs and producing an output that is sent to other neurons. Labeled data moves through the nodes, or cells, with each cell performing a different function. In a neural network trained to identify whether a picture contains a cat or not, the different nodes would assess the information and arrive at an output that indicates whether a picture features a cat.

Practical applications of Neural Networks:
1. **Stock Market Prediction:** To make a successful stock prediction in real time a Multilayer Perceptron MLP (class of feedforward artificial intelligence algorithm) is employed.  MLP comprises multiple layers of nodes, each of these layers is fully connected to the succeeding nodes. Stock’s past performances, annual returns, and non profit ratios are considered for building the MLP model.
2. **Social Media:** Multi-layered Perceptrons forecast social media trends. It uses different training methods like Mean Absolute Error (MAE), Root Mean Squared Error (RMSE), and Mean Squared Error (MSE). MLP takes into consideration several factors like user’s favourite instagram pages, bookmarked choices etc. Post analysis of individuals' behaviours via social media networks, the data can be linked to people’s spending habits. MLP ANN is used to mine data from social media applications.  
3. **Aerospace:** Aerospace Engineering is an expansive term that covers developments in spacecraft and aircraft. Fault diagnosis, high performance auto piloting, securing the aircraft control systems, and modeling key dynamic simulations are some of the key areas that neural networks have taken over. Time delay Neural networks can be employed for modelling non linear time dynamic systems.

### Deep learning

Deep learning networks are neural networks with many layers. The layered network can process extensive amounts of data and determine the “weight” of each link in the network — for example, in an image recognition system, some layers of the neural network might detect individual features of a face, like eyes, nose, or mouth, while another layer would be able to tell whether those features appear in a way that indicates a face.  

Practical applications of Deep Learning:
1. **Automatic Text Generation –** Corpus of text is learned and from this model new text is generated, word-by-word or character-by-character.Then this model is capable of learning how to spell, punctuate, form sentences, or it may even capture the style.
2. **Healthcare –** Helps in diagnosing various diseases and treating it.
3. **Automatic Machine Translation –** Certain words, sentences or phrases in one language is transformed into another language (Deep Learning is achieving top results in the areas of text, images).
4. **Image Recognition –** Recognizes and identifies peoples and objects in images as well as to understand content and context. This area is already being used in Gaming, Retail, Tourism, etc.
5. **Predicting Earthquakes –** Teaches a computer to perform viscoelastic computations which are used in predicting earthquakes.

## [Web Technology](Web%20Technology/WebTechnology.md#web-tecnology)
Web Technology refers to the various tools and techniques that are utilized in the process of communication between different types of devices over the internet. A web browser is used to access web pages. Web browsers can be defined as programs that display text, data, pictures, animation, and video on the Internet. Hyperlinked resources on the World Wide Web can be accessed using software interfaces provided by Web browsers.
### Web Technology can be classified into the following sections:
- World Wide Web (WWW)
The World Wide Web is based on several different technologies : Web browsers, Hypertext Markup Language (HTML) and Hypertext Transfer Protocol (HTTP).
- Web Browser
The web browser is an application software to explore www (World Wide Web). It provides an interface between the server and the client and requests to the server for web documents and services.
- Web Server
Web server is a program which processes the network requests of the users and serves them with files that create web pages. This exchange takes place using Hypertext Transfer Protocol (HTTP).
- Web Pages
A webpage is a digital document that is linked to the World Wide Web and viewable by anyone connected to the internet has a web browser.
- Web Development
Web development refers to the building, creating, and maintaining of websites. It includes aspects such as web design, web publishing, web programming, and database management. It is the creation of an application that works over the internet i.e. websites.
### Web Development can be classified into two ways:
### Frontend Development
The part of a website that the user interacts directly is termed as front end. It is also referred to as the ‘client side’ of the application.
### Backened Development
Backend is the server side of a website. It is the part of the website that users cannot see and interact. It is the portion of software that does not come in direct contact with the users. It is used to store and arrange data.


# [Networking](Networking/readme.md#networking)
A computer network is a set of computers sharing resources located on or provided by network nodes. The computers use common communication protocols over digital interconnections to communicate with each other. These interconnections are made up of telecommunication network technologies, based on physically wired, optical, and wireless radio-frequency methods that may be arranged in a variety of network topologies.

The nodes of a computer network can include personal computers, servers, networking hardware, or other specialised or general-purpose hosts. They are identified by network addresses, and may have hostnames. Hostnames serve as memorable labels for the nodes, rarely changed after initial assignment. Network addresses serve for locating and identifying the nodes by communication protocols such as the Internet Protocol.

Computer networks may be classified by many criteria, including the transmission medium used to carry signals, bandwidth, communications protocols to organize network traffic, the network size, the topology, traffic control mechanism, and organizational intent.

## Types of networking
There are two primary types of computer networking:
- Wired networking: Wired networking requires the use of a physical medium for transport between nodes. Copper-based Ethernet cabling, popular due to its low cost and durability, is commonly used for digital communications in businesses and homes. Alternatively, optical fiber is used to transport data over greater distances and at faster speeds, but it has several tradeoffs, including higher costs and more fragile components.
- Wireless networking: Wireless networking uses radio waves to transport data over the air, enabling devices to be connected to a network without any cabling. Wireless LANs are the most well-known and widely deployed form of wireless networking. Alternatives include microwave, satellite, cellular and Bluetooth, among others.
## OSI MODEL
OSI stands for **Open Systems Interconnection**. It has been developed by ISO – ‘**International Organization for Standardization**‘, in the year 1984. It is a 7 layer architecture with each layer having specific functionality to perform. All these 7 layers work collaboratively to transmit the data from one person to another across the globe. 

### **1\. Physical Layer (Layer 1) :**

The lowest layer of the OSI reference model is the physical layer. It is responsible for the actual physical connection between the devices. The physical layer contains information in the form of **bits.** It is responsible for transmitting individual bits from one node to the next. When receiving data, this layer will get the signal received and convert it into 0s and 1s and send them to the Data Link layer, which will put the frame back together.  

![](Networking/OSI%20Model/img/computer-network-osi-model-layers-bits.png)

The functions of the physical layer are as follows:  

1.  **Bit synchronization:** The physical layer provides the synchronization of the bits by providing a clock. This clock controls both sender and receiver thus providing synchronization at bit level.
2.  **Bit rate control:** The Physical layer also defines the transmission rate i.e. the number of bits sent per second.
3.  **Physical topologies:** Physical layer specifies the way in which the different, devices/nodes are arranged in a network i.e. bus, star, or mesh topology.
4.  **Transmission mode:** Physical layer also defines the way in which the data flows between the two connected devices. The various transmission modes possible are Simplex, half-duplex and full-duplex.

### **2\. Data Link Layer (DLL) (Layer 2) :**

The data link layer is responsible for the node-to-node delivery of the message. The main function of this layer is to make sure data transfer is error-free from one node to another, over the physical layer. When a packet arrives in a network, it is the responsibility of DLL to transmit it to the Host using its MAC address.   
Data Link Layer is divided into two sublayers:  

1.  Logical Link Control (LLC)
2.  Media Access Control (MAC)

The packet received from the Network layer is further divided into frames depending on the frame size of NIC(Network Interface Card). DLL also encapsulates Sender and Receiver’s MAC address in the header. 

The Receiver’s MAC address is obtained by placing an ARP(Address Resolution Protocol) request onto the wire asking “Who has that IP address?” and the destination host will reply with its MAC address.  

![](Networking/OSI%20Model/img/computer-network-osi-model-layers-framing.png)

The functions of the Data Link layer are :  

1.  **Framing:** Framing is a function of the data link layer. It provides a way for a sender to transmit a set of bits that are meaningful to the receiver. This can be accomplished by attaching special bit patterns to the beginning and end of the frame.
2.  **Physical addressing:** After creating frames, the Data link layer adds physical addresses (MAC address) of the sender and/or receiver in the header of each frame.
3.  **Error control:** Data link layer provides the mechanism of error control in which it detects and retransmits damaged or lost frames.
4.  **Flow Control:** The data rate must be constant on both sides else the data may get corrupted thus, flow control coordinates the amount of data that can be sent before receiving acknowledgement.
5.  **Access control:** When a single communication channel is shared by multiple devices, the MAC sub-layer of the data link layer helps to determine which device has control over the channel at a given time.

### **3\. Network Layer (Layer 3) :**

The network layer works for the transmission of data from one host to the other located in different networks. It also takes care of packet routing i.e. selection of the shortest path to transmit the packet, from the number of routes available. The sender & receiver’s IP addresses are placed in the header by the network layer. 

The functions of the Network layer are :  

1.  **Routing:** The network layer protocols determine which route is suitable from source to destination. This function of the network layer is known as routing.
2.  **Logical Addressing:** In order to identify each device on internetwork uniquely, the network layer defines an addressing scheme. The sender & receiver’s IP addresses are placed in the header by the network layer. Such an address distinguishes each device uniquely and universally.


# [Internet](Internet/readme.md#internet)
The Internet is a global system of interconnected computer networks that use the standard Internet protocol suite ([TCP/IP](Networking/readme.md#tcptransmission-control-protocol)) to serve billions of users worldwide. It is a network of networks that consists of millions of private, public, academic, business, and government networks, of local to global scope, that are linked by a broad array of electronic, wireless, and optical networking technologies. The Internet carries an extensive range of information resources and services, such as the inter-linked hypertext documents and applications of the World Wide Web ([WWW](Internet/readme.md#world-wide-web-www)) and the infrastructure to support email.

## [World Wide Web (WWW)](Internet/readme.md#world-wide-web-www)
The World Wide Web (WWW) is an information space where documents and other web resources are identified by Uniform Resource Locators (URLs), interlinked by hypertext links, and accessible via the Internet. English scientist Tim Berners-Lee invented the World Wide Web in 1989. He wrote the first web browser in 1990 while employed at CERN in Switzerland. The browser was released outside CERN in 1991, first to other research institutions starting in January 1991 and to the general public on the Internet in August 1991.

## [Internet Protocol (IP)](Internet/readme.md#internet-protocol-ip)
The Internet Protocol (IP) is a protocol, or set of rules, for routing and addressing packets of data so that they can travel across networks and arrive at the correct destination. Data traversing the Internet is divided into smaller pieces, called packets.

## [DBMS]()

What is a Database?
-------------------

A database is a collection of related data which represents some aspect of the real world. A database system is designed to be built and populated with data for a certain task.

What is DBMS?
-------------

**Database Management System (DBMS)** is a software for storing and retrieving users’ data while considering appropriate security measures. It consists of a group of programs which manipulate the database. The DBMS accepts the request for data from an application and instructs the operating system to provide the specific data. In large systems, a DBMS helps users and other third-party software to store and retrieve data.

DBMS allows users to create their own databases as per their requirement. The term “DBMS” includes the user of the database and other application programs. It provides an interface between the data and the software application.

Example of a DBMS
-----------------

Let us see a simple example of a university database. This database is maintaining information concerning students, courses, and grades in a university environment. The database is organized as five files:

*   The STUDENT file stores data of each student
*   The COURSE file stores contain data on each course.
*   The SECTION stores the information about sections in a particular course.
*   The GRADE file stores the grades which students receive in the various sections
*   The TUTOR file contains information about each professor.

To define DBMS:

*   We need to specify the structure of the records of each file by defining the different types of data elements to be stored in each record.
*   We can also use a coding scheme to represent the values of a data item.
*   Basically, your Database will have 5 tables with a foreign key defined amongst the various tables.

History of DBMS
---------------

Here, are the important landmarks from the history:

*   1960 – Charles Bachman designed first DBMS system
*   1970 – Codd introduced IBM’S Information Management System (IMS)
*   1976- Peter Chen coined and defined the Entity-relationship model also know as the ER model
*   1980 – Relational Model becomes a widely accepted database component
*   1985- Object-oriented DBMS develops.
*   1990s- Incorporation of object-orientation in relational DBMS.
*   1991- Microsoft ships MS access, a personal DBMS and that displaces all other personal DBMS products.
*   1995: First Internet database applications
*   1997: XML applied to database processing. Many vendors begin to integrate XML into DBMS products.

Characteristics of DBMS
-----------------------

Here are the characteristics and properties of Database Management System:

*   Provides security and removes redundancy
*   Self-describing nature of a database system
*   Insulation between programs and data abstraction
*   Support of multiple views of the data
*   Sharing of data and multiuser transaction processing
*   Database Management Software allows entities and relations among them to form tables.
*   It follows the ACID concept ( Atomicity, Consistency, Isolation, and Durability).
*   DBMS supports multi-user environment that allows users to access and manipulate data in parallel.

Popular DBMS Software
---------------------

Here, is the list of some popular DBMS system:

*   MySQL
*   Microsoft Access
*   Oracle
*   PostgreSQL
*   dBASE
*   FoxPro
*   SQLite
*   IBM DB2
*   LibreOffice Base
*   MariaDB
*   Microsoft SQL Server etc.

## [Cryptography](Cryptography/readme.md#cryptography)
Cryptography is a technique to secure data and communication. It is a method of protecting information and communications through the use of codes, so that only those for whom the information is intended can read and process it. Cryptography is used to protect data in transit, at rest, and in use. The prefix _crypt_ means "hidden" or "secret", and the suffix _graphy_ means "writing".

### Types of Cryptography
There are two types of cryptography:
1. [Symmetric Cryptography](Cryptography/readme.md#symmetric-cryptography)
2. [Asymmetric Cryptography](Cryptography/readme.md#asymmetric-cryptography)

### [Crypto Currency](Cryptography/CryptoCurrency/readme.md#crypto-currency)
Crypto currency is a digital currency in which encryption techniques are used to regulate the generation of units of currency and verify the transfer of funds, operating independently of a central bank. Cryptocurrencies use decentralized control as opposed to centralized digital currency and central banking systems. The decentralized control of each cryptocurrency works through distributed ledger technology, typically a blockchain, that serves as a public financial transaction database. A defining feature of a cryptocurrency, and arguably its most endearing allure, is its organic nature; it is not issued by any central authority, rendering it theoretically immune to government interference or manipulation.

## Types of Crypto Currency are as follows:
1. [Proof of Work](Cryptography/CryptoCurrency/ProofOfWork/readme.md#proof-of-work)
2. [Proof of Stake](Cryptography/CryptoCurrency/ProofOfStake/readme.md#proof-of-stake)



### _Most Popular Crypto Currency are as follows:_
1. [Bitcoin](Cryptography/CryptoCurrency/ProofOfWork/Bitcoin/readme.md#bitcoin)
2. [Ethereum](Cryptography/CryptoCurrency/ProofOfStake/Ethereum/readme.md#ethereum)
3. [Litecoin](Cryptography/CryptoCurrency/ProofOfWork/Litecoin/readme.md#litecoin)
4. [Cardano](Cryptography/CryptoCurrency/ProofOfStake/Cardano/readme.md#cardano)
5. [Dogecoin](Cryptography/CryptoCurrency/ProofOfWork/Dogecoin/readme.md#dogecoin)



## [Theory of Computation]
In theoretical computer science and mathematics, the theory of computation is the branch that deals with what problems can be solved on a model of computation, using an algorithm, how efficiently they can be solved or to what degree (e.g., approximate solutions versus precise ones). The field is divided into three major branches: automata theory and formal languages, computability theory, and computational complexity theory, which are linked by the question: "What are the fundamental capabilities and limitations of computers?".

### Automata Theory
Automata theory is the study of abstract machines and automata, as well as the computational problems that can be solved using them. It is a theory in theoretical computer science. The word automata comes from the Greek word αὐτόματος, which means "self-acting, self-willed, self-moving". An automaton (automata in plural) is an abstract self-propelled computing device which follows a predetermined sequence of operations automatically. An automaton with a finite number of states is called a Finite Automaton (FA) or Finite-State Machine (FSM). The figure on the right illustrates a finite-state machine, which is a well-known type of automaton. This automaton consists of states (represented in the figure by circles) and transitions (represented by arrows). As the automaton sees a symbol of input, it makes a transition (or jump) to another state, according to its transition function, which takes the previous state and current input symbol as its arguments. 


### Formal Languages
In logic, mathematics, computer science, and linguistics, a formal language consists of words whose letters are taken from an alphabet and are well-formed according to a specific set of rules.

The alphabet of a formal language consists of symbols, letters, or tokens that concatenate into strings of the language.[1] Each string concatenated from symbols of this alphabet is called a word, and the words that belong to a particular formal language are sometimes called well-formed words or well-formed formulas. A formal language is often defined by means of a formal grammar such as a regular grammar or context-free grammar, which consists of its formation rules.

In computer science, formal languages are used among others as the basis for defining the grammar of programming languages and formalized versions of subsets of natural languages in which the words of the language represent concepts that are associated with particular meanings or semantics. In computational complexity theory, decision problems are typically defined as formal languages, and complexity classes are defined as the sets of the formal languages that can be parsed by machines with limited computational power. In logic and the foundations of mathematics, formal languages are used to represent the syntax of axiomatic systems, and mathematical formalism is the philosophy that all of mathematics can be reduced to the syntactic manipulation of formal languages in this way. 

### Computability Theory
Computability theory, also known as recursion theory, is a branch of mathematical logic, computer science, and the theory of computation that originated in the 1930s with the study of computable functions and Turing degrees. The field has since expanded to include the study of generalized computability and definability. In these areas, computability theory overlaps with proof theory and effective descriptive set theory. 

### Computational complexity theory
In theoretical computer science and mathematics, computational complexity theory focuses on classifying computational problems according to their resource usage, and relating these classes to each other. A computational problem is a task solved by a computer. A computation problem is solvable by mechanical application of mathematical steps, such as an algorithm.

A problem is regarded as inherently difficult if its solution requires significant resources, whatever the algorithm used. The theory formalizes this intuition, by introducing mathematical models of computation to study these problems and quantifying their computational complexity, i.e., the amount of resources needed to solve them, such as time and storage. Other measures of complexity are also used, such as the amount of communication (used in communication complexity), the number of gates in a circuit (used in circuit complexity) and the number of processors (used in parallel computing). One of the roles of computational complexity theory is to determine the practical limits on what computers can and cannot do. The P versus NP problem, one of the seven Millennium Prize Problems, is dedicated to the field of computational complexity.[1]

Closely related fields in theoretical computer science are analysis of algorithms and computability theory. A key distinction between analysis of algorithms and computational complexity theory is that the former is devoted to analyzing the amount of resources needed by a particular algorithm to solve a problem, whereas the latter asks a more general question about all possible algorithms that could be used to solve the same problem. More precisely, computational complexity theory tries to classify problems that can or cannot be solved with appropriately restricted resources. In turn, imposing restrictions on the available resources is what distinguishes computational complexity from computability theory: the latter theory asks what kinds of problems can, in principle, be solved algorithmically. 


 
## Contributors

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tbody>
    <tr>
      <td align="center"><a href="http://safayat.me"><img src="https://avatars.githubusercontent.com/u/80335059?v=4?s=50" width="50px;" alt="Sifat"/><br /><sub><b>Sifat</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=shhossain" title="Code">💻</a> <a href="#content-shhossain" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=shhossain" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Sabine91"><img src="https://avatars.githubusercontent.com/u/96158726?v=4?s=50" width="50px;" alt="Yuvraj Chauhan"/><br /><sub><b>Yuvraj Chauhan</b></sub></a><br /><a href="#content-Sabine91" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=Sabine91" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Rajesh144142"><img src="https://avatars.githubusercontent.com/u/82487522?v=4?s=50" width="50px;" alt="Rajesh kumar halder"/><br /><sub><b>Rajesh kumar halder</b></sub></a><br /><a href="#content-Rajesh144142" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=Rajesh144142" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=Rajesh144142" title="Documentation">📖</a></td>
      <td align="center"><a href="http://ishanmondal.me"><img src="https://avatars.githubusercontent.com/u/76674591?v=4?s=50" width="50px;" alt="Ishan Mondal"/><br /><sub><b>Ishan Mondal</b></sub></a><br /><a href="#content-ishan-im" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=ishan-im" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Apoorva08102000"><img src="https://avatars.githubusercontent.com/u/91753868?v=4?s=50" width="50px;" alt="Apoorva08102000"/><br /><sub><b>Apoorva08102000</b></sub></a><br /><a href="#content-Apoorva08102000" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=Apoorva08102000" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/apoorva1823000"><img src="https://avatars.githubusercontent.com/u/71769587?v=4?s=50" width="50px;" alt="Apoorva .S. Mehta"/><br /><sub><b>Apoorva .S. Mehta</b></sub></a><br /><a href="#content-apoorva1823000" title="Content">🖋</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/utopian-coder"><img src="https://avatars.githubusercontent.com/u/66299782?v=4?s=50" width="50px;" alt="Imran Biswas"/><br /><sub><b>Imran Biswas</b></sub></a><br /><a href="#content-utopian-coder" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=utopian-coder" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=utopian-coder" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/subrata-9999"><img src="https://avatars.githubusercontent.com/u/109057053?v=4?s=50" width="50px;" alt="Subrata Pramanik"/><br /><sub><b>Subrata Pramanik</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=subrata-9999" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=subrata-9999" title="Documentation">📖</a></td>
      <td align="center"><a href="https://br.linkedin.com/in/samuelbratifavarin"><img src="https://avatars.githubusercontent.com/u/17628602?v=4?s=50" width="50px;" alt="Samuel Favarin"/><br /><sub><b>Samuel Favarin</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SamuelBFavarin" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/commits?author=SamuelBFavarin" title="Code">💻</a></td>
      <td align="center"><a href="https://github.com/sahooabhipsa10"><img src="https://avatars.githubusercontent.com/u/99355886?v=4?s=50" width="50px;" alt="sahooabhipsa10"/><br /><sub><b>sahooabhipsa10</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=sahooabhipsa10" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Sahilrao09"><img src="https://avatars.githubusercontent.com/u/88286056?v=4?s=50" width="50px;" alt="Sahil Rao"/><br /><sub><b>Sahil Rao</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Sahilrao09" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Code-N-Bug"><img src="https://avatars.githubusercontent.com/u/103832013?v=4?s=50" width="50px;" alt="K K Chowdhury"/><br /><sub><b>K K Chowdhury</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Code-N-Bug" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=Code-N-Bug" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://manas6699.github.io/portfolio-website3.0/"><img src="https://avatars.githubusercontent.com/u/78929050?v=4?s=50" width="50px;" alt="Manas Baroi"/><br /><sub><b>Manas Baroi</b></sub></a><br /><a href="#example-manas6699" title="Examples">💡</a> <a href="https://github.com/shhossain/computer_science/commits?author=manas6699" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/kanaujiyaaditi"><img src="https://avatars.githubusercontent.com/u/94130073?v=4?s=50" width="50px;" alt="Aditi"/><br /><sub><b>Aditi</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=kanaujiyaaditi" title="Documentation">📖</a> <a href="#content-kanaujiyaaditi" title="Content">🖋</a></td>
      <td align="center"><a href="https://github.com/Talib-Hossain"><img src="https://avatars.githubusercontent.com/u/83373885?v=4?s=50" width="50px;" alt="Syed Talib Hossain"/><br /><sub><b>Syed Talib Hossain</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Talib-Hossain" title="Code">💻</a></td>
      <td align="center"><a href="https://github.com/JaiMehrotra02"><img src="https://avatars.githubusercontent.com/u/94130223?v=4?s=50" width="50px;" alt="Jai Mehrotra"/><br /><sub><b>Jai Mehrotra</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=JaiMehrotra02" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/commits?author=JaiMehrotra02" title="Code">💻</a></td>
      <td align="center"><a href="https://github.com/ShuvamBag"><img src="https://avatars.githubusercontent.com/u/82321197?v=4?s=50" width="50px;" alt="Shuvam Bag"/><br /><sub><b>Shuvam Bag</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ShuvamBag" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=ShuvamBag" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/AbhijitTurate"><img src="https://avatars.githubusercontent.com/u/46615905?v=4?s=50" width="50px;" alt="Abhijit Turate"/><br /><sub><b>Abhijit Turate</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AbhijitTurate" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=AbhijitTurate" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/Jayesh2812"><img src="https://avatars.githubusercontent.com/u/52153715?v=4?s=50" width="50px;" alt="Jayesh Deorukhkar"/><br /><sub><b>Jayesh Deorukhkar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Jayesh2812" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/SohamDey80"><img src="https://avatars.githubusercontent.com/u/93932583?v=4?s=50" width="50px;" alt="JC Shankar"/><br /><sub><b>JC Shankar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SohamDey80" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=SohamDey80" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Subrata-Pramanik"><img src="https://avatars.githubusercontent.com/u/86642230?v=4?s=50" width="50px;" alt="Subrata Pramanik"/><br /><sub><b>Subrata Pramanik</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Subrata-Pramanik" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=Subrata-Pramanik" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/imams12"><img src="https://avatars.githubusercontent.com/u/59444865?v=4?s=50" width="50px;" alt="Imam Suyuti"/><br /><sub><b>Imam Suyuti</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=imams12" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/rahulmangla28"><img src="https://avatars.githubusercontent.com/u/93324315?v=4?s=50" width="50px;" alt="genius_koder"/><br /><sub><b>genius_koder</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=rahulmangla28" title="Documentation">📖</a></td>
      <td align="center"><a href="https://www.altafshaikh.ml"><img src="https://avatars.githubusercontent.com/u/26015187?v=4?s=50" width="50px;" alt="Altaf Shaikh"/><br /><sub><b>Altaf Shaikh</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=altafshaikh" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/rajdeepdas2000"><img src="https://avatars.githubusercontent.com/u/53941109?v=4?s=50" width="50px;" alt="Rajdeep Das"/><br /><sub><b>Rajdeep Das</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=rajdeepdas2000" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/its-red-eagle"><img src="https://avatars.githubusercontent.com/u/77643994?v=4?s=50" width="50px;" alt="Vikash Patel"/><br /><sub><b>Vikash Patel</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=its-red-eagle" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/alwenpy"><img src="https://avatars.githubusercontent.com/u/94129388?v=4?s=50" width="50px;" alt="Arvind Srivastav"/><br /><sub><b>Arvind Srivastav</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=alwenpy" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Naprila"><img src="https://avatars.githubusercontent.com/u/85901005?v=4?s=50" width="50px;" alt="Manish Kr Prasad"/><br /><sub><b>Manish Kr Prasad</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Naprila" title="Documentation">📖</a></td>
      <td align="center"><a href="https://linktr.ee/mohit_kushwaha"><img src="https://avatars.githubusercontent.com/u/73400792?v=4?s=50" width="50px;" alt="MOHIT KUMAR KUSHWAHA"/><br /><sub><b>MOHIT KUMAR KUSHWAHA</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=KimtVak8143" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/DryHitman"><img src="https://avatars.githubusercontent.com/u/116108787?v=4?s=50" width="50px;" alt="DryHitman"/><br /><sub><b>DryHitman</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DryHitman" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/harshkulkarni17"><img src="https://avatars.githubusercontent.com/u/72391096?v=4?s=50" width="50px;" alt="Harsh Kulkarni"/><br /><sub><b>Harsh Kulkarni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=harshkulkarni17" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/ATREAY"><img src="https://avatars.githubusercontent.com/u/66585295?v=4?s=50" width="50px;" alt="Atreay  Kukanur"/><br /><sub><b>Atreay  Kukanur</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ATREAY" title="Documentation">📖</a></td>
      <td align="center"><a href="https://sreeharan.github.io"><img src="https://avatars.githubusercontent.com/u/62993067?v=4?s=50" width="50px;" alt="Sree Haran"/><br /><sub><b>Sree Haran</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SreeHaran" title="Documentation">📖</a></td>
      <td align="center"><a href="https://www.linkedin.com/in/auro-saswat-raj-d05m07y2003/"><img src="https://avatars.githubusercontent.com/u/83534307?v=4?s=50" width="50px;" alt="Auro Saswat Raj"/><br /><sub><b>Auro Saswat Raj</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=geeky-auro" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Aiyan-Faras"><img src="https://avatars.githubusercontent.com/u/55203889?v=4?s=50" width="50px;" alt="Aiyan Faras"/><br /><sub><b>Aiyan Faras</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Aiyan-Faras" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/commits?author=Aiyan-Faras" title="Code">💻</a></td>
      <td align="center"><a href="https://github.com/PriyanshiDavid"><img src="https://avatars.githubusercontent.com/u/71930453?v=4?s=50" width="50px;" alt="Priyanshi David"/><br /><sub><b>Priyanshi David</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=PriyanshiDavid" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/ishancode-dev"><img src="https://avatars.githubusercontent.com/u/115942220?v=4?s=50" width="50px;" alt="Ishan Mondal"/><br /><sub><b>Ishan Mondal</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ishancode-dev" title="Documentation">📖</a></td>
      <td align="center"><a href="http://expy.bio/NikhilShrivastava"><img src="https://avatars.githubusercontent.com/u/20610444?v=4?s=50" width="50px;" alt="Nikhil Shrivastava"/><br /><sub><b>Nikhil Shrivastava</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=NikhilShrivastava" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/deepshikha2708"><img src="https://avatars.githubusercontent.com/u/80972038?v=4?s=50" width="50px;" alt="deepshikha2708"/><br /><sub><b>deepshikha2708</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=deepshikha2708" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/rishiwardhan"><img src="https://avatars.githubusercontent.com/u/88772100?v=4?s=50" width="50px;" alt="L.RISHIWARDHAN"/><br /><sub><b>L.RISHIWARDHAN</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=rishiwardhan" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/DevTMK"><img src="https://avatars.githubusercontent.com/u/47377566?v=4?s=50" width="50px;" alt="Rahul RK"/><br /><sub><b>Rahul RK</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DevTMK" title="Documentation">📖</a></td>
      <td align="center"><a href="https://www.linkedin.com/company/nscc-ggv/"><img src="https://avatars.githubusercontent.com/u/82573863?v=4?s=50" width="50px;" alt="Nishant Wankhade"/><br /><sub><b>Nishant Wankhade</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=NishantWankhade" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/pritika163"><img src="https://avatars.githubusercontent.com/u/102177744?v=4?s=50" width="50px;" alt="pritika163"/><br /><sub><b>pritika163</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=pritika163" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/AnjumanHasan"><img src="https://avatars.githubusercontent.com/u/82674743?v=4?s=50" width="50px;" alt="Anjuman Hasan"/><br /><sub><b>Anjuman Hasan</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AnjumanHasan" title="Documentation">📖</a></td>
      <td align="center"><a href="https://linktr.ee/asthavarshney"><img src="https://avatars.githubusercontent.com/u/97240696?v=4?s=50" width="50px;" alt="Astha Varshney "/><br /><sub><b>Astha Varshney </b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Asthavarshneyy" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Gcettbdeveloper"><img src="https://avatars.githubusercontent.com/u/114204175?v=4?s=50" width="50px;" alt="Gcettbdeveloper"/><br /><sub><b>Gcettbdeveloper</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Gcettbdeveloper" title="Documentation">📖</a></td>
      <td align="center"><a href="https://elston-website.web.app"><img src="https://avatars.githubusercontent.com/u/66341506?v=4?s=50" width="50px;" alt="Elston Tan"/><br /><sub><b>Elston Tan</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Elstuhn" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/ShivanshDengla"><img src="https://avatars.githubusercontent.com/u/66008449?v=4?s=50" width="50px;" alt="Shivansh Dengla"/><br /><sub><b>Shivansh Dengla</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ShivanshDengla" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://www.tetricz.com"><img src="https://avatars.githubusercontent.com/u/49681400?v=4?s=50" width="50px;" alt="David Daniels"/><br /><sub><b>David Daniels</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Tetricz" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/ayushverma14"><img src="https://avatars.githubusercontent.com/u/65187507?v=4?s=50" width="50px;" alt="ayushverma14"/><br /><sub><b>ayushverma14</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ayushverma14" title="Documentation">📖</a></td>
      <td align="center"><a href="https://kontentkreator.tech"><img src="https://avatars.githubusercontent.com/u/70800059?v=4?s=50" width="50px;" alt="Pratik Rai"/><br /><sub><b>Pratik Rai</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=pratikkumar399" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/yash-ch"><img src="https://avatars.githubusercontent.com/u/66888087?v=4?s=50" width="50px;" alt="Yash"/><br /><sub><b>Yash</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=yash-ch" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/pranavyatnalkar"><img src="https://avatars.githubusercontent.com/u/84735288?v=4?s=50" width="50px;" alt="pranavyatnalkar"/><br /><sub><b>pranavyatnalkar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=pranavyatnalkar" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/jeremiaaxel"><img src="https://avatars.githubusercontent.com/u/57858415?v=4?s=50" width="50px;" alt="Jeremia Axel"/><br /><sub><b>Jeremia Axel</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=jeremiaaxel" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://in.linkedin.com/in/akhil-soni-9827181a1"><img src="https://avatars.githubusercontent.com/u/58397226?v=4?s=50" width="50px;" alt="Akhil Soni"/><br /><sub><b>Akhil Soni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=akhil-maker" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/DevZahraShahid"><img src="https://avatars.githubusercontent.com/u/111266434?v=4?s=50" width="50px;" alt="Zahra Shahid"/><br /><sub><b>Zahra Shahid</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DevZahraShahid" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Mihir20K"><img src="https://avatars.githubusercontent.com/u/112269999?v=4?s=50" width="50px;" alt="Mihir20K"/><br /><sub><b>Mihir20K</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Mihir20K" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/computerwala"><img src="https://avatars.githubusercontent.com/u/30777038?v=4?s=50" width="50px;" alt="Aman"/><br /><sub><b>Aman</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=computerwala" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/mauriallegrettiswnat"><img src="https://avatars.githubusercontent.com/u/71467262?v=4?s=50" width="50px;" alt="Mauricio Allegretti"/><br /><sub><b>Mauricio Allegretti</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=mauriallegrettiswnat" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Bruno-Vasconcellos-Betella"><img src="https://avatars.githubusercontent.com/u/57138664?v=4?s=50" width="50px;" alt="Bruno-Vasconcellos-Betella"/><br /><sub><b>Bruno-Vasconcellos-Betella</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Bruno-Vasconcellos-Betella" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://itdadakan.site"><img src="https://avatars.githubusercontent.com/u/62456215?v=4?s=50" width="50px;" alt="Febi Arifin"/><br /><sub><b>Febi Arifin</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=febiarifin" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/dinesh9-ai"><img src="https://avatars.githubusercontent.com/u/63300423?v=4?s=50" width="50px;" alt="Dineshwar Doddapaneni"/><br /><sub><b>Dineshwar Doddapaneni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=dinesh9-ai" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Dheerajsoni93"><img src="https://avatars.githubusercontent.com/u/82114565?v=4?s=50" width="50px;" alt="Dheeraj_Soni"/><br /><sub><b>Dheeraj_Soni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Dheerajsoni93" title="Documentation">📖</a></td>
      <td align="center"><a href="https://www.linkedin.com/in/ojash-kushwaha-791770185"><img src="https://avatars.githubusercontent.com/u/96474959?v=4?s=50" width="50px;" alt="Ojash Kushwaha"/><br /><sub><b>Ojash Kushwaha</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=OjashKush" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Sleep-lover"><img src="https://avatars.githubusercontent.com/u/82304155?v=4?s=50" width="50px;" alt="Laleet Borse"/><br /><sub><b>Laleet Borse</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Sleep-lover" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Wahaj-Raza"><img src="https://avatars.githubusercontent.com/u/103155321?v=4?s=50" width="50px;" alt="Wahaj Raza"/><br /><sub><b>Wahaj Raza</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Wahaj-Raza" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/WahajRaza1"><img src="https://avatars.githubusercontent.com/u/90937190?v=4?s=50" width="50px;" alt="WahajRaza1"/><br /><sub><b>WahajRaza1</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=WahajRaza1" title="Documentation">📖</a></td>
      <td align="center"><a href="https://ravencolevol.github.io"><img src="https://avatars.githubusercontent.com/u/44892121?v=4?s=50" width="50px;" alt="Ravi Lamkoti"/><br /><sub><b>Ravi Lamkoti</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=RavenColEvol" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/UperscuzziSchoolAcc"><img src="https://avatars.githubusercontent.com/u/111448336?v=4?s=50" width="50px;" alt="The One and Only Uper"/><br /><sub><b>The One and Only Uper</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=UperscuzziSchoolAcc" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/AdarshBajpai67"><img src="https://avatars.githubusercontent.com/u/95476086?v=4?s=50" width="50px;" alt="AdarshBajpai67"/><br /><sub><b>AdarshBajpai67</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AdarshBajpai67" title="Documentation">📖</a></td>
      <td align="center"><a href="http://deepakkharah.me"><img src="https://avatars.githubusercontent.com/u/42672761?v=4?s=50" width="50px;" alt="Deepak Kharah"/><br /><sub><b>Deepak Kharah</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Deepak-Kharah" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/sairohit360"><img src="https://avatars.githubusercontent.com/u/55144209?v=4?s=50" width="50px;" alt="sairohit360"/><br /><sub><b>sairohit360</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=sairohit360" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/sairohitzl"><img src="https://avatars.githubusercontent.com/u/86225259?v=4?s=50" width="50px;" alt="sairohitzl"/><br /><sub><b>sairohitzl</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=sairohitzl" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/RavalJinit"><img src="https://avatars.githubusercontent.com/u/72157334?v=4?s=50" width="50px;" alt="Raval Jinit"/><br /><sub><b>Raval Jinit</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=RavalJinit" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Vovka1759"><img src="https://avatars.githubusercontent.com/u/75867274?v=4?s=50" width="50px;" alt="Vovka1759"/><br /><sub><b>Vovka1759</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Vovka1759" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Nijin-P-S"><img src="https://avatars.githubusercontent.com/u/101330853?v=4?s=50" width="50px;" alt="Nijin"/><br /><sub><b>Nijin</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Nijin-P-S" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/avinilcode"><img src="https://avatars.githubusercontent.com/u/111761529?v=4?s=50" width="50px;" alt="Avinil Bedarkar"/><br /><sub><b>Avinil Bedarkar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=avinilcode" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/FercueNat"><img src="https://avatars.githubusercontent.com/u/113535859?v=4?s=50" width="50px;" alt="FercueNat"/><br /><sub><b>FercueNat</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=FercueNat" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://khareyash05.github.io/home/"><img src="https://avatars.githubusercontent.com/u/60147732?v=4?s=50" width="50px;" alt="Yash Khare"/><br /><sub><b>Yash Khare</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=khareyash05" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/ayushanand16"><img src="https://avatars.githubusercontent.com/u/96689639?v=4?s=50" width="50px;" alt="Ayush Anand"/><br /><sub><b>Ayush Anand</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ayushanand16" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/DharmaWarrior"><img src="https://avatars.githubusercontent.com/u/97218268?v=4?s=50" width="50px;" alt="DharmaWarrior"/><br /><sub><b>DharmaWarrior</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DharmaWarrior" title="Documentation">📖</a></td>
      <td align="center"><a href="https://linktr.ee/hitarthraval"><img src="https://avatars.githubusercontent.com/u/62943532?v=4?s=50" width="50px;" alt="Hitarth Raval"/><br /><sub><b>Hitarth Raval</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=hitarthraval" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/WiemBorchani"><img src="https://avatars.githubusercontent.com/u/52404192?v=4?s=50" width="50px;" alt="Wiem Borchani "/><br /><sub><b>Wiem Borchani </b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=WiemBorchani" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Kambo2320"><img src="https://avatars.githubusercontent.com/u/98479408?v=4?s=50" width="50px;" alt="Kamden Burke"/><br /><sub><b>Kamden Burke</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Kambo2320" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/denschiro"><img src="https://avatars.githubusercontent.com/u/6161324?v=4?s=50" width="50px;" alt="denschiro"/><br /><sub><b>denschiro</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=denschiro" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/nishat48"><img src="https://avatars.githubusercontent.com/u/109063023?v=4?s=50" width="50px;" alt="Nishat"/><br /><sub><b>Nishat</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=nishat48" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/mdfaizanahmed786"><img src="https://avatars.githubusercontent.com/u/85175130?v=4?s=50" width="50px;" alt="Mohammed Faizan Ahmed"/><br /><sub><b>Mohammed Faizan Ahmed</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=mdfaizanahmed786" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/manish831"><img src="https://avatars.githubusercontent.com/u/74316266?v=4?s=50" width="50px;" alt="Manish Agrahari"/><br /><sub><b>Manish Agrahari</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=manish831" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/lokesh-katari"><img src="https://avatars.githubusercontent.com/u/111894942?v=4?s=50" width="50px;" alt="Katari Lokeswara rao"/><br /><sub><b>Katari Lokeswara rao</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=lokesh-katari" title="Documentation">📖</a></td>
      <td align="center"><a href="https://g.dev/ZahraShahid"><img src="https://avatars.githubusercontent.com/u/65255043?v=4?s=50" width="50px;" alt="Zahra Shahid"/><br /><sub><b>Zahra Shahid</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ZahraShahid" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/glenntu15"><img src="https://avatars.githubusercontent.com/u/10324492?v=4?s=50" width="50px;" alt="Glenn Turner"/><br /><sub><b>Glenn Turner</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=glenntu15" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/vinayak9303"><img src="https://avatars.githubusercontent.com/u/55548976?v=4?s=50" width="50px;" alt="Vinayak godse"/><br /><sub><b>Vinayak godse</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=vinayak9303" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Satyajeetbh"><img src="https://avatars.githubusercontent.com/u/88246318?v=4?s=50" width="50px;" alt="Satyajeetbh"/><br /><sub><b>Satyajeetbh</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Satyajeetbh" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/P-Dhruva-Teja"><img src="https://avatars.githubusercontent.com/u/81409709?v=4?s=50" width="50px;" alt="Paidipelly Dhruvateja"/><br /><sub><b>Paidipelly Dhruvateja</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=P-Dhruva-Teja" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/helloausrine"><img src="https://avatars.githubusercontent.com/u/30316810?v=4?s=50" width="50px;" alt="helloausrine"/><br /><sub><b>helloausrine</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=helloausrine" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/SourabhJoshi209"><img src="https://avatars.githubusercontent.com/u/69594540?v=4?s=50" width="50px;" alt="SourabhJoshi209"/><br /><sub><b>SourabhJoshi209</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SourabhJoshi209" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://bio.link/stefantaitano"><img src="https://avatars.githubusercontent.com/u/85418632?v=4?s=50" width="50px;" alt="Stefan Taitano"/><br /><sub><b>Stefan Taitano</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=codewithfan" title="Documentation">📖</a></td>
      <td align="center"><a href="http://linkedin.com/in/anmspro"><img src="https://avatars.githubusercontent.com/u/33668152?v=4?s=50" width="50px;" alt="Abu Noman Md. Sakib"/><br /><sub><b>Abu Noman Md. Sakib</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=anmspro" title="Documentation">📖</a></td>
      <td align="center"><a href="http://skyrunner360.pythonanywhere.com"><img src="https://avatars.githubusercontent.com/u/44318840?v=4?s=50" width="50px;" alt="Rishi Mathur"/><br /><sub><b>Rishi Mathur</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=skyrunner360" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Atharv-Nalwade"><img src="https://avatars.githubusercontent.com/u/98139553?v=4?s=50" width="50px;" alt="Darky001"/><br /><sub><b>Darky001</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Atharv-Nalwade" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Retr0Sushi"><img src="https://avatars.githubusercontent.com/u/110653014?v=4?s=50" width="50px;" alt="himanshu"/><br /><sub><b>himanshu</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Retr0Sushi" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/kusumita29"><img src="https://avatars.githubusercontent.com/u/99873488?v=4?s=50" width="50px;" alt="Kusumita Ghose"/><br /><sub><b>Kusumita Ghose</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=kusumita29" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/Yash1107"><img src="https://avatars.githubusercontent.com/u/76468153?v=4?s=50" width="50px;" alt="Yashvi Patel"/><br /><sub><b>Yashvi Patel</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Yash1107" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/ArshadAriff"><img src="https://avatars.githubusercontent.com/u/113685884?v=4?s=50" width="50px;" alt="ArshadAriff"/><br /><sub><b>ArshadAriff</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ArshadAriff" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/ishashukla183"><img src="https://avatars.githubusercontent.com/u/93022787?v=4?s=50" width="50px;" alt="ishashukla183"/><br /><sub><b>ishashukla183</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ishashukla183" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/jhuynh06"><img src="https://avatars.githubusercontent.com/u/111946833?v=4?s=50" width="50px;" alt="jhuynh06"/><br /><sub><b>jhuynh06</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3Ajhuynh06" title="Bug reports">🐛</a> <a href="https://github.com/shhossain/computer_science/commits?author=jhuynh06" title="Tests">⚠️</a></td>
      <td align="center"><a href="http://asche.tech"><img src="https://avatars.githubusercontent.com/u/2975712?v=4?s=50" width="50px;" alt="Andrew Asche"/><br /><sub><b>Andrew Asche</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=andrewasche" title="Documentation">📖</a></td>
      <td align="center"><a href="http://nateonmission.github.io"><img src="https://avatars.githubusercontent.com/u/37854313?v=4?s=50" width="50px;" alt="J. Nathan Allen"/><br /><sub><b>J. Nathan Allen</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3Anateonmission" title="Bug reports">🐛</a></td>
    </tr>
    <tr>
      <td align="center"><a href="https://github.com/Sayed-Afnan-Khazi"><img src="https://avatars.githubusercontent.com/u/83779299?v=4?s=50" width="50px;" alt="Sayed Afnan Khazi"/><br /><sub><b>Sayed Afnan Khazi</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Sayed-Afnan-Khazi" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Technic143"><img src="https://avatars.githubusercontent.com/u/117275755?v=4?s=50" width="50px;" alt="Technic143"/><br /><sub><b>Technic143</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Technic143" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/snowflake1201"><img src="https://avatars.githubusercontent.com/u/56119216?v=4?s=50" width="50px;" alt="Pin Yuan Wang"/><br /><sub><b>Pin Yuan Wang</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=snowflake1201" title="Code">💻</a></td>
    </tr>
  </tbody>
</table>

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->
<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->

[![All Contributors](https://img.shields.io/badge/all_contributors-104-orange.svg?style=flat-square)](#contributors)
<!-- ALL-CONTRIBUTORS-BADGE:END -->
