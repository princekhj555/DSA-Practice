/*164. Maximum Gap*/
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int diff=0,sol=0;
        int n=nums.size();
        if(n<2) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            diff=nums[i+1]-nums[i];
            sol=max(diff,sol);
        }
        return sol;
    }
};