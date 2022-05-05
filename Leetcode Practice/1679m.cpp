/*1679. Max Number of K-Sum Pairs*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sol=0;
        sort(nums.begin(),nums.end());
        for(int i=0,j=n-1;i<j;){
            if(nums[i]+nums[j]==k) {
                sol++;
                j--;
                i++;
            }
            else if(nums[i]+nums[j]<k){ i++;}
            else j--;
        }
        return sol;
    }
};