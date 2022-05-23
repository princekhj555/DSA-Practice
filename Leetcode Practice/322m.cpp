//322. Coin Change
class Solution {
public:
    int coinChange(vector<int>& c, int w) {
        vector<int>dp(w+1,INT_MAX-1);
        dp[0]=0;
        for(int i=0;i<dp.size();i++)
            for(int j=0;j<c.size();j++)
                if(i>=c[j]) dp[i]=min(dp[i],1+dp[i-c[j]]);
               
        return (dp[w]==INT_MAX-1?-1:dp[w]);
    }
};