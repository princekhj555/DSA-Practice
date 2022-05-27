//1342. Number of Steps to Reduce a Number to Zero
class Solution {
public:
    int numberOfSteps(int num) {
        int step=0;
        while(num!=0){
            if(num%2==0) {num/=2; step++;}
            else {num-=1; step++;}
            
        }
        return step;
    }
};