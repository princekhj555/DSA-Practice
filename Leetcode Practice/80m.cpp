/*80. Remove Duplicates from Sorted Array II*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
        if(n<3) return n; //already atmost 2 same
        int x=2,y=2;
        while(y<n){
            if(nums[y]!=nums[x-2])
                nums[x++]=nums[y];
            y++; 
        }
        return x;
    }
};