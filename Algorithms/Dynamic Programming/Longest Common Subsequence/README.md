# Longest Common Subsequence

The longest common subsequence problem is the problem of finding the longest subsequence common to all sequences in a set of sequences.

If ***string1*** and ***string2*** are the two given sequences, then ***s*** is the common subsequece of ***string1*** and ***string2*** if ***s*** is a subsequence of both ***string1*** and ***string2***, given that ***s*** must be strictly increasing sequence of indices of both ***string1*** and ***string2***.

```
string1 = {A, C, D, A, B, C, D}
string2 = {A, D, B, C, A}
```
Then common subsequences are : {A, D}, {A, C}, {A, B, C}, {A, D, B} ...

Among these subsequences, {A, D, B, C} is the longest common subsequence. 

Dynamic Programming can be used to find this Longest common subsequence. 

In this procedure, table C[m,n] is computed in row major and another table B[m,n] is compute dto construct optimal solution.

## Algorithm:
```
Algorithm: LCS-Length-Table-Formulation (X, Y)
m := length(X) 
n := length(Y) 
for i = 1 to m do 
   C[i, 0] := 0 
for j = 1 to n do 
   C[0, j] := 0 
for i = 1 to m do 
   for j = 1 to n do 
      if xi = yj 
         C[i, j] := C[i - 1, j - 1] + 1 
         B[i, j] := ‘D’ 
      else 
         if C[i -1, j] ≥ C[i, j -1] 
            C[i, j] := C[i - 1, j] + 1 
            B[i, j] := ‘U’ 
         else 
         C[i, j] := C[i, j - 1]
         B[i, j] := ‘L’ 
return C and B


Algorithm: Print-LCS (B, X, i, j)
if i = 0 and j = 0 
   return  
if B[i, j] = ‘D’ 
   Print-LCS(B, X, i-1, j-1) 
   Print(xi) 
else if B[i, j] = ‘U’ 
   Print-LCS(B, X, i-1, j) 
else 
   Print-LCS(B, X, i, j-1)
```


## Implementation:

* [C](#c)
* [C++](#cpp)
* [Python](#python)
* [C#](#cSharp)


## C

```c
// C program for Longest Common Subsequence

#include <stdio.h>
#include <string.h>

int i, j, m, n, LCS_table[20][20];
char S1[20] = "ACDABCD", S2[20] = "ADBCA", b[20][20];

void lcsAlgo() {
  m = strlen(S1);
  n = strlen(S2);

  // Filling 0's in the matrix
  for (i = 0; i <= m; i++)
    LCS_table[i][0] = 0;
  for (i = 0; i <= n; i++)
    LCS_table[0][i] = 0;

  // Building the mtrix in bottom-up way
  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++) {
      if (S1[i - 1] == S2[j - 1]) {
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      } else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1]) {
        LCS_table[i][j] = LCS_table[i - 1][j];
      } else {
        LCS_table[i][j] = LCS_table[i][j - 1];
      }
    }

  int index = LCS_table[m][n];
  char lcsAlgo[index + 1];
  lcsAlgo[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (S1[i - 1] == S2[j - 1]) {
      lcsAlgo[index - 1] = S1[i - 1];
      i--;
      j--;
      index--;
    }

    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
      i--;
    else
      j--;
  }

  // Printing the sub sequences
  printf("S1 : %s \nS2 : %s \n", S1, S2);
  printf("LCS: %s", lcsAlgo);
}

int main() {
  lcsAlgo();
  printf("\n");
}


```

## CPP
```cpp
#include <iostream>
#include <cstring>
using namespace std;
void lcsAlgo(char *S1, char *S2, int m, int n) {
  int LCS_table[m + 1][n + 1];
  // Building the mtrix in bottom-up way
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0)
        LCS_table[i][j] = 0;
      else if (S1[i - 1] == S2[j - 1])
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      else
        LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
    }
  }
  int index = LCS_table[m][n];
  char lcsAlgo[index + 1];
  lcsAlgo[index] = '\0';
  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (S1[i - 1] == S2[j - 1]) {
      lcsAlgo[index - 1] = S1[i - 1];
      i--;
      j--;
      index--;
    }
    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
      i--;
    else
      j--;
  }
  
  // Printing the sub sequences
  cout << "S1 : " << S1 << "\nS2 : " << S2 << "\nLCS: " << lcsAlgo << "\n";
}
int main() {
  char S1[] = "ACDABCD";
  char S2[] = "ADBCA";
  int m = strlen(S1);
  int n = strlen(S2);
  lcsAlgo(S1, S2, m, n);
}

```

## Python 

```python
# The longest common subsequence in Python


# Function to find lcs_algo
def lcs_algo(S1, S2, m, n):
    L = [[0 for x in range(n+1)] for x in range(m+1)]

    # Building the mtrix in bottom-up way
    for i in range(m+1):
        for j in range(n+1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif S1[i-1] == S2[j-1]:
                L[i][j] = L[i-1][j-1] + 1
            else:
                L[i][j] = max(L[i-1][j], L[i][j-1])

    index = L[m][n]

    lcs_algo = [""] * (index+1)
    lcs_algo[index] = ""

    i = m
    j = n
    while i > 0 and j > 0:

        if S1[i-1] == S2[j-1]:
            lcs_algo[index-1] = S1[i-1]
            i -= 1
            j -= 1
            index -= 1

        elif L[i-1][j] > L[i][j-1]:
            i -= 1
        else:
            j -= 1
            
    # Printing the sub sequences
    print("S1 : " + S1 + "\nS2 : " + S2)
    print("LCS: " + "".join(lcs_algo))


S1 = "ACDABCD"
S2 = "ADBCA"
m = len(S1)
n = len(S2)
lcs_algo(S1, S2, m, n)

```

**Output:**

```
ADBC
```
**Time complexity:** O(m*n)

**Auxiliary space:** O(m*n)
## C#
```csharp
using System; 
  
class let
{ 
      
  
	// Returns length of LCS for X[0..m-1], Y[0..n-1]
	static void lcs(String X, String Y, int m, int n)
	{
		int[, ] L = new int[m + 1, n + 1];

		// Following steps build L[m+1][n+1] in
		// bottom up fashion. Note that L[i][j]
		// contains length of LCS of X[0..i-1]
		// and Y[0..j-1]
		for (int i = 0; i <= m; i++) {
			for (int j = 0; j <= n; j++) {
				if (i == 0 || j == 0)
					L[i, j] = 0;
				else if (X[i - 1] == Y[j - 1])
					L[i, j] = L[i - 1, j - 1] + 1;
				else
					L[i, j] = Math.Max(L[i - 1, j],
									L[i, j - 1]);
			}
		}

		// Following code is used to print LCS
		int index = L[m, n];
		int temp = index;

		// Create a character array
		// to store the lcs string
		char[] lcs = new char[index + 1];

		// Set the terminating character
		lcs[index] = '\0';

		// Start from the right-most-bottom-most corner
		// and one by one store characters in lcs[]
		int k = m, l = n;
		while (k > 0 && l > 0) {
			// If current character in X[] and Y
			// are same, then current character
			// is part of LCS
			if (X[k - 1] == Y[l - 1]) {
				// Put current character in result
				lcs[index - 1] = X[k - 1];

				// reduce values of i, j and index
				k--;
				l--;
				index--;
			}

			// If not same, then find the larger of two and
			// go in the direction of larger value
			else if (L[k - 1, l] > L[k, l - 1])
				k--;
			else
				l--;
		}

		// Print the lcs
		for (int q = 0; q <= temp; q++)
			Console.Write(lcs[q]);
	}

	// Driver program
	public static void Main()
	{
		String X = "ACDABCD";
		String Y = "ADBCA";
		int m = X.Length;
		int n = Y.Length;
		lcs(X, Y, m, n);
	}
}
```
```
**Output**
ADBC
```
```
**Time Complexity: O(m*n)**
```
```
**Auxiliary Space: O(m*n)**
```


## Applications of Longest Common Subsequence

- Sequence alignment in Genomics
- Phylogenetic construction
- Computational Linguistics
