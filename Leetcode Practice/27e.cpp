/*27. Remove Element*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(val==nums[i]) {t++; nums[i]=-1;}
        }
        sort(nums.begin(),nums.end(),greater <>());
        return nums.size()-t;
    }
};