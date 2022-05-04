
/*581. Shortest Unsorted Continuous Subarray*/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=-1;
        int tmp=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<tmp)
                end=i;
            else tmp=nums[i];
        }
        tmp=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(tmp<nums[i])
            {
                start=i;
            }else tmp=nums[i];
        }
        return end-start+1;
    }
};