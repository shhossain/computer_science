## Permutations of a given string

A permutation also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself. A string of length n has n! permutation.

Below are the permutations of string ABC.  
ABC ACB BAC BCA CBA CAB

- Here is a solution that is used as a basis in backtracking.

![Example](https://media.geeksforgeeks.org/wp-content/cdn-uploads/NewPermutation.gif)

```cpp
// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int l, int r)
{
	// Base case
	if (l == r)
		cout<<a<<endl;
	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
		}
	}
}

// Driver Code
int main()
{
	string str = "ABC";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}
```

**Output**

```
ABC
ACB
BAC
BCA
CBA
CAB
```

**Algorithm Paradigm:** Backtracking

**Time Complexity:** O(n\*n!) Note that there are n! permutations and it requires O(n) time to print a permutation.

**Auxiliary Space:** O(r – l)

**Note:** The above solution prints duplicate permutations if there are repeating characters in the input string. Please see the below link for a solution that prints only distinct permutations even if there are duplicates in input.
