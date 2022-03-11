/*1710. Maximum Units on a Truck*/
class Solution {
public:
  static bool comp(const vector<int>&a,const vector<int>&b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& bt, int t) {
        sort(bt.begin(),bt.end(),comp);
        int ans=0;
        int i=0;
        while(t>0 && i<bt.size()){
            if(bt[i][0]<=t){
                ans+=bt[i][0]*bt[i][1];
                t-=bt[i][0];
            }
            else{
                ans+=t*bt[i][1];
                t=0;
            }
            i++;
        }
        return ans;
    }
};