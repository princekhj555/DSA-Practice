/*289. Game of Life*/
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
      int m=board.size();
        int n=board[0].size();
        vector<vector<int>> sol(m,vector<int>(n));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int c=0;
                if(i-1>=0 and j<n){c+=board[i-1][j];}
                
                if(i+1<m and j<n){c+=board[i+1][j];}
                
                if(i<m and j-1>=0){c+=board[i][j-1];}
                
                if(i<m and j+1<n){c+=board[i][j+1];}
                
                if(i-1>=0 and j-1>=0){c+=board[i-1][j-1];}
                
                if(i-1>=0 and j+1<n){c+=board[i-1][j+1];}
                
                if(i+1<m and j-1>=0){c+=board[i+1][j-1];}
                
                if(i+1<m and j+1<n){c+=board[i+1][j+1];}
                
                
                if(board[i][j]==1 and c<2) sol[i][j]=0;
                if(board[i][j]==1 and (c==2 or c==3)) sol[i][j]=1;
                if(board[i][j]==1 and c>3) sol[i][j]=0;
                if(board[i][j]==0 and c==3) sol[i][j]=1; 
               
            }
        }
        board=sol;
    }
};