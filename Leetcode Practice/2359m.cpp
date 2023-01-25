class Solution {
public:
    void getPaths(int i,int dist,vector<int>&edges,vector<int>&path){
        if(i!=-1 && path[i]==-1){
            path[i]=dist;
            getPaths(edges[i],dist+1,edges,path);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int sol=-1;
        int minDist=INT_MAX;
        vector<int> path1(edges.size(),-1),path2(edges.size(),-1);

        getPaths(node1,0,edges,path1);
        getPaths(node2,0,edges,path2);

        for(int i=0;i<edges.size();i++){
            if(min(path1[i],path2[i])>=0 && max(path1[i],path2[i])<minDist){
                minDist=max(path1[i],path2[i]);
                sol=i;
            }
        }
        return sol;
    }
};