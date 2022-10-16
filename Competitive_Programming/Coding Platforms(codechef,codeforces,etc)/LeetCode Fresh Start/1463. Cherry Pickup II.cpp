class Solution {
public:
    int dp[71][71][71];
    int dy[3] = {-1,0,1};
    int solve(vector<vector<int>>& grid, int col1, int col2, int row){
        int r = grid.size(), c = grid[0].size();
        if(row == r) return 0;
        if(col1<0 || col1>=c || col2<0 || col2>=c) return INT_MIN;
        if(dp[col1][col2][row]!=-1) return dp[col1][col2][row];
        int ans = 0;
        
        for(int i=0; i<3; ++i){
            for(int j=0; j<3; ++j){
                int c1 =  col1 + dy[i];
                int c2 = col2 + dy[j];
                ans=max(ans, solve(grid,c1,c2,row+1));
            }
        }
        if(col1 == col2) ans += grid[row][col1];
        else ans+= grid[row][col1] + grid[row][col2];
        
        return dp[col1][col2][row] = ans;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int row = grid.size();
        int col = grid[0].size();
        return solve(grid, 0, col-1, 0);
    }
};
