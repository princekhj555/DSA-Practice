/*34. Find First and Last Position of Element in Sorted Array*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)return {-1,-1};
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                int l1=mid,r1=mid;
                while(l1>0){
                    if(nums[l1-1]==nums[mid])l1--;
                    else break;
                }
                 while(r1<n-1){
                    if(nums[r1+1]==nums[mid])r1++;
                    else break;
                }
                return {l1,r1};
            }
           else if(nums[mid]>target){
               r=mid-1;
           }
          else if(nums[mid]<target){
               l=mid+1;
           }        
        }
            return {-1,-1};
        
    }
};

//***************************************************************************************//
//2nd approach
class Solution {
public:
    int bserFirst(vector<int> arr,int k){
    int start=0,end=arr.size()-1;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) {res=mid; end=mid-1;}
        else if(arr[mid]>k) end=mid-1;
        else start=mid+1;
    }
    return res;
}
int bserLast(vector<int> arr,int k){
    int start=0,end=arr.size()-1;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) {res=mid; start=mid+1;}
        else if(arr[mid]>k) end=mid-1;
        else start=mid+1;
    }
    return res;
}
    vector<int> searchRange(vector<int>& arr, int k) {
        int last=bserLast(arr,k);
    int first=bserFirst(arr,k);
        
            return {first,last};
        
    }
};