# Time Complexity

The time complexity of an algorithm estimates how much time the algorithm will use for some input. The idea is to represent the efficiency as a function whose parameter is the size of the input. By calculating the time complexity, we can find out whether the algorithm is fast enough without implementing it.

## Analysis of Algorithm
* Algorithm is a combination or sequence of finite-state to solve a given problem. If the problem is having more than one solution or algorithm then the best one is decided by the analysis based on two factors. 

* CPU Time (Time Complexity)
* Main memory space (Space Complexity)
Time complexity of an algorithm can be calculated by using two methods: 
* Posteriori Analysis
* Priori Analysis

### Aposteriori Analysis / Posteriori Analysis
**Advantages of Aposteriori Analysis**
* It will give exact values of time and space in actual units.

**Drawbacks of Aposteriori Analysis**
* Not easy to carry out.
* It is not uniform i.e It changes system to system as it is machine dependent; Non-uniformity of the platform makes it difficult to carry out performance comparision due to different values reported.
* Experiments can be done on a limited set of Test Input's.
* It is difficult to compare the efficiency of two algorithms unless they are executed on the same platform (Hardware and Software) experiments, inorder to determine running time.

<br>

In view of these difficulties , carryout analysis in Aposteriori mode is not desirable. Therefore to overcome these limitations we are going for another method of analysis called as **Apriori Analysis**. 

### Apriori Analysis
* The objective of apriori analysis is to represent the running time of algorithm by a mathematical function with respect to I/P size.
* This is a theoretical analysis of an algorithm.
* Time Complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of Input Size. **{f(n)}**
* There various methods to determine time complexity. One of the general Method is Input Size. As Input Size increases time complexity also increases. Therefore time taken by an Algorithm is directly proportional to size of Input.
* In an industry, we cannot perform Apostiari analysis as the software is generally made for an anonymous user, which runs it on a system different from those present in the industry.
* In Apriori, it is the reason that we use **asymptotic notations** to determine time and space complexity as they change from computer to computer; however, asymptotically they are the same.

## Best Case, Worst Case, and Average Case in Time Complexity Analysis
**Best Case**: It is defined as the condition that allows an algorithm to complete statement execution in the shortest amount of time. In this case, the execution time serves as a lower bound on the algorithm's time complexity.
Example: In the linear search when search data is present at the first location of large data then the best case occurs.

**Average Case**: You add the running times for each possible input combination and take the average in the average case. Here, the execution time serves as both a lower and upper bound on the algorithm's time complexity.

**Worst Case**: It is defined as the condition that allows an algorithm to complete statement execution in the shortest amount of time possible. In this case, the execution time serves as an upper bound on the algorithm's time complexity.
Example: In the linear search when search data is present at the last location of large data then the worst case occurs.

## Asymptotic Notations

Asymptotic Notations are programming notations that allow you to analyze an algorithm's running time by identifying its behavior as its input size grows.
We compare time complexity using asymptotic analysis. It compares two algorithms based on changes in their performance as the input size is increased or decreased.

## Various Asymptotic notations

There are 3 types of notations for time complexity.
* O Notation
* Ω Notation
* Θ Notation

## Big O Notation, O

The Big O Notation is a systematic way to express the upper limit of an algorithm's running time. 
It calculates the worst case time complexity.

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
