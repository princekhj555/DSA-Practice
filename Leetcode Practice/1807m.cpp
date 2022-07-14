//1807. Evaluate the Bracket Pairs of a String
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string res,temp;
        char check;
        unordered_map<string, string> mp;
        for (auto i : knowledge)
            mp[i[0]] = i[1];
        for(auto ch: s){
            if(ch=='('){
                temp="";
                check=ch;
            }
            else if(ch==')'){
                check=ch;
                auto it = mp.find(temp);
                res += it != end(mp) ? it->second : "?";
            }
            else{
                if(check=='(')
                    temp+=ch;
                else
                    res+=ch;
            }
        }  
        return res;
    }
};