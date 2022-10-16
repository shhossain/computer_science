#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,g,l,r,c;
    cin>>t;
    while (t--)
    {
        r = 0;
        l=0;
        g=0;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            g =0;
            l= 0;
            for(int j=0;j<n;j++){
                if (arr[j]<=arr[i]){
                    l++;
                }
                else{
                    g++;
                }
            }
            if (g< l){
                r++;
            }
        }
        cout<<r<<endl;
        
    }
	return 0;
}
