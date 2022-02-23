/*2136. Earliest Possible Day of Full Bloom*/

class Solution {
public:
    static bool cmp(pair<int,int>a ,pair<int,int>b)
    {
        if (a.second > b.second) return true ;
        if (a.second == b.second) {
      	   if (a.first > b.first) {
      	   	  return true; 
      	   } 
      }
        return false;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        int sol=0;
        int tmp=0;
        vector<pair<int,int>> plant;
        for(int i=0;i<n;i++)
        {
            plant.push_back({plantTime[i],growTime[i]});
        }
        sort(plant.begin(),plant.end(),cmp);
        
        for(int i=0;i<n;i++)
        {
            tmp+=plant[i].first;
            sol=max(sol,tmp+plant[i].second);
        }
        return sol;
    }
};