/*1282. Group the People Given the Group Size They Belong To*/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        map<int,vector <int>> m;
        vector<vector<int>> ans;
        for(int i=0;i<(int)arr.size();i++)m[arr[i]].push_back(i);
        for(auto x : m){
            int count = 0;
            vector <int> vec;
            for(int c : x.second){
                vec.push_back(c);
                count++;
                if(count==x.first){
                    ans.push_back(vec);
                    vec.clear();
                    count = 0;
                }
            }
            
        }
        return ans;
    }
};