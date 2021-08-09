/* 136. Single Number*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sol=0;
        for(int i=0;i<nums.size();i++)
            sol=sol^nums[i];
        
         return sol;
    }
};