//2057. Smallest Index With Equal Value
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(i%10==nums[i])
                return i;
        }
        return -1;
    }
};