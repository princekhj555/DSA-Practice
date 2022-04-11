/*682. Baseball Game*/

class Solution {
public:
    int calPoints(vector<string>& ops) {
      stack<int> s;
        int x,y;
        for(auto& z:ops){
            if(z=="+"){
                x=s.top();
                s.pop();
                y=s.top();
                s.push(x);
                s.push(x+y);
            }
            else if(z=="D"){
                x=s.top();
                s.push(x*2);
            }
            else if(z=="C"){
                s.pop();
            }
            else{
                int score=stoi(z);
                s.push(score);
            }
        }
        
        int res=0;
        
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        
        return res;  
    }
};