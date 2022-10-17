/* 
    Problem Statement: Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        int y[n];
        for(int i=0; i<n; i++){
            y[i]=arr[arr[i]];
        }
        for(int i=0; i<n; i++){
            arr[i]=y[i];
        }
        // Your code here
        
    }
};

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long A[n];

        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
            /* code */
        }
        Solution ob;
        ob.arrange(A,n);
        for(int i=0; i<n; i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
        
        /* code */
    }
    return 0;
    
}