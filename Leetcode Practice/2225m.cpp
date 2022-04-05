/*2225. Find Players With Zero or One Losses*/

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> notLost;
        vector<int> oneLost;
        vector<vector<int>> sol;
        unordered_map<int,int> ump;
        for(auto a: matches)
        {
            ump[a[1]]++;
            ump[a[0]];
        }
        
        for(auto a: ump){
            if(a.second==0)
                notLost.push_back(a.first);
            if(a.second==1)
                oneLost.push_back(a.first);
        }
        sort(notLost.begin(),notLost.end());
        sort(oneLost.begin(),oneLost.end());
        sol.push_back(notLost);
        sol.push_back(oneLost);
        return sol;
    }
};