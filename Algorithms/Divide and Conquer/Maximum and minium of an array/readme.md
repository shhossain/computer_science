## Maximum and minimum element of an array using divide and conquer approach

# Approach: 

To find the maximum and minimum element from a given array is an application for divide and conquer. In this problem, we will find the maximum and minimum elements in a given array. In this problem, we are using a divide and conquer approach (DAC) which has three steps divide, conquer and combine.

Step 1: Find the mid of the array.
Step 2: Find the maximum and minimum of the left subarray recursively.
Step 3: Find the maximum and minimum of the right subarray recursively.
Step 4: Compare the result of step 3 and step 4
Step 5: Return the minimum and maximum.

## CPP

```cpp
# include<iostream>
using namespace std;

// function to find the maximum no.
// in a given array.
int DAC_Max(int arr[], int index, int l)
{
	int max;
	if(l - 1 == 0)
	{
	return arr[index];
	}
	if(index >= l - 2)
	{
		if(arr[index] > arr[index + 1])
		return arr[index];
		else
		return arr[index + 1];
	}
	max = DAC_Max(arr, index + 1, l);	
	if(arr[index] > max)
	return arr[index];
	else
	return max;
}

// Function to find the minimum no.
// in a given array
int DAC_Min(int arr[], int index, int l)
{
	int min;
	if(l - 1 == 0)
	{
	return arr[index];
	}
	if(index >= l - 2)
	{
		if(arr[index] < arr[index + 1])
		return arr[index];
		else
		return arr[index + 1];
	}
	
	min = DAC_Min(arr, index + 1, l);
	if(arr[index] < min)
	return arr[index];
	else
	return min;
}

// Driver code
int main()
{
	int arr[] = {120, 34, 54, 32, 58, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max, min;
	max = DAC_Max(arr, 0, n);
	min = DAC_Min(arr, 0, n);
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;
	return 0;
}
```

code credit: probinsah.

**Output:**

```
Maximum: 120
Minimum: 11
```

**Time Complexity:** O(n).
**Auxiliary Space Complexity:** O(n).
