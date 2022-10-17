#include <bits/stdc++.h>
using namespace std;

int minimumCostOfBreaking(int X[], int Y[], int m, int n)
{
	int res = 0;

	sort(X, X + m, greater<int>());

	sort(Y, Y + n, greater<int>());

	int hzntl = 1, vert = 1;

	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (X[i] > Y[j])
		{
			res += X[i] * vert;
			hzntl++;
			i++;
		}
		else
		{
			res += Y[j] * hzntl;
			vert++;
			j++;
		}
	}

	int total = 0;
	while (i < m)
		total += X[i++];
	res += total * vert;

	total = 0;
	while (j < n)
		total += Y[j++];
	res += total * hzntl;

	return res;
}


int main()
{
	int m = 6, n = 4;
	int X[m-1] = {2, 1, 3, 1, 4};
	int Y[n-1] = {4, 1, 2};
	cout << minimumCostOfBreaking(X, Y, m-1, n-1);
	return 0;
}
