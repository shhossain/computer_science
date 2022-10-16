#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	string num;
	while(t--){
	    cin >> num;
	    cout << (num[0]-'0'+(num[num.size()-1]-'0'))<<endl;
	}
	return 0;
}
