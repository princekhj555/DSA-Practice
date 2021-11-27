/*540. Single Element in a Sorted Array*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int t=0;
        for(auto a:nums)
        {
            t=t^a;
        }
        return t;
    }
};

//Binary Search approach
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-2;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(( mid%2==0 && nums[ mid ] == nums[ mid + 1 ] ) || 
                ( mid%2 == 1 && nums[ mid ] == nums[ mid - 1 ] ))
                start=mid+1;
            else end=mid-1;
        }
        return nums[start];
    }
};