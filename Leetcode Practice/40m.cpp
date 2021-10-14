/*40. Combination Sum II*/

class Solution {
public:
void solve(vector<int>ar,vector<int> tmp,vector<vector<int>> &sol,int idx,int target){
    if(target==0)
    {
        sol.push_back(tmp);
        return;
    } if(target<0) return;
    for(int i=idx;i<ar.size();i++){
        if(i>idx &&ar[i]==ar[i-1]) continue;
        tmp.push_back(ar[i]);
        solve(ar,tmp,sol,i+1,target-ar[i]);
        tmp.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& ar, int target) {
        vector<vector<int>> ans;
    sort(ar.begin(),ar.end());
    solve(ar,{},ans,0,target);
    return ans;
    }
};