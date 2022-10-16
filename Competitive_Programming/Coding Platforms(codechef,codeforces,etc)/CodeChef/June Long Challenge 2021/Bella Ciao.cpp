#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll D,d,P,Q,ans=0;
        cin>>D>>d>>P>>Q;
        if(D%d!=0)
        {
            ll rem=D%d;
            ll last = (D-1)/d;
            last+=1;
            ll lastAmt = (((last-1)*Q)+P)*rem;
            ll restDays = (D-1)/d;
            ll restAmt = (restDays*(2*P+(restDays-1)*Q))/2;
            ans=restAmt*d+lastAmt;
        }
        else
        {
            ll days = D/d;
            ll amt = (days*(2*P+(days-1)*Q))/2;
            ans=amt*d;
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
