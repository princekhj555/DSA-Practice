/*1631. Path With Minimum Effort*/

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int m = h.size()-1, n = h[0].size()-1;
        int cx=0,cy =0,res=0;
        set<pair<int,pair<int,int>>>s;
        s.insert({0,{0,0}});
        while(cx!=m || cy!=n)
        {
            auto currnode = begin(s);
            while(h[currnode->second.first][currnode->second.second]<0)
            {
                s.erase(currnode);
                currnode = begin(s);
            }
            res = max(res,currnode->first);
            cx = currnode->second.first;
            cy = currnode->second.second;
            if(cx>0 && h[cx-1][cy]>0) s.insert({abs(h[cx][cy]-h[cx-1][cy]),{cx-1,cy}});
            if(cx<m && h[cx+1][cy]>0) s.insert({abs(h[cx][cy]-h[cx+1][cy]),{cx+1,cy}});
            if(cy>0 && h[cx][cy-1]>0) s.insert({abs(h[cx][cy]-h[cx][cy-1]),{cx,cy-1}});
            if(cy<n && h[cx][cy+1]>0) s.insert({abs(h[cx][cy]-h[cx][cy+1]),{cx,cy+1}});
            h[cx][cy] = -h[cx][cy];
        }
        return res;
    }
};