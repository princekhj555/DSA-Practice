/*216. Combination Sum III*/

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> sol;
    solve(1,9,{},sol,k,n);
    return sol;
    }
    void solve(int start,int end,vector<int> tmp,vector<vector<int>> &sol,int k,int target){
    if(target==0 and k==tmp.size()){
        sol.push_back(tmp);
        return;
    }
    for(int i=start;i<=end;i++){
        tmp.push_back(i);
        solve(i+1,end,tmp,sol,k,target-i);
        tmp.pop_back();
        
    }
    
}
};