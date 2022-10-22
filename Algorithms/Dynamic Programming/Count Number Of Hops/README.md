## Count Number Of Hops

A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top. As the answer will be large find the answer modulo 1000000007.

**Example 1:**

```
Input:
N = 1
Output: 1
```

**Example 2:**

```
Input:
N = 4
Output: 7
Explanation:Below are the 7 ways to reach
4
1 step + 1 step + 1 step + 1 step
1 step + 2 step + 1 step
2 step + 1 step + 1 step
1 step + 1 step + 2 step
2 step + 2 step
3 step + 1 step
1 step + 3 step
```

## Solution

```cpp
// A Dynamic Programming based C++ program to count number of ways
// to cover a distance with 1, 2 and 3 steps
#include<iostream>
using namespace std;

int printCountDP(int dist)
{
	int count[dist+1];

	// Initialize base values. There is one way to cover 0 and 1
	// distances and two ways to cover 2 distance
	count[0] = 1;
	if(dist >= 1)
			count[1] = 1;
	if(dist >= 2)
			count[2] = 2;

	// Fill the count array in bottom up manner
	for (int i=3; i<=dist; i++)
	count[i] = count[i-1] + count[i-2] + count[i-3];

	return count[dist];
}

// driver program
int main()
{
	int dist = 4;
	cout << printCountDP(dist);
	return 0;
}
```

## Company Tags

```
Amazon
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/count-number-of-ways-to-cover-a-distance/)
