/*122. Best Time to Buy and Sell Stock II*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int sol=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1])
                sol+=prices[i]-prices[i-1];
            
        }
        return sol;
    }
};