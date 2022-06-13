//1695. Maximum Erasure Value
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0,n=nums.size(),sum=0,ans=0;
        set<int>s;
        while(i<n)
        {
          
        if(s.find(nums[i])==s.end())
            {
                s.insert(nums[i]);
                sum+=nums[i];
                i++;
            }
            else
            {
               
                ans=max(ans,sum);
                while(nums[j]!=nums[i])
                {
                 sum-=nums[j];
                 s.erase(nums[j]);
                 j++;
                }
                sum-=nums[j];
                s.erase(nums[j]);
                j++;
            }
        }
        ans=max(ans,sum);
        return ans;
        
    }
};