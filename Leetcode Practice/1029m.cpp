/*1029. Two City Scheduling*/

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& arr) {
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            v.push_back({arr[i][0]-arr[i][1],i});
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(i<v.size()/2) ans+=arr[v[i].second][0];
            else ans+=arr[v[i].second][1];
        }
        return ans;
    }
};