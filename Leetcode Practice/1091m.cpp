/*1091. Shortest Path in Binary Matrix*/
class Solution {
public:
    bool isValidPoint(int x, int y, int n, int m){
        if(x>=0 and x<=n and y>=0 and y<=m) return true;
        return false;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size() -1 , m = grid[0].size() - 1;
        
        if(grid[0][0]!=0 or grid[n][m]!=0) return -1;
        
        // intialize directions
        int x_coord[] = {-1,-1,-1,0, 0,1,1, 1};
        int y_coord[] = {-1, 0, 1,1,-1,1,0,-1};
        
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0] = 1;
        
        while(q.empty() == false and grid[n][m] == 0){
            
            int posx = q.front().first;
            int posy = q.front().second;
            q.pop();
            
            // iterate over all directions
            for(int i=0; i<8; i++){
                int new_x = posx + x_coord[i];
                int new_y = posy + y_coord[i];
                
                if(isValidPoint(new_x, new_y, n, m) and grid[new_x][new_y] == 0){
                    grid[new_x][new_y] = grid[posx][posy] + 1;
                    q.push({new_x,new_y});
                }
            }
        }
        
        return grid[n][m]!=0 ? grid[n][m] : -1;
    }
};