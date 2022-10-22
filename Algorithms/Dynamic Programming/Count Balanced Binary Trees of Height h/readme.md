## Count Balanced Binary Trees of Height h

Given a height h, count and return the maximum number of balanced binary trees possible with height h. A balanced binary tree is one in which for every node, the difference between heights of left and right subtree is not more than 1.

**Examples :**
```
Input : h = 3
Output : 15

Input : h = 4
Output : 315
```
Height of tree, h = 1 + max(left height, right height)
Since the difference between the heights of left and right subtree is not more than one, possible heights of left and right part can be one of the following: 
 

1.(h-1), (h-2)
2.(h-2), (h-1)
3.(h-1), (h-1)

```
count(h) = count(h-1) * count(h-2) + 
           count(h-2) * count(h-1) + 
           count(h-1) * count(h-1)
        = 2 * count(h-1) * count(h-2) +  
          count(h-1) * count(h-1)
       = count(h-1) * (2*count(h - 2) + 
                          count(h - 1))
```
A recursive function to count no of balanced binary trees of height h is: 
```
int countBT(int h)
{
    // One tree is possible with height 0 or 1
    if (h == 0 || h == 1)
        return 1;
    return countBT(h-1) * (2 *countBT(h-2) +
                              countBT(h-1));
}
```

As we can see, sub-problems are solved repeatedly. Therefore we store the results as we compute them. 

An efficient dynamic programming approach will be as follows : 

## Implementation in C++

```
// C++ program to count number of balanced
// binary trees of height h.
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int countBT(int h) {
	
	long long int dp[h + 1];
	//base cases
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= h; i++) {
		dp[i] = (dp[i - 1] * ((2 * dp [i - 2])%mod + dp[i - 1])%mod) % mod;
	}
	return dp[h];
}


// Driver program
int main()
{
	int h = 3;
	cout << "No. of balanced binary trees"
			" of height h is: "
		<< countBT(h) << endl;
}
```
**Output:**
```
No. of balanced binary trees of height h is: 15
```

Time Complexity : O(n)
Space Complexity : O(n), since n extra space has been taken.

## Implementation in JAVA

```
// Java program to count number of balanced
// binary trees of height h.
class GFG {
	
	static final int MOD = 1000000007;
	
	public static long countBT(int h) {
		long[] dp = new long[h + 1];
		
		// base cases
		dp[0] = 1;
		dp[1] = 1;
		
		for(int i = 2; i <= h; ++i)
			dp[i] = (dp[i - 1] * ((2 * dp [i - 2])% MOD + dp[i - 1]) % MOD) % MOD;
			
			return dp[h];
	}
	
	// Driver program
	public static void main (String[] args) {
		int h = 3;
		System.out.println("No. of balanced binary trees of height "+h+" is: "+countBT(h));
	}
}

```
## Implementation in Python

```
# Python3 program to count number of balanced
# binary trees of height h.

def countBT(h) :
	MOD = 1000000007
	#initialize list
	dp = [0 for i in range(h + 1)]
	
	#base cases
	dp[0] = 1
	dp[1] = 1
	
	for i in range(2, h + 1) :
		dp[i] = (dp[i - 1] * ((2 * dp [i - 2])%MOD + dp[i - 1])%MOD) % MOD
	
	return dp[h]

#Driver program
h = 3
print("No. of balanced binary trees of height "+str(h)+" is: "+str(countBT(h)))
```

## Implementation in C#

```
// C# program to count number of balanced
// binary trees of height h.

using System;
class GFG {
	
	static int MOD = 1000000007;
	
	public static long countBT(int h) {
		long[] dp = new long[h + 1];
		
		// base cases
		dp[0] = 1;
		dp[1] = 1;
		
		for(int i = 2; i <= h; ++i)
			dp[i] = (dp[i - 1] * ((2 * dp [i - 2])% MOD + dp[i - 1]) % MOD) % MOD;
			
			return dp[h];
	}
	
	// Driver program
	static void Main () {
		int h = 3;
		Console.WriteLine("No. of balanced binary trees of height "+h+" is: "+countBT(h));
	}
	
}
```

**Output:**
```
No. of balanced binary trees of height h is: 15
```
