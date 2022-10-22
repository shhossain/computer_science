## Find All Possible Path

Given a N x M grid. Find All possible paths from top left to bottom right.From each cell you can either move only to right or down.

**Example 1:**

```
Input: 1 2 3
       4 5 6
Output: 1 4 5 6
        1 2 5 6
        1 2 3 6
Explanation: We can see that there are 3
paths from the cell (0,0) to (1,2).
```

**Example 2:**

```
Input: 1 2
       3 4
Output: 1 2 4
        1 3 4
```

## Solution

```cpp
// C++ program to Print all possible paths from
// top left to bottom right of a mXn matrix
#include<iostream>

using namespace std;

/* mat: Pointer to the starting of mXn matrix
i, j: Current position of the robot (For the first call use 0,0)
m, n: Dimensions of given the matrix
pi: Next index to be filed in path array
*path[0..pi-1]: The path traversed by robot till now (Array to hold the
				path need to have space for at least m+n elements) */
void printAllPathsUtil(int *mat, int i, int j, int m, int n, int *path, int pi)
{
	// Reached the bottom of the matrix so we are left with
	// only option to move right
	if (i == m - 1)
	{
		for (int k = j; k < n; k++)
			path[pi + k - j] = *((mat + i*n) + k);
		for (int l = 0; l < pi + n - j; l++)
			cout << path[l] << " ";
		cout << endl;
		return;
	}

	// Reached the right corner of the matrix we are left with
	// only the downward movement.
	if (j == n - 1)
	{
		for (int k = i; k < m; k++)
			path[pi + k - i] = *((mat + k*n) + j);
		for (int l = 0; l < pi + m - i; l++)
			cout << path[l] << " ";
		cout << endl;
		return;
	}

	// Add the current cell to the path being generated
	path[pi] = *((mat + i*n) + j);

	// Print all the paths that are possible after moving down
	printAllPathsUtil(mat, i+1, j, m, n, path, pi + 1);

	// Print all the paths that are possible after moving right
	printAllPathsUtil(mat, i, j+1, m, n, path, pi + 1);

	// Print all the paths that are possible after moving diagonal
	// printAllPathsUtil(mat, i+1, j+1, m, n, path, pi + 1);
}

// The main function that prints all paths from
// top left to bottom right in a matrix 'mat' of size mXn
void printAllPaths(int *mat, int m, int n)
{
	int *path = new int[m+n];
	printAllPathsUtil(mat, 0, 0, m, n, path, 0);
}

// Driver program to test above functions
int main()
{
	int mat[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printAllPaths(*mat, 2, 3);
	return 0;
}
```

## Topic Tag

```
Backtracking
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/print-all-possible-paths-from-top-left-to-bottom-right-of-a-mxn-matrix/)
