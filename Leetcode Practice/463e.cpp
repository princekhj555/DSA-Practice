/*463. Island Perimeter*/

class Solution {
public:
    
    void dfs(vector<vector<int>>& grid,int i,int j,int m,int n,int &sol){
        // Mark as visited
        grid[i][j] = 2;
        
        // Calculate perimeter in all the 4 directions
        if(i == 0 || grid[i-1][j] == 0)
            sol++;
        
        if(i == m || grid[i+1][j] == 0)
            sol++;
        
        if(j == 0 || grid[i][j-1] == 0)
            sol++;
        
        if(j == n || grid[i][j+1] == 0)
            sol++;
        
        // Check all the 4 directions
        // If land is found then recursively call dfs function
        if(i > 0 && grid[i-1][j] == 1)
            dfs(grid,i-1,j,m,n,sol);
        
        if(i < m && grid[i+1][j] == 1)
            dfs(grid,i+1,j,m,n,sol);
        
        if(j > 0 && grid[i][j-1] == 1)
            dfs(grid,i,j-1,m,n,sol);
        
        if(j < n && grid[i][j+1] == 1)
            dfs(grid,i,j+1,m,n,sol);
    }
    
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int sol=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1)
                    dfs(grid,i,j,m-1,n-1,sol);
                    
        return sol;
        
    }
};