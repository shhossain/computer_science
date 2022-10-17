n,x=(map(int,input().split()))
price=list(map(int,input().split()))
pages=list(map(int,input().split()))
dp=[]
mod=10000000007

for i in range(n+1):
    dp.append([0]*(x+1))

for i in range(1,n+1):
    for j in range(x+1):
        if price[i-1]>j:
            dp[i][j]=dp[i-1][j]
        else:
            dp[i][j]=max(pages[i-1]+dp[i-1][j-price[i-1]],dp[i-1][j])
print(dp[n][x])
