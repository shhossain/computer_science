#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--)
	{
	    long int n,k;
	    cin >> n >> k;
	    if(k==1 & n%2!=0)
	    cout << "odd" <<endl;
	    else if (k==2)
	    cout << "ODD" <<endl;
	    else
	    cout<<"EVEN" <<endl;
	}
	return 0;
}
