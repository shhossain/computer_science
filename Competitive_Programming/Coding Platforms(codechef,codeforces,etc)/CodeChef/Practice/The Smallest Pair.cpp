#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int arr[n],i;
     for(i = 0;i<n;i++){
         cin>>arr[i];
     }
     sort(arr,arr+n);
     cout<<arr[0]+arr[1]<<endl;
    }
	// your code goes here
	return 0;
}
