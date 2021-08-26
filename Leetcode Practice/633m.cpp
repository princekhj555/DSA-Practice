/*633. Sum of Square Numbers*/

class Solution {
public:
    bool judgeSquareSum(int c) {
       long long int l=0,r=(long long int)sqrt(c);
        while(l<=r){
            if(l*l+r*r==c) return true;
            if(l*l+r*r>c) r--;
            if(l*l+r*r<c) l++;
        }
        return false;
    }
};