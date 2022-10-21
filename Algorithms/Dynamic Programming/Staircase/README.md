## Count ways to reach the n’th stair

There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top.

## Examples:

```
Input: n = 1
Output: 1
There is only one way to climb 1 stair

Input: n = 2
Output: 2
There are two ways: (1, 1) and (2)

Input: n = 4
Output: 5
(1, 1, 1, 1), (1, 1, 2), (2, 1, 1), (1, 2, 1), (2, 2)
```

**Method 1**: The first method uses the technique of recursion to solve this problem.
Approach: We can easily find the recursive nature in the above problem. The person can reach nth stair from either (n-1)th stair or from (n-2)th stair. Hence, for each stair n, we try to find out the number of ways to reach n-1th stair and n-2th stair and add them to give the answer for the nth stair. Therefore the expression for such an approach comes out to be :

```
ways(n) = ways(n-1) + ways(n-2)
```

The above expression is actually the expression for Fibonacci numbers, but there is one thing to notice, the value of ways(n) is equal to fibonacci(n+1).

```
ways(1) = fib(2) = 1
ways(2) = fib(3) = 2
ways(3) = fib(4) = 3
```

For a better understanding, let’s refer to the recursion tree below -:

```
Input: N = 4

                  fib(5)
           '3'  /        \   '2'
               /          \
           fib(4)         fib(3)
     '2'  /      \ '1'   /      \
         /        \     /        \
     fib(3)     fib(2)fib(2)      fib(1)
     /    \ '1' /   \ '0'

'1' / '1'\ / \
/ \ fib(1) fib(0)
fib(2) fib(1)
```

So we can use the function for Fibonacci numbers to find the value of ways(n). Following is C++ implementation of the above idea.

```cpp
// C++ program to count number of
// ways to reach Nth stair
#include <bits/stdc++.h>
using namespace std;

// A simple recursive program to
// find N'th fibonacci number
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

// Returns number of ways to
// reach s'th stair
int countWays(int s)
{
	return fib(s + 1);
}

// Driver C
int main()
{
	int s = 4;

	cout << "Number of ways = " << countWays(s);

	return 0;
}

// This code is contributed by shubhamsingh10
```

**Generalization of the Problem**
How to count the number of ways if the person can climb up to m stairs for a given value m. For example, if m is 4, the person can climb 1 stair or 2 stairs or 3 stairs or 4 stairs at a time.

Approach: For the generalization of above approach the following recursive relation can be used.

```
ways(n, m) = ways(n-1, m) + ways(n-2, m) + ... ways(n-m, m)
```

In this approach to reach nth stair, try climbing all possible number of stairs lesser than equal to n from present stair.

```cpp
// C++ program to count number of ways
// to reach nth stair when a person
// can climb either 1 or 2 stairs at a time
#include <bits/stdc++.h>
using namespace std;

// A recursive function used by countWays
int countWaysUtil(int n, int m)
{
	if (n <= 1)
	{
		return n;
	}

	int res = 0;
	for(int i = 1; i <= m && i <= n; i++)
	{
	res += countWaysUtil(n - i, m);
	}
	return res;
}

// Returns number of ways to reach s'th stair
int countWays(int s, int m)
{
	return countWaysUtil(s + 1, m);
}

// Driver code
int main()
{
	int s = 4, m = 2;
	cout << "Number of ways = " << countWays(s, m);

	return 0;
}
```

**output**

```
Number of ways = 5
```

Complexity Analysis:

Time Complexity: O(2^n)
The time complexity of the above implementation is exponential (golden ratio raised to power n) due to redundant calculations. It can be optimized to O(m\*n) by using dynamic programming.
Auxiliary Space: O(1)

**Method 2:** Memoization

We can use the bottom-up approach of dp to solve this problem as well

For this, we can create an array dp[] and initialize it with -1.

Whenever we see that a subproblem is not solved we can call the recursive method,

else we stop the recursion if that the subproblem is solved already.

```cpp
// C++ program to count number of ways to reach Nth stair
#include <bits/stdc++.h>
using namespace std;

// A simple recursive program to find N'th fibonacci number
int fib(int n, int dp[])
{
	if (n <= 1)
		return dp[n] = 1;

	if (dp[n] != -1) {
		return dp[n];
	}
	dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
	return dp[n];
}

// Returns number of ways to reach s'th stair
int countWays(int n)
{
	int dp[n + 1];
	memset(dp, -1, sizeof dp);
	fib(n, dp);
	return dp[n];
}

// Driver C
int main()
{
	int n = 4;
	cout << "Number of ways = " << countWays(n);
	return 0;
}

```

**output**

```
Number of ways = 5
```

Complexity Analysis:

Time Complexity: O(n)

Auxiliary Space: O(n)
