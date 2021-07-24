/*287. Find the Duplicate Number */




class Solution {
public:
      int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            
            // for visited
            nums[index] *= -1;
            // if duplicate, 
            if(nums[index] > 0)
                return abs(nums[i]);
        }    
        return -1;
    }
};