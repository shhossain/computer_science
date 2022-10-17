class Solution {
public:
    string longestPalindrome(string s) {
        vector<int>dp(s.length(),1);
        int start = 0,len=1;
        for(int i=s.length()-1;i>=0;i--){
            int diag=dp[i];
            for(int j=i+1;j<s.length();j++){
                int temp=dp[j];
                if(s[i]==s[j] && diag){
                    dp[j]=1;
                    if(j-i+1>len){
                        len=j-i+1;
                        start=i;
                    }
                }
                else{
                    dp[j]=0;
                }
                diag=temp;
            }
        }
        return s.substr(start,len);
        
        
    }
};
