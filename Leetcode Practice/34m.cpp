/*34. Find First and Last Position of Element in Sorted Array*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)return {-1,-1};
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                int l1=mid,r1=mid;
                while(l1>0){
                    if(nums[l1-1]==nums[mid])l1--;
                    else break;
                }
                 while(r1<n-1){
                    if(nums[r1+1]==nums[mid])r1++;
                    else break;
                }
                return {l1,r1};
            }
           else if(nums[mid]>target){
               r=mid-1;
           }
          else if(nums[mid]<target){
               l=mid+1;
           }        
        }
            return {-1,-1};
        
    }
};