//43. Multiply Strings

class Solution {
public:
    string multiply(string num1, string num2) {
        
        string st{};
        int n = num1.size(), m = num2.size();
        vector<int>val(n+m, 0); // result can have at max n+m values
        
		//multiply every digit of num1 to that of num2
        for(int i{n-1}; i>=0; --i){
            
            for(int j{m-1}; j>=0; --j){
                
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + val[i+j+1]; //cur multiplication + prev intermediate result in that index
                val[i+j+1] = sum % 10; // taking the unit place part of our sum
                val[i+j] += sum / 10; // taking the carry of our sum
            }
        }
        
		//appending every number except the leading zeros
        for(auto &num: val)
            if(st.size() || num )
                st.append(to_string(num));
        
		//If there were only zeros in val, then result is just 0
        if(st.size() == 0) st = "0";
        return st;
    }
};