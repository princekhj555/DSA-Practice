/*56. Merge Intervals*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> sol;
        int start=arr[0][0];
        int end=arr[0][1];
        for(int i=0;i<arr.size()-1;i++)
        {
            if(end>=arr[i+1][0])
            { 
                end=max(end,arr[i+1][1]);
            }
            else{
           
            
                sol.push_back({start,end});
                 start=arr[i+1][0];
                 end=arr[i+1][1];
            }
          
        }
        sol.push_back({start,end});
        
     return sol;   
    }
};