//1647. Minimum Deletions to Make Character Frequencies Unique
class Solution {
public:
    int minDeletions(string s) {
        unordered_set<int> ust;
        unordered_map<char,int> ump;
        int sol=0;
        
        for(auto a:s){
            ump[a]++;
        }
        
        for(auto a:ump){
          while(ust.count(a.second)){
              a.second--;
              sol++;
          }  
            if(a.second!=0)
                ust.insert(a.second);
        }
        return sol;
    }
};