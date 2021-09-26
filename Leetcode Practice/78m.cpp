/*78. Subsets*/
class Solution {
public:
    void solve(vector<int> ip,vector<int>op,vector<vector<int>> &sol)
    {
        if(ip.size()==0){
            sol.push_back(op);
            return;
        }
        vector<int> t1=op;
        vector<int> t2=op;
        t2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,t1,sol);
        solve(ip,t2,sol);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        solve(nums,{},sol);
        return sol;
    }
};