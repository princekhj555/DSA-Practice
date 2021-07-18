/* 58. Length of Last Word */

class Solution {
public:
    int lengthOfLastWord(string s) {
      int n=s.length()-1,ans=0;
        while(n>=0&&s[n]==' ')n--;
        while(n>=0&&s[n]!=' '){
            ans++;
            n--;
        }
        return ans; 
    }
};