//CodeChef March Long Challege Div 3
//Interesting XOR!
/*You are given an integer C. Let d be the smallest integer such that 2d is strictly greater than C.
Consider all pairs of non-negative integers (A,B) such that A,B<2d and A⊕B=C (⊕ denotes the bitwise XOR operation).
Find the maximum value of A⋅B over all these pairs.*/


#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll C;
        cin>>C;
        
        ll temp = C;
        ll i=0;
        
        while(temp>0)
        {
            temp = temp/2;
            i++;
        }
        ll A = pow(2,i-1) - 1;
        ll B = A^C;
        
        cout<<A*B<<"\n";
    }
	
	return 0;
}
