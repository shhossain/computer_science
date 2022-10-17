#include<bits/stdc++.h>
using namespace std;

void print(int ar[], int n)
{
    for (int currIndex = 0;
         currIndex < n; currIndex++) {
 
        if (currIndex % 2 == 0) {
            cout << ar[currIndex] << " ";
        }}}

int main()
{
   int t;
   cin>>t;
  while(t--)
   {
     int ar[100001]={0};
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
      cin>>ar[i];
      print(ar,n);
      cout<<endl;
     }

return 0;
}
