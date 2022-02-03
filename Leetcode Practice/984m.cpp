/*984. String Without AAA or BBB*/

class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans="";
        int ca=0,cb=0;  
        
        while(a>0 || b>0)
        {
            if(a>=b && ca<2 || (b>=a && cb>=2))
            {
                ans+='a';
                ca++;
                cb=0;
                a--;
            }
            else
            {
                ans+='b';
                cb++;
                ca=0;
                b--;
            }
        }
          return ans;
    }
};