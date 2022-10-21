## Find All Possible Path

Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

**Example 1:**

```
Input: n = 2
Output: 1
Explanation: 1 is the 2nd number
of fibonacci series.
```

**Example 2:**

```
Input: n = 5
Output: 5
Explanation: 5 is the 5th number
of fibonacci series.
```

## Solution

```cpp
// C++ program for Fibonacci Series
// using Dynamic Programming
#include<bits/stdc++.h>
using namespace std;

class GFG{

public:
int fib(int n)
{

	// Declare an array to store
	// Fibonacci numbers.
	// 1 extra to handle
	// case, n = 0
	int f[n + 2];
	int i;

	// 0th and 1st number of the
	// series are 0 and 1
	f[0] = 0;
	f[1] = 1;

	for(i = 2; i <= n; i++)
	{

	//Add the previous 2 numbers
	// in the series and store it
	f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
	}
};

// Driver code
int main ()
{
	GFG g;
	int n = 9;

	cout << g.fib(n);
	return 0;
}

```

## Company Tags

```
Adobe
Amazon
Goldman Sachs
MakeMyTrip
MAQ Software
OYO Rooms
Snapdeal
Microsoft
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/)
