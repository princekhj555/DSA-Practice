class Solution {
public:
    int countDigits(int num) {
        int sol=0;
        int tmp=num;
        while(tmp>0){
            int k=tmp%10;
            if(num%k==0) sol++;
            tmp=tmp/10;
        }
        return sol;
    }
};