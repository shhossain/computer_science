#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n,l,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>l>>x;
        int r = min(l, n-l);
        cout<<r*x<<endl;
    }
	return 0;
}
