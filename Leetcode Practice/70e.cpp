/*70. Climbing Stairs*/

class Solution {
public:
    
    int climbStairs(int n) {
        // if(n==0)return 1;
        // if(n<0)return 0;
        // int np1=climbStairs(n-1);
        // int np2=climbStairs(n-2);
        // return np1+np2;
        int dp[n+1];
        dp[0]=1;
        for(int i=1;i<=n;i++){
            if(i==1)
                dp[i]=dp[i-1];
            else dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};