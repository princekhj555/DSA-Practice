/*264. Ugly Number II*/

class Solution {
public:
int nthUglyNumber(int n) {

    int p=0,q=0,r=0;
    int an=0;
    int ans[n];
    ans[0]=1;
    for(int i=1;i<n;i++)
    {
        an = min(2*ans[p],min(3*ans[q],5*ans[r]));
        ans[i] = an;
        if(ans[i]==2*ans[p])
            p++;
        if(ans[i]==3*ans[q])
            q += 1;
        if(ans[i]==5*ans[r])
            r += 1;
    }
    return ans[n-1];
    
    
}

};