#include<iostream>
using namespace std;
int main() {
int a=0,b=1,c,i,n;
cout<<"Enter the number of elements: ";
cin>>n;
cout<<a<<" "<<b<<" "; //printing 0 and 1
for(i=2;i<n;++i){ //loop starts from 2 because 0 and 1 are already printed
c=a+b;
cout<<c<<" ";
a=b;
b=c;
}
return 0;
}
