class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sol=0;
        for(int i=0;i<costs.size();i++){
            if(coins<costs[i]) break;
            coins-=costs[i];
            sol++;
        }
        return sol;
    }
};