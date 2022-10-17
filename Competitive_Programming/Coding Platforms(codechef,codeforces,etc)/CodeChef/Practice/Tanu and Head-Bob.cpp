#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,cy=0,ci=0;
	    cin>>n;
	    while(n--){
	        char a;
	        cin>>a;
	        if(a=='Y'){cy++;}
	        if(a=='I'){ci++;}
	    }
	    if(cy==0 && ci!=0){
	        cout<<"INDIAN"<<endl;
	    }
	    else if(ci==0 && cy!=0){
	        cout<<"NOT INDIAN"<<endl;
	    }
	    else{
	        cout<<"NOT SURE"<<endl;
	    }
	}
	return 0;
}
