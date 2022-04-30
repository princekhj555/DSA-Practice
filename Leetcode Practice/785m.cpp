/*785. Is Graph Bipartite?*/

class Solution {
public:
    int group[105];
    int vis[105];
    
    bool dfs(vector<vector<int>>& graph,int i,int grp){
        vis[i]=1;
        group[i]=grp;
        for(auto a:graph[i]){
            if(vis[a]==0){
                if(dfs(graph,a,!grp)==false) return false;
            }else if(group[i]==group[a]) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        for(int i=0;i<n;i++){
            if(group[i]==0 and dfs(graph,i,0)==false) return false;
        }return true;
        
        
        
    }
};