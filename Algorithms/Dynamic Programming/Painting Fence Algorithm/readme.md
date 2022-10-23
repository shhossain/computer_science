## Painting Fence Algorithm

Given a fence with n posts and k colors, find out the number of ways of painting the fence such that at most 2 adjacent posts have the same color. Since the answer can be large return it modulo 10^9 + 7.

**Examples:**
```
Input : n = 2 k = 4
Output : 16
Explanation: We have 4 colors and 2 posts.
Ways when both posts have same color : 4 
Ways when both posts have diff color :4(choices for 1st post) * 3(choices for 2nd post) = 12

Input : n = 3 k = 2
Output : 6
```
According to the constraint of the problem, c = c’ = c” is not possible simultaneously, so either c’ != c or c” != c or both. There are k – 1 possibilities for c’ != c and k – 1 for c” != c.

```
 diff = no of ways when color of last
        two posts is different
 same = no of ways when color of last 
        two posts is same
 total ways = diff + same

for n = 1
    diff = k, same = 0
    total = k

for n = 2
    diff = k * (k-1) //k choices for
           first post, k-1 for next
    same = k //k choices for common 
           color of two posts
    total = k +  k * (k-1)

for n = 3
    diff = k * (k-1)* (k-1) 
           //(k-1) choices for the first place 
        // k choices for the second place
        //(k-1) choices for the third place
    same = k * (k-1) * 2
        // 2 is multiplied because consider two color R and B
        // R R B or B R R 
        // B B R or R B B  
           c'' != c, (k-1) choices for it

Hence we deduce that,
total[i] = same[i] + diff[i]
same[i]  = diff[i-1]
diff[i]  = (diff[i-1] + diff[i-2]) * (k-1)
         = total[i-1] * (k-1)
```
## Implementation in C++

```
// C++ program for Painting Fence Algorithm
// optimised version

#include <bits/stdc++.h>
using namespace std;

// Returns count of ways to color k posts
long countWays(int n, int k)
{
	long dp[n + 1];
	memset(dp, 0, sizeof(dp));
	long long mod = 1000000007;

	dp[1] = k;
	dp[2] = k * k;

	for (int i = 3; i <= n; i++) {
		dp[i] = ((k - 1) * (dp[i - 1] + dp[i - 2])) % mod;
	}

	return dp[n];
}

// Driver code
int main()
{
	int n = 3, k = 2;
	cout << countWays(n, k) << endl;
	return 0;
}
```
**Output:**
```
6
```
## Implementation in JAVA

```
// Java program for Painting Fence Algorithm
import java.util.*;

class GfG {

	// Returns count of ways to color k posts
	// using k colors
	static long countWays(int n, int k)
	{
		// To store results for subproblems
		long dp[] = new long[n + 1];
		Arrays.fill(dp, 0);
		int mod = 1000000007;

		// There are k ways to color first post
		dp[1] = k;

		// There are 0 ways for single post to
		// violate (same color_ and k ways to
		// not violate (different color)
		int same = 0, diff = k;

		// Fill for 2 posts onwards
		for (int i = 2; i <= n; i++) {
			// Current same is same as previous diff
			same = diff;

			// We always have k-1 choices for next post
			diff = (int)(dp[i - 1] * (k - 1));
			diff = diff % mod;

			// Total choices till i.
			dp[i] = (same + diff) % mod;
		}

		return dp[n];
	}

	// Driver code
	public static void main(String[] args)
	{
		int n = 3, k = 2;
		System.out.println(countWays(n, k));
	}
}

```
**Output:**
```
6
```
## Implementation in C#

```
// C# program for Painting Fence Algorithm
using System;
public class GFG
{

// Returns count of ways to color k posts
// using k colors
static long countWays(int n, int k)
{

	// To store results for subproblems
	long[] dp = new long[n + 1];
	Array.Fill(dp, 0);
	int mod = 1000000007;

	// There are k ways to color first post
	dp[1] = k;

	// There are 0 ways for single post to
	// violate (same color_ and k ways to
	// not violate (different color)
	int same = 0, diff = k;

	// Fill for 2 posts onwards
	for (int i = 2; i <= n; i++)
	{

	// Current same is same as previous diff
	same = diff;

	// We always have k-1 choices for next post
	diff = (int)(dp[i - 1] * (k - 1));
	diff = diff % mod;

	// Total choices till i.
	dp[i] = (same + diff) % mod;
	}

	return dp[n];
}

// Driver code
static public void Main ()
{
	int n = 3, k = 2;
	Console.WriteLine(countWays(n, k));
}
}

```
**Output:**
```
6
```

