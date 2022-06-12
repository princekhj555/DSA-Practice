//1658. Minimum Operations to Reduce X to Zero
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i = 0, j = 0, n = nums.size(), sum = 0, total = accumulate(nums.begin(),nums.end(),0), maxwindow = 0;
        
        if(total-x == 0) return n;
        while(i < n) {
          
            if(sum == total-x) {
                maxwindow = max(maxwindow,j-i);
                if(j < n) sum += nums[j++];
                else break;
            }
            else if(sum < total-x and j < n) sum += nums[j++];
            else sum -= nums[i++];
        }

        if(maxwindow == 0) return -1;
        return n-maxwindow;
    }
};