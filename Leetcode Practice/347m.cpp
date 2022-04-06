/*347. Top K Frequent Elements*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(auto a: nums)
        {
            ump[a]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto a: ump)
        {
            pq.push({a.second,a.first});
        }
        vector<int> sol;
        while(!pq.empty() and k>0){
            sol.push_back(pq.top().second);
            //cout<<pq.top().first<<" "<<pq.top().second<<endl;
            pq.pop();
            k--;
            
        }
        return sol;
    }
};