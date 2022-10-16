vector<vector<int>> solve(vector<vector<int>>& matrix) 
{
for (int i = 0; i < matrix[0].size(); i++)

  for (int j = matrix.size() - 1; j > 0; j--)
            
    for (int k = 0; k < j; k++)

    if (matrix[k][i] > matrix[k + 1][i]) swap(matrix[k][i], matrix[k + 1][i]);
    
    
    return matrix;
}
