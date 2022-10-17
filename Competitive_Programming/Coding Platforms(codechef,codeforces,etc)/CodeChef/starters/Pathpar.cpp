#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    if (n%2==0)
	    {
	        cout << "Yes" <<endl;
	    }
	    else
	    {
	        if(k==1)
	        cout << "Yes" <<endl;
	        else 
	        cout << "No" <<endl;
	    }
	}
	return 0;
}
