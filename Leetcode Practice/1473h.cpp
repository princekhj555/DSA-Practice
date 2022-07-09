//1473. Paint House III
class Solution {
public:
    int dp[101][101][21];
    
    int INF = 1000001;
    
    int dfs(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target, int idx, int nei, int last){
        
        if(idx == m)
            return nei == target ? 0 : INF; 
            
        if(nei > target) return INF;
        
        if(dp[idx][nei][last] != -1)
            return dp[idx][nei][last];
        
        if(houses[idx] == 0){
            
            int ans = INF;
            
            for(int col = 1; col<=n; col++)
                ans = min(ans, cost[idx][col-1] + dfs(houses, cost, m, n, target, idx+1, col == last ? nei : nei + 1, col));
            
            return dp[idx][nei][last] = ans;
        }
            
        return dp[idx][nei][last] = dfs(houses, cost, m, n, target, idx + 1, houses[idx] == last ? nei : nei + 1, houses[idx]);
    }
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp, -1, sizeof dp);
        
        int ans = dfs(houses, cost, m, n, target, 0, 0, 0);
        return ans < INF ? ans : -1; 
    }
};