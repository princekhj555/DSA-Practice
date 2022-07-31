//307. Range Sum Query - Mutable

class NumArray {

    int *store, len;
    vector<int> base;
public:
    NumArray(vector<int>& nums) {
        len = nums.size();
        base = ref(nums);
       
        store = new int[len + 1];
        for (int i = 1; i <= len; i++) store[i] = 0;
        for (int i = 0; i < len; i++) update(i, nums[i], false);
    }
    
    void update(int index, int val, bool isNotFirstUpdate = true) {
      
        if (isNotFirstUpdate) val -= base[index], base[index] += val;
        index++;
        while (index <= len) {
            store[index] += val;
            index += index & (-index);
        }
    }
    
    int getSum(int n) {
        int res = 0;
        while (n > 0) {
            res += store[n];
            n -= n & (-n);
        }
        return res;
    }
    
    int sumRange(int left, int right) {
        return -getSum(left) + getSum(++right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
