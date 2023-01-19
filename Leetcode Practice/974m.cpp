class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
    vector<int> prefix_sum(n + 1);
    unordered_map<int, int> remainders;
    remainders[0] = 1;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + nums[i - 1];
        int remainder = (prefix_sum[i] % k + k) % k;
        if (remainders.count(remainder)) {
            count += remainders[remainder];
        }
        remainders[remainder]++;
    }
    return count; 
    }
};