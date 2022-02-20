/*1675. Minimize Deviation in Array*/

class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int> mxq;
        int mn=INT_MAX,dif=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0) nums[i]*=2;
            mxq.push(nums[i]);
            mn=min(mn,nums[i]);
        }
        
        while(mxq.top()%2==0)
        {
            int tmp=mxq.top();
            mxq.pop();
            dif=min(dif,tmp-mn);
            tmp=tmp/2;
            
            mxq.push(tmp);
            mn=min(tmp,mn);
        }
        return min(dif,mxq.top()-mn);
    }
};