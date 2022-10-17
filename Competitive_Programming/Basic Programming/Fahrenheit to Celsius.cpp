//  C++ program that receives temperature in degree Fahrenheit and prints its equivalent value in degree Celsius

#include<iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout<<"Enter the Temperature in Fahrenheit: ";
    cin>>fahrenheit;
    celsius = (fahrenheit-32)/1.8;
    cout<<"\nEquivalent Temperature in Celsius: "<<celsius;
    cout<<endl;
    return 0;
}