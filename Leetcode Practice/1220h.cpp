//1220. Count Vowels Permutation

class Solution {
public:
    int mod = 1e9+7 , N;
int fn(int idx , int n,vector<vector<int>>&dp)
{
    if(n>=N)return 1;
    
    int&cache = dp[n][idx];
    if(cache!=-1)return cache;
    
    cache=0;
    if(idx==1)
    {
        cache = fn(2,n+1,dp);
    }
    else if(idx==2)
    {
        cache = (fn(1,n+1,dp)%mod +fn(3,n+1,dp)%mod)%mod;
    }
    else if(idx==3)
    {
        cache= ((fn(1,n+1,dp)%mod + fn(2,n+1,dp)%mod)%mod + (fn(4,n+1,dp)%mod +fn(5,n+1,dp)%mod)%mod)%mod ;
    }
    else if(idx==4)
    {
        cache = (fn(3,n+1,dp)%mod+fn(5,n+1,dp)%mod)%mod;
    }
    else{
        cache =fn(1,n+1,dp);
    }
    return cache;
}

int countVowelPermutation(int n) {
    vector<vector<int>>dp(n+1,vector<int>(6,-1));
    N=n;
    int ans=0;
    for(int i=1;i<=5;i++)
    {
        ans = (ans%mod +fn(i,1,dp)%mod)%mod;
    }return ans;
}
};