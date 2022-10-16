#include <bits/stdc++.h>
using namespace std;

void printNos(int N);

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        cin>>N;
        
        printNos(N);
        
        cout<<endl;
    }
    return 0;
}


void printNos(int N)
{
  int i=0;
  while(i<N)
  {cout<<i+1<<" ";
  i++;}
}
