/*1920. Build Array from Permutation*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> sol(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            sol[i]=nums[nums[i]];
        }
        return sol;
    }
};