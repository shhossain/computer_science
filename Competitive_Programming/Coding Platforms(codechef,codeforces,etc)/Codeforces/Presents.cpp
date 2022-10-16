#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    int arr[n+1];
    int temp;
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        
        arr[temp] = i;
    }
    
    for(int i=1;i<=n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
    
}
