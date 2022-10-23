# Space Complexity

Space complexity refers to the total amount of memory space used by an algorithm/program, including the space of input values for execution. Calculate the space occupied by variables in an algorithm/program to determine space complexity.

## Methods for Calculating Space Complexity

With an example, you will go over how to calculate space complexity in this section. Here is an example of computing the multiplication of array elements:
1. int mul, i
2. While i < = n do
3.    mul <- mul * array[i]
4.    i <- i + 1
5. end while
6. return mul

Let S(n) denote the algorithm's space complexity. In most systems, an integer occupies 4 bytes of memory. As a result, the number of allocated bytes would be the space complexity.
Line 1 allocates memory space for two integers, resulting in S(n) = 4 bytes multiplied by 2 = 8 bytes. Line 2 represents a loop. Lines 3 and 4 assign a value to an already existing variable. As a result, there is no need to set aside any space. The return statement in line 6 will allocate one more memory case. As a result, S(n)= 4 times 2 + 4 = 12 bytes.
Because the array is used in the algorithm to allocate n cases of integers, the final space complexity will be fS(n) = n + 12 = O (n).

## What does Space Complexity really mean?

The term Space Complexity is misused for Auxiliary Space at many places. Following are the correct definitions of Auxiliary Space and Space Complexity. 
Auxiliary Space is the extra space or temporary space used by an algorithm.
The space Complexity of an algorithm is the total space taken by the algorithm with respect to the input size. Space complexity includes both Auxiliary space and space used by input. 
## What is the significance of space complexity?

A good algorithm executes quickly and saves space in the process. You should find a happy medium of space and time (space and time complexity), but you can do with the average. Now, take a look at a simple algorithm for calculating the "mul" of two numbers.

Step 1: Start.

Step 2: Create two variables (a & b).

Step 3: Store integer values in ‘a’ and ‘b.’ -> Input

Step 4: Create a variable named 'mul'

Step 5: Store the mul of 'a' and 'b' in a variable named 'mul" -> Output

Step 6: End.

You will now see how significant space and time complexity is after understanding what they are.
