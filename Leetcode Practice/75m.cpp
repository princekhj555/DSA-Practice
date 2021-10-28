//75. Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,on=0,tw=0;
        for(auto a: nums)
        {
            if(a==0) z++;
            else if(a==1) on++;
            else tw++;
        }
        int i=0;
        while(z--)
        {nums[i]=0; i++;}
        while(on--)
        {nums[i]=1; i++;}
        while(tw--)
        {nums[i]=2; i++;}
    }
};