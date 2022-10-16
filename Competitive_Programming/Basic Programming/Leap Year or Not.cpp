#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int year;
   cout<<"Enter Year: ";
   cin>>year;

   if(year%4==0 || year%100==0 || year%400==0 )
      cout<<"Leap Year = "<<year;
   else
      cout<<year<<" is not a leap year"<<endl;
  
    return 0;
}
