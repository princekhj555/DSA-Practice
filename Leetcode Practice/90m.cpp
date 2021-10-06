/*90. Subsets II*/
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> sol;
        sort(nums.begin(),nums.end());
        solve(nums,0,sol,{});
        vector<vector<int>> ans;
        for(auto a: sol){
            ans.push_back(a);
        }
        return ans;
    }
    void solve(vector<int> n,int start,set<vector<int>>&sol,vector<int> tmp){
       
            sol.insert(tmp);
        
        for(int i=start;i<n.size();i++){
            tmp.push_back(n[i]);
            solve(n,i+1,sol,tmp);
            tmp.pop_back();
        }
    }
};