vector<int> solve(vector<int>& heights) 
{
    vector<int> ret;
    int maxi = INT_MIN;
    for (int i = heights.size() - 1; i >= 0; i--) 
    {
        if (maxi < heights[i]) 
        {
            maxi = heights[i];
            ret.push_back(i);
        }
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
