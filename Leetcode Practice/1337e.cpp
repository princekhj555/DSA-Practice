/*1337. The K Weakest Rows in a Matrix*/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        int t=0;
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++)
            { t=0;
               for(int j=0;j<m;j++){
                   if(mat[i][j]==1)
                       t++;
               } temp.push_back({t,i});
            }
        sort(temp.begin(),temp.end());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};