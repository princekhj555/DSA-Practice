//2275. Largest Combination With Bitwise AND Greater Than Zero
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        unordered_map<int,int> mp;
        for(int i=0;i<candidates.size();i++){
            int cnt=0;
            int temp=candidates[i];
            while(temp){
                if(temp&1){
                    mp[cnt]++;
                }
                temp>>=1;
                cnt++;
            }
        }
        int ans=INT_MIN;
        for(auto [x,y]:mp){
            ans=max(ans,y);
        }
        return ans;
    }
};