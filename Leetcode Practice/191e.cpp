/* 191. Number of 1 Bits*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int calc=0;
        while(n>0)
        {            
            if(n&1) calc++;
            n=n>>1;
        }
        return calc;
    }
};