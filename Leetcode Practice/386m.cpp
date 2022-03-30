
/*386. Lexicographical Numbers*/

class Solution {
public:
        vector<int>ans;
    void dfs(int i,int n)
    {
        if(i>n)
            return ;
          
        ans.push_back(i);
        for(int j=0;j<=9;j++)
        {
            int t=i*10+j;
            dfs(t,n);
        }
      
    }
    vector<int> lexicalOrder(int n) {
        
       for(int i=1;i<=9;i++) 
          {
           dfs(i,n);
          }
        return ans;
    }
};