/*799. Champagne Tower*/

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double dp[102][102];
        memset(dp,0,sizeof(dp));
        dp[0][0]=poured;
        for(int i=0;i<query_row;i++)
        {
            for(int j=0;j<=i;j++)
            {
               double champ=(dp[i][j]-1)/2.0;
                if(champ>0)
                {
                    dp[i+1][j]+=champ;
                    dp[i+1][j+1]+=champ;
                }
            }
        }
        return min(1.0,dp[query_row][query_glass]);
    }
};