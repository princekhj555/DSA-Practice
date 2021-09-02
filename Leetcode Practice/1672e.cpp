/*1672. Richest Customer Wealth*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int sol=0;
        int m=a.size();
        for(int i=0;i<m;i++){
            int t=0;
            for(int j=0;j<a[i].size();j++){
                t+=a[i][j];
            }
            sol=max(sol,t);
        }
        return sol;
    }
};