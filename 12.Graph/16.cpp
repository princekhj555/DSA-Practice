//Find the number of islands

class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int sol=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            {
            if(grid[i][j]=='1')
            {sol++;
                solve(grid,r,c,i,j);}}
        }
        return sol;
    }
    void solve(vector<vector<char>>& grid,int r,int c,int i,int j){
        if(i<0 ||i>=r ||j<0 ||j>=c || grid[i][j]!='1') return;
        grid[i][j]='v';
         solve(grid,r,c,i+1,j);
         solve(grid,r,c,i-1,j);
         solve(grid,r,c,i,j+1);
         solve(grid,r,c,i,j-1);
         solve(grid,r,c,i-1,j-1);
         solve(grid,r,c,i+1,j+1);
         solve(grid,r,c,i+1,j-1);
         solve(grid,r,c,i-1,j+1);
    }
};