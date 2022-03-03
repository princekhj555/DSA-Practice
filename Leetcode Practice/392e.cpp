/*392. Is Subsequence*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        int x1=0;
        if(s==t) return true;
        for(int i=0;i<n2;i++)
        {
            if(s[x1]==t[i])
            {
                x1++;
            }
            if(x1==n1) return true;
        }
        return false;
    }
};