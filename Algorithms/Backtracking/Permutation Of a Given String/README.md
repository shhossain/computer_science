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
**Java Code**
```
// Java program to print all permutations of a
// given string.
public class Permutation
{
	public static void main(String[] args)
	{
		String str = "ABC";
		int n = str.length();
		Permutation permutation = new Permutation();
		permutation.permute(str, 0, n-1);
	}

	/**
	* permutation function
	* @param str string to calculate permutation for
	* @param l starting index
	* @param r end index
	*/
	private void permute(String str, int l, int r)
	{
		if (l == r)
			System.out.println(str);
		else
		{
			for (int i = l; i <= r; i++)
			{
				str = swap(str,l,i);
				permute(str, l+1, r);
				str = swap(str,l,i);
			}
		}
	}

	/**
	* Swap Characters at position
	* @param a string value
	* @param i position 1
	* @param j position 2
	* @return swapped string
	*/
	public String swap(String a, int i, int j)
	{
		char temp;
		char[] charArray = a.toCharArray();
		temp = charArray[i] ;
		charArray[i] = charArray[j];
		charArray[j] = temp;
		return String.valueOf(charArray);
	}

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

**Python Code**
```
# Python program to print all permutations with
# duplicates allowed

def toString(List):
	return ''.join(List)

# Function to print permutations of string
# This function takes three parameters:
# 1. String
# 2. Starting index of the string
# 3. Ending index of the string.
def permute(a, l, r):
	if l==r:
		print (toString(a))
	else:
		for i in range(l,r):
			a[l], a[i] = a[i], a[l]
			permute(a, l+1, r)
			a[l], a[i] = a[i], a[l] # backtrack

# Driver program to test the above function
string = "ABC"
n = len(string)
a = list(string)
permute(a, 0, n)

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
