/*442. Find All Duplicates in an Array*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> sol;
        unordered_set<int> ump;
        for(auto a: nums){
            if(ump.count(a))
                 sol.push_back(a);
            else ump.insert(a);
        }
        return sol;
    }
};