#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int min,max;
        min=(a>b)? a:b;
        max=a+b;
        cout<<min<<" "<<max<<endl;
    }
	return 0;
}
