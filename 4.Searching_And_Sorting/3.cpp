// to find the index of element in an sorted ....rotated array and if not found return -1

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==target)return i;
       }
        return -1;
    }
};