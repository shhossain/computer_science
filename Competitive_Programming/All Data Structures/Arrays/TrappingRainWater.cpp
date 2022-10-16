// Given an array representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
// Time Complexity : O(n) && Space Complexity : O(1)
#include<bits/stdc++.h>
using namespace std;
int water(int a[],int n)
    {
    	int leftmax=0,water=0;
    	int rightmax=0;
    	int le=0,ri=n-1;
    	while(le<=ri)                              
    	{
        	if(a[le]<=a[ri])
        	{
            		if(a[le]>=leftmax)
                		leftmax=a[le];
            		else
                		water=water+(leftmax-a[le]);
            		le++;
        	}
       	  	else
        	{
            		if(a[ri]>=rightmax)
                		rightmax=a[ri];
            		else
                		water=water+(rightmax-a[ri]);
            		ri--;
       		 }
    	}
    	return water;
   }
   int main()
   {
       int n;
       cout<<"Enter no. of  Elements : ";
       cin>>n;
       int arr[n];
       cout<<"Enter Array Elements : ";
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       cout<<"Max Water Trapped : "<<water(arr,n);
       return 0;
   }
