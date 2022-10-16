#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        int ones =0;
        int zeros =0;
        cin>>n>>str;
        
        int f=0;
        for(int i=0;i<n;i++){
        if(str[i] == '0')
            zeros++;
        else
            ones++;
        if(ones>=zeros){
            f=1;
            break;
        }
    }
        if(f==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
            
        
    }  
    return 0;
}
