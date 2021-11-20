/*378. Kth Smallest Element in a Sorted Matrix*/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        priority_queue<int> maxHeap;
        for(auto &c:m){
            for(auto &d:c){
                maxHeap.push(d);
                if(maxHeap.size()>k) maxHeap.pop();
            }
        }
        return maxHeap.top();
    }
};