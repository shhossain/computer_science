#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int b,sum=0;
        cin >>b;
        
        sum+=b/100;
		      b%=100;
		    sum+=b/50;
		      b%=50;
		    sum+=b/10;
		      b%=10;
		    sum+=b/5;
		      b%=5;
		    sum+=b/2;
		    sum+=b%2;
		cout << sum << endl;
        
    }
    return 0;
}
