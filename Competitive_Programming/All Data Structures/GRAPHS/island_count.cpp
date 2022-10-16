#include <iostream>
#include <vector>
#define ROW 6
#define COL 5
using namespace std;

vector<vector<bool>> visited (ROW, vector<bool> (COL, false));

void exploreDFS(int grid[ROW][COL], int r, int c) {
	bool rowInbounds = 0 <= r && r < ROW;
	bool colInbounds = 0 <= c && c < COL;

	if(!rowInbounds || !colInbounds)
		return;
	
	if(grid[r][c] == 'W')
		return;

	if(visited[r][c])
		return;

	visited[r][c] = true;
	exploreDFS(grid, r-1, c);
	exploreDFS(grid, r+1, c);
	exploreDFS(grid, r, c-1);
	exploreDFS(grid, r, c+1);
}


int islandCount(int grid[ROW][COL]) {
	// int row = sizeof(grid)/sizeof(grid[0]), col = sizeof(grid[0])/sizeof(int);
	int count = 0;
	
	for(int i = 0; i < ROW; ++i) {
		for(int j = 0; j < COL; ++j) {
			if(grid[i][j] == 'L' && !visited[i][j]) {
				++count;
				exploreDFS(grid, i, j);
			}
		}
	}
	return count;
}

int main() {
	int grid[ROW][COL] = {
		{'W', 'L', 'W', 'W', 'W'},
		{'W', 'L', 'W', 'W', 'W'},
		{'W', 'W', 'W', 'L', 'W'},
		{'W', 'W', 'L', 'L', 'W'},
		{'L', 'W', 'W', 'L', 'L'},
		{'L', 'L', 'W', 'W', 'W'}
	};

	cout << "No. of islands: " << islandCount(grid) << endl;
}
