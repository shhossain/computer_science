
## Operating System as a Resource Manager

The operating system manages all the pieces of a complex system. Modern computers consist of processors, memories, timers, disks, mice, network interfaces, printers, and a wide variety of other devices. In the bottom-up view, the job of the operating system is to provide for an orderly and controlled allocation of the processors, memories, and I/O devices among the various programs wanting them. Modern operating systems allow multiple programs to be in memory and run
simultaneously. Imagine what would happen if three programs running on some computer all tried to print their output simultaneously on the same printer.
The result would be utter chaos. The operating system can bring order to the potential chaos by buffering all the output destined for the printer on the disk. When one program is finished, the operating system can then copy its output from the disk file where it has been stored for the printer, while at the same time, the other program can continue generating more output,oblivious to the fact that the output is not going to the printer (yet). When a computer (or network) has more than one user, the need to manage and protect the memory, I/O devices, and other resources even more since the users might otherwise interfere with one another. In addition, users often need to share not only hardware but also information (files, databases, etc.). In short,
this view of the operating system holds that its primary task is to keep track of which programs are using which resource, to grant resource requests, to account for usage and to mediate conflicting requests from different programs and users.

One of the crucial roles of any operating system is resource management and, among the resources that the OS must manage, an important one is access to the CPU on the part of processes (programs in execution) that need access sometimes at the same time and with different priorities, burst times, turnaround times, etc..

CPU schedling for real-time Operating Systems involves certain special considerations. In general, there is a distinction to be made between soft real-time systems and hard real time systems. **Soft real-time systems** provide no guarantee as to when a critical real time process will  be scheduled.  They guarantee only that the process will be given priority over non-critical processes. **Hard real-time systems** have stricter requirements. A task must be serviced by its deadline. Service after a deadling has expired is the same as no service at all.

Real time systems are event-driven. The system is typically waiting for a real time event to occur. Events may arise either in software (e.g. a timer has expired) or in harware (e.g.  a remote controlled vehicle detects that it is approaching an obstruction). When an event occurs, the system must respond to and service it as quickly as possible. **Event latency**  is the amount of time that elapses from when an event occurs to when it is serviced.  Two types of latency affect the performance of real-time systems: *interrupt latency* and *dispatch latency*.  Interrupt latency refers to the time from the arrival of an interrupt at the CPU to the start of the routine that services the interrupt. When an interrupt occurs, the OS must first complete the instruction it is executing and determine the type of interrupt that occured. It must then save the state of the current process before servicing the interrupt using the specific Interrupt Service Routine (ISR).  The total time required to carry out these tasks is the interrupt latency. It is obviously important for real-time operating systems to minimize interrupt latency to ensure that real time tasks receive immediate attention. In fact, for hard real-time systems, it's not only necessary to minimize latency, but latency must be bounded to meet the strict requirements of these systems.

The amount of time required for the schedling dispatcher to stop one process and start another is known as dispatch latency. The goal of giving processes immediate access to the CPU mandates minimizing this kind of latency as well. In sum, the most important feature of a real-time operating system is to respond as quickly as possible to a real-time process as soon as that process requires access to the CPU. As a consequence,  the scheduler for a real-time operating system must support a priority based algorithm with preemption. But providing  a preemptive, priority-based scheduler guarantees only soft real-time functionality. Hard real-time systems must further guarantee that real-time tasks wil be served in accordance with their deadline requirements, and making such guarantees requires additional scheduling features. From this point on, I will discuss only scheduling algorithms appropriate  for hard real-time systems.

Before discussing the algorithms,  we must define certain characteristics  of the processes that are to be scheduled. First, the processes are considered **periodic**. They require the CPU at constant intervalls (periods). Once a periodic process has acquired the CPU, it has a fixed processing time *t*, a deadline *d* by which is must be serviced by the CPU, and a period *p*. The relationship among these quantities can be expressed as 0 <= t <= d <= p.  The **rate** of a process is 1/p.  What's unusual about this form of schedling is a process might have to announce its deadline requirements to the scheduler. Then, using a technique known as an "admission control" algorithm, the scheduler does one of two things. It either admits the process, guaranteeing that the process will comlete on time, or it rejects the request as impossible if it can't guarantee that the process will be serviced by its deadline.

### Rate Monotonic Scheduling

The rate-monotonic scheduling algorithm schedules period tasks using a static priority-driven policy with preemption. If a lower-priority process is running and a higher-priority process becomes available to run, it will preempt the lower-priority process. Upon entering the system, each periodic task is assigned an priority inversely proportional to its period. The shorter the period, the higher the priority and viceversa. A set of processes can be scheduled only if they meet the following equation:

the system efficiently. In the extended-machine view,
the job of the system is to provide the users with abstractions that are more con-
convenient to use than the actual machine. These include processes, address spaces,
and files.
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

## Scheduling Algorithms in Real-Time Operating Systems

CPU scheduling for real-time Operating Systems involves certain special considerations. In general, there is a distinction to be made between soft real-time systems and hard real-time systems. **Soft real-time systems** provide no guarantee as to when a critical real-time process will  be scheduled.  They guarantee only that the process will be given priority over non-critical processes. **Hard real-time systems** have stricter requirements. A task must be serviced by its deadline. Service, after a deadline has expired, is the same as no service at all.

Real-time systems are event-driven. The system is typically waiting for a real-time event to occur. Events may arise either in software (e.g. a timer has expired) or in hardware (e.g.  a remote-controlled vehicle detects that it is approaching an obstruction). When an event occurs, the system must respond to and service it as quickly as possible. **Event latency**  is the amount of time that elapses from when an event occurs to when it is serviced.  Two types of latency affect the performance of real-time systems: *interrupt latency* and *dispatch latency*.  Interrupt latency refers to the time from the arrival of an interrupt at the CPU to the start of the routine that services the interrupt. When an interrupt occurs, the OS must first complete the instruction it is executing and determine the type of interrupt that occurred. It must then save the state of the current process before servicing the interrupt using the specific Interrupt Service Routine (ISR).  The total time required to carry out these tasks is the interrupt latency. It is obviously important for real-time operating systems to minimize interrupt latency to ensure that real-time tasks receive immediate attention. In fact, for hard real-time systems, it's not only necessary to minimize latency but latency must be bounded to meet the strict requirements of these systems.

The amount of time required for the scheduling dispatcher to stop one process and start another is known as dispatch latency. The goal of giving processes immediate access to the CPU mandates minimizing this kind of latency as well. In sum, the most important feature of a real-time operating system is to respond as quickly as possible to a real-time process as soon as that process requires access to the CPU. As a consequence,  the scheduler for a real-time operating system must support a priority-based algorithm with preemption. But providing  a preemptive, priority-based scheduler guarantees only soft real-time functionality. Hard real-time systems must further guarantee that real-time tasks will be served in accordance with their deadline requirements, and making such guarantees requires additional scheduling features. From this point on, I will discuss only scheduling algorithms appropriate  for hard real-time systems.

Before discussing the algorithms,  we must define certain characteristics  of the processes that are to be scheduled. First, the processes are considered **periodic**. They require the CPU at constant intervals (periods). Once a periodic process has acquired the CPU, it has a fixed processing time *t*, a deadline *d* by which it must be serviced by the CPU, and a period *p*. The relationship among these quantities can be expressed as 0 <= t <= d <= p.  The **rate** of a process is 1/p.  What's unusual about this form of scheduling is the process might have to announce its deadline requirements to the scheduler. Then, using a technique known as an "admission control" algorithm, the scheduler does one of two things. It either admits the process, guaranteeing that the process will be completed on time, or it rejects the request as impossible if it can't guarantee that the process will be serviced by its deadline.

## Rate Monotonic Scheduling

The rate-monotonic scheduling algorithm schedules period tasks using a static priority-driven policy with preemption. If a lower-priority process is running and a higher-priority process becomes available to run, it will preempt the lower-priority process. Upon entering the system, each periodic task is assigned a priority inversely proportional to its period. The shorter the period, the higher the priority, and vice versa. A set of processes can be scheduled only if they meet the following equation:

```math
\sum_{k=1}^n C_i/T_i \leq n(2^{1/n} - 1)
```
where n is the number of processes in the process set, $C_i$ is the computation time of the process, $T_i$ is the time period for the process to run and U is the processor utilization. Let's consider a simplified example first without rate-monotonic scheduling.  We have two processes, P1 and P2. The periods for P1 and P2 are 50 and 100 respectively. The processing times are T1 = 20 for P1 and T2 = 35 for P2. The deadline for each process requires that it complete its CPU burst by the start of its next period.


First we have to find out whether it's possible to schedule these tasks so that each meets its deadline. If we measure  the CPU utilization of a process $P_i$ as the ratio of its burst to its period-- $T_i/P_i$-- the CPU utilization of  of $P_1$ is 20/50 = 0.40 and that of $P_2$ is 35/100 = 0.35 for a total CPU utilization of 75 percent. Therefore, it seems we can schedule these tasks in such a way that both meet their deadlines and still leave the CPU with available cycles. But suppose we assign $P_2$ a higher priority than $P_1$. The execution of $P_1$ in this situation is different. $P_2$ starts execution first and completes at time 35.  At this point $P_1$ starts; it completes its CPU burst at time 55. However, the first deadline for $P_1$  was at time 50, so the scheduler has caused $P_1$ to miss its deadline.

Now suppose we use rate-monotonic schedling, in which we assign $P_1$ a higher priority than $P_2$  because the period of $P_1$ is shorter than that of $P_2$. In this case, $P_1$ starts first and completes its CPU burst at time 20, thereby meeting its first deadline. $P_2$ starts at this point and  runs until time 50. At this time, it is preempted by $P_1$, although it still has 5 milliseconds remianing in its CPU burst. $P_1$  completes its CPU burst at time 70, at which point the scheduler resumes $P_2$. $P_2$  completes its CPU burst at time 75, also meeting its first deadline. The system is idle until time 100, when $P_1$ is scheduled again. Rate-monotonic scheduling is considered optimal in that if a set of processes cannot be  scheduled by this algorithm, it cannot be assigned by any other algorithm that assigns static priorities.

Let's try another example with a set of processes that can't be scheduled using the rate-monotonic algorithm. Assume that process $P_1$  has a period of $p_1 = 50$  and a CPU burst of $t_1=25$. For $P_2$ , the corresponding values are $p_2=80$ and $t_2=35$. Rate-montonic scheduling would assign $P_1$ a higher priority, since it has the shorter period. The total CPU utilization of the two processes is (25/0) + (35/80) = 0.94. and it therefore seems logical that the two processes could be scheduled and still leave the CPU with 6 percent available time. Initially, $P_1$  runs until it completes its CPU burst time at time 25. $P_2$ then starts running and runs until time 50, when it is preempted by $P_1$. At this point, $P_2$ still has 10 milliseconds remaining in its CPU burst. Process $P_1$ runs until time 75, therefore $P_2$ finishes its burst at time 85, after the deadline for completion of its CPU burst at time 80.

Despite being optimal, rate-monotonic scheduling has a serios limitation. CPU utilization is bounded, and it is not always possible to maximize CPU resources fully. With one process in the system. CPU utilization is 100 percent but it falls to 69 precent as the number of proceses approaches infinity. With two processses, CPU utilization is bounded at about 83 percent. Combined CPU utilization for thr two processes in our first example  is 75%. so the rate-monotice scheduing algorithm is guaranteed to schedule them  so that they meet their deadlines. For the two processes in our second example, combined utilization  is approximately  94 percent: therefore, rate monotonic scheduing cannot guarantee that they be scheduled to meet their deadlines.

### Earliest Deadline First Scheduling

Earliest deadline first scheduing  assigns priorities dynamically  according to deadline. The earlier the deadline, the higher the priority; the later the deadline the lower the priority.  Under the EDF policy, when a policy becomes runnable, it must announce its deadline requirements to the system. Priorities may have to be adjusted to reflect the deadlines of the newly runnable processes. Notice how this differs from rate-monotonic scheduling, where priorities are fixed. To illustrate EDF scheduling , we again schedule the processes of our last example,  which failed to meet deadline requirements under rate-monotonic scheduing.  Recall that $P_1$  has values of $p_1$ = 50 and $t_1$ = 25 and that $P_2$ has values of $p_1$ = 80 and $t_1$ = 35. Under EDF scheduling, process $P_1$ has the earliest deadline, so its initial priority is higher than that of $P_2$. Process $P_2$  starts running at the end of the CPU burst for $P_1$. However, whereas rate monotonic scheduling allows $P_1$ to preempt $P_2$  at the beginning of its next period at time 50, EDF allows $P_2$ to continue running. $P_2$ now has a higher priority than $P_1$ becuase its next deadline (at time 80)  is earlier than that of $P_1$ (at time 100). Thus, both $P_1$ and $P_2$ meet their first deadlines.  Process $P_1$ again begings running at time 60 and completes its second CPU burst at time 85, also meeting its second deadline at time 100. $P_2$ begings running at this point, only to be prempted by $P_1$ at the start of its next period at time 100. $P_2$ is preempted because $P_1$ has an earlier deadline (time 150) than $P_2$ (time 180).  At time 125, $P_1$ completes its CPU burst  and $P_2$ resumes execution, finishing ar time 145 and meeting its deadline as well The system is idle until time  150, when $P_1$ is schduled to run again.

Unlike rate-monotonic scheduling, EDF scheduling does not require that processes be periodic, nor must a process  require a constant amount of CPU time per burst. The only requirement  is that a process  announce its deadline to the scheduler whenever it becomes runnable. The appeal of EDF schedling is that it is theoretically optimal--theoretically it can schedule processes so that each process meets its deadline requirements and CPU utilization is at 100 percent. In practice, however,  it is impossible to achieve this level of CPU utilization due to the cost of context switching between processes and interruopt handling.

## Operating System as an Extended Machine

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
This abstraction is the key to managing all this complexity. Good abstractions
turn a nearly impossible task into two manageable ones. The first is defining and
implementing the abstractions. The second is using these abstractions to solve the
problem at hand.
 
