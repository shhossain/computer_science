#include <bits/stdc++.h>
using namespace std;

//trapping rainwater - Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=0;
    for(int i=1;i<n-1;i++)
    {
        int left=arr[i];   
        for(int j=0;j<i;j++)
        left=max(left,arr[j]);
        
        int right=arr[i];
        for(int j=i+1;j<n;j++)
        right=max(right,arr[j]);
        
        sum=sum+(min(left,right)-arr[i]);
    }
    cout<<sum;
	return 0;
}
