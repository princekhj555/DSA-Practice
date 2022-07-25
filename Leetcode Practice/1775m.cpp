//1775. Equal Sum Arrays With Minimum Number of Operations

class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>6*nums2.size() or nums2.size()>6*nums1.size())
            return -1;
        int sum1=accumulate(nums1.begin(),nums1.end(),0);
        int sum2=accumulate(nums2.begin(),nums2.end(),0);
        if(sum1<sum2)
          swap(nums1,nums2);
          int diff=abs(sum1-sum2);
        if(!diff)
            return 0;
        vector<int>v(6,0);
        for(auto num:nums1)
            v[num-1]++;
        for(auto num:nums2)
            v[6-num]++;
        int ans=0;
        for(int i=5;i>=1;i--)
        {
            if(diff<=v[i]*i)
            {
                ans+=(diff+i-1)/i;
                break;
            }
            else
            {
                diff-=v[i]*i;
                ans+=v[i];
            }
        }
            return ans;
    }
};