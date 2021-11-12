//1413. Minimum Value to Get Positive Step by Step Sum

class Solution {
public:
     int minStartValue(vector<int>& nums) {
        int m=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            if(sum<m)
                m=sum;
        }
        return ((m*-1)+1);
    }

};