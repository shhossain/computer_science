#include<bits/stdc++.h>
using namespace std;
int main(){
 int num1,num2;
 cout<<"Enter two numbers: ";
 cin>>num1>>num2;
 cout<<"Before Swap: "<<endl;
 cout<<"Num1: "<<num1<<endl;
 cout<<"Num2: "<<num2<<endl;

 int temp;
 temp=num1;
 num1=num2;
 num2=temp;


 cout<<"After Swap: "<<endl;
 cout<<"Num1: "<<num1<<endl;
 cout<<"Num2: "<<num2<<endl;

}
