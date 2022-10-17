#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp=boost::multiprecision;

int main() {
	int t; 
  cin>>t; 
  while(t--){
	    int n;
      cin>>n;
	    mp::cpp_int fact=1;
      
	    for(int i=1; i<=n; i++)
      {
	        fact = fact*i;
	    }
	    cout<<fact<<'\n';
	}
	return 0;
}
