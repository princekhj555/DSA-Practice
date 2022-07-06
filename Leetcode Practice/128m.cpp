//128. Longest Consecutive Sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ump(nums.begin(),nums.end());
        
        int sol=0;
        
        for(auto a: nums){
            
            if(ump.count(a-1)) continue;
            
            int tmp=1;
            
            while(ump.count(a+1)){
                a++;
                tmp++;
            }
            
            sol=max(sol,tmp);
            
            
        }
        return sol;
    }
};