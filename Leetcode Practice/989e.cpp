class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int K) {
         vector<int> ans;
        int carry = 0, i = num.size()-1;
        while(i>=0 || carry > 0 || K!=0){
            if(K!=0){
                carry += K%10;
                K = K/10;
            }
            if(i>=0){
                carry += num[i];
                i--;                
            }
            ans.push_back(carry%10);
            carry = carry/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};