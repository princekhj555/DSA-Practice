//406. Queue Reconstruction by Height
class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b){
        if(a[0]==b[0]) return a[1]<b[1];
        return a[0]>b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),cmp);
        
        vector<vector<int>> sol;
        
        for(auto a:people){
            sol.insert(sol.begin()+a[1],a);
        }
        return sol;
    }
};