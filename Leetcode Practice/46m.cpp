/*46. Permutations*/

class Solution {
public:
    void solve(vector<int>tmp,vector<int> arr,int n,vector<vector<int>> &sol,int k)
    {
        if(k==n){
            sol.push_back(tmp);
            return;
        }
        for(int i=0;i<n;i++){
            if(tmp[i]==-20){
                tmp[i]=arr[k];
                solve(tmp,arr,n,sol,k+1);
                tmp[i]=-20;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> sol;
        vector<int> tmp(n,-20);
        solve(tmp,nums,n,sol,0);
        return sol;
    }
};