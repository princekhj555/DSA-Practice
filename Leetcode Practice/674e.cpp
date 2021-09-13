/*674. Longest Continuous Increasing Subsequence*/

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
     int count=1,m=1,n=nums.size();
        for(int i=1;i<n;i++) {
            if(nums[i]<=nums[i-1]) count=1;
            else count++;
            m=max(m,count);
        }
        return m;   
    }
};