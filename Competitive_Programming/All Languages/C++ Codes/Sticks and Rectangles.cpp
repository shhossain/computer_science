//Sticks and Rectangle of Codechef, 1555 Difficulty Rating

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,c=0,d=100,k=0;
	    cin>>n;
	    int a[n],b[101]{0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        b[a[i]]++;
	    }
	    for(int i=1;i<101;i++){
	        if(b[i]%2!=0){
	            b[i]++;
	            d--;
	        }if(b[i]!=0)
	            c+=b[i]/2;
	        k=k+b[i];
	    }
	    if(k%4==0){
	        if(c%2==0){
	            cout<<100-d<<'\n';
	        }else
	            cout<<102-d<<'\n';
	    }else
	        cout<<102-d<<'\n';
	}
	return 0;
}
//Code by Dinesh surya
//Github user id: dinesh21o9