/*227. Basic Calculator II*/
class Solution {
public:
        int calculate(string s) {
        vector<int> operands;
        vector<char> operators;
        operands.push_back(0);
        operators.push_back('+');
        int value = 0;
        for (int i = 0; i <= s.size(); i++) {
            if (s[i] == ' ') {
                continue;
            }
            if (s[i] >= '0' && s[i] <= '9') {
                value = value * 10 + (s[i] - '0');
            } else {
                if (operators.back() == '*') {
                    operands.back() *= value;
                    operators.pop_back();
                } else if (operators.back() == '/') {
                    operands.back() /= value;
                    operators.pop_back();
                } else {
                    operands.push_back(value);
                }
                if (s[i] != '\0') {
                    operators.push_back(s[i]);
                }
                value = 0;
            }
        }
        int total = operands[0];
        for (int i = 0; i < operators.size(); i++) {
            if (operators[i] == '+') {
                total += operands[i + 1];
            } else {
                total -= operands[i + 1];
            }
        }
        return total;
    }
};