# Coin Change

Given an integer array of coins[ ] of size N representing different types of currency and an integer sum, The task is to find the number of ways to make sum by using different combinations from coins[]. 

Assume that you have an infinite supply of each type of coin. 

**Examples:**
```
Input: sum = 4, coins[] = {1,2,3}, 
Output: 4
Explanation: there are four solutions: {1, 1, 1, 1}, {1, 1, 2}, {2, 2}, {1, 3}. 

Input: sum = 10, coins[] = {2, 5, 3, 6}
Output: 5
Explanation: There are five solutions: 
{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}.
```

The following are different methods to solve Coin Base Problem. 

## Method 1 (Use recursion) 
To solve the Coin Change problem one of the simple method is to traverse the array by applying the recursive solution and keep finding the possible ways to find the occurence.

**Illustration:**
```
It should be noted that the above function computes the same subproblems again and again. See the following recursion tree for coins[] = {1, 2, 3} and n = 5. 

The function C({1}, 3) is called two times. If we draw the complete tree, then we can see that there are many subproblems being called more than once.  

C() –> count()

                              C({1,2,3}, 5)                     

                           /                     \    
                         /                         \                  

             C({1,2,3}, 2)                   C({1,2}, 5)

                 /       \                          /    \         
             /              \                   /            \   

C({1,2,3}, -1)  C({1,2}, 2)        C({1,2}, 3)    C({1}, 5)
                       /    \                  /     \           /     \
                     /       \                /       \         /        \

    C({1,2},0)  C({1},2)   C({1,2},1) C({1},3)    C({1}, 4)  C({}, 5)

                        / \           / \          /\           /     \         
                     /      \      /     \       /   \        /        \  

                .      .  .     .   .     .              C({1}, 3)      C({}, 4)

                                                           / \  
                                                          /   \                                                 .      
```

Follow the below steps to Implement the idea:

* We have 2 choices for a coin of a particular denomination, either i) to include, or ii) to exclude.
* If we are at coins[n-1], we can take as many instances of that coin ( unbounded inclusion ) i.e count(coins, n, sum – coins[n-1] );   then we move to coins[n-2]. 
* After moving to coins[n-2], we can’t move back and can’t make choices for coins[n-1] i.e count(coins, n-1, sum).     
* Finally, as we have to find the total number of ways, so we will add these 2 possible choices, i.e count(coins, n, sum – coins[n-1] ) + count(coins, n-1, sum );

Below is the Implementation of the above approach.

```cpp

// Recursive C++ program for
// coin change problem.
#include <bits/stdc++.h>
using namespace std;

// Returns the count of ways we can
// sum coins[0...n-1] coins to get sum "sum"
int count(int coins[], int n, int sum)
{

	// If sum is 0 then there is 1 solution
	// (do not include any coin)
	if (sum == 0)
		return 1;

	// If sum is less than 0 then no
	// solution exists
	if (sum < 0)
		return 0;

	// If there are no coins and sum
	// is greater than 0, then no
	// solution exist
	if (n <= 0)
		return 0;

	// count is sum of solutions (i)
	// including coins[n-1] (ii) excluding coins[n-1]
	return count(coins, n - 1, sum)
		+ count(coins, n, sum - coins[n - 1]);
}

int main()
{
	int i, j;
	int coins[] = { 1, 2, 3 };
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum = 4;

	cout << " " << count(coins, n, sum);

	return 0;
}
 
```

**Output:**

```
4
```

**Time Complexity:** O(2^sum).

**Extra Space:** O(target).

Since the same sub-problems are called again, this problem has the Overlapping Subproblems property.

## Method 2: (Use Dynamic Programming)

```
The Idea to Solve this Problem is by using the Bottom Up Memoization. Here is the Bottom up approach to solve this Problem.

```

Follow the below steps to Implement the idea:

* Using 2-D vector to store the Overlapping subproblems.
* Traversing the whole array to find the solution and storing in the memoization table.
* Using the memoization table to find the optimal solution.

## Implementation


* [C++](#cpp)
* [C#](#csharp)
* [Java](#java)
* [Python](#python)
* [JavaScript](#javascript)


## CPP

```cpp

// C++ program for coin change problem

#include <bits/stdc++.h>

using namespace std;

int count(int coins[], int n, int sum)
{
	int i, j, x, y;

	// We need sum+1 rows as the table
	// is constructed in bottom up
	// manner using the base case 0
	// value case (sum = 0)
	int table[sum + 1][n];

	// Fill the entries for 0
	// value case (sum = 0)
	for (i = 0; i < n; i++)
		table[0][i] = 1;

	// Fill rest of the table entries
	// in bottom up manner
	for (i = 1; i < sum + 1; i++) {
		for (j = 0; j < n; j++) {
			// Count of solutions including coins[j]
			x = (i - coins[j] >= 0) ? table[i - coins[j]][j]
									: 0;

			// Count of solutions excluding coins[j]
			y = (j >= 1) ? table[i][j - 1] : 0;

			// total count
			table[i][j] = x + y;
		}
	}
	return table[sum][n - 1];
}

// Driver Code
int main()
{
	int coins[] = { 1, 2, 3 };
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum = 4;
	cout << count(coins, n, sum);
	return 0;
}


```

## JAVA

```java

/* Dynamic Programming Java implementation of Coin
Change problem */
import java.util.Arrays;

class CoinChange {
	static long countWays(int coins[], int n, int sum)
	{
		// Time complexity of this function: O(n*sum)
		// Space Complexity of this function: O(sum)

		// table[i] will be storing the number of solutions
		// for value i. We need sum+1 rows as the table is
		// constructed in bottom up manner using the base
		// case (sum = 0)
		long[] table = new long[sum + 1];

		// Initialize all table values as 0
		Arrays.fill(table, 0);

		// Base case (If given value is 0)
		table[0] = 1;

		// Pick all coins one by one and update the table[]
		// values after the index greater than or equal to
		// the value of the picked coin
		for (int i = 0; i < n; i++)
			for (int j = coins[i]; j <= sum; j++)
				table[j] += table[j - coins[i]];

		return table[sum];
	}

	// Driver Function to test above function
	public static void main(String args[])
	{
		int coins[] = { 1, 2, 3 };
		int n = coins.length;
		int sum = 4;
		System.out.println(countWays(coins, n, sum));
	}
}

```
## PYTHON

```python

# Dynamic Programming Python implementation of Coin
# Change problem


def count(coins, n, sum):
	# We need sum+1 rows as the table is constructed
	# in bottom up manner using the base case 0 value
	# case (sum = 0)
	table = [[0 for x in range(n)] for x in range(sum+1)]

	# Fill the entries for 0 value case (n = 0)
	for i in range(n):
		table[0][i] = 1

	# Fill rest of the table entries in bottom up manner
	for i in range(1, sum+1):
		for j in range(n):

			# Count of solutions including coins[j]
			x = table[i - coins[j]][j] if i-coins[j] >= 0 else 0

			# Count of solutions excluding coins[j]
			y = table[i][j-1] if j >= 1 else 0

			# total count
			table[i][j] = x + y

	return table[sum][n-1]


# Driver program to test above function
if __name__ == '__main__':
	coins = [1, 2, 3]
	n = len(coins)
	sum = 4
	print(count(coins, n, sum))

```

## CSHARP

```csharp

/* Dynamic Programming C# implementation of Coin
Change problem */
using System;

class CoinChange {
	static long countWays(int[] coins, int n, int sum)
	{
		// table[i] will be storing the number of solutions
		// for value i. We need sum+1 rows as the table is
		// constructed in bottom up manner using the base
		// case (sum = 0)
		int[] table = new int[sum + 1];

		// Initialize all table values as 0
		for (int i = 0; i < table.Length; i++) {
			table[i] = 0;
		}

		// Base case (If given value is 0)
		table[0] = 1;

		// Pick all coins one by one and update the table[]
		// values after the index greater than or equal to
		// the value of the picked coin
		for (int i = 0; i < n; i++)
			for (int j = coins[i]; j <= sum; j++)
				table[j] += table[j - coins[i]];

		return table[sum];
	}

	// Driver Function
	public static void Main()
	{
		int[] coins = { 1, 2, 3 };
		int n = coins.Length;
		int sum = 4;
		Console.Write(countWays(coins, n, sum));
	}
}

```

## JAVASCRIPT

```javascript


/* Dynamic Programming javascript implementation of Coin
Change problem */

function countWays(S , m , n)
{
	// table[i] will be storing the number of solutions
	// for value i. We need sum+1 rows as the table is
	// constructed in bottom up manner using the base
	// case (sum = 0)
	// Initialize all table values as 0
	var table = Array(sum+1).fill(0);
	

	// Base case (If given value is 0)
	table[0] = 1;

	// Pick all coins one by one and update the table
	// values after the index greater than or equal to
	// the value of the picked coin
	for (i=0; i<n; i++)
		for (j=coins[i]; j<=sum; j++)
			table[j] += table[j-coins[i]];

	return table[sum];
}

// Driver Function to test above function
var coins = [1, 2, 3];
var n = coins.length;
var sum = 4;
console.log(countWays(coins, n, sum));


```


**Output:**

```
4
```
**Time complexity:** O(M*sum)
**Auxiliary space:** O(M*sum) 

