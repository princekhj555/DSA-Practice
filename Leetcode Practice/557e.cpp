/*557. Reverse Words in a String III*/

class Solution {
public:
    string rev(string s)
    {
        for(int i=0;i<s.length()/2;i++){
            swap(s[i],s[s.length()-i-1]);
        }
            return s;
    }
    string reverseWords(string s) {
    string temp="",sol="";
        int k=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ')
                {temp+=s[i]; k=1;}
            if(s[i]==' ')
                {sol+=rev(temp);
                temp=""; sol+=' '; k=1;}
        }
        
        if(k==1)
            sol+=rev(temp);
        return sol;
    }
};