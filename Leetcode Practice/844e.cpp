/*844. Backspace String Compare*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,t1;
        for(auto a:s){
            if(a!='#')
                s1.push(a);
            else if(a=='#' and !s1.empty())
                    s1.pop();
        }
        for(auto a:t){
            if(a!='#')
                t1.push(a);
            else if(a=='#' and !t1.empty())
                    t1.pop();
        }
        if(s1.size()!=t1.size()) return 0;
        while( !s1.empty() and !t1.empty()){
            if(s1.top()!=t1.top())
                return false;
            s1.pop(); t1.pop();
        }return true;
    }
};