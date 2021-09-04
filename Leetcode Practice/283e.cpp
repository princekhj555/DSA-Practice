/*283. Move Zeroes*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int x=0,y=0,z=nums.size()-1;
        while(y<nums.size())
        {
            if(nums[y]==0)y++;
            else{
                swap(nums[x],nums[y]);
                x++;y++;
            }
        }
    }
};