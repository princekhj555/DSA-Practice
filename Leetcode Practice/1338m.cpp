//1338. Reduce Array Size to The Half
class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
    int minSetSize(vector<int>& arr) {
        int target =arr.size()/2;
        unordered_map<int,int> ump;
        for(auto a: arr){
            ump[a]++;
        }
        
        vector<pair<int,int>> tmp;
        for(auto a: ump){
            tmp.push_back(a);
        }
        
        sort(tmp.begin(),tmp.end(),cmp);
    
        int sol=0;
        
        for(auto a: tmp){
           if(target>0){
               target=target-a.second;
               sol++;
           }else break;
        }
        return sol;
        
        
    }
};