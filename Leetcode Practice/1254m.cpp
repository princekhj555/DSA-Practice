/*1254. Number of Closed Islands*/

class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
         int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 0) {
                    bool closed = isClosed(grid, i, j);
                    if (closed) count += 1;
                }
            }
        }
        return count;
    }
    bool isClosed(vector<vector<int>>&grid, int row, int col)
    {
        if (row < 0 || row >= grid.size() || col < 0 ||
           col >= grid[row].size()) {
            return false;
        }
        if (grid[row][col] == 1) return true;
        
        grid[row][col] = 1;//visited
        
        bool bottom = isClosed(grid, row + 1, col); // bottom
        bool right = isClosed(grid, row, col + 1); // right
        bool left = isClosed(grid, row, col - 1); // left
        bool top = isClosed(grid, row - 1, col); // top;
       
        return bottom && right && top && left;
        
    }
};