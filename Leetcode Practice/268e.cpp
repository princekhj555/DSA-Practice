/*268. Missing Number*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int m=nums.size();
int sum=0;
for(auto i: nums){
sum=sum+i;
}
return((m*(m+1)/2)-sum);
    }
};