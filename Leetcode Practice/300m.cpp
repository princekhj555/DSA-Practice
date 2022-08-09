//300. Longest Increasing Subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);
        dp[0]=1;
        
        int sol=0;
        
        for(int i=0;i<nums.size();i++){
            int mx=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])
                    mx=max(dp[j],mx);
            }
            dp[i]=mx+1;
            sol=max(sol,dp[i]);
        }
        return sol;
    }
};