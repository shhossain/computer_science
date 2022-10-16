#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of which you want factorial: ";
    cin>>n;
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    if(n==0){
        fact=0;
    }
    cout<<"The value of "<<n<<"!:"<<fact;
    return 0;
}