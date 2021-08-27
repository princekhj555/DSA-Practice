/*Next Greater Element*/

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> sol;
        stack<long long> stk;
        stk.push(arr[n-1]);
        sol.push_back(-1);
        for(long long i=n-2;i>=0;i--){
            while(!stk.empty()&&stk.top()<=arr[i]) 
                stk.pop();
            long long t=(stk.empty())?(-1):stk.top();
            sol.push_back(t);
            stk.push(arr[i]);
        }
        while(!stk.empty()) stk.pop();
        for(auto a:sol){
            stk.push(a);
        } 
        sol.clear();
        while(stk.empty()!=true){
            sol.push_back(stk.top()); stk.pop();
        }
        return sol;
    }
};