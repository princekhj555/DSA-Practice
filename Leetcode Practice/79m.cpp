/*79. Word Search*/
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
              if(word[0]==board[i][j])
                   if(solve(board,word,i,j,0,r,c))
                       return true;
        return false;
    }
    
    bool solve(vector<vector<char>>& board, string word,int i,int j,int idx,int r,int c){
        if(idx==word.size()-1) return true;
        board[i][j]-=65;
        
        if(i>0 && board[i-1][j]==word[idx+1] && solve(board,word,i-1,j,idx+1,r,c)) return true;
        if(j>0 && board[i][j-1]==word[idx+1] && solve(board,word,i,j-1,idx+1,r,c)) return true;
        if(i<r-1 && board[i+1][j]==word[idx+1] && solve(board,word,i+1,j,idx+1,r,c)) return true;
        if(j<c-1 && board[i][j+1]==word[idx+1] && solve(board,word,i,j+1,idx+1,r,c)) return true;
        
        board[i][j]+=65;
        return false;
    }
};