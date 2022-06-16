//1048. Longest String Chain
class Solution {
public:
    static bool cmp(string&a,string&b)
    {
        return a.length()<b.length();
    }
    bool isPred(string & a, string & b){
        int i = 0, j = 0, count = 1;
        while(i < a.size()){
            if(a[i] != b[j]){
                if(++count >= 3) return false;
                j++;
            }
            else
                i++, j++;
        }
        return true;
    }
    int helper(vector<string>& words,vector<int>&dp,int idx)
    {
        if(dp[idx]!=-1)
            return dp[idx];
        int temp = 0;
        for(int i=idx+1;i<words.size();i++)
        {
            if(words[i].size()==words[idx].size()+1&&isPred(words[idx],words[i]))
                temp = max(temp,1+helper(words,dp,i));     
        }
        return dp[idx] = temp;
    }
    int longestStrChain(vector<string>& words) {
        vector<int>dp(words.size(),-1);
        sort(words.begin(),words.end(),cmp);
        int ans = INT_MIN;
        for(int i=0;i<words.size();i++)
            ans = max(ans,1+helper(words,dp,i));
        return ans;
        
    }
};