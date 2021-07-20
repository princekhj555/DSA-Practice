/* 1365. How Many Numbers Are Smaller Than the Current Number */  



class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len=nums.size();
        map<int,int> mp;
        vector<int> v2(nums.size());
        for(int i=0;i<len;i++)
        {
            v2[i]=nums[i];
        }
        sort(v2.begin(),v2.end());
        for(int i=len-1;i>=0;i--)
        {
            mp[v2[i]]=i;
        }
        for(int i=0;i<len;i++)
        {
            auto it=mp.find(nums[i]);
            v2[i]=it->second;
        }
        return v2;
    }
};