//1816. Truncate Sentence
class Solution {
public:
    string truncateSentence(string s, int k) {
        string sol="";
        int sp=0;
        for(auto a:s){
            if(a==' ') sp++;
            if(sp==k) break; 
    
            sol+=a;
        }
        return sol;
    }
};