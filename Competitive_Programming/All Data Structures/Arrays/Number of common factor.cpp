#include <bits/stdc++.h>
using namespace std;

//function to calculate common factors

   int commonFactors(int a, int b) {
        int c=0,k=0;
   if(a<b)
   k=a;
   else
   k=b;
   for(int i=1;i<=k;i++){
       if(a% i==0 && b%i==0)
       c++;
   }
return c;   
    }
    //main function
int main(){
    int c,d;
    cout<<"enter the first number";
    cin>>c;
    cout<<"enter the second number";
    cin>>d;
    //call the function
    cout<<commonFactors(c,d);
   return 0;
}
