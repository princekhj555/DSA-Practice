/*875. Koko Eating Bananas*/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int k) {
        int lo=1,hi=0,res=-1;
        //find the maximum value from pile
        for(int pile:piles){
            hi=max(hi,pile);
        }
        while(lo<=hi){
            int mid=(hi-lo)/2+lo;
            int hours=0,rem=0;
            for(int pile:piles){
                hours+=ceil((double)pile/(double)mid);
            }
            if(hours<=k){
                res=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return res;
    }
};