class Solution
{
    long countPS(String s)
    {
        // Your code here
      int mod =1000000007;
        int n = s.length();
        long[][] dp = new long[n][n];
        
        for(int k =0;k<n;k++)
        {
            for(int i=0,j=k;j<n;i++,j++)
            {
                if(k==0)
                {
                    dp[i][j] = 1;
                }
                else if(k==1)
                {
                    if(s.charAt(i)==s.charAt(j))
                    {
                        dp[i][j]= 3;
                    }
                    else
                    {
                        dp[i][j]= 2;
                    }
                }
                else
                {
                    if(s.charAt(i)==s.charAt(j))
                    {
                        dp[i][j]=(dp[i][j-1]+dp[i+1][j]+1)%mod;
                    }
                    else
                    {
                        dp[i][j]=(mod + dp[i][j-1]%mod+dp[i+1][j]-dp[i+1][j-1])%mod;
                    }
                }
            }
        }
        
        return dp[0][n-1]%mod;
    }
}
