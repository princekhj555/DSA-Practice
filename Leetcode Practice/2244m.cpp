/*2244. Minimum Rounds to Complete All Tasks*/

class Solution {
public:
    int minimumRounds(vector<int>& v) {
        map<int,int> mp;
        
        for(int i = 0;i<v.size();i++)
            mp[v[i]]++;
        
        int ans = 0;
        
        for(auto it: mp){
            if(it.second==1)return -1;
            int cnt = 0;
            
            while(it.second>3)
                it.second-=3, cnt++;
            
            if(it.second)
                cnt++;
            
            ans += cnt;
            
            
        }
        
        return ans;
    }
};

//**************************************************************************************************************//
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(auto a:tasks){
            mp[a]++;
        }
        int sol=0;
        for(auto a:mp){
           if(a.second==1) return -1;
           int count=0;
           while(a.second>3){
               a.second-=3;
               count++;
           }
           if(a.second) count++;
            sol+=count;
        }
        return sol;
    }
};