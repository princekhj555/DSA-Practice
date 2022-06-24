//630. Course Schedule III
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
     sort(courses.begin(), courses.end(), [](vector<int> &a, vector<int> &b) {
            return a.back() < b.back(); });
        
        priority_queue<int> pq;
        int totaltime = 0;
        for(auto c: courses)
        {
            totaltime += c.front();
            pq.push(c.front());
			
            if(totaltime > c.back())
            {
                totaltime -= pq.top();
                pq.pop();
            }
        }
        return pq.size();   
    }
};