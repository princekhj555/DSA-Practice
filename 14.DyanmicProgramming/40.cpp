/*Partition Equal Subset Sum */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int equalPartition(int n, int nums[])
    {
        // code here
        int sm=0;
        for(int i=0;i<n;i++)
            sm+=nums[i];
        if(sm%2!=0) return false;
        else return subsetSum(nums,sm/2,n);
    }
     bool subsetSum(int nums[],int target,int n)
    {
        
        bool dp[n+1][target+1];
        for(int i=0;i<=n;i++)
            for(int j=0;j<=target;j++)
            {
                if(j==0)
               dp[i][j]=true;
               else if(i==0)
               dp[i][j]=false;
               else if(nums[i-1]<=j)
               {
                   dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
               }
               else
               dp[i][j]=dp[i-1][j];
            }
        
       return dp[n][target];
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}