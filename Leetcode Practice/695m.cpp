/*695. Max Area of Island*/

class Solution {
public:
    void dfs(vector<vector<int>> &grid,int r,int c,int i,int j,int &temp)
    {
        if(i<0 ||i>=r ||j<0||j>=c) return; //out of bound
        if(grid[i][j]!=1) return;
        
        temp++;
        grid[i][j]=2;
        
        dfs(grid,r,c,i-1,j,temp);
        dfs(grid,r,c,i+1,j,temp);
        dfs(grid,r,c,i,j+1,temp);
        dfs(grid,r,c,i,j-1,temp);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int sol=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                if(grid[i][j]==1)
                    { int temp=0; dfs(grid,r,c,i,j,temp); sol=max(sol,temp); }
        }
        return sol;
    }
};