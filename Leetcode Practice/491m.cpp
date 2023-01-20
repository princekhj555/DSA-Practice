class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
         vector<vector<int>> res;
    vector<int> curr;
    backtrack(res, curr, nums, 0);
    return res;
    }
    void backtrack(vector<vector<int>>& res, vector<int>& curr, vector<int>& nums, int start) {
    if (curr.size() >= 2) {
        res.push_back(curr);
    }
    unordered_set<int> used;
    for (int i = start; i < nums.size(); i++) {
        if ((curr.empty() || nums[i] >= curr.back()) && used.find(nums[i]) == used.end()) {
            curr.push_back(nums[i]);
            backtrack(res, curr, nums, i + 1);
            curr.pop_back();
            used.insert(nums[i]);
        }
    }
    }
};