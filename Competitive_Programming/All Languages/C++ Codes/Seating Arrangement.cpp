bool solve(int n, vector<int>& c) 
{
    int n1 = c.size();
    int cnt = 0;
    for (int i = 0; i < n1; i++) 
    {
        if (c[i] == 0) 
        {
            if (i == 0 && i + 1 < n1 && c[i + 1] == 0) 
            {
                cnt++;
                c[i] = 1;

            } 
            else if (i == n1 - 1 && c[i - 1] == 0) 
            {
                cnt++;
                c[i] = 1;
            } 
            else if (c[i] == 0 && c[i - 1] == 0 && c[i + 1] == 0) {
                cnt++;
                c[i] = 1;
            }
        }
    }
    return cnt >= n;
}
