#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter the number of sides: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=(n-1);j>=i;j--){
            cout<<" ";
        }
        for(k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
