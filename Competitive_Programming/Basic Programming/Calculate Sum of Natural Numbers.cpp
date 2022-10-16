#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int num,sum=0;

   cout<<"Enter the number upto which sum is to be calculated: ";
   cin>>num;
   
   for(int i=0;i<num;i++)
   { 
     sum+=i; 
   }

   cout<<"Sum of N Numbers = "<<sum;
    return 0;
}
