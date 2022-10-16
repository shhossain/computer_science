#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        int n[c];
        int count=1;
        for(int i=0; i<c; i++)
        {
            cin>>n[i];
        }
   sort(n,n+c);
   for(int j=0; j<c; j+=2)
   {
         if(n[j] != n[j+1])
         {
             cout<<n[j]<<endl;
        break;
         }
   }
    }
    return 0;
}
