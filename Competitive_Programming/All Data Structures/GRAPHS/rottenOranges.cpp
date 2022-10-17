/*Question
Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

We have to determine what is the minimum time required to rot all oranges.
A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    // Code here
    int cntFresh = 0;
    int n = grid.size();
    int m = grid[0].size();

    //{{r,c},t}
    queue<pair<pair<int, int>, int>> q;

    int vis[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 2;
            }
            else
            {
                vis[i][j] = 0;
            }
            if (grid[i][j] == 1)
            {
                cntFresh++;
            }
        }
    }

    int cnt = 0;
    int tm = 0;
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};
    int r, c, t;
    while (!q.empty())
    {
        r = q.front().first.first;
        c = q.front().first.second;
        t = q.front().second;
        q.pop();

        tm = max(tm, t);

        for (int i = 0; i < 4; i++)
        {
            int nrow = r + drow[i];
            int ncol = c + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && vis[nrow][ncol] != 2)
            {
                q.push({{nrow, ncol}, t + 1});
                vis[nrow][ncol] = 2;
                cnt++;
            }
        }
    }
    if (cnt != cntFresh)
    {
        return -1;
    }
    return tm;
}

int main()
{
    vector<vector<int>> grid;
    grid.push_back({0, 1, 2});
    grid.push_back({0, 1, 2});
    grid.push_back({2, 1, 1});

    cout << orangesRotting(grid);
}