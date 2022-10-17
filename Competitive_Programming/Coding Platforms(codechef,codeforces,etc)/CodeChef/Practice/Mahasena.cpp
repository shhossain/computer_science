#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int *p= new int [n];
	for( int i=0; i<n; i++){
	    cin>>p[i];
	}
	int odd=0;
	int even=0;
	for(int i=0; i<n; i++){
	    if(p[i]%2==0){
	        even++;
	    }
	    else{
	        odd++;
	    }
	}
	
	if(even>odd){
	    cout<<"READY FOR BATTLE";
	}
	else{
	    cout<<"NOT READY";
	}
	
	return 0;
}
