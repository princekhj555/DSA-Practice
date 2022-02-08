/*2091. Removing Minimum and Maximum From Array*/

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(auto x:nums){
            mini = min(mini,x);
            maxi = max(maxi,x);
        }
        int idx1,idx2;
        for(int i=0;i<n;i++){
            if(nums[i]==mini)idx1=i;
            if(nums[i]==maxi)idx2=i;
        }
        int a = idx1+1+n-idx2; 
        int b = idx2+1+n-idx1;
        int c = min(max(n-idx1,n-idx2),max(idx1,idx2)+1);
        int ans = min(c,min(a,b));
        
        return ans;
    }
};