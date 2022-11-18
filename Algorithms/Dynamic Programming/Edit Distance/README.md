# Edit Distance

Given two strings str1 and str2, return the minimum number of operations required to convert str1 to str2, using the following operations: insert, remove, replace.

Assume that all the operations are of equal cost.

**Examples:**
```
Input: str1 = “horse”, str2 = “ros”
Output: 3
Explanation:
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')

Input: str1 = “geek”, str2 = “gesek”
Output: 1
Explanation: geek -> gesek (insert 's')
```

The following are different methods to solve Edit Distance Problem.

## Method 1 (Use recursion)
The idea is to process all characters one by one starting from either from left or right sides of both strings.
Let us traverse from right corner, there are two possibilities for every pair of character being traversed.  

m: Length of str1 (first string)

n: Length of str2 (second string)

1. If last characters of two strings are same, nothing much to do. Ignore last characters and get count for remaining strings. So we recur for lengths m-1 and n-1.
2. Else (If last characters are not same), we consider all operations on ‘str1’, consider all three operations on last character of first string, recursively compute minimum cost for all three operations and take minimum of three values.
  1. Insert: Recur for m and n-1
  2. Remove: Recur for m-1 and n
  3. Replace: Recur for m-1 and n-1

Below is the Implementation of the above Naive recursive approach.

## CPP
```cpp

// Naive recursive C++ program for
// edit distance problem.
#include <bits/stdc++.h>
using namespace std;

// Utility function to find minimum of three numbers
int min(int x, int y, int z) { return min(min(x, y), z); }

int editDist(string str1, string str2, int m, int n)
{
    // If first string is empty, the only option is to
    // insert all characters of second string into first
    if (m == 0)
        return n;

    // If second string is empty, the only option is to
    // remove all characters of first string
    if (n == 0)
        return m;

    // If last characters of two strings are same, nothing
    // much to do. Ignore last characters and get count for
    // remaining strings.
    if (str1[m - 1] == str2[n - 1])
        return editDist(str1, str2, m - 1, n - 1);

    // If last characters are not same, consider all three
    // operations on last character of first string,
    // recursively compute minimum cost for all three
    // operations and take minimum of three values.
    return 1
           + min(editDist(str1, str2, m, n - 1), // Insert
                 editDist(str1, str2, m - 1, n), // Remove
                 editDist(str1, str2, m - 1,
                          n - 1) // Replace
             );
}

// Driver code
int main()
{
    // your code goes here
    string str1 = "sunday";
    string str2 = "saturday";

    cout << editDist(str1, str2, str1.length(),
                     str2.length());

    return 0;
}

```

**Output:**

```
3
```

**Time Complexity:** O(3^m).

**Extra Space:** O(1).

Since the same sub-problems are called again, this problem has the Overlapping Subproblems property.

## Method 2: (Use Dynamic Programming)

```
The Idea to Solve this Problem is by using the Bottom Up Memoization. Here is the Bottom up approach to solve this Problem.

```

Follow the below steps to Implement the idea:

* Using 2-D vector to store the Overlapping subproblems.
* Traversing the whole array to find the solution and storing in the memoization table.
* Using the memoization table to find the optimal solution.

## Implementation


* [C++](#cpp)
* [C#](#csharp)
* [Java](#java)
* [Python](#python)
* [JavaScript](#javascript)


## CPP

```cpp

// C++ program for edit distance problem

#include <bits/stdc++.h>

using namespace std;

int minDis(string s1, string s2, int n, int m,
           vector<vector<int> >& dp)
{

    // If any string is empty,
    // return the remaining characters of other string

    if (n == 0)
        return m;

    if (m == 0)
        return n;

    // To check if the recursive tree
    // for given n & m has already been executed

    if (dp[n][m] != -1)
        return dp[n][m];

    // If characters are equal, execute
    // recursive function for n-1, m-1

    if (s1[n - 1] == s2[m - 1]) {
        return dp[n][m] = minDis(s1, s2, n - 1, m - 1, dp);
    }
    // If characters are nt equal, we need to
    // find the minimum cost out of all 3 operations.
    // 1. insert 2.delete 3.replace
    else {
        int insert, del, replace; // temp variables

        insert = minDis(s1, s2, n, m - 1, dp);
        del = minDis(s1, s2, n - 1, m, dp);
        replace = minDis(s1, s2, n - 1, m - 1, dp);
        return dp[n][m] = 1 + min(insert, min(del, replace));
    }
}

// Driver program
int main()
{

    string str1 = "voldemort";
    string str2 = "dumbledore";

    int n = str1.length(), m = str2.length();
    vector<vector<int> > dp(n + 1, vector<int>(m + 1, -1));

    cout << minDis(str1, str2, n, m, dp);
    return 0;

}

```
## PYTHON

```python

# Dynamic Programming Python implementation of Edit
# Distance problem


def minDis(s1, s2, n, m, dp):

# If any string is empty,
# return the remaining characters of other string		
    if (n == 0):
        return m
    if (m == 0):
        return n

# To check if the recursive tree
# for given n & m has already been executed
    if (dp[n][m] != -1):
        return dp[n][m];

# If characters are equal, execute
# recursive function for n-1, m-1
    if (s1[n - 1] == s2[m - 1]):		
        if (dp[n - 1][m - 1] == -1):
            dp[n][m] = minDis(s1, s2, n - 1, m - 1, dp)
            return dp[n][m]				
        else:
            dp[n][m] = dp[n - 1][m - 1]
            return dp[n][m]

# If characters are nt equal, we need to		
# find the minimum cost out of all 3 operations.		
    else:		
        if (dp[n - 1][m] != -1):
            m1 = dp[n - 1][m]
        else :
            m1 = minDis(s1, s2, n - 1, m, dp)

        if (dp[n][m - 1] != -1):			
            m2 = dp[n][m - 1]		
        else:
            m2 = minDis(s1, s2, n, m - 1, dp)
        if (dp[n - 1][m - 1] != -1) :
            m3 = dp[n - 1][m - 1]
        else:
            m3 = minDis(s1, s2, n - 1, m - 1, dp)

        dp[n][m] = 1 + min(m1, min(m2, m3))
        return dp[n][m]

	# Driver code
str1 = "voldemort"
str2 = "dumbledore"

n = len(str1)
m = len(str2)
dp = [[-1 for i in range(m + 1)] for j in range(n + 1)]

print(minDis(str1, str2, n, m, dp))


```

## CSHARP

```csharp

/* Dynamic Programming C# implementation of Edit
Distance problem */
using System;
using System.Collections.Generic;
class GFG {

static int minDis(string s1, string s2, int n,
					int m, List<List<int>> dp)
{

	// If any string is empty,
	// return the remaining characters of other string
	if(n == 0)
	return m;

	if(m == 0)
	return n;

	// To check if the recursive tree
	// for given n & m has already been executed
	if(dp[n][m] != -1)
	return dp[n][m];

	// If characters are equal, execute
	// recursive function for n-1, m-1
	if(s1[n - 1] == s2[m - 1])
	{		
	if(dp[n - 1][m - 1] == -1)
	{			
		return dp[n][m] = minDis(s1, s2, n - 1, m - 1, dp);		
	}
	else
		return dp[n][m] = dp[n - 1][m - 1];
	}


	// If characters are nt equal, we need to
	// find the minimum cost out of all 3 operations.
	else
	{		
	int m1, m2, m3;	 // temp variables

	if(dp[n - 1][m] != -1)
	{
		m1 = dp[n - 1][m];
	}		
	else
	{
		m1 = minDis(s1, s2, n - 1, m, dp);
	}		

	if(dp[n][m - 1] != -1)
	{			
		m2 = dp[n][m - 1];		
	}		
	else
	{
		m2 = minDis(s1, s2, n, m - 1, dp);
	}								

	if(dp[n - 1][m - 1] != -1)
	{
		m3 = dp[n - 1][m - 1];
	}
	else
	{
		m3 = minDis(s1, s2, n - 1, m - 1, dp);
	}
	return dp[n][m] = 1+ Math.Min(m1, Math.Min(m2, m3));
	}

}

// Driver code
static void Main()
{
	string str1 = "voldemort";
	string str2 = "dumbledore";

	int n = str1.Length, m = str2.Length;
	List<List<int>> dp = new List<List<int>>();
	for(int i = 0; i < n + 1; i++)
	{
	dp.Add(new List<int>());
	for(int j = 0; j < m + 1; j++)
	{
		dp[i].Add(-1);
	}
	}
	Console.WriteLine(minDis(str1, str2, n, m, dp));
}
}


```

## JAVASCRIPT

```javascript


/* Dynamic Programming javascript implementation of Edit
Distance problem */

<script>

function minDis(s1,s2,n,m,dp)
{
	// If any String is empty,
// return the remaining characters of other String
if(n == 0)
	return m;
if(m == 0)
	return n;

// To check if the recursive tree
// for given n & m has already been executed
if(dp[n][m] != -1)
	return dp[n][m];

// If characters are equal, execute
// recursive function for n-1, m-1
if(s1[n - 1] == s2[m - 1])
{		
	if(dp[n - 1][m - 1] == -1)
	{			
	return dp[n][m] = minDis(s1, s2, n - 1, m - 1, dp);		
	}
	else
	return dp[n][m] = dp[n - 1][m - 1];
}

// If characters are nt equal, we need to

// find the minimum cost out of all 3 operations.
else
{		
	let m1, m2, m3;	 // temp variables
	if(dp[n-1][m] != -1)
	{
	m1 = dp[n - 1][m];
	}		
	else
	{
	m1 = minDis(s1, s2, n - 1, m, dp);
	}		

	if(dp[n][m - 1] != -1)
	{			
	m2 = dp[n][m - 1];		
	}		
	else
	{
	m2 = minDis(s1, s2, n, m - 1, dp);
	}								

	if(dp[n - 1][m - 1] != -1)
	{
	m3 = dp[n - 1][m - 1];
	}
	else
	{
	m3 = minDis(s1, s2, n - 1, m - 1, dp);
	}
	return dp[n][m] = 1 + Math.min(m1, Math.min(m2, m3));
}
}

// Driver program

let str1 = "voldemort";
let str2 = "dumbledore";

let n= str1.length, m = str2.length;
let dp = new Array(n + 1);
for(let i = 0; i < n + 1; i++)
{
	dp[i]=new Array(m+1);
	for(let j=0;j<m+1;j++)
		dp[i][j]=-1;
}

document.write(minDis(str1, str2, n, m, dp));

</script>



```


**Output:**

```
7
```
**Time complexity:** O(m x n)

**Auxiliary space:** O(m*n)+O(m+n) 
