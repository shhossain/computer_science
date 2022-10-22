## Factorial

Given a positive integer, N. Find the factorial of N.

**Example 1:**

```
Input:
N = 5
Output:
120
Explanation:
5*4*3*2*1 = 120
```

**Example 2:**

```
Input:
N = 4
Output:
24
Explanation:
4*3*2*1 = 24
```

## Solution

```cpp
// C++ program to find
// factorial of given number
#include <iostream>
using namespace std;

// Function to find factorial
// of given number
unsigned int factorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

// Driver code
int main()
{
	int num = 5;
	cout << "Factorial of "
		<< num << " is " << factorial(num) << endl;
	return 0;
}
```

## Company Tags

```
Samsung
MAQ Software
Morgan Stanley
Wipro
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/program-for-factorial-of-a-number/)
