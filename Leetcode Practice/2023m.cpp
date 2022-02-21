/*2023. Number of Pairs of Strings With Concatenation Equal to Target*/

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int ans = 0,n = nums.size();
        string temp,temp2;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                temp = nums[i] + nums[j];
                temp2 = nums[j] + nums[i];
                if(temp == target){
                    ans++;
                }
                if(temp2 == target){
                    ans++;
                }
            }
        }
        return ans;
    }
};