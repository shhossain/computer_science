#include <iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
#define int long long int

signed main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
       cpp_int fact=1;
        for(int i=1;i<=n;i++)
        {
         fact=fact*i;
        }
        cout<<fact<<endl;
        }
    }
	return 0;
}
