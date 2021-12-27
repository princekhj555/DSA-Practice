/*973. K Closest Points to Origin*/

class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        int aa = a[0]*a[0];
        int bb = a[1]*a[1];
        int xx = b[0]*b[0];
        int yy = b[1]*b[1];
        
        return sqrt(aa+bb)<sqrt(xx+yy);
    } 
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        sort(points.begin(),points.end(),cmp);
        
       for(int i=0;i<k;i++)
       {
           ans.push_back(points[i]);
       }
        return ans;
    }
};