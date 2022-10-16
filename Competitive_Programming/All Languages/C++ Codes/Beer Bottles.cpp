int solve(int n) 
{
    int empty = 0, ans = 0;
    
    while (n) 
    {
        ans += n, empty += n;
        n = empty / 3, empty %= 3;
    }
    return ans;
}
