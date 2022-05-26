//354. Russian Doll Envelopes
class Solution {
public:
    static bool comp(vector<int>&x, vector<int>&y)
    {
        return x[0] == y[0]? x[1] > y[1] : y[0] > x[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes)
    {
        int len = 0;
        sort(envelopes.begin(), envelopes.end(), comp);
        vector<int>dp;
        for(auto &it : envelopes)
        {
            int height = it[1];
            int idx = lower_bound(dp.begin(), dp.end(), height) - dp.begin();
            
            if(idx == dp.size())
            {
                dp.push_back(height);
                len++;
            }
            else
            {
                dp[idx] = height;
            }
        }
        return len;
    }
};