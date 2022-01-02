// 312. Burst Balloons

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        int dp[n][n];
        for(int gap=0;gap<n;gap++){
            for(int i=0,j=gap;j<n;i++,j++)
            {
                int mx=INT_MIN;
                for(int k=i;k<=j;k++)
                {
                    int l,r;
                    if(k==i)
                        l=0;
                    else l=dp[i][k-1];
                    
                    if(k==j)
                        r=0;
                    else r=dp[k+1][j];
                    
                    int curr=nums[k];
                    if(i>0)
                        curr=curr*nums[i-1];
                    if(j!=n-1)
                        curr=curr*nums[j+1];
                    
                    int t=l+r+curr;
                
                    if(t>mx)
                        mx=t;
                }
                dp[i][j]=mx;
            }
        }
        return dp[0][n-1];
    }
};