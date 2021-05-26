// Count the Reversals to balance the brackets  
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Driver Code Ends



int countRev (string s)
{
    int counter = 0, rev = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '{') {  // open bracket
            counter++;
        } else {    // close bracket
        
            // if there is a matching bracket
            if (counter) {  
                counter--;
            } 
            
            // if not reverse the close bracket to open bracket
            else {
                rev++;
                counter++;
            }
        }
    }
    // if counter is odd, not possible to balance them
    if (counter&1) return -1;
    
    return rev + (counter/2);  
        
}