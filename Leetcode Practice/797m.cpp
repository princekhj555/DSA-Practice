/*797. All Paths From Source to Target*/

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> sol;
        vector<int> path;
        solve(graph,path,sol,0);
        return sol;
    }
    void solve(vector<vector<int>>& graph,vector<int> &path, vector<vector<int>> &sol,int idx){
        path.push_back(idx);
        if(idx==graph.size()-1) sol.push_back(path);
        else 
        for(int a:graph[idx]){
            solve(graph,path,sol,a);
        }
        path.pop_back();
    }
};