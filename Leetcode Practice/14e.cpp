/*14. Longest Common Prefix*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans=strs[0];
        
        for(auto s:strs)
        {
            if(s.size()==0 || ans.size()==0)
                return "";
            
            int i=0;
            while(i<min(s.size(), ans.size()))
            {
                if(s[i]!=ans[i])
                    break;
                i++;
            }
            ans = s.substr(0,i);
        }
        
        return ans;
    }
};