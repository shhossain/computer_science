# Operating Systems
An operating system (or OS for short) acts as an intermediary between a computer user and computer hardware. The purpose of an operating system is to provide an environment in which a user can execute programs conveniently and efficiently.
An operating system is software that manages computer hardware. The hardware must provide appropriate mechanisms to ensure the correct operation of the computer system and to prevent user programs from interfering with the proper operation of the system.
An even more common definition is that the operating system is the one program running at all times on the computer (usually called the kernel), with all else being application programs.

Operating systems can be viewed from two viewpoints: resource managers and extended machines. In the resource-manager view, the operating system's job is to
manage the different parts of the system efficiently. In the extended-machine view,the job of the system is to provide the users with abstractions that are more convenient to use than the actual machine. These include processes, address spaces,and files.

Operating systems have a long history, from when they replaced the operator to modern multiprogramming systems. 
Highlights include early batch systems, multiprogramming systems, and personal computer systems.
Since operating systems interact closely with the hardware, some knowledge
of computer hardware is helpful in understanding them. Computers are built up of
processors, memories, and I/O devices. These parts are connected by buses.
The basic concepts on which all operating systems are built are processes,
memory management, I/O management, the file system, and security. The heart of any operating system is the set of system calls that it can handle.
These tell what the operating system does.

## Operating system as a resource manager
The operating system manages all the pieces of a complex system. Modern computers consist of processors, memories, timers, disks, mice, 
network interfaces, printers, and a wide variety of other devices. 
In the bottom-up view, the job of the operating system is to provide for an orderly and controlled allocation of the
processors, memories, and I/O devices among the various programs wanting them.
Modern operating systems allow multiple programs to be in memory and run
simultaneously. Imagine what would happen if three programs running on some
computer all tried to print their output simultaneously on the same printer.
The result would be utter chaos. The operating system can bring order to the potential chaos 
by buffering all the output destined for the printer on the disk. 
When one program is finished, the operating system can
then copy its output from the disk file where it has been stored for the printer,
while at the same time, the other program can continue generating more output,
oblivious to the fact that the output is not going to the printer (yet).
When a computer (or network) has more than one user, the need to manage
and protect the memory, I/O devices, and other resources even more since the
users might otherwise interfere with one another. In addition, users often need to
share not only hardware but also information (files, databases, etc.). In short,
this view of the operating system holds that its primary task is to keep track of
which programs are using which resource, to grant resource requests, to account
for usage and to mediate conflicting requests from different programs and users.

## Operating system as an extended machine
The architecture of most computers at the machine-language level is primitive and awkward to
program, especially for input/output. To make this point more concrete, consider
modern SATA (Serial ATA) hard disks used on most computers. What a programmer would have to know to use the disk. 
Since then, the interface has been revised multiple times and is more complicated than it was in
2007. No sane programmer would want to deal with this disk at the hardware level. 
Instead, a piece of software called a disk driver deals with the hardware and provides an interface to read and write disk blocks, 
without getting into the details. 
Operating systems contain many drivers for controlling I/O devices.
But even this level is much too low for most applications. For this reason, all
operating systems provide yet another layer of abstraction for using disks: files.
Using this abstraction, programs can create, write, and read files without dealing with the messy details of how the hardware works.
This abstraction is the key to managing all this complexity. Good stereotypes
turn a nearly impossible task into two manageable ones. The first is defining and
implementing the abstractions. The second is using these abstractions to solve the
problem at hand.

## History of Operating Systems
- **First Generation (1945-55)**: Little progress was achieved in building digital computers after Babbage's disastrous efforts until the World War II era. At Iowa State University, Professor John Atanasoff and his graduate student Clifford Berry created what is today recognized as the first operational digital computer. Konrad Zuse in Berlin constructed the Z3 computer using electromechanical relays around the same time. The Mark I was created by Howard Aiken at Harvard, the Colossus by a team of scientists at Bletchley Park in England, and the ENIAC by William Mauchley and his doctoral student J. Presper Eckert at the University of Pennsylvania in 1944.

- **Second Generation (1955-65)**: The transistor's invention in the middle of the 1950s drastically altered the situation. Computers became dependable enough to be manufactured and sold to paying customers with the assumption that they would keep working long enough to conduct some meaningful job. Mainframes, as these machines are now known, were kept locked up in huge, particularly air-conditioned computer rooms, with teams of qualified operators to manage them. Only huge businesses, significant government entities, or institutions could afford the price tag of several million dollars.

- **Third Generation (1965-80)**: In comparison to second-generation computers, which were constructed from individual transistors, the IBM 360 was the first major computer line to employ (small-scale) ICs (Integrated Circuits). As a result, it offered a significant price/performance benefit. It was an instant hit, and all the other big manufacturers quickly embraced the concept of a family of interoperable computers. All software, including the OS/360 operating system, was supposed to be compatible with all models in the original design. It had to run on extremely big systems, which frequently replaced 7094s for heavy computation and weather forecasting, and tiny systems, which frequently merely replaced 1401s for transferring cards to tape. Both systems with few peripherals and systems with many peripherals needed to function well with it. It had to function both in professional and academic settings. Above all, it had to be effective for each of these many applications.

- **Fourth Generation (1980-Present)**: The personal computer era began with the creation of LSI (Large Scale Integration) circuits, processors with thousands of transistors on a square centimeter of silicon. Although personal computers, originally known as microcomputers, did not change significantly in architecture from minicomputers of the PDP-11 class, they did differ significantly in price.

- **Fifth Generation (1990-Present)**: People have yearned for a portable communication gadget ever since detective Dick Tracy in the 1940s comic strip began conversing with his "two-way radio wristwatch." In 1946, a real mobile phone made its debut, and it weighed about 40 kilograms. The first real portable phone debuted in the 1970s and was incredibly lightweight at about one kilogram. It was jokingly referred to as "the brick." Soon, everyone was clamoring for one.

## Functions of an OS
- **Convenience**: An OS makes a computer more convenient to use.
- **Efficiency**: An OS allows the computer system resources to be used efficiently.
- **Ability to Evolve**: An OS should be constructed in such a way as to permit the effective development, testing, and introduction of new system functions at the same time without interfering with service.
- **Throughput**: An OS should be constructed so that It can give maximum throughput(Number of tasks per unit time).

## Major functionalities of an OS
- **Resource Management**: When parallel accessing happens in the OS, it means when multiple users are accessing the system, the OS works as a Resource Manager. Its responsibility is to provide hardware to the user. It decreases the load in the system.
- **Process Management**: It includes various tasks like scheduling and termination of the process. OS manages various tasks at a time. Here CPU Scheduling happens means all the tasks would be done by the many algorithms that use for scheduling.
- **Storage Management**: The file system mechanism used for the management of the storage. NIFS, CFS, CIFS, NFS, etc. are some file systems. All the data is stored in various tracks of Hard disks that are all managed by the storage manager. It included Hard Disk.
- **Memory Management**: Refers to the management of primary memory. The operating system has to keep track of how much memory has been used and by whom. It has to decide which process needs memory space and how much. OS also has to allocate and deallocate the memory space.
- **Security/Privacy Management**: Privacy is also provided by the Operating system utilizing passwords so that unauthorized applications can't access programs or data. For example, Windows uses **_Kerberos_** authentication to prevent unauthorized access to data.

## Types of Operating Systems
- **Mainframe OS**:
At the high end are the operating systems for mainframes, those room-sized
computers still found in major corporate data centers. These computers differ from
personal computers in terms of their I/O capacity. A mainframe with 1000 disks
and millions of gigabytes of data is not unusual; a personal computer with these
specifications would be the envy of its friends. Mainframes are also making some-
a thing of a comeback as high-end Web servers, servers for large-scale electronic
commerce sites, and servers for business-to-business transactions.
The operating systems for mainframes are heavily oriented toward processing
many jobs at once, most of which need prodigious amounts of I/O. They typically
offer three kinds of services: batch, transaction processing, and timesharing

- **Server OS**:
One level down is the server operating systems. They run on servers, which
are either very large personal computers, workstations, or even mainframes. They
serve multiple users at once over a network and allow the users to share hardware
and software resources. Servers can provide print service, file service, or Web service. 
Internet providers run many server machines to support their customers
, and Websites use servers to store Web pages and handle incoming requests.
Typical server operating systems are Solaris, FreeBSD, Linux, and Windows Server
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
Linux, FreeBSD, Windows 7, Windows 8, and Apple's OS X. Personal computer
operating systems are so widely known that probably little introduction is needed.
Many people are not even aware that other kinds exist.

- **Embedded OS**:
Embedded systems run on computers that control devices that are not generally considered computers and do not accept user-installed software.
Typical examples are microwave ovens, TV sets, cars, DVD recorders, traditional
phones, and MP3 players. The main property distinguishing embedded systems from handhelds is the certainty that no untrusted software will ever run on them.
You cannot download new applications to your microwave oven—all the software
is in ROM. This means there is no need for protection between applications,
simplifying design. Systems such as Embedded Linux, QNX and
VxWorks is popular in this domain.

- **Smart Card OS**:
The smallest operating systems run on credit-card-sized smart card
devices with CPU chips. They have very severe processing power and memory constraints. 
Some are powered by contacts in the reader into which they are
inserted, but contactless smart cards are inductively powered, greatly limiting
what they can do. Some can handle only a single function, such as electronic payments, but others can handle multiple functions. 
Often these are proprietary systems.
Some smart cards are Java oriented. This means that the ROM on the smart
card holds an interpreter for the Java Virtual Machine (JVM). Java applets (small
programs) are downloaded to the card and are interpreted by the JVM interpreter.
Some of these cards can handle multiple Java applets at the same time, leading to
multiprogramming and the need to schedule them. Resource management and protection also become an issue when two or more applets are present simultaneously. 
These issues must be handled by the (usually extremely primitive) operating system present on the card.



