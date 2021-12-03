/*416. Partition Equal Subset Sum*/
class Solution {
public:
    bool canPartition(vector<int>& nums) {
       int n=nums.size(),sm=0;
        for(int i=0;i<n;i++)
            sm+=nums[i];
        if(sm%2!=0) return false;
        else return subsetSum(nums,sm/2);
    }
    bool subsetSum(vector<int> nums,int target)
    {
        int n=nums.size();
        bool dp[n+1][target+1];
        for(int i=0;i<=n;i++)
            for(int j=0;j<=target;j++)
            {
                if(j==0)
               dp[i][j]=true;
               else if(i==0)
               dp[i][j]=false;
               else if(nums[i-1]<=j)
               {
                   dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
               }
               else
               dp[i][j]=dp[i-1][j];
            }
        
       return dp[n][target];
    }
};