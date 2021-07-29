/*  26. Remove Duplicates from Sorted Array*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;
        if(n==0) return 0;
        if(n==1) return 1;
        while(j<n){ 
            if(nums[i]==nums[j]) j++;
            else
             {
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
      
        return ++i;
    }
};