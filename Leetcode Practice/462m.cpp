//462. Minimum Moves to Equal Array Elements II

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int sol=0;
        
        sort(nums.begin(),nums.end());
        
        int start=0,end=n-1;
        while(start<=end){
            sol+=nums[end]-nums[start];
            start++;
            end--;
        }
        return sol;
    }
};