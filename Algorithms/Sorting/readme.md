## Sorting

Sorting is the process of arranging a list of items in a particular order. For example, if you had a list of names, you might want to sort them alphabetically. Or if you had a list of numbers, you might want to put them in order from smallest to largest. Sorting is a common task, and it’s one that we can do in many different ways.

### Why sorting?
Many computer scientists consider sorting to be the most fundamental problem in
the study of algorithms. There are several reasons:
Sometimes an application inherently needs to sort information. For example,
in order to prepare customer statements, banks need to sort checks by check
number.
Algorithms often use sorting as a key subroutine. For example, a program that
renders graphical objects which are layered on top of each other might have
to sort the objects according to an “above” relation so that it can draw these
objects from bottom to top. We shall see numerous algorithms in this text that
use sorting as a subroutine.
We can draw from among a wide variety of sorting algorithms, and they em-
ploy a rich set of techniques. In fact, many important techniques used through-
out algorithm design appear in the body of sorting algorithms that have been
developed over the years. In this way, sorting is also a problem of historical
interest.
We can prove a nontrivial lower bound for sorting (as we shall do in Chapter 8).
Our best upper bounds match the lower bound asymptotically, and so we know
that our sorting algorithms are asymptotically optimal. Moreover, we can use
the lower bound for sorting to prove lower bounds for certain other problems.
Many engineering issues come to the fore when implementing sorting algo-
rithms. The fastest sorting program for a particular situation may depend on
many factors, such as prior knowledge about the keys and satellite data, the
memory hierarchy (caches and virtual memory) of the host computer, and the
software environment. Many of these issues are best dealt with at the algorith-
mic level, rather than by “tweaking” the code.

### Popular Sorting Algorithms
- [Bubble Sort](BubbleSort/readme.md)
- [Insertion Sort](InsertionSort/readme.md)
- [Selection Sort](SelectionSort/readme.md)
- [Merge Sort](MergeSort/readme.md)
- [Quick Sort](QuickSort/readme.md)
- [Heap Sort](HeapSort/readme.md)
- [Swap Sort](SwapSort/readme.md)
- [Radix Sort](RadixSort/readme.md)
- [Shell Sort](ShellSort/readme.md)
- [Count Sort](CountSort/readme.md)
- [Tim Sort](TimSort/readme.md)

