# Knapsack Problem

In the ***knapsack problem***, a set of items with given values and sizes (such as weights or volumes) is packed into a container with a maximum capacity. 
The goal is to choose the subset of items which maximizes the profit such that the collective weight of selected items does not cross the knapsack capacity.

Knapsack problem has the following two variants-

1. Fractional Knapsack Problem
2. 0/1 Knapsack Problem

The ***0/1 Knapsack Problem*** is solved using the **Dynamic Problem Approach**. It has the following characteristics :

1. As the name suggests, items are indivisible here.
2. We can not take the fraction of any item.
3. We have to either take an item completely or leave it completely.
4. Knapsack weight capacity = w
5. Number of items each having some weight and value = n


## Algorithm :

The algorithm for Knapsack Problem using Dynamic Programming is as follows:

**Input:** Set of items X, set of weight W, profit of items V and knapsack capacity M 
**Output:** Array V, which holds the solution of problem

```
for i ← 1 to n do
    V[i, 0] ← 0
end

for i ← 1 to M do
    V[0, i] ← 0
end

for V[0, i] ← 0 do
    for j ← 0 to M do
        if w[i]  ≤ j then
            V[i, j] ← max{V[i-1, j],  v[i]  + V[i – 1, j –  w[i]]}
        else
            V[i, j] ← V[i – 1, j]    // w[i]>j
        end
    end
end

```

## Implementation:

* [C](#c)
* [C++](#cpp)
* [Python](#python)

## C

```c
// C solution for 0-1 Knapsack problem

#include <stdio.h>

//Function that returns the maximum of two integers
int max(int a, int b)
{
	return (a > b) ? a : b;
}

// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	int K[n + 1][W + 1];

	for (i = 0; i <= n; i++)
	{
		for (w = 0; w <= W; w++)
		{
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1]
						+ K[i - 1][w - wt[i - 1]],
						K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	return K[n][W];
}

// Driver Code
int main()
{
	int val[] = { 80, 120, 160 };
	int wt[] = { 20, 30, 40 };
	int W = 80;
	int n = sizeof(val) / sizeof(val[0]);
	printf("%d", knapSack(W, wt, val, n));
	return 0;
}

```

## C++ 

```cpp
// C++ solution for 0-1 Knapsack problem
#include <bits/stdc++.h>
using namespace std;

// Function that returns the maximum of two integers
int max(int a, int b)
{
	return (a > b) ? a : b;
}

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	vector<vector<int>> K(n + 1, vector<int>(W + 1));

	for(i = 0; i <= n; i++)
	{
		for(w = 0; w <= W; w++)
		{
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1] +
								K[i - 1][w - wt[i - 1]],
								K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}
	return K[n][W];
}

// Driver Code
int main()
{
	int val[] = { 80, 120, 160 };
	int wt[] = { 20, 30, 40 };
	int W = 80;
	int n = sizeof(val) / sizeof(val[0]);
	
	cout << knapSack(W, wt, val, n);
	
	return 0;
}
```

## Python 

```python
# Python solution for 0-1 Knapsack problem

# Returns the maximum value that can
# be put in a knapsack of capacity W

def knapSack(W, wt, val, n):
	K = [[0 for x in range(W + 1)] for x in range(n + 1)]

	for i in range(n + 1):
		for w in range(W + 1):
			if i == 0 or w == 0:
				K[i][w] = 0
			elif wt[i-1] <= w:
				K[i][w] = max(val[i-1]
						+ K[i-1][w-wt[i-1]],
							K[i-1][w])
			else:
				K[i][w] = K[i-1][w]

	return K[n][W]


# Driver code
val = [80, 120, 160]
wt = [20, 30, 40]
W = 80
n = len(val)
print(knapSack(W, wt, val, n))

```

**Output:**

```
280
```
## Complexity Analysis:

**Time Complexity: O(N*W)** - where ‘N’ is the number of weight element and ‘W’ is capacity

**Auxiliary Space: O(N*W)** - The use of 2-D array of size ‘N*W’

## Applications of Knapsack Problem:

1. Machine Scheduling
2. Inventory Management System
3. Space Allocation
4. Asset Optimization



