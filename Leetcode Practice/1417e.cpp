/* 1417. Reformat The String   :::::::::::::::::::   https://leetcode.com/problems/reformat-the-string/          */

class Solution {
public:
    string reformat(string s) {
        int n=s.size();
        vector<char>a,nm;
        for(auto x:s)
        {
            if(x>='a' && x<='z') { a.push_back(x);}
            if(x>='0' && x<='9') {nm.push_back(x);}
        }
        int alp=a.size();
        int num=nm.size();
        if(abs(num-alp)>1) return "";
       if(alp>num){a.swap(nm);}
        string ans="";
        for(int i=0;i<n;i++){
            if(i%2==0) ans.push_back(nm[i/2]);
            else ans.push_back(a[i/2]);
        }
        return ans;
    }
};