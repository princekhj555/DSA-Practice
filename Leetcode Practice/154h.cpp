/*154. Find Minimum in Rotated Sorted Array II*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int k=INT_MAX;
        if(n==1) return nums[0];
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]) return nums[i+1];
            else k=min(k,nums[i]);
        } return k;
    }
};