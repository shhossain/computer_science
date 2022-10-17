#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            c0++;
            else if(a[i] == 1)
            c1++;
            else
            c2++;
        }
        for(int i = 0; i < c0; i++)
        {
           a[i] = 0;
        }
        for(int i = c0; i < c1 + c0; i++)
        {
            a[i] = 1;
        }
        for(int i = c1 + c0; i < n; i++)
        {
            a[i] = 2;
        }
        
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
