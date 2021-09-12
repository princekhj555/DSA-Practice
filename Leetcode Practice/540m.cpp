/*540. Single Element in a Sorted Array*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int t=0;
        for(auto a:nums)
        {
            t=t^a;
        }
        return t;
    }
};