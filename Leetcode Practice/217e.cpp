/*217. Contains Duplicate*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ump;
        for(auto n:nums){
            if(ump.count(n))
                return true;
            else ump.insert(n);
        }return false;
    }
};