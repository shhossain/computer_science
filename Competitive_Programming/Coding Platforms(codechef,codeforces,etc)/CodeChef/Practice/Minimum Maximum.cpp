#include <iostream>
#include <climits>
using namespace std;

int lower(int n1,int n2){
    if(n1>n2) return n2;
    else return n1;
}

int main(){
	int t;
	
	cin>>t;
	
	while(t--){
	    long int n;
	    cin>>n;
	    
	    int arr[n];
	    int min=INT_MAX;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        min=lower(min,arr[i]);
	    }
	    
	    long int ans=min*(n-1);
	    cout<<ans<<endl;
	    
	}
	return 0;
}
