## The Knight’s tour problem

**Problem Statement:**

Given a **N*N** board with the Knight placed on the first block of an empty board. Moving according to the rules of chess knight must visit each square exactly once. Print the order of each cell in which they are visited.

## Example

```
Input : 
N = 8

Output:
0  59  38  33  30  17   8  63
37  34  31  60   9  62  29  16
58   1  36  39  32  27  18   7
35  48  41  26  61  10  15  28
42  57   2  49  40  23   6  19
47  50  45  54  25  20  11  14
56  43  52   3  22  13  24   5
51  46  55  44  53   4  21  12
```


## **Backtracking Algorithm for Knight’s tour** 

Following is the Backtracking algorithm for Knight’s tour problem. 

```

If all squares are visited 
    print the solution
Else
   a) Add one of the next moves to solution vector and recursively 
   check if this move leads to a solution. (A Knight can make maximum 
   eight moves. We choose one of the 8 moves in this step).
   b) If the move chosen in the above step doesn't lead to a solution
   then remove this move from the solution vector and try other 
   alternative moves.
   c) If none of the alternatives work then return false (Returning false 
   will remove the previously added item in recursion and if false is 
   returned by the initial call of recursion then "no solution exists" )
   ```
   
   **Following are implementations for Knight’s tour problem. It prints one of the possible solutions in 2D matrix form. Basically, the output is a 2D 8*8 matrix with numbers from 0 to 63 and these numbers show steps made by Knight**
   
   ## Implementation


* [C++](#cpp)
* [C#](#csharp)
* [Java](#java)
* [Python](#python)
* [JavaScript](#javascript)



## CPP


```cpp
// C++ program for Knight Tour problem
#include <bits/stdc++.h>
using namespace std;

#define N 8

int solveKTUtil(int x, int y, int movei, int sol[N][N],
				int xMove[], int yMove[]);

/* A utility function to check if i,j are
valid indexes for N*N chessboard */
int isSafe(int x, int y, int sol[N][N])
{
	return (x >= 0 && x < N && y >= 0 && y < N
			&& sol[x][y] == -1);
}

/* A utility function to print
solution matrix sol[N][N] */
void printSolution(int sol[N][N])
{
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++)
			cout << " " << setw(2) << sol[x][y] << " ";
		cout << endl;
	}
}

/* This function solves the Knight Tour problem using
Backtracking. This function mainly uses solveKTUtil()
to solve the problem. It returns false if no complete
tour is possible, otherwise return true and prints the
tour.
Please note that there may be more than one solutions,
this function prints one of the feasible solutions. */
int solveKT()
{
	int sol[N][N];

	/* Initialization of solution matrix */
	for (int x = 0; x < N; x++)
		for (int y = 0; y < N; y++)
			sol[x][y] = -1;

	/* xMove[] and yMove[] define next move of Knight.
	xMove[] is for next value of x coordinate
	yMove[] is for next value of y coordinate */
	int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
	int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

	// Since the Knight is initially at the first block
	sol[0][0] = 0;

	/* Start from 0,0 and explore all tours using
	solveKTUtil() */
	if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == 0) {
		cout << "Solution does not exist";
		return 0;
	}
	else
		printSolution(sol);

	return 1;
}

/* A recursive utility function to solve Knight Tour
problem */
int solveKTUtil(int x, int y, int movei, int sol[N][N],
				int xMove[8], int yMove[8])
{
	int k, next_x, next_y;
	if (movei == N * N)
		return 1;

	/* Try all next moves from
	the current coordinate x, y */
	for (k = 0; k < 8; k++) {
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		if (isSafe(next_x, next_y, sol)) {
			sol[next_x][next_y] = movei;
			if (solveKTUtil(next_x, next_y, movei + 1, sol,
							xMove, yMove)
				== 1)
				return 1;
			else
				
			// backtracking
				sol[next_x][next_y] = -1;
		}
	}
	return 0;
}

// Driver Code
int main()
{
	// Function Call
	solveKT();
	return 0;
}


```


## CSHARP

```csharp

// C# program for
// Knight Tour problem
using System;

class SOLUTION {
	static int N = 8;

	/* A utility function to
	check if i,j are valid
	indexes for N*N chessboard */
	static bool isSafe(int x, int y, int[, ] sol)
	{
		return (x >= 0 && x < N && y >= 0 && y < N
				&& sol[x, y] == -1);
	}

	/* A utility function to
	print solution matrix sol[N][N] */
	static void printSolution(int[, ] sol)
	{
		for (int x = 0; x < N; x++) {
			for (int y = 0; y < N; y++)
				Console.Write(sol[x, y] + " ");
			Console.WriteLine();
		}
	}

	/* This function solves the
	Knight Tour problem using
	Backtracking. This function
	mainly uses solveKTUtil() to
	solve the problem. It returns
	false if no complete tour is
	possible, otherwise return true
	and prints the tour. Please note
	that there may be more than one
	solutions, this function prints
	one of the feasible solutions. */
	static bool solveKT()
	{
		int[, ] sol = new int[8, 8];

		/* Initialization of
		solution matrix */
		for (int x = 0; x < N; x++)
			for (int y = 0; y < N; y++)
				sol[x, y] = -1;

		/* xMove[] and yMove[] define
		next move of Knight.
		xMove[] is for next
		value of x coordinate
		yMove[] is for next
		value of y coordinate */
		int[] xMove = { 2, 1, -1, -2, -2, -1, 1, 2 };
		int[] yMove = { 1, 2, 2, 1, -1, -2, -2, -1 };

		// Since the Knight is
		// initially at the first block
		sol[0, 0] = 0;

		/* Start from 0,0 and explore
		all tours using solveKTUtil() */
		if (!solveKTUtil(0, 0, 1, sol, xMove, yMove)) {
			Console.WriteLine("Solution does "
							+ "not exist");
			return false;
		}
		else
			printSolution(sol);

		return true;
	}

	/* A recursive utility function
	to solve Knight Tour problem */
	static bool solveKTUtil(int x, int y, int movei,
							int[, ] sol, int[] xMove,
							int[] yMove)
	{
		int k, next_x, next_y;
		if (movei == N * N)
			return true;

		/* Try all next moves from
		the current coordinate x, y */
		for (k = 0; k < 8; k++) {
			next_x = x + xMove[k];
			next_y = y + yMove[k];
			if (isSafe(next_x, next_y, sol)) {
				sol[next_x, next_y] = movei;
				if (solveKTUtil(next_x, next_y, movei + 1,
								sol, xMove, yMove))
					return true;
				else
					// backtracking
					sol[next_x, next_y] = -1;
			}
		}

		return false;
	}

	// Driver Code
	public static void Main()
	{
		// Function Call
		solveKT();
	}
}

```


## JAVA

```java
// Java program for Knight Tour problem
class KnightTour {
	static int N = 8;

	/* A utility function to check if i,j are
	valid indexes for N*N chessboard */
	static boolean isSafe(int x, int y, int sol[][])
	{
		return (x >= 0 && x < N && y >= 0 && y < N
				&& sol[x][y] == -1);
	}

	/* A utility function to print solution
	matrix sol[N][N] */
	static void printSolution(int sol[][])
	{
		for (int x = 0; x < N; x++) {
			for (int y = 0; y < N; y++)
				System.out.print(sol[x][y] + " ");
			System.out.println();
		}
	}

	/* This function solves the Knight Tour problem
	using Backtracking. This function mainly
	uses solveKTUtil() to solve the problem. It
	returns false if no complete tour is possible,
	otherwise return true and prints the tour.
	Please note that there may be more than one
	solutions, this function prints one of the
	feasible solutions. */
	static boolean solveKT()
	{
		int sol[][] = new int[8][8];

		/* Initialization of solution matrix */
		for (int x = 0; x < N; x++)
			for (int y = 0; y < N; y++)
				sol[x][y] = -1;

		/* xMove[] and yMove[] define next move of Knight.
		xMove[] is for next value of x coordinate
		yMove[] is for next value of y coordinate */
		int xMove[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
		int yMove[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

		// Since the Knight is initially at the first block
		sol[0][0] = 0;

		/* Start from 0,0 and explore all tours using
		solveKTUtil() */
		if (!solveKTUtil(0, 0, 1, sol, xMove, yMove)) {
			System.out.println("Solution does not exist");
			return false;
		}
		else
			printSolution(sol);

		return true;
	}

	/* A recursive utility function to solve Knight
	Tour problem */
	static boolean solveKTUtil(int x, int y, int movei,
							int sol[][], int xMove[],
							int yMove[])
	{
		int k, next_x, next_y;
		if (movei == N * N)
			return true;

		/* Try all next moves from the current coordinate
			x, y */
		for (k = 0; k < 8; k++) {
			next_x = x + xMove[k];
			next_y = y + yMove[k];
			if (isSafe(next_x, next_y, sol)) {
				sol[next_x][next_y] = movei;
				if (solveKTUtil(next_x, next_y, movei + 1,
								sol, xMove, yMove))
					return true;
				else
					sol[next_x][next_y]
						= -1; // backtracking
			}
		}

		return false;
	}

	/* Driver Code */
	public static void main(String args[])
	{
		// Function Call
		solveKT();
	}
}

```


## PYTHON

```python

# Python3 program to solve Knight Tour problem using Backtracking

# Chessboard Size
n = 8


def isSafe(x, y, board):
	'''
		A utility function to check if i,j are valid indexes
		for N*N chessboard
	'''
	if(x >= 0 and y >= 0 and x < n and y < n and board[x][y] == -1):
		return True
	return False


def printSolution(n, board):
	'''
		A utility function to print Chessboard matrix
	'''
	for i in range(n):
		for j in range(n):
			print(board[i][j], end=' ')
		print()


def solveKT(n):
	'''
		This function solves the Knight Tour problem using
		Backtracking. This function mainly uses solveKTUtil()
		to solve the problem. It returns false if no complete
		tour is possible, otherwise return true and prints the
		tour.
		Please note that there may be more than one solutions,
		this function prints one of the feasible solutions.
	'''

	# Initialization of Board matrix
	board = [[-1 for i in range(n)]for i in range(n)]

	# move_x and move_y define next move of Knight.
	# move_x is for next value of x coordinate
	# move_y is for next value of y coordinate
	move_x = [2, 1, -1, -2, -2, -1, 1, 2]
	move_y = [1, 2, 2, 1, -1, -2, -2, -1]

	# Since the Knight is initially at the first block
	board[0][0] = 0

	# Step counter for knight's position
	pos = 1

	# Checking if solution exists or not
	if(not solveKTUtil(n, board, 0, 0, move_x, move_y, pos)):
		print("Solution does not exist")
	else:
		printSolution(n, board)


def solveKTUtil(n, board, curr_x, curr_y, move_x, move_y, pos):
	'''
		A recursive utility function to solve Knight Tour
		problem
	'''

	if(pos == n**2):
		return True

	# Try all next moves from the current coordinate x, y
	for i in range(8):
		new_x = curr_x + move_x[i]
		new_y = curr_y + move_y[i]
		if(isSafe(new_x, new_y, board)):
			board[new_x][new_y] = pos
			if(solveKTUtil(n, board, new_x, new_y, move_x, move_y, pos+1)):
				return True

			# Backtracking
			board[new_x][new_y] = -1
	return False


# Driver Code
if __name__ == "__main__":
	
	# Function Call
	solveKT(n)

```

## JAVASCRIPT


```javascript
<script>

// Javascript program for Knight Tour problem
let N = 8;

// A utility function to check if i,j are
// valid indexes for N*N chessboard
function isSafe(x, y, sol)
{
	return(x >= 0 && x < N && y >= 0 &&
			y < N && sol[x][y] == -1);
}

// A utility function to print solution
// matrix sol[N][N]
function printSolution(sol)
{
	for(let x = 0; x < N; x++)
	{
		for(let y = 0; y < N; y++)
			document.write(sol[x][y] + " ");
			
		document.write("<br/>");
	}
}

// This function solves the Knight Tour problem
// using Backtracking. This function mainly
// uses solveKTUtil() to solve the problem. It
// returns false if no complete tour is possible,
// otherwise return true and prints the tour.
// Please note that there may be more than one
// solutions, this function prints one of the
// feasible solutions.
function solveKT()
{
	let sol = new Array(8);
	for(var i = 0; i < sol.length; i++)
	{
		sol[i] = new Array(2);
	}

	// Initialization of solution matrix
	for(let x = 0; x < N; x++)
		for(let y = 0; y < N; y++)
			sol[x][y] = -1;

	// xMove[] and yMove[] define next move of Knight.
	// xMove[] is for next value of x coordinate
	// yMove[] is for next value of y coordinate
	let xMove = [ 2, 1, -1, -2, -2, -1, 1, 2 ];
	let yMove = [ 1, 2, 2, 1, -1, -2, -2, -1 ];

	// Since the Knight is initially at the first block
	sol[0][0] = 0;

	// Start from 0,0 and explore all tours using
	// solveKTUtil()
	if (!solveKTUtil(0, 0, 1, sol, xMove, yMove))
	{
		document.write("Solution does not exist");
		return false;
	}
	else
		printSolution(sol);

	return true;
}

// A recursive utility function to solve Knight
// Tour problem
function solveKTUtil(x, y, movei, sol, xMove, yMove)
{
	let k, next_x, next_y;
	if (movei == N * N)
		return true;

	// Try all next moves from the
	// current coordinate x, y
	for(k = 0; k < 8; k++)
	{
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		
		if (isSafe(next_x, next_y, sol))
		{
			sol[next_x][next_y] = movei;
			if (solveKTUtil(next_x, next_y, movei + 1,
							sol, xMove, yMove))
				return true;
			else
				sol[next_x][next_y] = -1; // backtracking
		}
	}
	return false;
}

// Driver code

// Function Call
solveKT();


</script>

```


## Output:


```
0  59  38  33  30  17   8  63 
 37  34  31  60   9  62  29  16 
 58   1  36  39  32  27  18   7 
 35  48  41  26  61  10  15  28 
 42  57   2  49  40  23   6  19 
 47  50  45  54  25  20  11  14 
 56  43  52   3  22  13  24   5 
 51  46  55  44  53   4  21  12
 ```
