#include<iostream>
using namespace std;
void cyclicSwapping(int *x, int *y, int *z) 
{
   int temp;
   temp = *y;
   *y = *x;
   *x = *z;
   *z = temp;
}
int main() 
{
   int x, y, z;

   cout << "Enter the values of 3 numbers: "<<endl;
   cin >> x >> y >> z;

   cout << "Number values before cyclic swapping..." << endl;
   cout << "x = "<< x <<endl;
   cout << "y = "<< y <<endl;
   cout << "z = "<< z <<endl;

   cyclicSwapping(&x, &y, &z);

   cout << "Number values after cyclic swapping..." << endl;
   cout << "x = "<< x <<endl;
   cout << "y = "<< y <<endl;
   cout << "z = "<< z <<endl;

   return 0;
}