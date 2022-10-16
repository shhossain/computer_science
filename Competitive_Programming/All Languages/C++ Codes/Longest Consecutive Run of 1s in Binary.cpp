int solve(int n) {
    int temp = 0;
    int maxi = 0;
    while( n > 0)
    {
        if(n % 2 == 1)
        temp++;

        else
        temp=0;
        maxi=max(temp,maxi);
        n=n>>1;
    }
    return maxi;
}
