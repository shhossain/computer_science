// Problem Link : https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

// Solution - 


//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& arr, int n) 
    {
        // code here
        stack<int> s;
        for(int i=0; i<arr.size(); i++){
            s.push(i);
        }
        while(s.size() >= 2){
            int i = s.top();
            s.pop();
            int j = s.top();
            s.pop();
            
            if(arr[i][j]==1){
                // if i knows j then i cannot be a celebrity 
                s.push(j);
            }else if(arr[i][j] == 0){
                // if i doesn't know j then j cannot be a celebrity 
                s.push(i);
            }
        }
        
        int pot = s.top();
        for(int i=0; i<arr.size(); i++){
            if(i != pot){
                if(arr[pot][i]==1 || arr[i][pot]==0){
                    return -1;
                }
            }
        }
        return pot;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends