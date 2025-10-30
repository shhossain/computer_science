# Time Complexity

When we measure how *fast* an operation is, we are not referring to real-world time (seconds, milliseconds, etc.), but rather to how many **steps** the operation takes.

We do this because the actual running time depends on factors such as the computer’s hardware, the programming language used, and even background processes. Therefore, time complexity focuses on the **growth rate** of the number of steps as the input size increases, rather than the literal clock time.

## Analysis of Algorithm

An **algorithm** is a finite sequence of steps designed to solve a given problem.  
If a problem can be solved using multiple algorithms, the best one is determined by analyzing two key factors:

* CPU Time (Time Complexity)
* Main Memory Space (Space Complexity)

The time complexity of an algorithm can be calculated using two methods:
* **Posteriori Analysis**
* **Apriori Analysis**

---

### Aposteriori Analysis (Posteriori Analysis)

**Advantages**
* Provides exact values of time and space in actual units.

**Drawbacks**
* Not easy to carry out.
* Not uniform — results vary from system to system as it is machine-dependent.
* Experiments can only be performed on a limited set of test inputs.
* Difficult to compare algorithms unless executed on the same hardware and software.

Because of these difficulties, **posteriori analysis** is often not desirable.  
To overcome its limitations, we use **apriori analysis** instead.

---

### Apriori Analysis

* The objective is to represent the running time of an algorithm as a mathematical function with respect to the input size.
* This is a **theoretical** analysis of an algorithm.
* The time complexity of an algorithm quantifies the amount of time it takes to run as a function of input size (*f(n)*).
* Generally, as the input size increases, the running time increases — hence, time is directly proportional to input size.
* In the industry, posteriori analysis is not practical since software is executed by end users on diverse systems.
* Therefore, we use **asymptotic notations** to estimate performance independently of specific hardware or software.

---

### Best Case, Worst Case, and Average Case

**Best Case:** The scenario where the algorithm completes in the *minimum* possible time.  
*Example:* In linear search, when the target is found at the first position.

**Average Case:** The expected running time over all possible inputs.  
It serves as a balance between best and worst cases.

**Worst Case:** The scenario where the algorithm takes the *maximum* possible time.  
*Example:* In linear search, when the target is found at the last position.

---

## Asymptotic Notations

Asymptotic notations describe how the running time of an algorithm behaves as the input size grows.  
They help compare algorithms by focusing on performance trends rather than specific execution times.

There are three main notations:
* **O** — Big O (upper bound)
* **Ω** — Omega (lower bound)
* **Θ** — Theta (tight bound)

---

### Big O Notation (O)

The **Big O Notation** expresses the upper limit of an algorithm's running time — that is, the *worst-case* time complexity.

Simply put, Big O helps answer a fundamental question:

> If there are N data elements, how many steps will the algorithm take?

It provides a way to express the upper bound of an algorithm’s running time as the input size grows.

To fully understand Big O, it’s helpful to first understand **logarithms**, since they often appear in algorithm analysis (for example, O(log N) in binary search).

---

📚 *Explanation adapted from “A Common-Sense Guide to Data Structures and Algorithms” by Jay Wengrow.*

### Mathematical Representation

Let g and f be functions that belong to set of natural numbers (N). The function f is said to be O(g), if there is a constant c>0 and  a natural number n0 such that:
```
f(n) <= cg(n) for all n>=n0
```
### Example

Consider the following f(n) and g(n)...
f(n) = 3n + 2
g(n) = n
If we want to represent f(n) as O(g(n)) then it must satisfy f(n) <= C g(n) for all values of C > 0 and n0>= 1
f(n) <= C g(n)
⇒3n + 2 <= C n
Above condition is always TRUE for all values of C = 4 and n >= 2.
By using Big - O notation we can represent the time complexity as follows...
3n + 2 = O(n)

## Omega Notation, Ω

 The Omega Notation is a systematic way to express the lower bound of an algorithm's running time. 
 It calculates the best case time complexity.

 ### Mathematical Representation 
 ```
 Ω(g(n)) = { f(n): There exists positive constants c and n0 such that 0 <= cg(n) <= f(n) for all n >= n0}
 ```

The above expression can be defined as a function f(n) which belongs to the set Ω(g(n)) if and only if there exists a positive constant c(c>0) such that it is greater than c*g(n) for a sufficiently large value of n.

The minimum time required for an algorithm to execute completely is given by Ω(g(n))

### Example

Consider the following f(n) and g(n)...
f(n) = 3n + 2
g(n) = n
If we want to represent f(n) as Ω(g(n)) then it must satisfy f(n) >= C g(n) for all values of C > 0 and n0>= 1
f(n) >= C g(n)
⇒3n + 2 >= C n
Above condition is always TRUE for all values of C = 1 and n >= 1.
By using Big - Omega notation we can represent the time complexity as follows...
3n + 2 = Ω(n)

## Theta Notation, Θ
 The Theta Notation is a systematic way to express the lower limit and upper limit of an algorithm's running time. 
 It is used for analyzing the average-case complexity of an algorithm.  

 ### Mathematical Representation

 Let g and f be the function from the set of natural numbers to itself. The function f is said to be Θ(g), such that
 ```
 Θ(g(n)) = { f(n): There exists positive constants c1, c2, n0 such that 0 <= c1g(n) <= f(n) <= c2g(n) for all n >= n0}
 ```

### Example

Consider the following f(n) and g(n)...
f(n) = 3n + 2
g(n) = n
If we want to represent f(n) as Θ(g(n)) then it must satisfy C1 g(n) <= f(n) <= C2 g(n) for all values of C1 > 0, C2 > 0 and n0>= 1
C1 g(n) <= f(n) <= C2 g(n)
⇒C1 n <= 3n + 2 <= C2 n
Above condition is always TRUE for all values of C1 = 1, C2 = 4 and n >= 2.
By using Big - Theta notation we can represent the time compexity as follows...
3n + 2 = Θ(n)

 **The Big O Notation is the most commonly used notation for expressing time complexity.**

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

## Properties of Asymptotic Notations: 

1. General Properties:
    If f(n) is O(g(n)) then a*f(n) is also O(g(n)), where a is a constant.

    Example:
    f(n) = 2n²+5 is O(n²) 
    then, 7*f(n) = 7(2n²+5) = 14n²+35 is also O(n²).

    Similarly, this property satisfies both Θ and Ω notation.
    If f(n) is Θ(g(n)) then a*f(n) is also Θ(g(n)), where a is a constant. 
    If f(n) is Ω (g(n)) then a*f(n) is also Ω (g(n)), where a is a constant.

2. Transitive Properties:
    If f(n) is O(g(n)) and g(n) is O(h(n)) then f(n) = O(h(n)).
    Example:
    If f(n) = n, g(n) = n² and h(n)=n³
    n is O(n²) and n² is O(n³) then, n is O(n³)

    Similarly, this property satisfies both Θ and Ω notation.
    If f(n) is Θ(g(n)) and g(n) is Θ(h(n)) then f(n) = Θ(h(n)) .
    If f(n) is Ω (g(n)) and g(n) is Ω (h(n)) then f(n) = Ω (h(n))

3. Reflexive Properties: 
    If f(n) is O(g(n)) and f(n) = Ω(g(n))  
    then f(n) is Θ(g(n))
