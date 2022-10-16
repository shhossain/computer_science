#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int g(int n,int m){
    while(n!=m){
        if(n>m)
        n-=m;
        else
        m-=n;
    }
    return n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	std::cin>>t;
	while(t--){
	    std::cin>>n>>m;
	    std::cout<<(m*n)/(g(n,m)*g(n,m))<<"\n";
	}
	return 0;
}
