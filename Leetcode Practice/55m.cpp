//55. Jump Game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jmp,mx=0;
        for(int i=0;i<nums.size();i++){
            if(i>mx) return 0;
            jmp=i+nums[i];
            mx=max(jmp,mx);
        }
        return true;
    }
};