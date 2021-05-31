//to find if a no. is in given ap or not in O(1) TC

#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    int inSequence(int a, int b, int c){
        if(c==0)
            {
                if(a==b) return 1;
                return 0;
            }
        else{
            if((b-a)/c<0) 
                return 0;
            else if((b-a)%c==0) 
                    return 1;
                return 0;
        }
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}  // } Driver Code Ends