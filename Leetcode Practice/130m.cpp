/*130. Surrounded Regions*/
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0 || j==0 ||i==r-1 ||j==c-1)
                    if(board[i][j]=='O'){
                        dfs(board,i,j,r,c);
                    }
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='K')
                    board[i][j]='O';
                else if(board[i][j]=='O')
                      board[i][j]='X';
            }
        }
        
    }
    void dfs(vector<vector<char>>&b,int i,int j,int r,int c){
        if(i<0 || i>=r ||j>=c ||j<0 || b[i][j]=='X' || b[i][j]=='K') return;
        b[i][j]='K';
        
        dfs(b,i+1,j,r,c);
        dfs(b,i-1,j,r,c);
        dfs(b,i,j+1,r,c);
        dfs(b,i,j-1,r,c);
    }   
};