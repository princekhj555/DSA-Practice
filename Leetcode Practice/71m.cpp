/*71. Simplify Path*/

class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
    string s = "";
    
    for(auto dir : path){
        if(dir == '/'){
            if(s.size() > 0){
              if(s == ".." && !st.empty()) st.pop();
              else if(s != ".." && s != "." && s != "_") st.push(s);
              s = "";
            }
        }
        else s += dir;
    }
    if(s == ".." && !st.empty()) st.pop();
    else if(s.size() > 0 && s != ".." && s != "." && s != "_") st.push(s);
    s = "";
    
    while(!st.empty()){
        s = st.top() + s;
        s = '/' + s;
        st.pop();
    }
    
    return s.size() == 0 ? "/":s;
    }
};