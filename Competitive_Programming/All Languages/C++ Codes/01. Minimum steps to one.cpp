/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
#define ll long long int
#define ull long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define forp(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define fast ios_base::sync_with_stdio(false);
using namespace std;

/*
recursive approach

int mintoone(int n)
{
	if(n==0||n==1)
	return 0;
	else if(n%2==0)
	return 1+mintoone(n/2);
	else if(n%3==0)
	return 1+mintoone(n/3);
	else
	return 1+mintoone(--n);
}
*/
/*
tabulation -- bottom up -- fast -- hard to think

int mintoone(int n)
{
	int dp[n+1];
	for(int i=0;i<=n;i++)
	dp[i]=n-i;
	for(int i=n;i>=1;i--)
	{
		if(!(i%2))
		dp[i/2]=min(dp[i]+1,dp[i/2]);
		if(!(i%3))
		dp[i/3]=min(dp[i]+1,dp[i/3]);
	}
	return dp[1];
}
*/
// memoization -- top down -- slow -- easy to think
int mintoone(int n)
{
	int dp[n+1];
	for(int i=0;i<=n;i++)
	dp[i]=-1;
	
	if(n==1||n==0)
	return 0;
	if(dp[n]!=-1)
	return dp[n];
	
	int r= mintoone(n-1);
	
	if(n%2==0)
	r= min(r, mintoone(n/2));
	if(n%3==0)
	r= min(r, mintoone(n/3));
	
	dp[n]=1+r;
	return dp[n];
	
}
int main()
{
	int n;
   cin>>n;
   cout<< mintoone(n);
   return 0;
}
