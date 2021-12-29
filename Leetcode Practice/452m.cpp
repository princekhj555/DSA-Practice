
/*452. Minimum Number of Arrows to Burst Balloons*/
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int arrow=1;
        int start=arr[0][0];
        int end=arr[0][1];
        for(int i=1;i<arr.size();i++)
        {
            start=max(start,arr[i][0]);
            end=min(end,arr[i][1]);
            if(start>end){
                arrow++;
                start=arr[i][0];
                end=arr[i][1];
            }
        }
        return arrow;
    }
};