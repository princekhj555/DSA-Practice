//2283. Check if Number Has Equal Digit Count and Digit Value
class Solution {
public:
    bool digitCount(string num) {
        map<int,int>m;
        for(int i=0;i<num.size();i++){
            m[num[i]-'0']++;
        }
        for(int i=0;i<num.size();i++){
            if(m.find(i)==m.end() and num[i]-'0'==0) continue;
            else if(m.find(i)!=m.end() and num[i]-'0'==m[i]) continue;
            else return false;
        }
        return true;
    }
};