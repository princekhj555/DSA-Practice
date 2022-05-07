/*1209. Remove All Adjacent Duplicates in String II*/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        vector<pair<char,int>> vec;
        for(int i=0;i<n;i++){
            if(vec.empty() || vec.back().first!=s[i]){
                vec.push_back({s[i],1});
            }else{
                vec.back().second++;
                if(vec.back().second==k){
                    vec.pop_back();
                }
            }
            
        }
        string sol="";
        for(auto a:vec){
            sol.append(a.second,a.first);
        }
        return sol;
    }
};