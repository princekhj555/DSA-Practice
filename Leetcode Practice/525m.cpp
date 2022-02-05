/*525. Contiguous Array*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                nums[i]=-1;
        }
        int cSum=0,ans=0;
        for(int i=0;i<n;i++){
            cSum+=nums[i];
            if(mp.count(cSum)){
                ans=max(ans,i-mp[cSum]);
            }
            else{
                mp[cSum]=i;
            }
        }
        return ans;
    }
};