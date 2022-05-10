//17. Letter Combinations of a Phone Number

class Solution {
public:
   void letter_combination_util(vector<char> keypad[8],int curr_pos,vector<string> &ans,string digits,string curr_str)
    {
        if(curr_pos==digits.size())
        {
            if(curr_str!="")
            ans.push_back(curr_str);
            return;
        }
        int key=digits[curr_pos]-'0';

        for(int i=0;i<keypad[key-2].size();i++)
        {
            curr_str+=keypad[key-2][i];
            letter_combination_util(keypad,curr_pos+1,ans,digits,curr_str);
            curr_str.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<char> keypad[8]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
        vector<string> ans;
        if(digits.empty())return ans;
        letter_combination_util(keypad,0,ans,digits,"");
        return ans;
        
        
    }
};