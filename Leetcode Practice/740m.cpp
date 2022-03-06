/*740. Delete and Earn*/

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        int dp[20005]={0};
        int fq[20005]={0};
        for(auto a: nums)
        {
           mx=max(mx,a);
            fq[a]++; 
        }          
        dp[1]=fq[1];
        dp[2]=max(dp[1],fq[2]*2);
        for(int i=3;i<=mx;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+fq[i]*i);
        }
        return dp[mx];
    }
};