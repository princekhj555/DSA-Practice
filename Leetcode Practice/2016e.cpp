/*2016. Maximum Difference Between Increasing Elements*/
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
         int minsum = INT_MAX;
        int sum  =0;
        for(int i = 0;i < nums.size();i++)
        {
            minsum = min(minsum,nums[i]);
            sum = max(sum,nums[i]-minsum);
        }
        if(sum != 0)
        {
            return sum;
        }
        else
        {
            return -1;
        }
    }
};