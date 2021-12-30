/*560. Subarray Sum Equals K*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int cnt=0;
        int sm=0;
        for(int i=0;i<n;i++){
            sm+=nums[i];
            if(sm==k)
                cnt++;
             if(mp.find(sm-k)!=mp.end())
                cnt += mp[sm-k];
            
            mp[sm] += 1;
        }
        return cnt;
    }
};