class Solution {
public:
    bool detectCapitalUse(string word) {
        int caps=0;
        if(word[0]>='a' and word[0]<='z'){
            for(auto a:word){
                if(a>='A' and a<='Z')
                return false; 
            }return true;
        }
        else{
            for(auto a:word){
                if(a>='A' and a<='Z') caps++;
            }
            if(caps==1 or caps==word.size()) return true;
        }return false;
    }
};