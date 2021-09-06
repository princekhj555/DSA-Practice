/*3. Longest Substring Without Repeating Characters*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0,r=0;
        int sol=0;
        unordered_map<char,int> ump;
    
        while(r<n){
            if(ump.count(s[r])) l= max(ump[s[r]]+1,l);
            ump[s[r]]=r;
            sol=max(sol,r-l+1);
            r++;
        }
        return sol;
    }
};