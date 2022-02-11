/*2114. Maximum Number of Words Found in Sentences*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int calc=1;
        for(auto a:sentences)
        {  int tmp=1;
            for(int i=0;i<a.length();i++)
            {
                if(a[i]==' ')
                   tmp++;
            }
            calc=max(calc,tmp);
         tmp=1;
        }
        return calc;
    }
};