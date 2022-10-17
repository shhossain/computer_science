#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    string a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i]>>b[i];
	    }
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=0;j<n;j++){
	            if(a[i]==a[j])
	            count++;
	        }
	        if(count>=2)
	        cout<<a[i]<<" "<<b[i]<<endl;
	        else
	        cout<<a[i]<<endl;
	    }
	}
	return 0;
}
