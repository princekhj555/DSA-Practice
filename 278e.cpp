/*278. First Bad Version*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int temp = 1, b = n;
        while(temp<b){
            int mid = temp+(b-temp)/2;
            if(isBadVersion(mid))b = mid;
            else temp = mid + 1;
        }
        return temp;
    }
};