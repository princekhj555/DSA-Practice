/*1299. Replace Elements with Greatest Element on Right Side*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> gt(arr.size());
        gt[arr.size()-1]=-1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            gt[i]=max(arr[i+1],gt[i+1]);
        }
       return gt;
        
        
    }
};