#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,sum=0,temp;
	    cin>>N;
	    while(N > 0)
	    {
	      temp= N % 10;
	      sum = sum + temp;
	      N = N/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
