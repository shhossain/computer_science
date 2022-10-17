#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int m=0,h=0,bmi=0;
        
        cin>>m;
        cin>>h;
        bmi=m/(h*h);
        
        
        if(bmi<=18)
            cout<<"1\n";
        
        else if(bmi>18 && bmi<=24)
            cout<<"2\n";
        
        else if(bmi>24 && bmi<=29)
            cout<<"3\n";
        
        else
            cout<<"4\n";
    }
	return 0;
}
