//1663. Smallest String With A Given Numeric Value

class Solution {
public:
    string getSmallestString(int n, int k) {
       string ans="";
        for(int i=0;i<n;i++){
            ans+='a';
        }
        int i=ans.size()-1;
        k-=n;
        while(k>0){
            int tmp=min(k,25);
            k=k-tmp;
            ans[i]='a'+tmp;
            i--;
        }
        return ans;
    }
};