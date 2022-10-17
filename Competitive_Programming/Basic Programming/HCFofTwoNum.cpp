#include <iostream>
using namespace std;

int hcf(int num1, int num2){
    if(num1 == 0)
    return num2;

    if(num2 == 0)
    return num1;

    if(num1 == num2)
    return num1;

    if(num1 > num2)
    return hcf(num1-num2, num2);

    return hcf(num1, num2-num1);
}

int main(){
    int num1,num2;
    cout<<"Emter 2 numbers : ";
    cin>>num1>>num2;
    cout<<"HCF of "<<num1<<" and "<<num2<<" : "<<hcf(num1,num2);

return 0;
}