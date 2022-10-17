#include <bits/stdc++.h> 
using namespace std;
void Bubblsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[i],arr[j+1]);
    }
        }
    
}
int main() {
int arr[]={3,8,6,4,7,9,2,1,5};
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
Bubblsort(arr,n);
cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
	return 0;
}
