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


//378. Kth Smallest Element in a Sorted Matrix
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         int n = matrix.size();
        int lo = matrix[0][0], hi = matrix[n-1][n-1] + 1, mid, count, tmp;
        
        while (lo < hi) {
            mid = lo + (hi - lo) / 2, tmp = n - 1, count = 0;
            
            for (int i = 0; i < n; i++) {
                while (tmp >= 0 && matrix[i][tmp] > mid) tmp--;
                count += tmp + 1;
            }
            
            if (count < k) lo = mid + 1;
            else hi = mid;
        }
        
        return lo;
    }
};
