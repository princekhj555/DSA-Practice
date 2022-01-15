/*915. Partition Array into Disjoint Intervals*/

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int> min_arr(n, nums[n-1]);
        vector<int> max_arr(n, nums[0]);
        for(int i = 1; i < n; ++i){
            max_arr[i] = max(max_arr[i-1], nums[i]);
            min_arr[n-1-i] = min(min_arr[n-i], nums[n-1-i]);
        }
        
        for(int i = 0; i < n; ++i){
            if(max_arr[i] <= min_arr[i+1])
                return i+1;
        }
        return 0;
    }
};