class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sol=INT_MIN;
        for(int i=0,j=nums.size()-1;i<j;i++,j--){
            sol=max(sol,(nums[i]+nums[j]));
        }
        return sol;
    }
};