/*344. Reverse String*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};