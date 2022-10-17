#include <assert.h>
#include <iostream>
using namespace std;

void rightrotate(int arr[], int n, int outofplace, int cur)
{
	char tmp = arr[cur];
	for (int i = cur; i > outofplace; i--)
		arr[i] = arr[i - 1];
	arr[outofplace] = tmp;
}

void rearrange(int arr[], int n)
{
	int outofplace = -1;

	for (int index = 0; index < n; index++)
	{
		if (outofplace >= 0)
		{
			if (((arr[index] >= 0) && (arr[outofplace] < 0))
				|| ((arr[index] < 0)
					&& (arr[outofplace] >= 0)))
			{
				rightrotate(arr, n, outofplace, index);
				if (index - outofplace >= 2)
					outofplace = outofplace + 2;
				else
					outofplace = -1;
			}
		}
    
		if (outofplace == -1) {
			if (((arr[index] >= 0) && (!(index & 0x01)))
				|| ((arr[index] < 0) && (index & 0x01))) {
				outofplace = index;
			}
		}
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int n;
  cin>>n;

	int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];

	printArray(arr, n);

	rearrange(arr, n);

	printArray(arr, n);

	return 0;
}
