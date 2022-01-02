/*890. Find and Replace Pattern*/

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      vector<string> sol;
        for(auto a:words)
        {
            if(chk(a,pattern))
                sol.push_back(a);
        }
        return sol;
    }
    bool chk(string str,string pat)
    {
       unordered_map<char,char>m;
        unordered_map<char,bool>visited;
        for(int i=0;i<pat.size();i++){
            if(m.find(pat[i])==m.end()){
                if(visited.find(str[i])==visited.end()){
                    m[pat[i]]=str[i];
                    visited[str[i]]=true;
                }
                else{
                    return false;
                }
            }
            else{
                char ch =m[pat[i]];
                if(str[i]==ch)
                    continue;
                else{
                    return false;
                }
            }
        }
        return true;
    }
};