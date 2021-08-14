/* 258. Add Digits */


class Solution {
public:
    int addDigits(int num) {
        int sol=0;
        
         while(num>0){
            sol+=num%10;
            num/=10;
        }
        if(sol>=10)
        return addDigits(sol);
        
        return sol;
    }
};