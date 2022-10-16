#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
int getMinDiff(int arr[], int n, int k) {
       
        sort(arr,arr+n);
        int ansi=arr[n-1]-arr[0];
        int maxi=0;
        int mini =0;
        
        for(int i=1;i<=n-1;i++)
        {
            if(arr[i]>=k)
            {
         maxi=max(arr[n-1]-k,arr[i-1]+k);
        mini=min(arr[0]+k,arr[i]-k);
        ansi=min(ansi,maxi-mini);
            }
            
        }

        return ansi;
    } 
   
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} 
