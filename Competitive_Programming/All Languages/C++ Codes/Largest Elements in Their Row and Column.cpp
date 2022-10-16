int solve(vector<vector<int>>& matrix)
{
    vector<int> row(matrix.size(), 0), col(matrix[0].size(), 0);

    for (int i = 0; i < matrix.size(); i++) 
    {
        for (int j = 0; j < matrix[i].size(); j++) 
        {
            col[j] += matrix[i][j];
            row[i] += matrix[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < matrix.size(); i++) 
    {
        for (int j = 0; j < matrix[i].size(); j++) 
        {
            ans += (matrix[i][j] == 1 and row[i] == 1 and col[j] == 1);
        }
    }
    return ans;
}
