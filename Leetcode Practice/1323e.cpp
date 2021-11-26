/*1323. Maximum 69 Number*/

class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int n=0 ;

        for(int i = 0 ; i<s.length() ; i++){
            if(s[i]=='6'){
                s[i]='9';break;}
        }
        for(int i = 0 ; i<s.size(); i++){
            n = n*10 +((int)(s[i]-'0'));
        }
        return n ;
    }
};