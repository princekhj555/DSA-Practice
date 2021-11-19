/*448. Find All Numbers Disappeared in an Array*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_set<int> ump;
        vector<int> ans;
        for(auto a: nums)
            ump.insert(a);
        for(int i=1;i<=nums.size();i++)
        {
            if(!ump.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};