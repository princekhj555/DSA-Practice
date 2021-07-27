/*  1. Two Sum */


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        
        for (int i = 0; i < nums.size(); i++) {
            int tmp = target - nums[i];
            if (umap.count(tmp)) {
                return {umap[tmp], i};
            } else {
                umap[nums[i]] = i;
            }
        }
        
        return {};
    }
};