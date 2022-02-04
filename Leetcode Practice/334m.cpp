/*334. Increasing Triplet Subsequence*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int t1=INT_MAX,t2=INT_MAX;
        
        for(int i=0;i<n;i++){
           if(nums[i]<t1)
               t1=nums[i];
            else if(t1<nums[i] and nums[i]<t2)
                    t2=nums[i];
            else if(t1<nums[i] and t2<nums[i])
                    return true;
                
        }
        return false;
    }
};