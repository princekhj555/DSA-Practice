/*1288. Remove Covered Intervals*/

class Solution {
public:
    static bool mycmp(vector<int> &v1, vector<int> &v2)
    {
        if(v1[0]==v2[0]) return v1[1]>=v2[1];
        return v1[0]<v2[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
               
        sort(intervals.begin(),intervals.end(),mycmp);
        
        int count=1;
       
        int prev=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[prev][0]<=intervals[i][0] && intervals[prev][1]>=intervals[i][1])
            {
                continue;
            }
            else
            {
                prev=i;
                count++;
            }
        }
        return count;
        
    }
};