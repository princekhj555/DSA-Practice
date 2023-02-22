class Solution {
public:
static bool helper(vector<int>weights,int mid,int days){
    int d=1;
    int sum=0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
        if(sum>mid){
            d++;
            sum=weights[i];
        }
    }
    return d<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int mx=INT_MIN;
        int sum=0;
        for(auto a:weights){
            mx=max(mx,a);
            sum+=a;
        }
        if(weights.size()==days) return mx;
        int low=mx;
        int high=sum;
        int sol=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(helper(weights,mid,days)==true){
                sol=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return sol;
    }
};