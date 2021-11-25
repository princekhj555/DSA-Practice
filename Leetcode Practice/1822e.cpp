/*1822. Sign of the Product of an Array*/
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=0;
        for(auto a:nums)
        {
            
            if(a<0)
                n++;
            if(a==0) return 0;
            
        }
        if(n%2==0) return 1;
        return -1;
    }
};