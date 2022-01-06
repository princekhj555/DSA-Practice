/*131. Palindrome Partitioning*/

class Solution {
public:
    bool isPalin(string s, int i, int j){
        while(i<=j){
            if(s[i++]!=s[j--]) return 0;
        }
        return 1;
    }
    void fun(int ind, string s, vector<string> &path, vector<vector<string>> &ans){
        if(ind==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=ind; i<s.size();i++){
            if(isPalin(s, ind, i)){
                path.push_back(s.substr(ind, i-ind+1));
                fun(i+1, s, path, ans);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        fun(0, s, path, ans);
        return ans; 
    }
};