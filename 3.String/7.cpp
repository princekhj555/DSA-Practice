// to "count and say" how many time the number ocuurs
class Solution {
public:
    string countAndSay(int n) {
        string sol="1";
        while(--n){
            string temp="";
            for(int i=0;i<sol.size();i++)
            {
             int count=1;
             while(i+1<sol.size() && sol[i]==sol[i+1]){
                 count++; i++;
             } 
                temp+=to_string(count)+sol[i];
            }
            sol=temp;
        }
        
       return sol; 
    }
};