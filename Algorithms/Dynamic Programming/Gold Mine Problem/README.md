## Gold Mine Problem

Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move

- to the cell diagonally up towards the right
- to the right
- to the cell diagonally down towards the right
  Find out maximum amount of gold which he can collect.

**Example 1:**

```
Input: n = 3, m = 3
M = {{1, 3, 3},
     {2, 1, 4},
     {0, 6, 4}};
Output: 12
Explaination:
The path is {(1,0) -> (2,1) -> (2,2)}.
```

**Example 2:**

```
Input: n = 4, m = 4
M = {{1, 3, 1, 5},
     {2, 2, 4, 1},
     {5, 0, 2, 3},
     {0, 6, 1, 2}};
Output: 16
Explaination:
The path is {(2,0) -> (3,1) -> (2,2)
-> (2,3)} or {(2,0) -> (1,1) -> (1,2)
-> (0,3)}.
```

## Solution

```cpp
// C++ program to solve Gold Mine problem
#include<bits/stdc++.h>
using namespace std;

int collectGold(vector<vector<int>> gold, int x, int y, int n, int m, vector<vector<int>> &dp) {

	// Base condition.
	if ((x < 0) || (x == n) || (y == m)) {
		return 0;
	}

	if(dp[x][y] != -1){
		return dp[x][y] ;
	}

	// Right upper diagonal
	int rightUpperDiagonal = collectGold(gold, x - 1, y + 1, n, m, dp);

	// right
	int right = collectGold(gold, x, y + 1, n, m, dp);

	// Lower right diagonal
	int rightLowerDiagonal = collectGold(gold, x + 1, y + 1, n, m, dp);

	// Return the maximum and store the value
	return dp[x][y] = gold[x][y] + max(max(rightUpperDiagonal, rightLowerDiagonal), right);
}

int getMaxGold(vector<vector<int>> gold, int n, int m)
{
	int maxGold = 0;
	// Initialize the dp vector
	vector<vector<int>> dp(n, vector<int>(m, -1)) ;
	for (int i = 0; i < n; i++) {

		// Recursive function call for ith row.
		int goldCollected = collectGold(gold, i, 0, n, m, dp);
		maxGold = max(maxGold, goldCollected);
	}

	return maxGold;
}

// Driver Code
int main()
{
	vector<vector<int>> gold { {1, 3, 1, 5},
		{2, 2, 4, 1},
		{5, 0, 2, 3},
		{0, 6, 1, 2}
	};
	int m = 4, n = 4;
	cout << getMaxGold(gold, n, m);
	return 0;
}
```

## Company Tags

```
Amazon
Flipkart
Samsung
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/gold-mine-problem/)
