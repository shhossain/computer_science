#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int x,y,z;
	cin>> x >> y >>z;
	int m,n;
	m = (5*x)+(10*y);
// 	cout<<m<<endl;
	n = m/z;
	std::cout << n << std::endl;
	}
	return 0;
}
