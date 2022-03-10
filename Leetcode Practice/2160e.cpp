/*2160. Minimum Sum of Four Digit Number After Splitting Digits*/

class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        while(num)
        {
            arr.push_back(num%10);
            num/=10;
        }
        sort(arr.begin(),arr.end());
        int first=arr[0]*10+arr[3];
        int sec=arr[1]*10+arr[2];
        return first+sec;
    }
};