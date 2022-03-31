/*2216. Minimum Deletions to Make Array Beautiful*/

class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans=0;
        int sz=nums.size();
        
        for(int i=0;i<sz-1;i++){
           
            if((i-ans)%2==0 and nums[i+1]==nums[i]){
                    ans++;
            }
            
        }
		
        if((sz-ans)%2) ans++;
        return ans;
    }
};