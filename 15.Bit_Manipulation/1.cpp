// To count Set bits in an integer
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBits(int n) {
        int count=0;
        while(n!=0)
        {
            n=n&(n-1);  
            /*subtracting 1 from n coverts the last set bit  of n to 0 and all next(right) 0 bits to 1 In this way One bit is reduced and the Time Compexity will be theta(no. of set bits) */
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends