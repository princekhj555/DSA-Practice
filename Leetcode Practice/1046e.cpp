/*1046. Last Stone Weight*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto a: stones)
        {
            pq.push(a);
        }
        while(pq.size()!=1)
        {
            int y=pq.top(); pq.pop();
            int x=pq.top(); pq.pop();

            if(y==x) {
                if(pq.size()==0)
        {
            return 0;
        }
                continue;
            }
            else y=y-x;
            
            pq.push(y);
        }
        return pq.top();
    }
};