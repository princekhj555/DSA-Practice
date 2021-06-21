/*To get the Max profit after Buying and selling the stock if the price array is given*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
           minBuy=min(minBuy,prices[i]);
           profit=max(profit,prices[i]-minBuy);
        }
        return profit;
    }
};