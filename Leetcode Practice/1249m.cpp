/*1249. Minimum Remove to Make Valid Parentheses*/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> aux;
        int n=s.size();
        string ans;
       
        for(int i=n-1;i>=0;i--){
            
           
            if(s[i]=='('){
                if(!aux.empty() && aux.top()<0){
                    aux.pop();
                }
                else{
                    aux.push(i);
                }
                
            }
 
            else{
                if(s[i]==')')
                    aux.push(-1*i);
            }
        }
        
        for(int i=0;i<n;i++){
            if(!aux.empty() && (aux.top()==i || aux.top()*-1==i)){
                aux.pop();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};