## Nth Catalan Number

Given a number N. The task is to find the Nth catalan number.
The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …
Note: Positions start from 0 as shown above.

**Example 1:**

```
Input:
N = 5
Output: 42
```

**Example 2:**

```
Input:
N = 4
Output: 14
```

## Solution

```cpp
#include <iostream>
using namespace std;

// A dynamic programming based function to find nth
// Catalan number
unsigned long int catalanDP(unsigned int n)
{
	// Table to store results of subproblems
	unsigned long int catalan[n + 1];

	// Initialize first two values in table
	catalan[0] = catalan[1] = 1;

	// Fill entries in catalan[] using recursive formula
	for (int i = 2; i <= n; i++) {
		catalan[i] = 0;
		for (int j = 0; j < i; j++)
			catalan[i] += catalan[j] * catalan[i - j - 1];
	}

	// Return last entry
	return catalan[n];
}

// Driver code
int main()
{
	for (int i = 0; i < 10; i++)
		cout << catalanDP(i) << " ";
	return 0;
}
```

## Company Tags

```
Amazon
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/program-nth-catalan-number/)
