# Time Complexity

The time complexity of an algorithm estimates how much time the algorithm will use for some input. The idea is to represent the efficiency as a function whose parameter is the size of the input. By calculating the time complexity, we can find out whether the algorithm is fast enough without implementing it.

## Calculation rules

The time complexity of an algorithm is denoted by O(...) where the three dots represent some function. Usually, the variable n denotes the input size. For example if the input is an array of numbers, n will be the size of the array, and if the input is a string, n will be the length of the string.

## Complexity classes

The following list contains common time complexities of algorithms:

### O(1)

The running time of a constant-time algorithm does not depend on the input size. A typical constant-time algorithm is a direct formula that calculates the answer.

### O(log n)

A logarithmic algorithm often halves the input size at each step. The running time of such an algorithm is logarithmic, because log2n equals the number of times n must be divided by 2 to get 1.

### O($\sqrt{n}$)

A square root algorithm is slower than O(log n) but faster than O(n). A special property of square roots is that $\sqrt{n}$ = n / $\sqrt{n}$ , so the square root n lies, in some sense, in the middle of the input.

### O(n)

A linear algorithm goes through the input a constant number of times. This is often the best possible time complexity, because it is usually necessary to access each input element at least once before reporting the answer.

### O(nlogn)

This time complexity often indicates that the algorithm sorts the input, because the time complexity of efficient sorting algorithms is O(nlogn). Another possibility is that the algorithm uses a data structure where each operation takes O(log n) time.

### O($n^2$)

A quadratic algorithm often contains two nested loops. It is possible to go through all pairs of the input elements in O($n^2$) time.

### O($n^3$)

A cubic algorithm often contains three nested loops. It is possible to go through all triplets of the input elements in O($n^3$) time.

### O($2^n$)

This time complexity often indicates that the algorithm iterates through all subsets of the input elements. For example, the subsets of {1, 2, 3} are ; {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3} and {1, 2, 3}.

### O(n!)

This time complexity often indicates that the algorithm iterates through all permutations of the input elements. For example, the permutations of {1, 2, 3} are (1, 2, 3), (1, 3, 2), (2, 1, 3), (2, 3, 1), (3, 1, 2) and (3, 2, 1).
