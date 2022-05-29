//2278. Percentage of Letter in String
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.length();
        int cnt=0;
        for(auto a:s){
            if(a==letter) cnt++;
        }
        return int(cnt*100/n);
    }
};