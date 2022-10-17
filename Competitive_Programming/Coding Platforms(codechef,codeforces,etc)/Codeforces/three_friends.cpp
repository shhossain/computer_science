#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        long long arr[3];
        for(auto& x:arr) cin>>x;
        sort(arr,arr+3);
        a=arr[0];b=arr[1];c=arr[2];
        if((a==b && b==c) || (c-b==1 && b-a==1)) cout<<0<<endl;
        else if((a==b && b!=c) || (b==c && a!=b))
        {
            if(c-a<=2) cout<<0<<endl;
            else cout<<(c-1-a-1)*2<<endl;
        }
        else
        {
            a++;c--;
            cout<<(b-a)+(c-a)+(c-b)<<endl;
        }
    }
}
