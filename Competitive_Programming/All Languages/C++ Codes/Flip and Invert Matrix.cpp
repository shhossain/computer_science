vector<vector<int>> solve(vector<vector<int>>& matrix) 
{
     for (vector<int>& i : matrix) 
     {
        reverse(i.begin(), i.end());
        for (int& j : i) 
        j = !j;
    }
    return matrix;
}
