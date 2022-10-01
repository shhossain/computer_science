# Computer Science

## Table of Contents

- [Introduction](#introduction)
- [Electronic Computing](#electronic-computing)
- [Boolean Logic](#boolean-logic)
- [Number Systems](#number-systems)
- [Central Processing Unit(CPU)](#central-processing-unitcpu)
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
- [Operating Systems](#operating-systems)
- [Memory and Storage](#memory-and-storage)
- [File System](#file-system)

## Introduction
Computer science is the study of computers and computing as well as their theoretical and practical applications. Computer science applies the principles of mathematics, engineering, and logic to a plethora of functions, including algorithm formulation, software and hardware development, and artificial intelligence.

## [Electronic Computing](Not-Added)
A device that computes, especially a programmable electronic machine that performs high-speed mathematical or logical operations or that assembles, stores, correlates, or otherwise processes information.

## [Boolean Logic](Boolean%20Logic/readme.md)
Boolean logic is a branch of mathematics that deals with the values of truth and falsehood. It is a system of logic that uses only two values, 0 and 1, to represent false and true, respectively. It is also known as Boolean algebra, named after George Boole, who first described it in 1854.

### Common Boolean Operators
| Operator | Name |               Description               |
| :------: | :--: | :-------------------------------------: |
|    !     | NOT  |    Negates the value of the operand.    |
|    &&    | AND  | Returns true if both operands are true. |
|   \|\|   |  OR  | Returns true if either operand is true. |

## [Number Systems](Number%20System/readme.md#number-systems)
Number systems are a mathematical system for expressing numbers. A number system consists of a set of symbols that are used to represent numbers, and a set of rules for manipulating those symbols. The symbols used in a number system are called numerals.

### [Types of Number Systems](Number%20System/readme.md#types-of-number-systems)
- [Positional Numeral System](Number%20System/readme.md#positional-numeral-system)
- [Sign-value Notation System](Number%20System/readme.md#sign-value-notation-system)

### [Common Positional Number Systems](Number%20System/readme.md#common-positional-number-systems)
- [Binary](Number%20System/readme.md#binary)
- [Octal](Number%20System/readme.md#octal)
- [Decimal](Number%20System/readme.md#decimal)
- [Hexadecimal](Number%20System/readme.md#hexadecimal)


### Importance Of Binary
Binary is a base-2 number system invented by Gottfried Leibniz that's made up of only two numbers or digits: 0 (zero) and 1 (one). This numbering system is the basis for all binary code, which is used to write digital data such as the computer processor instructions used every day.The 0s and 1s in binary represent OFF or ON, respectively. In a transistor, a "0" represents no flow of electricity, and "1" represents electricity being allowed to flow. In this way, numbers are represented physically inside the computing device, permitting calculations.

Binary is still the primary language for computers and used with electronics and computer hardware for the following reasons.

-> It is a simple and elegant design.
-> Binary's 0 and 1 method is quick to detect an electrical signal's off (false) or on (true) state.
-> Having only two states placed far apart in an electrical signal makes it less susceptible to electrical interference.
-> The positive and negative poles of magnetic media are quickly translated to binary.
-> Binary is the most efficient way to control logic circuits.



## [Central Processing Unit(CPU)](https://www.geeksforgeeks.org/central-processing-unit-cpu/)
A central processing unit (CPU) is an important part of every computer. The CPU sends signals to control the other parts of the computer, almost like how a brain controls a body.
The CPU is an electronic machine that works on a list of computer things to do, called instructions. It reads the list of instructions and runs (executes) each one in order. A list of instructions that a CPU can run is a computer program. A CPU can process more than one instruction at a time on sections called Cores. A CPU with four cores may process four programs at once.
The CPU itself is made of three main components. They are:
1) Memory or storage Unit
2) Control Unit
3) Arithmetic and Logic unit (ALU)


## [Registers, Cache and RAM](Not-Added)
Registers are small amounts of high-speed memory contained within the CPU. They are used by the processor to store small amounts of data that are needed during processing. A CPU may have several sets of registers that are called Cores. Larger amounds of data may be stored in Cache (pronounced like cash).  This is very fast memory that is located on the same integrated circuit as the registers. It is used for data frequently needed as the program runs. Still larger amounts of data may be stored in RAM. These are integrated circuts not part of the CPU. RAM stands for random-access memory.  It is essentially data and instructions that have been moved from disk storage and held until the processor needs it.

## [Instruction and Program](Not-Added)
In computer science, an instruction is a single operation of a processor defined by the processor instruction set. And a computer program is a list of instructions that tell a computer what to do. Everything a computer does is done by using a computer program. Programs stored in the memory of a computer ("internal programming") let the computer do one thing after another, even with breaks in between.

## [Programming Language](Not-Added)
A programming language is any set of rules that converts strings, or graphical program elements in the case of visual programming languages, to various kinds of machine code output.[citation needed] Programming languages are one kind of computer language, and are used in computer programming to implement algorithms.

Some Languages Include:
- Python
- Java
- C++
- C
- C#

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

## [Statements and Functions](Not-Added)
In computer programming, a statement is a syntactic unit of an imperative programming language that expresses some action to be carried out. A program written in such a language is formed by a sequence of one or more statements. A statement may have internal components (e.g., expressions).

A function is a block of statements that performs a specific task. Functions accept data, process it, and return a result. Functions are written primarily to support the concept of reusability. Once a function is written, it can be called easily, without having to write the same code again and again.

Different functional languages use different syntax to write a function.

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
Algorithms are the sets of steps necessary to complete computation - they are at the heart of what our devices actually do. And this isn’t a new concept. Since the development of math itself algorithms have been needed to help us complete tasks more efficiently, but today we’re going to take a look a couple modern computing problems like sorting and graph search, and show how we’ve made them more efficient so you can more easily find cheap airfare or map directions to Winterfell... or like a restaurant or something.

### [Time Complexity](Algorithms/Time%20Complexity/readme.md)
The time complexity of an algorithm estimates how much time the algorithm will use for some input. The idea is to represent the efficiency as a function whose parameter is the size of the input. By calculating the time complexity, we can find out whether the algorithm is fast enough without implementing it.

### [Sorting](Algorithms/Sorting/readme.md)
Sorting is the process of arranging a list of items in a particular order. For example, if you had a list of names, you might want to sort them alphabetically. Or if you had a list of numbers, you might want to put them in order from smallest to largest. Sorting is a common task, and it’s one that we can do in many different ways.

### [Graph Search](Algorithms/Graph%20Search/readme.md)
Graph search is the process of searching through a graph to find a particular node. A graph is a data structure that consists of a finite (and possibly mutable) set of vertices or nodes or points, together with a set of unordered pairs of these vertices for an undirected graph or a set of ordered pairs for a directed graph. These pairs are known as edges, arcs, or lines for an undirected graph and as arrows, directed edges, directed arcs, or directed lines for a directed graph. The vertices may be part of the graph structure, or may be external entities represented by integer indices or references. Graphs are one of the most useful data structures for many real-world applications. Graphs are used to model pairwise relations between objects. For example, the airline route network is a graph in which the cities are the vertices and the flight routes are the edges. Graphs are also used to represent networks. The Internet can be modeled as a graph in which the computers are the vertices and the links between computers are the edges. Graphs are also used in social networks like linkedIn, Facebook. In fact, graphs are used to represent many real-world applications: computer networks, circuit design, and aeronautical scheduling to name just a few.

### Dynamic Programming
Dynamic programming is both a mathematical optimization method and a computer programming method. The method was developed by Richard Bellman in the 1950s and has found applications in numerous fields, from aerospace engineering to economics. In both contexts it refers to simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manner. While some decision problems cannot be taken apart this way, decisions that span several points in time do often break apart recursively. Likewise, in computer science, if a problem can be solved optimally by breaking it into sub-problems and then recursively finding the optimal solutions to the sub-problems, then it is said to have optimal substructure. Dynamic programming is one way to solve problems with these properties. The process of breaking a complicated problem down into simpler sub-problems is called "divide and conquer".

### Greedy Algorithms
Greedy algorithms are a simple, intuitive class of algorithms that can be used to find the optimal solution to some optimization problems. They are called greedy because at each step they make the choice that seems best at that moment. This means that greedy algorithms do not guarantee to return the globally optimal solution, but instead make locally optimal choices in the hope of finding a global optimum. Greedy algorithms are used for optimization problems. An optimization problem can be solved using Greedy if the problem has the following property: at every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem.

### Backtracking
Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time (by time, here, is referred to the time elapsed till reaching any level of the search tree).

### Branch and Bound
Branch and bound is a general technique for solving combinatorial optimization problems. It is a systematic enumeration technique that reduces the number of candidate solutions by using the problem's structure to eliminate candidate solutions that cannot possibly be optimal. It is a divide and conquer algorithm that is used to solve optimization problems. It is a systematic enumeration technique that reduces the number of candidate solutions by using the problem's structure to eliminate candidate solutions that cannot possibly be optimal. It is a divide and conquer algorithm that is used to solve optimization problems. It is a systematic enumeration technique that reduces the number of candidate solutions by using the problem's structure to eliminate candidate solutions that cannot possibly be optimal. It is a divide and conquer algorithm that is used to solve optimization problems.



## [Alan Turing](Alan%20Turing/readme.md)
Alan Turing, (born June 23, 1912, London, Eng.—died June 7, 1954, Wilmslow, Cheshire), English mathematician and logician. He studied at the University of Cambridge and at Princeton’s Institute for Advanced Study. In his seminal 1936 paper “On Computable Numbers,” he proved that there cannot exist any universal algorithmic method of determining truth in mathematics and that mathematics will always contain undecidable (as opposed to unknown) propositions. That paper also introduced the Turing machine. He believed that computers eventually would be capable of thought indistinguishable from that of a human and proposed a simple test (see Turing test) to assess this capability. His papers on the subject are widely acknowledged as the foundation of research in artificial intelligence. He did valuable work in cryptography during World War II, playing an important role in breaking the Enigma code used by Germany for radio communications. After the war he taught at the University of Manchester and began work on what is now known as artificial intelligence. In the midst of this groundbreaking work, Turing was found dead in his bed, poisoned by cyanide. His death followed his arrest for a homosexual act (then a crime) and sentence of 12 months of hormone “therapy.

Following a public campaign in 2009, the British Prime Minister Gordon Brown made an official public apology on behalf of the British government for "the appalling way [Turing] was treated". Queen Elizabeth II granted a posthumous pardon in 2013. The term "Alan Turing law" is now used informally to refer to a 2017 law in the United Kingdom that retroactively pardoned men cautioned or convicted under historical legislation that outlawed homosexual acts.[15]

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

## [Operating Systems](Operating%20Systems/readme.md)
An operating system (or OS for short) acts as an intermediary between the user of a computer and computer hardware. The purpose of an operating system is to provide an environment in which an user can execute programs conveniently and efficiently.
An operating system is a software that manages computer hardware. The hardware must provide appropriate mechanisms to ensure the correct operation of the computer system and to prevent user programs from interfering with the proper operation of the system.
An even more common definition is that the operating system is the one program running at all times on the computer (usually called the kernel), with all else being application programs.

### Functions of an OS
- **Convenience**: An OS makes a computer more convenient to use.
- **Efficiency**: An OS allows the computer system resources to be used efficiently.
- **Ability to Evolve**: An OS should be constructed in such a way as to permit the effective development, testing, and introduction of new system functions at the same time without interfering with service.
- **Throughput**: An OS should be constructed so that It can give maximum throughput(Number of tasks per unit time).

### Major functionalities of an OS
- **Resource Management**: When parallel accessing happens in the OS means when multiple users are accessing the system the OS works as Resource Manager, Its responsibility is to provide hardware to the user. It decreases the load in the system.
- **Process Management**: It includes various tasks like scheduling, termination of the process. OS manages various tasks at a time. Here CPU Scheduling happens means all the tasks would be done by the many algorithms that use for scheduling.
- **Storage Management**: The file system mechanism used for the management of the storage. NIFS, CFS, CIFS, NFS, etc. are some file systems. All the data stores in various tracks of Hard disks that all managed by the storage manager. It included Hard Disk.
- **Memory Management**: Refers to the management of primary memory. The operating system has to keep track, how much memory has been used and by whom. It has to decide which process needs memory space and how much. OS also has to allocate and deallocate the memory space.
- **Security/Privacy Management**: Privacy is also provided by the Operating system by means of passwords so that unauthorized applications can’t access programs or data. For example, Windows uses **_Kerberos_** authentication to prevent unauthorized access to data.

## [Memory and Storage](Memory%20and%20Storage/readme.md)
If you are unsure about the difference between memory and storage in computers, this article covers the differences between the two.

### Memory
The term _memory_ refers to the component within your computer that allows for short-term data access. You may recognise this component as DRAM, or dynamic random-access memory. Your computer performs many operations by accessing data stored in its short-term memory. Some examples of such operations include editing a document, loading applications and browsing the internet. The speed and performance of your system depends on the amount of memory that is installed on your computer.

If you have a desk and a filing cabinet, the desk represents the memory of your computer. Items you need to use immediately are kept on your desk for easy access. However, not much can be stored on a desk due to its size limitations.

### Storage
Whereas memory refers to the location of short-term data, _storage_ is the component within your computer that allows you to store and access data on a long-term basis. Usually, storage comes in the form of a solid-state drive or a hard drive. Storage houses your applications, operating system and files for an indefinite period. Computers need to write information and read it from the storage system, so the speed of the storage determines how fast your system can boot up, load and access what you’ve saved.

While the desk represents the computer's memory, the filing cabinet represents the storage of your computer. It holds items that need to be saved and stored but are not necessarily needed for immediate access. The size of the filing cabinet means that it can hold a large number of things.

**An important distinction** between memory and storage is that memory clears when the computer is turned off. On the other hand, storage remains intact no matter how many times you shut off your computer. Therefore, in the desk and filing cabinet analogy, any files that are left on your desk when you leave the office will be thrown away. Everything in your filing cabinet will remain.

## [File System](File%20System/readme.md)
In computing, file system or filesystem (often abbreviated to fs) is a method and data structure that the operating system uses to control how data is stored and retrieved. Without a file system, data placed in a storage medium would be one large body of data with no way to tell where one piece of data stopped and the next began, or where any piece of data was located when it was time to retrieve it. By separating the data into pieces and giving each piece a name, the data is easily isolated and identified. Taking its name from the way a paper-based data management system is named, each group of data is called a "file". The structure and logic rules used to manage the groups of data and their names is called a "file system."

There are many kinds of file systems, each with unique structure and logic, properties of speed, flexibility, security, size and more. Some file systems have been designed to be used for specific applications. For example, the ISO 9660 file system is designed specifically for optical discs.

File systems can be used on many types of storage devices using various media. As of 2019, hard disk drives have been key storage devices and are projected to remain so for the foreseeable future. Other kinds of media that are used include SSDs, magnetic tapes, and optical discs. In some cases, such as with tmpfs, the computer's main memory (random-access memory, RAM) is used to create a temporary file system for short-term use.

Some file systems are used on local data storage devices; others provide file access via a network protocol (for example, NFS, SMB, or 9P clients). Some file systems are "virtual", meaning that the supplied "files" (called virtual files) are computed on request (such as procfs and sysfs) or are merely a mapping into a different file system used as a backing store. The file system manages access to both the content of files and the metadata about those files. It is responsible for arranging storage space; reliability, efficiency, and tuning with regard to the physical storage medium are important design considerations.

### How file systems work
A file system stores and organizes data and can be thought of as a type of index for all the data contained in a storage device. These devices can include hard drives, optical drives and flash drives.

File systems specify conventions for naming files, including the maximum number of characters in a name, which characters can be used and, in some systems, how long the file name suffix can be. In many file systems, file names are not case sensitive.

Along with the file itself, file systems contain information such as the size of the file, as well as its attributes, location and hierarchy in the directory in the metadata. Metadata can also identify free blocks of available storage on the drive and how much space is available.

A file system also includes a format to specify the path to a file through the structure of directories. A file is placed in a directory -- or a folder in Windows OS -- or subdirectory at the desired place in the tree structure. PC and mobile OSes have file systems in which files are placed somewhere in a hierarchical tree structure.

Before files and directories are created on the storage medium, partitions should be put into place. A partition is a region of the hard disk or other storage that the OS manages separately. One file system is contained in the primary partition, and some OSes allow for multiple partitions on one disk. In this situation, if one file system gets corrupted, the data in a different partition will be safe.

### Types of file systems
There are a number of types of file systems, all with different logical structures and properties, such as speed and size. The type of file system can differ by OS and the needs of that OS. The three most common PC operating systems are Microsoft Windows, Mac OS X and Linux. Mobile OSes include Apple iOS and Google Android.

Major file systems include the following:

- File allocation table (FAT) is supported by the Microsoft Windows OS. FAT is considered simple and reliable, and it is modeled after legacy file systems. FAT was designed in 1977 for floppy disks, but was later adapted for hard disks. While efficient and compatible with most current OSes, FAT cannot match the performance and scalability of more modern file systems.

- Global file system (GFS) is a file system for the Linux OS, and it is a shared disk file system. GFS offers direct access to shared block storage and can be used as a local file system.

- GFS2 is an updated version with features not included in the original GFS, such as an updated metadata system. Under the terms of the GNU General Public License, both the GFS and GFS2 file systems are available as free software.

- Hierarchical file system (HFS) was developed for use with Mac operating systems. HFS can also be referred to as Mac OS Standard, and it was succeeded by Mac OS Extended. Originally introduced in 1985 for floppy and hard disks, HFS replaced the original Macintosh file system. It can also be used on CD-ROMs.

- The NT file system -- also known as the New Technology File System (NTFS) -- is the default file system for Windows products from Windows NT 3.1 OS onward. Improvements from the previous FAT file system include better metadata support, performance and use of disk space. NTFS is also supported in the Linux OS through a free, open-source NTFS driver. Mac OSes have read-only support for NTFS.

- Universal Disk Format (UDF) is a vendor-neutral file system used on optical media and DVDs. UDF replaces the ISO 9660 file system and is the official file system for DVD video and audio as chosen by the DVD Forum.
