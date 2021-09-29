/*542. 01 Matrix*/
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> sol (mat.size(),vector<int>(mat[0].size(),-1));
        queue<pair<int,int>> q;
        
        // insert 0 at zeroes and the indexes in queue.
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0)
                    {
                     sol[i][j]=0;
                     q.push({i,j});
                }
            }
        }
        int m=mat.size();
        int n=mat[0].size();
        
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            
            if(check(i-1,j,m,n) && sol[i-1][j]==-1){ //top
                q.push({i-1,j});
                sol[i-1][j]=sol[i][j]+1;
            }
            if(check(i+1,j,m,n) && sol[i+1][j]==-1){ //bottom
                q.push({i+1,j});
                sol[i+1][j]=sol[i][j]+1;
            }
            if(check(i,j-1,m,n) && sol[i][j-1]==-1){ //left
                q.push({i,j-1});
                sol[i][j-1]=sol[i][j]+1;
            }
            if(check(i,j+1,m,n) && sol[i][j+1]==-1){ //right
                q.push({i,j+1});
                sol[i][j+1]=sol[i][j]+1;
            }
            q.pop();    
        }
        
        return sol;
    
    }
    bool check(int i,int j,int m, int n){
        if(i<0 || i>=m || j<0 || j>=n) return false;
        return true;
    }
};