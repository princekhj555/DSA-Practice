/*367. Valid Perfect Square*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start=1,end=num/2;
        if(num==1) return true;
        while(start<=end){
            long long int mid=start+(end-start)/2;
            if(mid*mid==num) return true;
            else if( mid*mid > num) end=mid-1;
            else start=mid+1;
        }
        return false;
    }
};