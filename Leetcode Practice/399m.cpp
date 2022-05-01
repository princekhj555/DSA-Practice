/*399. Evaluate Division*/

class Solution {
    void dfs(string s, string d, map<string,vector<pair<string,double>>>&m,set<string>vis, double& ans, double tmp){
       
        if(vis.find(s)!=vis.end())return;
        else{
            vis.insert(s);
            if(s==d){
                ans=tmp;
                return;
            }
            else{
                for(auto it: m[s]){
                    dfs(it.first,d,m,vis,ans,tmp*it.second);
                }
            }
        }
    }
public:
  
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> res;
        map<string,vector<pair<string,double>>>m;
       
        for(int i=0; i<equations.size();++i){
            m[equations[i][0]].push_back({equations[i][1],values[i]});
           
            m[equations[i][1]].push_back({equations[i][0],1/values[i]});
          
        }
       
        for(int i=0; i<queries.size();++i){
            string source = queries[i][0];
            string dest = queries[i][1];
            set<string>vis;
            double ans = -1.0;
           
            if(m.find(source)!=m.end())dfs(source,dest,m,vis,ans,1.0);
            res.push_back(ans);
        }
        return res;
    }
};