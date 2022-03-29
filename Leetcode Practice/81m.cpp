/*81. Search in Rotated Sorted Array II*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target) return true;

            if(nums[mid] > nums[start]) {
                if(nums[mid] < target || nums[start] > target) {
                    start = mid + 1;
                } 
                else {
                    end = mid - 1;
                }

            } else if (nums[mid] < nums[end]) {
                if(nums[mid] > target || nums[end] < target) {
                    end = mid - 1;     
                } 
                else {
                    start = mid + 1;
                }

            } else {
 
                for(int i = start; i <= end; i++) {
                    if(nums[i] == target) return true;
                }
                return false;
            }
        }
        return false;
    }
};