/*213. House Robber II*/

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        return max(solve(nums,0,nums.size()-1),solve(nums,1,nums.size()));
    }
    int solve(vector<int> n,int start,int last){
        int pr2=0,pr1=0,mxx=0;
        for(int i=start;i<last;i++){
            mxx=max(pr2+n[i],pr1);
            pr2=pr1;
            pr1=mxx;
        }
        return mxx;
    }
};