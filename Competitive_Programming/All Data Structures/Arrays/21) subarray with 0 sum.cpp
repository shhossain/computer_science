
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}


bool subArrayExists(int arr[], int n) 
{ 
    unordered_set<int> sumSet; 
  
    int sum = 0; 
    for (int i = 0 ; i < n ; i++) 
    { 
        sum += arr[i]; 
  
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
            return true; 
  
        sumSet.insert(sum); 
    } 
    return false; 
} 


