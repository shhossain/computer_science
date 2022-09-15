# Computer Science

## Table of Contents
- [Introduction](#introduction)
- [Electronic Computing](#electronic-computing)
- [Boolean Logic](#boolean-logic)
- [Number Systems](#number-systems)
- [Registers and RAM](#registers-and-ram)
- [Central Processing Unit(CPU)](#central-processing-unitcpu)
- [Instruction and Program](#instruction-and-program)
- [Programming Language](#programming-language)
- [Data Types](#data-types)
- [Statements and Functions](#statement-and-function)
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

## [Electronic Computing](#electronic-computing)
A device that computes, especially a programmable electronic machine that performs high-speed mathematical or logical operations or that assembles, stores, correlates, or otherwise processes information.

## [Boolean Logic](Boolean%20Logic/readme.md)
Boolean logic is a branch of mathematics that deals with the values of truth and falsehood. It is a system of logic that uses only two values, 0 and 1, to represent false and true, respectively. It is also known as Boolean algebra, named after George Boole, who first described it in 1854.
### Common Boolean Operators
| Operator | Name | Description |
|:--------:|:----:|:-----------:|
| ! | NOT | Negates the value of the operand. |
| && | AND | Returns true if both operands are true. |
| \|\| | OR | Returns true if either operand is true. |

## [Number Systems](Number%20System/readme.md)
A number system is a mathematical system for expressing numbers. A number system consists of a set of symbols that are used to represent numbers, and a set of rules for manipulating those symbols. The symbols used in a number system are called numerals. The symbols used in a number system are called numerals. The symbols used in a number system are called numerals.

### Types of Number Systems
- [Binary Number System](Number%20System/readme.md#binary-number-system)
- [Octal Number System](Number%20System/readme.md#octal-number-system)
- [Decimal Number System](Number%20System/readme.md#decimal-number-system)
- [Hexadecimal Number System](Number%20System/readme.md#hexadecimal-number-system)

## [Registers and RAM](#registers-and-ram)
Registers are small amounts of high-speed memory contained within the CPU. They are used by the processor to store small amounts of data that are needed during processing. Whereas RAM stands for random-access memory. It is essentially short term memory where data is stored as the processor needs it.

## [Central Processing Unit(CPU)](#central-processing-unit)
A central processing unit (CPU) is an important part of every computer. The CPU sends signals to control the other parts of the computer, almost like how a brain controls a body.
The CPU is an electronic machine that works on a list of computer things to do, called instructions. It reads the list of instructions and runs (executes) each one in order. A list of instructions that a CPU can run is a computer program.

## [Instruction and Program](#instruction-and-program)
In computer science, an instruction is a single operation of a processor defined by the processor instruction set. And a  computer program is a list of instructions that tell a computer what to do. Everything a computer does is done by using a computer program. Programs stored in the memory of a computer ("internal programming") let the computer do one thing after another, even with breaks in between.

## [Programming Language](#programming-language)
A programming language is any set of rules that converts strings, or graphical program elements in the case of visual programming languages, to various kinds of machine code output.[citation needed] Programming languages are one kind of computer language, and are used in computer programming to implement algorithms.

## [Data Types](#data-types)
A data type, in programming, is a classification that specifies which type of value a variable has and what type of mathematical, relational or logical operations can be applied to it without causing an error.

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
Not added

## [Software Engineering](Software%20Engineering/readme.md)
Not added

## [Integrated Circuits](Integrated%20Circuits/readme.md)
Not added

## [Operating Systems](Operating%20Systems/readme.md)
Not added

## [Memory and Storage](Memory%20and%20Storage/readme.md)
Not added

## [File System](File%20System/readme.md)
In computing, file system or filesystem (often abbreviated to fs) is a method and data structure that the operating system uses to control how data is stored and retrieved. Without a file system, data placed in a storage medium would be one large body of data with no way to tell where one piece of data stopped and the next began, or where any piece of data was located when it was time to retrieve it. By separating the data into pieces and giving each piece a name, the data is easily isolated and identified. Taking its name from the way a paper-based data management system is named, each group of data is called a "file". The structure and logic rules used to manage the groups of data and their names is called a "file system."

There are many kinds of file systems, each with unique structure and logic, properties of speed, flexibility, security, size and more. Some file systems have been designed to be used for specific applications. For example, the ISO 9660 file system is designed specifically for optical discs.

File systems can be used on many types of storage devices using various media. As of 2019, hard disk drives have been key storage devices and are projected to remain so for the foreseeable future. Other kinds of media that are used include SSDs, magnetic tapes, and optical discs. In some cases, such as with tmpfs, the computer's main memory (random-access memory, RAM) is used to create a temporary file system for short-term use.

Some file systems are used on local data storage devices; others provide file access via a network protocol (for example, NFS, SMB, or 9P clients). Some file systems are "virtual", meaning that the supplied "files" (called virtual files) are computed on request (such as procfs and sysfs) or are merely a mapping into a different file system used as a backing store. The file system manages access to both the content of files and the metadata about those files. It is responsible for arranging storage space; reliability, efficiency, and tuning with regard to the physical storage medium are important design considerations.

###How file systems work
A file system stores and organizes data and can be thought of as a type of index for all the data contained in a storage device. These devices can include hard drives, optical drives and flash drives.

File systems specify conventions for naming files, including the maximum number of characters in a name, which characters can be used and, in some systems, how long the file name suffix can be. In many file systems, file names are not case sensitive.

Along with the file itself, file systems contain information such as the size of the file, as well as its attributes, location and hierarchy in the directory in the metadata. Metadata can also identify free blocks of available storage on the drive and how much space is available.

A file system also includes a format to specify the path to a file through the structure of directories. A file is placed in a directory -- or a folder in Windows OS -- or subdirectory at the desired place in the tree structure. PC and mobile OSes have file systems in which files are placed somewhere in a hierarchical tree structure.

Before files and directories are created on the storage medium, partitions should be put into place. A partition is a region of the hard disk or other storage that the OS manages separately. One file system is contained in the primary partition, and some OSes allow for multiple partitions on one disk. In this situation, if one file system gets corrupted, the data in a different partition will be safe.

###Types of file systems
There are a number of types of file systems, all with different logical structures and properties, such as speed and size. The type of file system can differ by OS and the needs of that OS. The three most common PC operating systems are Microsoft Windows, Mac OS X and Linux. Mobile OSes include Apple iOS and Google Android.

Major file systems include the following:
- File allocation table (FAT) is supported by the Microsoft Windows OS. FAT is considered simple and reliable, and it is modeled after legacy file systems. FAT was designed in 1977 for floppy disks, but was later adapted for hard disks. While efficient and compatible with most current OSes, FAT cannot match the performance and scalability of more modern file systems.

- Global file system (GFS) is a file system for the Linux OS, and it is a shared disk file system. GFS offers direct access to shared block storage and can be used as a local file system.

- GFS2 is an updated version with features not included in the original GFS, such as an updated metadata system. Under the terms of the GNU General Public License, both the GFS and GFS2 file systems are available as free software.

- Hierarchical file system (HFS) was developed for use with Mac operating systems. HFS can also be referred to as Mac OS Standard, and it was succeeded by Mac OS Extended. Originally introduced in 1985 for floppy and hard disks, HFS replaced the original Macintosh file system. It can also be used on CD-ROMs.

- The NT file system -- also known as the New Technology File System (NTFS) -- is the default file system for Windows products from Windows NT 3.1 OS onward. Improvements from the previous FAT file system include better metadata support, performance and use of disk space. NTFS is also supported in the Linux OS through a free, open-source NTFS driver. Mac OSes have read-only support for NTFS.

- Universal Disk Format (UDF) is a vendor-neutral file system used on optical media and DVDs. UDF replaces the ISO 9660 file system and is the official file system for DVD video and audio as chosen by the DVD Forum.

