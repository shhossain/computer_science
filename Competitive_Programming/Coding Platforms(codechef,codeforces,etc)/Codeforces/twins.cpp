#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sum = sum/2;
    sort(a,a+n);
    int ans=0;
    int cnt = 0;
    for(int i=n-1; i>=0; i--)
    {
        ans += a[i];
        cnt++;
        if(ans>sum)
        {
            break;
        }
    }
    cout<<cnt<<endl;
}
