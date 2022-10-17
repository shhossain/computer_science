/*
Link:https://leetcode.com/problems/longest-common-subsequence/
PLatform:Leetcode
input:text1 = "abcde", text2 = "ace"
optput: 3(Length of Longest common Subsequence)
    */
#include<iostream>
using namespace std;
  int longestCommonSubsequence(string a, string b) {
     int n=a.size();
        int m=b.size();
        int t[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                {
                    t[i][j]=0;
                }
                if(j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
    }
int main()
{
  string s1,s2;
  cin>>s1;
  cin>>s2;
  int ans=longestCommonSubsequence(s1,s2);
  cout<<ans;
}
