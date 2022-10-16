//Problem Statement : [LUCKYNUM] (https://www.codechef.com/SNCKQL21/problems/LUCKYNUM)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i = 1;
    for(int i = 1;i<=n;i++)
    {
        int A,B,C,result = 0;
        cin>>A>>B>>C;
        if(A == 7) result = 1;
        if(B == 7) result = 1;
        if(C == 7) result = 1;
        (result)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
	return 0;
}
