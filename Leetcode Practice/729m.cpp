// 792. Number of Matching Subsequences
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
         int ans = 0;
        
        for(auto& w: words){
            int n = w.size();
            int cnt = 0;
            size_t found = -1;
            for(char& c: w){ 
                found = s.find(c, found + 1);
                if(found == string::npos) break; 
                cnt++;
            }
            if(cnt == n) ans++; 
        }
        
        return ans;
    }
};