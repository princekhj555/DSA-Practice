/*1394. Find Lucky Integer in an Array*/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto a:arr)
            mp[a]++;
        int sol=-1;
        for(auto a: mp)
        {
            if(a.first==a.second)
                sol=max(sol,a.first);
        }
        return sol;
    }
};