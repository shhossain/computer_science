#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int n;
    cin>>n;
 
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int cnt=0,cnt1=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%13==0 && arr[i]==7==0)
            cnt++;
        else{
            
        }

    }

    cout<<"Number of elements divisible by 13 n 7: "<<cnt<<endl;
    cout<<"Number of elements not divisible by 13 n 7: "<<(2000-cnt);
    return 0;
}
