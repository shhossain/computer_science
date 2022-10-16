// Problem link : https://practice.geeksforgeeks.org/problems/longest-valid-parentheses5657/1

// Solution - 

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
        // code here
        int ans = 0;
        stack<pair<char, int>> st;
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            if(c == '('){
                st.push({c, i});
            }else if(!st.empty() && st.top().first == '('){
                ans = max(ans, i - st.top().second + 1);
                st.pop();
                if(!st.empty()){
                    ans = max(ans, i - st.top().second);
                }else{
                    ans = max(ans, i + 1);
                }
            }else{
                st.push({')', i});
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends