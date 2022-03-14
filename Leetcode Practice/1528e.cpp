/*1528. Shuffle String*/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string sol="";
        for(int i=0;i<s.size();i++)
        {
            sol+=" ";
        }
        for(int i=0;i<indices.size();i++)
        {
            sol[indices[i]]=s[i];
        }
        return sol;
    }
};