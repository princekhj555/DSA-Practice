//51. N-Queens
class Solution {
public:
    
    bool check(int row, int col, vector < string > board, int n) {
      int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
    void solve(int col,vector<string> &str,vector<vector<string>> &sol,int n){
        if(col==n){
            sol.push_back(str);
            return;
        }
        for(int row=0;row<n;row++){
            if(check(row,col,str,n)){
                str[row][col]='Q';
                solve(col+1,str,sol,n);
                str[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> sol;
        vector<string> str(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            str[i]=s;
        }
        solve(0,str,sol,n);
        return sol;
        
    }
};