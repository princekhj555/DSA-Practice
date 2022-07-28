/*242. Valid Anagram*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ump;
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2) return false;
        int chk[26] = {0};
        for(int i=0;i<n1;i++)
        {
            chk[s[i]-'a']++;
            chk[t[i]-'a']--;
        }
        for(auto i:chk){
            if(i!=0) return false;
        }
        return true;
    }
};

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

class Solution {
public:
    bool isAnagram(string s, string t) {
        int tmp[26]={0};
        
        for(auto a:s) tmp[a-'a']++;
        for(auto a:t) tmp[a-'a']--;
        
        for(auto a:tmp){
            if(a!=0) return false;
        }
        return true;
    }
};
