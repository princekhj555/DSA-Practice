// to count how many perfect squares exists, less than N.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countSquares(int n) {
        int temp=sqrt(n);
        if(temp*temp==n) return temp-1;// perfect square
        else return temp;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends