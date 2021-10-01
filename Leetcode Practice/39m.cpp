/*39. Combination Sum*/
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sol;
        solve(candidates,sol,{},0,target);
        return sol;
    }
    void solve(vector<int>ip,vector<vector<int>> &sol,vector<int>op,int start,int target){
        if(target==0){
            sol.push_back(op);
        }
        if(target<0) return;
        for(int i=start;i<ip.size();i++){
            op.push_back(ip[i]);
            solve(ip,sol,op,i,target-ip[i]);
            op.pop_back();
        }
    }
};