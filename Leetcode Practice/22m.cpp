/*22. Generate Parentheses*/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> sol;
        solve(n,"",sol,0,0);
        return sol;
    }
    void solve(int n,string op,vector<string> &sol,int open,int close){
     if(open==n && close==n){
        sol.push_back(op);
        return;
    } 
   
    
    if(open<n){
         string op1=op;
        op1+='(';
        solve(n,op1,sol,open+1,close);
    }
    if(close<open){
        string op2=op;
        op2+=')';
         solve(n,op2,sol,open,close+1); 
    }
    
   
}
};