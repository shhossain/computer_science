## N Queen Problem


The **N Queen** is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other.
For example, the following is a solution for the 4 Queen problem.
***
![N_Queen_Problem](https://user-images.githubusercontent.com/76674591/194736148-202b5cd2-4707-4a9c-aa0b-7f075db7b19d.jpg)


The expected output is a binary matrix that has 1s for the blocks where queens are placed. For example, the following is the output matrix for the above 4 queen solution.

```
{ 0,  1,  0,  0}
{ 0,  0,  0,  1}
{ 1,  0,  0,  0}
{ 0,  0,  1,  0

```


**Naive Algorithm** 

Generate all possible configurations of queens on board and print a configuration that satisfies the given constraints.

```
while there are untried configurations
{
   generate the next configuration
   if queens don't attack in this configuration then
   {
      print this configuration;
   }
}
```
***

## Backtracking Algorithm 
The idea is to place queens one by one in different columns, starting from the leftmost column. When we place a queen in a column, we check for clashes with already placed queens. In the current column, if we find a row for which there is no clash, we mark this row and column as part of the solution. If we do not find such a row due to clashes, then we backtrack and return false.


```
1) Start in the leftmost column
2) If all queens are placed
    return true
3) Try all rows in the current column. 
   Do following for every tried row.
    a) If the queen can be placed safely in this row 
       then mark this [row, column] as part of the 
       solution and recursively check if placing
       queen here leads to a solution.
    b) If placing the queen in [row, column] leads to
       a solution then return true.
    c) If placing queen doesn't lead to a solution then
       unmark this [row, column] (Backtrack) and go to 
       step (a) to try other rows.
4) If all rows have been tried and nothing worked,
   return false to trigger backtracking.
   
   
   ```
   **Implementation**
   
   * [C++](#cpp)
   * [C#](#csharp)
   * [Java](#java)
   * [Python](#python)
   * [JavaScript](#javascript)
   * [C](#c)
   
   ## CPP
   
   ```cpp

/* C++ program to solve N Queen Problem using
backtracking */
#include<bits/stdc++.h>
using namespace std;
#define N 4
/* ld is an array where its indices indicate row-col+N-1
(N-1) is for shifting the difference to store negative
indices */
int ld[30] = { 0 };
/* rd is an array where its indices indicate row+col
and used to check whether a queen can be placed on
right diagonal or not*/
int rd[30] = { 0 };
/*column array where its indices indicates column and
used to check whether a queen can be placed in that
	row or not*/
int cl[30] = { 0 };
/* A utility function to print solution */
void printSolution(int board[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout<<" "<< board[i][j]<<" ";
		cout<<endl;
	}
}

/* A recursive utility function to solve N
Queen problem */
bool solveNQUtil(int board[N][N], int col)
{
	/* base case: If all queens are placed
	then return true */
	if (col >= N)
		return true;

	/* Consider this column and try placing
	this queen in all rows one by one */
	for (int i = 0; i < N; i++) {
		/* Check if the queen can be placed on
		board[i][col] */
		/* A check if a queen can be placed on
		board[row][col].We just need to check
		ld[row-col+n-1] and rd[row+coln] where
		ld and rd are for left and right
		diagonal respectively*/
		if ((ld[i - col + N - 1] != 1 && rd[i + col] != 1) && cl[i] != 1) {
			/* Place this queen in board[i][col] */
			board[i][col] = 1;
			ld[i - col + N - 1] = rd[i + col] = cl[i] = 1;

			/* recur to place rest of the queens */
			if (solveNQUtil(board, col + 1))
				return true;

			/* If placing queen in board[i][col]
			doesn't lead to a solution, then
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK
			ld[i - col + N - 1] = rd[i + col] = cl[i] = 0;
		}
	}

	/* If the queen cannot be placed in any row in
		this column col then return false */
	return false;
}
/* This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns false if queens
cannot be placed, otherwise, return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/
bool solveNQ()
{
	int board[N][N] = { { 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 } };

	if (solveNQUtil(board, 0) == false) {
		cout<<"Solution does not exist";
		return false;
	}

	printSolution(board);
	return true;
}

// driver program to test above function
int main()
{
	solveNQ();
	return 0;
}



```

## CSHARP

```csharp

/* C# program to solve N Queen Problem
using backtracking */
using System;
	
class GFG
{
static int N = 4;

/* ld is an array where its indices indicate row-col+N-1
(N-1) is for shifting the difference to store negative
indices */
static int []ld = new int[30];

/* rd is an array where its indices indicate row+col
and used to check whether a queen can be placed on
right diagonal or not*/
static int []rd = new int[30];

/*column array where its indices indicates column and
used to check whether a queen can be placed in that
	row or not*/
static int []cl = new int[30];

/* A utility function to print solution */
static void printSolution(int [,]board)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			Console.Write(" {0} ", board[i, j]);
		Console.Write("\n");
	}
}

/* A recursive utility function to solve N
Queen problem */
static bool solveNQUtil(int [,]board, int col)
{
	/* base case: If all queens are placed
	then return true */
	if (col >= N)
		return true;

	/* Consider this column and try placing
	this queen in all rows one by one */
	for (int i = 0; i < N; i++)
	{
		
		/* Check if the queen can be placed on
		board[i,col] */
		/* A check if a queen can be placed on
		board[row,col].We just need to check
		ld[row-col+n-1] and rd[row+coln] where
		ld and rd are for left and right
		diagonal respectively*/
		if ((ld[i - col + N - 1] != 1 &&
			rd[i + col] != 1) && cl[i] != 1)
		{
			/* Place this queen in board[i,col] */
			board[i, col] = 1;
			ld[i - col + N - 1] =
			rd[i + col] = cl[i] = 1;

			/* recur to place rest of the queens */
			if (solveNQUtil(board, col + 1))
				return true;

			/* If placing queen in board[i,col]
			doesn't lead to a solution, then
			remove queen from board[i,col] */
			board[i, col] = 0; // BACKTRACK
			ld[i - col + N - 1] =
			rd[i + col] = cl[i] = 0;
		}
	}

	/* If the queen cannot be placed in any row in
		this column col then return false */
	return false;
}

/* This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns false if queens
cannot be placed, otherwise, return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/
static bool solveNQ()
{
	int [,]board = {{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 }};

	if (solveNQUtil(board, 0) == false)
	{
		Console.Write("Solution does not exist");
		return false;
	}

	printSolution(board);
	return true;
}

// Driver Code
public static void Main(String[] args)
{
	solveNQ();
}
}




```

## Java

```java
/* Java program to solve N Queen Problem
using backtracking */
import java.util.*;

class GFG
{
static int N = 4;

/* ld is an array where its indices indicate row-col+N-1
(N-1) is for shifting the difference to store negative
indices */
static int []ld = new int[30];

/* rd is an array where its indices indicate row+col
and used to check whether a queen can be placed on
right diagonal or not*/
static int []rd = new int[30];

/*column array where its indices indicates column and
used to check whether a queen can be placed in that
	row or not*/
static int []cl = new int[30];

/* A utility function to print solution */
static void printSolution(int board[][])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			System.out.printf(" %d ", board[i][j]);
		System.out.printf("\n");
	}
}

/* A recursive utility function to solve N
Queen problem */
static boolean solveNQUtil(int board[][], int col)
{
	/* base case: If all queens are placed
	then return true */
	if (col >= N)
		return true;

	/* Consider this column and try placing
	this queen in all rows one by one */
	for (int i = 0; i < N; i++)
	{
		
		/* Check if the queen can be placed on
		board[i][col] */
		/* A check if a queen can be placed on
		board[row][col].We just need to check
		ld[row-col+n-1] and rd[row+coln] where
		ld and rd are for left and right
		diagonal respectively*/
		if ((ld[i - col + N - 1] != 1 &&
			rd[i + col] != 1) && cl[i] != 1)
		{
			/* Place this queen in board[i][col] */
			board[i][col] = 1;
			ld[i - col + N - 1] =
			rd[i + col] = cl[i] = 1;

			/* recur to place rest of the queens */
			if (solveNQUtil(board, col + 1))
				return true;

			/* If placing queen in board[i][col]
			doesn't lead to a solution, then
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK
			ld[i - col + N - 1] =
			rd[i + col] = cl[i] = 0;
		}
	}

	/* If the queen cannot be placed in any row in
		this column col then return false */
	return false;
}
/* This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns false if queens
cannot be placed, otherwise, return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/
static boolean solveNQ()
{
	int board[][] = {{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 }};

	if (solveNQUtil(board, 0) == false)
	{
		System.out.printf("Solution does not exist");
		return false;
	}

	printSolution(board);
	return true;
}

// Driver Code
public static void main(String[] args)
{
	solveNQ();
}
}




```
## JAVASCRIPT

```javascript
<script>
	// JavaScript code to implement the approach

let N = 4;

/* ld is an array where its indices indicate row-col+N-1
(N-1) is for shifting the difference to store negative
indices */
let ld = new Array(30);

/* rd is an array where its indices indicate row+col
and used to check whether a queen can be placed on
right diagonal or not*/
let rd = new Array(30);

/*column array where its indices indicates column and
used to check whether a queen can be placed in that
	row or not*/
let cl = new Array(30);

/* A utility function to print solution */
function printSolution( board)
{
	for (let i = 0; i < N; i++)
	{
		for (let j = 0; j < N; j++)
			document.write(board[i][j] + " ");
		document.write("<br/>");
	}
}

/* A recursive utility function to solve N
Queen problem */
function solveNQUtil(board, col)
{
	/* base case: If all queens are placed
	then return true */
	if (col >= N)
		return true;

	/* Consider this column and try placing
	this queen in all rows one by one */
	for (let i = 0; i < N; i++)
	{
		
		/* Check if the queen can be placed on
		board[i][col] */
		/* A check if a queen can be placed on
		board[row][col].We just need to check
		ld[row-col+n-1] and rd[row+coln] where
		ld and rd are for left and right
		diagonal respectively*/
		if ((ld[i - col + N - 1] != 1 &&
			rd[i + col] != 1) && cl[i] != 1)
		{
			/* Place this queen in board[i][col] */
			board[i][col] = 1;
			ld[i - col + N - 1] =
			rd[i + col] = cl[i] = 1;

			/* recur to place rest of the queens */
			if (solveNQUtil(board, col + 1))
				return true;

			/* If placing queen in board[i][col]
			doesn't lead to a solution, then
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK
			ld[i - col + N - 1] =
			rd[i + col] = cl[i] = 0;
		}
	}

	/* If the queen cannot be placed in any row in
		this column col then return false */
	return false;
}
/* This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns false if queens
cannot be placed, otherwise, return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/
function solveNQ()
{
	let board = [[ 0, 0, 0, 0 ],
					[ 0, 0, 0, 0 ],
					[ 0, 0, 0, 0 ],
					[ 0, 0, 0, 0 ]];

	if (solveNQUtil(board, 0) == false)
	{
		document.write("Solution does not exist");
		return false;
	}

	printSolution(board);
	return true;
}

// Driver code

	solveNQ();


</script>


```
 
 ## PYTHON
 
  ```python
  
  """ Python3 program to solve N Queen Problem using
backtracking """
N = 4

""" ld is an array where its indices indicate row-col+N-1
(N-1) is for shifting the difference to store negative
indices """
ld = [0] * 30

""" rd is an array where its indices indicate row+col
and used to check whether a queen can be placed on
right diagonal or not"""
rd = [0] * 30

"""column array where its indices indicates column and
used to check whether a queen can be placed in that
	row or not"""
cl = [0] * 30

""" A utility function to print solution """
def printSolution(board):
	for i in range(N):
		for j in range(N):
			print(board[i][j], end = " ")
		print()

""" A recursive utility function to solve N
Queen problem """
def solveNQUtil(board, col):
	
	""" base case: If all queens are placed
		then return True """
	if (col >= N):
		return True
		
	""" Consider this column and try placing
		this queen in all rows one by one """
	for i in range(N):
		
		""" Check if the queen can be placed on board[i][col] """
		""" A check if a queen can be placed on board[row][col].
		We just need to check ld[row-col+n-1] and rd[row+coln]
		where ld and rd are for left and right diagonal respectively"""
		if ((ld[i - col + N - 1] != 1 and
			rd[i + col] != 1) and cl[i] != 1):
				
			""" Place this queen in board[i][col] """
			board[i][col] = 1
			ld[i - col + N - 1] = rd[i + col] = cl[i] = 1
			
			""" recur to place rest of the queens """
			if (solveNQUtil(board, col + 1)):
				return True
				
			""" If placing queen in board[i][col]
			doesn't lead to a solution,
			then remove queen from board[i][col] """
			board[i][col] = 0 # BACKTRACK
			ld[i - col + N - 1] = rd[i + col] = cl[i] = 0
			
			""" If the queen cannot be placed in
			any row in this column col then return False """
	return False
	
""" This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns False if queens
cannot be placed, otherwise, return True and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions."""
def solveNQ():
	board = [[0, 0, 0, 0],
			[0, 0, 0, 0],
			[0, 0, 0, 0],
			[0, 0, 0, 0]]
	if (solveNQUtil(board, 0) == False):
		printf("Solution does not exist")
		return False
	printSolution(board)
	return True
	
# Driver Code
solveNQ()



  
  ```
   
   
   **Output:**
   
   ```
 0  0  1  0 
 1  0  0  0 
 0  0  0  1 
 0  1  0  0 
   ```
   ### C CODE
   ```c
   /* C program to solve N Queen Problem using
backtracking */
#define N 4
#include <stdbool.h>
#include <stdio.h>

/* A utility function to print solution */
void printSolution(int board[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf(" %d ", board[i][j]);
		printf("\n");
	}
}

/* A utility function to check if a queen can
be placed on board[row][col]. Note that this
function is called when "col" queens are
already placed in columns from 0 to col -1.
So we need to check only left side for
attacking queens */
bool isSafe(int board[N][N], int row, int col)
{
	int i, j;

	/* Check this row on left side */
	for (i = 0; i < col; i++)
		if (board[row][i])
			return false;

	/* Check upper diagonal on left side */
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;

	/* Check lower diagonal on left side */
	for (i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j])
			return false;

	return true;
}

/* A recursive utility function to solve N
Queen problem */
bool solveNQUtil(int board[N][N], int col)
{
	/* base case: If all queens are placed
	then return true */
	if (col >= N)
		return true;

	/* Consider this column and try placing
	this queen in all rows one by one */
	for (int i = 0; i < N; i++) {
		/* Check if the queen can be placed on
		board[i][col] */
		if (isSafe(board, i, col)) {
			/* Place this queen in board[i][col] */
			board[i][col] = 1;

			/* recur to place rest of the queens */
			if (solveNQUtil(board, col + 1))
				return true;

			/* If placing queen in board[i][col]
			doesn't lead to a solution, then
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK
		}
	}

	/* If the queen cannot be placed in any row in
		this column col then return false */
	return false;
}

/* This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns false if queens
cannot be placed, otherwise, return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/
bool solveNQ()
{
	int board[N][N] = { { 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 } };

	if (solveNQUtil(board, 0) == false) {
		printf("Solution does not exist");
		return false;
	}

	printSolution(board);
	return true;
}

// driver program to test above function
int main()
{
	solveNQ();
	return 0;
}

```


   
