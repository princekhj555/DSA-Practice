/* 35. Search Insert Position */


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,sol=-1;
        int start=0,end=nums.size();
        if(target>nums[end-1]) return end;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) {sol=mid; end=mid-1;}
            else start=mid+1;
            
        }
      return sol;  
    }
};