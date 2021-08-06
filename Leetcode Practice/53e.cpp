/*53. Maximum Subarray*/

//Kadane's algo 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sol=nums[0];
        int mxE=nums[0];
        for(int i=1;i<nums.size();i++){
            mxE=max(mxE+nums[i],nums[i]);
            sol=max(sol,mxE);
        }
        return sol;
    }
};