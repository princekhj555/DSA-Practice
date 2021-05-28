
//to Find the duplicate in an array O(n) TC 
//sol 1: 
class Solution {
public:
      int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            
            // for visited
            nums[index] *= -1;
            // if duplicate, 
            if(nums[index] > 0)
                return abs(nums[i]);
        }    
        return -1;
    }
};


//sol 2: 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto x: m){
            if(x.second>1)return x.first;
        }return 0;
    }
};

//best sol: 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<bool> check(n, false);
        for(int i=0; i<n; ++i)
        {
            if(!check[nums[i]-1])
            {
                check[nums[i]-1] = true;
            }
            else
            {
                return nums[i];
            }
        }
        return 1;
    }
};