//String Palindrome

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPlaindrome(string s)
	{
	    int n=s.length();
	    for(int i=0,j=n-1;i<j;i++,j--)
	        if(s[i]!=s[j])return 0;
	    return 1;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}
    return 0;
}  // } Driver Code Ends