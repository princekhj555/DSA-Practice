//1423. Maximum Points You Can Obtain from Cards
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
        vector<int> pre(n,0);
        vector<int> suf(n,0);
        pre[0] = cardPoints[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1]+cardPoints[i];
        }
        suf[n-1] = cardPoints[n-1];
        for(int i = n-2;i>=0;i--){
            suf[i] =suf[i+1]+cardPoints[i];
        }
        int ans = 0;
        for(int i= 0;i<=k;i++){
            int rem = k-i;
            int cur = 0;
            if(i-1 >= 0){
                cur += pre[i-1];
            }
            if(n-rem < n){
                cur += suf[n-rem];
            }
            ans = max(cur,ans);
        }
        return ans;
    }
};