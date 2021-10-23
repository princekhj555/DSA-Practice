//387. First Unique Character in a String

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> ump;
        for(auto a:s){
            ump[a]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(ump[s[i]]==1) return i;
        }
        return -1;
    }
};