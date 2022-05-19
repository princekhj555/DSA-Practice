// 1192. Critical Connections in a Network
class Solution {
public:
    vector<int> adj[100005];
    bool visited[100005];
    vector<vector<int>> ans;
    int low[100005],tin[100005],timer=0;
    
    void dfs(int v, int p = -1) { //This Function Find all Bridge
    visited[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) { //Back edge
            low[v] = min(low[v], tin[to]);
        } else {  //Forward edge
            dfs(to, v);
            if (low[to] > tin[v]){ //Its a bridge from v --> to
                vector<int> vec;
                vec.push_back(v); vec.push_back(to);
                ans.push_back(vec);
            }
            low[v] = min(low[v], low[to]);
        }
    }
}
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        for(int i=0;i<connections.size();i++){
            int x= connections[i][0],y=  connections[i][1];
            adj[x].push_back(y); adj[y].push_back(x);
        }
        dfs(0);
        return ans;
    }
};