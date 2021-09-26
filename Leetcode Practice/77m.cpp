/*77. Combinations*/

class Solution {
public:
    void solve(int start,int n,vector<int> curr,vector<vector<int>> &sol,int k)
    {
        if(curr.size()==k)
        {
            
            sol.push_back(curr);
            return;
        }
        for(int i=start;i<=n;i++){
            curr.push_back(i); //add next 
            solve(i+1,n,curr,sol,k); 
            curr.erase(curr.end()-1);  //backtrack
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> sol;
         solve(1,n,{},sol,k);
        return sol;
    }
};