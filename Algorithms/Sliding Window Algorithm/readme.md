# Sliding Window Technique

Sliding Window is an efficient technique to solve problems which deals with finding sub-arrays, sub-strings or sub-lists of a particular length which offers maximum/minimum sum or value.Basically, it is a computational technique which aims to reduce the use of nested loop and replace it with a single loop, thereby reducing the time complexity ie compact that O(N^2) --> O(N) through this technique.


# Identification of Sliding Window

The problems which can be solved with this technique mostly are related something with subarrays or sublists or substrings of given array/list or with some sum, max, min properties.Classic example of Sliding Window is finding Largest/Smallest sum in sub-lists of size K.
Brute Force approach of solving this problem takes O(N^2) time complexity while we will be able to reduce the time complexity using the Sliding Window technique to O(N) in best case.

# Types of Sliding Window
Sliding window can be used on fixed-length windows or variable-length windows. 
1) [Fixed-length Window](Fixed%20Length/readme.md):
    For fixed-length windows, the algorithm can be designed without knowing the value of the window for each element of the source array.
    Eg. Find the largest sum of any subarray of size K for a given array.

2) [Variable-length Window](Variable%20Length/readme.md):
    For variable-length windows, the algorithm must be able to predict the value of the window at each step of the algorithm, i.e., before evaluating each element of the source array. Let’s look at how to identify the pattern for each case.
    Eg. Find the largest subarray in a given array with sum equal to k.


You will understand more cleary when we will solve the questions by both the methods.


### Popular Slidng Window Algorithms
* [Maximum Sum Subarray of size K](Fixed%20Length/Maximum%20Sum%20Subarray%20(K)/readme.md)
* [Longest/Largest Subarray with sum K](Variable%20Length/Largest%20Subarray%20Sum%20(K)/readme.md)
