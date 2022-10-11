# Fibonacci Sequence

The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation

```
Fn = Fn-1 + Fn-2
```
with seed values 

```
F0 = 0 and F1 = 1.
```

The following are different methods to get the nth Fibonacci number. 



## Method 1 (Use recursion) 
A simple method that is a direct recursive implementation mathematical recurrence relation is given above.

```cpp

// Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n = 9;
    cout << fib(n);
    getchar();
    return 0;
}
 
```

**Output:**

```
34
```

***Time Complexity: Exponential***, as every function calls two other functions.

If the original recursion tree were to be implemented then this would have been the tree but now for n times the recursion function is called

Original tree for recursion

```
                                                fib(5)   
                                           /                \
                                     fib(4)                fib(3)   
                                   /        \              /       \ 
                               fib(3)      fib(2)         fib(2)   fib(1)
                              /    \       /    \        /      \
                        fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
                        /     \
                      fib(1) fib(0)


```

**Optimized tree for recursion for code above**

    fib(5) 

    fib(4)

    fib(3)

    fib(2)

    fib(1)

**Extra Space:** O(n) if we consider the function call stack size, otherwise O(1).

## Method 2: (Use Dynamic Programming)

We can avoid the repeated work done in method 1 by storing the Fibonacci numbers calculated so far. 

## Implementation


* [C++](#cpp)
* [C#](#csharp)
* [Java](#java)
* [Python](#python)
* [JavaScript](#javascript)


## CPP

```cpp

// C++ program for Fibonacci Series
// using Dynamic Programming

#include<bits/stdc++.h>
using namespace std;

class Fibonacci{
	
public:
int fib(int n)
{
	
	// Declare an array to store
	// Fibonacci numbers.
	// 1 extra to handle
	// case, n = 0
	int f[n + 2];
	int i;

	// 0th and 1st number of the
	// series are 0 and 1
	f[0] = 0;
	f[1] = 1;

	for(i = 2; i <= n; i++)
	{
		
	//Add the previous 2 numbers
	// in the series and store it
	f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
	}
};

// Driver code
int main ()
{
	Fibonacci fi;
	int n = 9;
	
	cout << fi.fib(n);
	return 0;
}





```

## JAVA


```java

// Fibonacci Series using Dynamic Programming
class fibonacci
{
static int fib(int n)
	{
	/* Declare an array to store Fibonacci numbers. */
	int f[] = new int[n+2]; // 1 extra to handle case, n = 0
	int i;
	
	/* 0th and 1st number of the series are 0 and 1*/
	f[0] = 0;
	f[1] = 1;
	
	for (i = 2; i <= n; i++)
	{
	/* Add the previous 2 numbers in the series
		and store it */
		f[i] = f[i-1] + f[i-2];
	}
	
	return f[n];
	}
	
	public static void main (String args[])
	{
		int n = 9;
		System.out.println(fib(n));
	}
}



```
## PYTHON

```python

# Fibonacci Series using Dynamic Programming
def fibonacci(n):
	
	# Taking 1st two fibonacci numbers as 0 and 1
	f = [0, 1]
	
	
	for i in range(2, n+1):
		f.append(f[i-1] + f[i-2])
	return f[n]
	
print(fibonacci(9))



```

## CSHARP

```csharp

// C# program for Fibonacci Series
// using Dynamic Programming
using System;
class fibonacci {
	
static int fib(int n)
	{
		
		// Declare an array to
		// store Fibonacci numbers.
		// 1 extra to handle
		// case, n = 0
		int []f = new int[n + 2];
		int i;
		
		/* 0th and 1st number of the
		series are 0 and 1 */
		f[0] = 0;
		f[1] = 1;
		
		for (i = 2; i <= n; i++)
		{
			/* Add the previous 2 numbers
			in the series and store it */
			f[i] = f[i - 1] + f[i - 2];
		}
		
		return f[n];
	}
	
	// Driver Code
	public static void Main ()
	{
		int n = 9;
		Console.WriteLine(fib(n));
	}
}

// This code is contributed by anuj_67.


```

## JAVASCRIPT

```javascript

<script>

// Fibonacci Series using Dynamic Programming

	function fib(n)
	{
		/* Declare an array to store Fibonacci numbers. */
		let f = new Array(n+2); // 1 extra to handle case, n = 0
		let i;
		/* 0th and 1st number of the series are 0 and 1*/
		f[0] = 0;
		f[1] = 1;
		for (i = 2; i <= n; i++)
		{
			/* Add the previous 2 numbers in the series
			and store it */
			f[i] = f[i-1] + f[i-2];
		}
		return f[n];
	}
	let n=9;
	document.write(fib(n));
	
	// This code is contributed by avanitrachhadiya2155
	
</script>


```


**Output:**

```
34
```
**Time complexity:** O(n) for given n
**Auxiliary space:** O(n)

