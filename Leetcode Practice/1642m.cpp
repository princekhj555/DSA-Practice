//1642. Furthest Building You Can Reach
class Solution {
public:
    int furthestBuilding(vector<int>& height, int bricks, int ladders) {
        priority_queue<int> pq;
   for (int i = 0; i < height.size() - 1; i++) {
       int distance = height[i + 1] - height[i];
       if (distance > 0)
           pq.push(-distance);
       if (pq.size() > ladders) {
           bricks += pq.top();
           pq.pop();
       }
       if (bricks < 0)
           return i;
   }
   return height.size() - 1;
    }
};