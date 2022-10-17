// CPP Program to find the sum of arithmetic
// series.
#include<bits/stdc++.h>
using namespace std;

// Function to find sum of series.
float sumOfAP(float a, float d, int n)
{
	float sum = 0;
	for (int i=0;i<n;i++)
	{
		sum = sum + a;
		a = a + d;
	}
	return sum;
}

// Driver function
int main()
{
	int n = 20;
	float a = 2.5, d = 1.5;
	cout<<sumOfAP(a, d, n);
	return 0;
}
//yashaswi shahi