/*1200. Minimum Absolute Difference*/
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]<diff)
            {
                diff=arr[i+1]-arr[i];
            }
        }
        for (int i = 0; i < arr.size() - 1;i++) 
        {
            if (arr[i + 1] - arr[i] == diff)
                {
                  res.push_back({arr[i], arr[i + 1]});
                }
        }
        return res;
    }
};