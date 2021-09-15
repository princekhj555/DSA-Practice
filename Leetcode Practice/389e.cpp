/*389. Find the Difference*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>hash;
        int i=0;
        for(;i<s.length();i++)
        {
            hash[s[i]]++;
            hash[t[i]]--;
        }
        hash[t[i]]--;
		char c;
        for(auto x:hash)
        {
            if(x.second==-1)
            {
			    c = x.first;
                return c;
            }
        }
        return c; // program will not come here
    }
};