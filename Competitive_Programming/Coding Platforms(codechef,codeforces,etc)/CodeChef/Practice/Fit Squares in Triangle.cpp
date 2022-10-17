#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int s, res=0;
	    cin>>s;
	    res = ((s/2)*((s/2)-1))/2;
	    cout<<res<<endl;
	    
	}
	return 0;
}
