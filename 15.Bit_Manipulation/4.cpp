/*To count no. of set bits in numbers 1 to N */

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
     int countSetBits(int n)
    {
        n++;
 
    int powerOf2 = 2;
 
   
    int cnt = n / 2;

    while (powerOf2 <= n) {
 
        int totalPairs = n / powerOf2;
        cnt += (totalPairs / 2) * powerOf2;
        cnt += (totalPairs & 1) ? (n % powerOf2) : 0;
 
        powerOf2 <<= 1;
    }
 
    return cnt;
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends