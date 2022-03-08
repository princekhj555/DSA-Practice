/*1451. Rearrange Words in a Sentence*/

class Solution {
public:
    string arrangeWords(string text) {
        string ans = "";
        map<int , vector<string>>mp;
        
        text[0] = text[0] + 32;
        
        for(int i = 0 ; i < text.size() ; i++){
            int ct = 0;
            string temp = "";
            while(i < text.size() and text[i] != ' '){
                temp += text[i];
                ct++;
                i++;
            }
            mp[ct].push_back(temp);
        }
        
        for(auto value : mp){
            for(auto it : value.second){
                ans += it;
                ans += ' ';
            }
        }
        
        ans[0] = ans[0] - 32;
        
        
        return ans.substr(0 , ans.size()-1);
    }
};