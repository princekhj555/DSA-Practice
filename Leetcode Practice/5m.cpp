//5. Longest Palindromic Substring
class Solution {
public:
     string longestPalindrome(string s) {
        int n = s.size();
        if(n==0) return "";
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
            if(i==n-1)break;
            dp[i][i+1]=(s[i]==s[i+1]);
        }
        for(int i=n-3;i>=0;i--){
            for(int j=i+2;j<n;j++){
                dp[i][j]=(dp[i+1][j-1] && s[i]==s[j]);
            }
        }
        
        int maxlen=0;
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(dp[i][j]==true && j-i+1>maxlen){
                    maxlen=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};