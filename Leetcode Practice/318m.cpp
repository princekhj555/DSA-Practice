//318. Maximum Product of Word Lengths
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans=0;
        for(int i=0; i<words.size()-1;i++){
        map<char,int> mp;
        string s1=words[i];
        for(auto c : s1)
                mp[c]++;

        for(int j=i+1; j<words.size();j++){
            int flag=0;
            string s2 = words[j];
            
            for(auto c : s2){
                if(mp.find(c)!=mp.end()){
                    flag=1;
                    break;
                }
            }
            
            if(flag==0){
                if(s1.length()*s2.length() > ans)
                    ans = s1.length()*s2.length();
            }
            
        }
    }
    
    return ans;
    }
};