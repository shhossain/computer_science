# Matrix Chain Multiplication

Given the dimension of a sequence of matrices in an array arr[], where the dimension of the ith matrix is (arr[i-1] * arr[i]), the task is to find the most efficient way to multiply these matrices together such that the total number of element multiplications is minimum.

**Examples:**
```
Input: arr[] = {40, 20, 30, 10, 30}
Output: 26000
Explanation:There are 4 matrices of dimensions 40×20, 20×30, 30×10, 10×30.
Let the input 4 matrices be A, B, C and D.
The minimum number of  multiplications are obtained by
putting parenthesis in following way (A(BC))D.
The minimum is 20*30*10 + 40*20*10 + 40*10*30

Input: arr[] = {1, 2, 3, 4, 3}
Output: 30
Explanation: There are 4 matrices of dimensions 1×2, 2×3, 3×4, 4×3.
Let the input 4 matrices be A, B, C and D.  
The minimum number of multiplications are obtained by
putting parenthesis in following way ((AB)C)D.
The minimum number is 1*2*3 + 1*3*4 + 1*4*3 = 30

Input: arr[] = {10, 20, 30}
Output: 6000  
Explanation: There are only two matrices of dimensions 10×20 and 20×30.
So there  is only one way to multiply the matrices, cost of which is 10*20*30
```

The following are different methods to solve Matrix Chain Multiplication Problem.

## Method 1 (Recursion)

**We can solve the problem using recursion based on the following facts and observations:**
```
Two matrices of size m*n and n*p when multiplied, they generate a matrix of size m*p and the number of multiplications performed are m*n*p.

Now, for a given chain of N matrices, the first partition can be done in N-1 ways. For example, sequence of matrices A, B, C and D can be grouped as (A)(BCD), (AB)(CD) or (ABC)(D) in these 3 ways.

So a range [i, j] can be broken into two groups like {[i, i+1], [i+1, j]}, {[i, i+2], [i+2, j]}, . . . , {[i, j-1], [j-1, j]}.

  - Each of the groups can be further partitioned into smaller groups and we can find the total required multiplications by solving for each of the groups.
  - The minimum number of multiplications among all the first partitions is the required answer.      
```

Follow the steps mentioned below to implement the approach:

Create a recursive function that takes i and j as parameters that determines the range of a group.
Iterate from k = i to j to partition the given range into two groups.
Call the recursive function for these groups.
Return the minimum value among all the partitions as the required minimum number of multiplications to multiply all the matrices of this group.
The minimum value returned for the range 0 to N-1 is the required answer.
Below is the implementation of the above approach.

## CPP
```cpp

// C++ code to implement the
// matrix chain multiplication using recursion

#include <bits/stdc++.h>
using namespace std;

// Matrix Ai has dimension p[i-1] x p[i]
// for i = 1 . . . n
int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int mini = INT_MAX;
	int count;

	// Place parenthesis at different places
	// between first and last matrix,
	// recursively calculate count of multiplications
	// for each parenthesis placement
	// and return the minimum count
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		mini = min(count, mini);
	}

	// Return minimum count
	return mini;
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 4, 3 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << "Minimum number of multiplications is "
		<< MatrixChainOrder(arr, 1, N - 1);
	return 0;
}

```

**Output:**

```
Minimum number of multiplications is 30
```

**Time Complexity:** exponential.

**Extra Space:** O(1).

Since the same sub-problems are called again, this problem has the Overlapping Subproblems property.

## Method 2: (Use Dynamic Programming)

```
The Idea to Solve this Problem is by using the Bottom Up Memoization. Here is the Bottom up approach to solve this Problem.

```

1. Build a matrix dp[][] of size N*N for memoization purposes.
2. Use the same recursive call as done in the above approach:
  - When we find a range (i, j) for which the value is already calculated, return the minimum value for that range (i.e., dp[i][j]).
  - Otherwise, perform the recursive calls as mentioned earlier.
3. The value stored at dp[0][N-1] is the required answer.
Below is the implementation of the above approach

## Implementation


* [C++](#cpp)
* [C#](#csharp)
* [Java](#java)
* [Python](#python)
* [JavaScript](#javascript)


## CPP

```cpp
// C++ program using memoization
#include <bits/stdc++.h>
using namespace std;
int dp[100][100];

// Function for matrix chain multiplication
int matrixChainMemoised(int* p, int i, int j)
{
	if (i == j)
	{
		return 0;
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}
	dp[i][j] = INT_MAX;
	for (int k = i; k < j; k++)
	{
		dp[i][j] = min(
			dp[i][j], matrixChainMemoised(p, i, k)
					+ matrixChainMemoised(p, k + 1, j)
					+ p[i - 1] * p[k] * p[j]);
	}
	return dp[i][j];
}
int MatrixChainOrder(int* p, int n)
{
	int i = 1, j = n - 1;
	return matrixChainMemoised(p, i, j);
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	memset(dp, -1, sizeof dp);

	cout << "Minimum number of multiplications is "
		<< MatrixChainOrder(arr, n);
}

```

## JAVA

```java
// Java program using memoization
import java.io.*;
import java.util.*;
class GFG
{

static int[][] dp = new int[100][100];

// Function for matrix chain multiplication
static int matrixChainMemoised(int[] p, int i, int j)
{
	if (i == j)
	{
	return 0;
	}
	if (dp[i][j] != -1)
	{
	return dp[i][j];
	}
	dp[i][j] = Integer.MAX_VALUE;
	for (int k = i; k < j; k++)
	{
	dp[i][j] = Math.min(
		dp[i][j], matrixChainMemoised(p, i, k)
		+ matrixChainMemoised(p, k + 1, j)
		+ p[i - 1] * p[k] * p[j]);
	}
	return dp[i][j];
}

static int MatrixChainOrder(int[] p, int n)
{
	int i = 1, j = n - 1;
	return matrixChainMemoised(p, i, j);
}

// Driver Code
public static void main (String[] args)
{

	int arr[] = { 1, 2, 3, 4 };
	int n= arr.length;

	for (int[] row : dp)
	Arrays.fill(row, -1);

	System.out.println("Minimum number of multiplications is " + MatrixChainOrder(arr, n));
}
}

```
## PYTHON

```python
# Python program using memoization
import sys
dp = [[-1 for i in range(100)] for j in range(100)]

# Function for matrix chain multiplication
def matrixChainMemoised(p, i, j):
	if(i == j):
		return 0

	if(dp[i][j] != -1):
		return dp[i][j]

	dp[i][j] = sys.maxsize

	for k in range(i,j):
		dp[i][j] = min(dp[i][j], matrixChainMemoised(p, i, k) + matrixChainMemoised(p, k + 1, j)+ p[i - 1] * p[k] * p[j])

	return dp[i][j]

def MatrixChainOrder(p,n):
	i = 1
	j = n - 1
	return matrixChainMemoised(p, i, j)

# Driver Code
arr = [1, 2, 3, 4]
n = len(arr)
print("Minimum number of multiplications is",MatrixChainOrder(arr, n))

```

## CSHARP

```csharp
// C# program using memoization
using System;
class GFG
{

	static int[,] dp = new int[100, 100];

// Function for matrix chain multiplication
static int matrixChainMemoised(int[] p, int i, int j)
{
	if (i == j)
	{
	return 0;
	}
	if (dp[i, j] != -1)
	{
	return dp[i, j];
	}
	dp[i, j] = Int32.MaxValue;
	for (int k = i; k < j; k++)
	{
	dp[i, j] = Math.Min(
		dp[i, j], matrixChainMemoised(p, i, k)
		+ matrixChainMemoised(p, k + 1, j)
		+ p[i - 1] * p[k] * p[j]);
	}
	return dp[i,j];
}

static int MatrixChainOrder(int[] p, int n)
{
	int i = 1, j = n - 1;
	return matrixChainMemoised(p, i, j);
}

// Driver code
static void Main()
{
	int[] arr = { 1, 2, 3, 4 };
	int n = arr.Length;

	for(int i = 0; i < 100; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			dp[i, j] = -1;
		}
	}

	Console.WriteLine("Minimum number of multiplications is " +
					MatrixChainOrder(arr, n));
}
}

```

## JAVASCRIPT

```javascript
<script>

// Javascript program using memoization
let dp = new Array(100);
for(var i = 0; i < dp.length; i++)
{
	dp[i] = new Array(2);
}

// Function for matrix chain multiplication
function matrixChainMemoised(p, i, j)
{
	if (i == j)
	{
		return 0;
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}

	dp[i][j] = Number.MAX_VALUE;
	for(let k = i; k < j; k++)
	{
		dp[i][j] = Math.min(
			dp[i][j], matrixChainMemoised(p, i, k) +
					matrixChainMemoised(p, k + 1, j) +
					p[i - 1] * p[k] * p[j]);
	}
	return dp[i][j];
}

function MatrixChainOrder(p, n)
{
	let i = 1, j = n - 1;
	return matrixChainMemoised(p, i, j);
}

// Driver code
let arr = [ 1, 2, 3, 4 ];
let n = arr.length;

for(var i = 0; i < dp.length; i++)
{
	for(var j = 0; j < dp.length; j++)
	{
		dp[i][j] = -1;
	}
}

document.write("Minimum number of multiplications is " +
			MatrixChainOrder(arr, n));

</script>

```


**Output:**

```
Minimum number of multiplications is 18
```
**Time complexity:** O(n^3)

**Auxiliary space:** O(n^2) + recursion stack space
