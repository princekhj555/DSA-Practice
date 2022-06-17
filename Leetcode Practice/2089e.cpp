//2089. Find Target Indices After Sorting Array
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> sol;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                sol.push_back(i);
            }
        }
        return sol;
    }
};