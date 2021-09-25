/*20. Valid Parentheses*/

class Solution {
public:
    bool comp(char a,char b){
    return((a==')' && b=='(')|| (a=='}'&& b=='{') ||(a==']'&& b=='['));
}
    bool isValid(string x) {
        stack<char> s;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='('||x[i]=='{'||x[i]=='[')
                s.push(x[i]);
            else{
                if(s.empty()==true) return 0;
                else if(comp(x[i],s.top())==false) return 0;
                else s.pop();
            }
        }
         if(s.empty()==true) return 1;
       return 0;
    }
};