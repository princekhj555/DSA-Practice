/*977. Squares of a Sorted Array*/
//O(nlogn)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>sol;
        for(auto a:nums)
            sol.push_back(a*a);
        sort(sol.begin(),sol.end());
        return sol;
    }
};

// Fastest O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int l=0, r=nums.size()-1;
        vector<int> sorted(r+1);
        int i=r;
        while(l<=r) {
            if(abs(nums[l])>=abs(nums[r])) {
                sorted[i] = nums[l]*nums[l];
                l++;
            }
            else {
                sorted[i] = nums[r]*nums[r];
                r--;
            }
            i--;
        }
        
        return sorted;
    }
};