//2367. Number of Arithmetic Triplets
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int sol=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){ 
                    if(nums[j]-nums[i]==diff and nums[k]-nums[j]==diff) sol++;
                }
            }
        }
        return sol;
    }
};