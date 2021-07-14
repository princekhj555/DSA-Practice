/*1619. Mean of Array After Removing Some Elements*/

class Solution {
public:
    double trimMean(vector<int>& arr) {
       int trim = arr.size()/20;
        sort(arr.begin(), arr.end());
        return (double)accumulate(arr.begin()+trim, arr.end()-trim, 0) / (arr.size() - 2*trim); 
    }
};