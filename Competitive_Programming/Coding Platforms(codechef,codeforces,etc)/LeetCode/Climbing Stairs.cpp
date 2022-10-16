class Solution {
public:
    typedef long long int ll;
    ll dp[46];
    ll climbStairs(ll n) 
    {
         if(n<3)
         {
             return n;
         }
         if(dp[n]!=0)
         {
             return dp[n];
         }
        dp[n] = climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};
