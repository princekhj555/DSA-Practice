/*991. Broken Calculator*/

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count = 0;
        while(target > startValue){
            if(target % 2)target++;
            else target /= 2;
            count++;
        } 
        return count + startValue - target;
    }
};