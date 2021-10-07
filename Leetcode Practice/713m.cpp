/*713. Subarray Product Less Than K*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      if(k<=1) return 0;
         int left=0;
  // concept of sliding window
      int prod=1;
      int count=0;
      for(int i=0;i<nums.size();i++){
         prod*=nums[i];
         while(prod>=k) prod/=nums[left++];
         count+=1+(i-left);
      }
      return count;
    }
};