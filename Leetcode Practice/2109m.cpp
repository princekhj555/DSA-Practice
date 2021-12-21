/*2109. Adding Spaces to a String*/
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        
        int t=0;
        for(int i=0;i<s.length();i++)
        {
            if(t<spaces.size() && spaces[t]==i)
            {
                res+=" ";
                t++;
            }
            res+=s[i];
        }
        
        return res;
    }
};