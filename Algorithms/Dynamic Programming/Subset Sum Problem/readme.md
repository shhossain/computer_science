## Subset Sum Problem

Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 

**Example:**
```
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True  
There is a subset (4, 5) with sum 9.

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
Output: False
There is no subset that add up to 30.
```
**Approach:** 

For the recursive approach we will consider two cases. 

 - Consider the last element and now the required sum = target sum – value of ‘last’ element and number of elements = total elements – 1
 - Leave the ‘last’ element and now the required sum = target sum and number of elements = total elements – 1

Following is the recursive formula for isSubsetSum() problem. 

```
isSubsetSum(set, n, sum) 
= isSubsetSum(set, n-1, sum) || 
  isSubsetSum(set, n-1, sum-set[n-1])
Base Cases:
isSubsetSum(set, n, sum) = false, if sum > 0 and n == 0
isSubsetSum(set, n, sum) = true, if sum == 0 
```
Let’s take a look at the simulation of above approach-: 

```
set[]={3, 4, 5, 2}
sum=9
(x, y)= 'x' is the left number of elements,
'y' is the required sum
  
              (4, 9)
             {True}
           /        \  
        (3, 6)       (3, 9)
               
        /    \        /   \ 
     (2, 2)  (2, 6)   (2, 5)  (2, 9)
     {True}  
     /   \ 
  (1, -3) (1, 2)  
{False}  {True} 
         /    \
       (0, 0)  (0, 2)
       {True} {False}      
       
```
## Implementation in C++

```cpp
// A recursive solution for subset sum problem
#include <iostream>
using namespace std;

// Returns true if there is a subset
// of set[] with sum equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
	
	// Base Cases
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	// If last element is greater than sum,
	// then ignore it
	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);

	/* else, check if sum can be obtained by any
of the following:
	(a) including the last element
	(b) excluding the last element */
	return isSubsetSum(set, n - 1, sum)
		|| isSubsetSum(set, n - 1, sum - set[n - 1]);
}

// Driver code
int main()
{
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		cout <<"Found a subset with given sum";
	else
		cout <<"No subset with given sum";
	return 0;
}
```

## IMPLEMENTATION IN JAVA

```java
// A Dynamic Programming solution for subset
// sum problem
class Solution {

	// Returns true if there is a subset of
	// set[] with sum equal to given sum
	static boolean isSubsetSum(int set[],
							int n, int sum)
	{
		// The value of subset[i][j] will be
		// true if there is a subset of
		// set[0..j-1] with sum equal to i
		boolean subset[][] = new boolean[sum + 1][n + 1];

		// If sum is 0, then answer is true
		for (int i = 0; i <= n; i++)
			subset[0][i] = true;

		// If sum is not 0 and set is empty,
		// then answer is false
		for (int i = 1; i <= sum; i++)
			subset[i][0] = false;

		// Fill the subset table in bottom
		// up manner
		for (int i = 1; i <= sum; i++) {
			for (int j = 1; j <= n; j++) {
				subset[i][j] = subset[i][j - 1];
				if (i >= set[j - 1])
					subset[i][j] = subset[i][j]
								|| subset[i - set[j - 1]][j - 1];
			}
		}

		/* // uncomment this code to print table
		for (int i = 0; i <= sum; i++)
		{
		for (int j = 0; j <= n; j++)
			System.out.println (subset[i][j]);
		} */

		return subset[sum][n];
	}

	/* Driver code*/
	public static void main(String args[])
	{
		int set[] = { 3, 34, 4, 12, 5, 2 };
		int sum = 9;
		int n = set.length;
		if (isSubsetSum(set, n, sum) == true)
			System.out.println("Found a subset"
							+ " with given sum");
		else
			System.out.println("No subset with"
							+ " given sum");
	}
}


```

## IMPLEMENTATION USING PYTHON

```python
def isSubsetSum(set, n, sum) :
    
    # Base Cases
    if (sum == 0) :
        return True
    if (n == 0 and sum != 0) :
        return False
   
    # If last element is greater than
    # sum, then ignore it
    if (set[n - 1] > sum) :
        return isSubsetSum(set, n - 1, sum);
   
    # else, check if sum can be obtained
    # by any of the following
    # (a) including the last element
    # (b) excluding the last element   
    return isSubsetSum(set, n-1, sum) or isSubsetSum(set, n-1, sum-set[n-1])
      
      
# Driver program to test above function
set = [3, 34, 4, 12, 5, 2]
sum = 9
n = len(set)
if (isSubsetSum(set, n, sum) == True) :
    print("Found a subset with given sum")
else :
    print("No subset with given sum")


```


## IMPLEMENTATION IN C

```c

#include <stdio.h>
  
// Returns true if there is a subset
// of set[] with sum equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
  
    // If last element is greater than sum,
    // then ignore it
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);
  
    /* else, check if sum can be obtained by any 
of the following:
      (a) including the last element
      (b) excluding the last element   */
    return isSubsetSum(set, n - 1, sum)
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}
  
// Driver code
int main()
{
    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}


```

## IMPLEMENTATION IN JavaScript

```javascript
    
    function isSubsetSum(set, n, sum)
    {
        // Base Cases
        if (sum == 0)
            return true;
        if (n == 0)
            return false;
   
        
        if (set[n - 1] > sum)
            return isSubsetSum(set, n - 1, sum);
   
        /* else, check if sum can be obtained
        by any of the following
        (a) including the last element
        (b) excluding the last element */
        return isSubsetSum(set, n - 1, sum)
          || isSubsetSum(set, n - 1, sum - set[n - 1]);
    }
      
    let set = [ 3, 34, 4, 12, 5, 2 ];
    let sum = 9;
    let n = set.length;
    if (isSubsetSum(set, n, sum) == true)
      document.write("Found a subset with given sum");
    else
      document.write("No subset with given sum");
      

```

## IMPLEMENTATION IN PHP

```php

<?php
// A recursive solution for subset sum problem
  
// Returns true if there is a subset of set
// with sun equal to given sum
function isSubsetSum($set, $n, $sum)
{
    // Base Cases
    if ($sum == 0)
        return true;
    if ($n == 0)
        return false;
      
    // If last element is greater
    // than sum, then ignore it
    if ($set[$n - 1] > $sum)
        return isSubsetSum($set, $n - 1, $sum);
      
    /* else, check if sum can be 
       obtained by any of the following
        (a) including the last element
        (b) excluding the last element */
    return isSubsetSum($set, $n - 1, $sum) || 
        isSubsetSum($set, $n - 1, 
                    $sum - $set[$n - 1]);
}
  
// Driver Code
$set = array(3, 34, 4, 12, 5, 2);
$sum = 9;
$n = 6;
  
if (isSubsetSum($set, $n, $sum) == true)
    echo"Found a subset with given sum";
else
    echo "No subset with given sum";
      
?>



```

## IMPLEMENTATION IN C#

```c#

using System;
  
class solution {
    // Returns true if there is a subset of set[] with sum
    // equal to given sum
    static bool isSubsetSum(int[] set, int n, int sum)
    {
        // Base Cases
        if (sum == 0)
            return true;
        if (n == 0)
            return false;
  
        // If last element is greater than sum,
        // then ignore it
        if (set[n - 1] > sum)
            return isSubsetSum(set, n - 1, sum);
  
        /* else, check if sum can be obtained 
        by any of the following
        (a) including the last element
        (b) excluding the last element */
        return isSubsetSum(set, n - 1, sum) 
          || isSubsetSum(set, n - 1, sum - set[n - 1]);
    }
  
    // Driver code
    public static void Main()
    {
        int[] set = { 3, 34, 4, 12, 5, 2 };
        int sum = 9;
        int n = set.Length;
        if (isSubsetSum(set, n, sum) == true)
            Console.WriteLine("Found a subset with given sum");
        else
            Console.WriteLine("No subset with given sum");
    }
}







**Output:**
```
Found a subset with given sum
```
