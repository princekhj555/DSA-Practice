//2325. Decode the Message
class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char> ump;
        char tmp='a';
        for(auto a: key){
            if(a!=' ' and ump.find(a)==ump.end()){
                ump[a]=tmp;
                tmp++;
            }
        }
        string sol="";
        for(auto a: message){
           if(a==' ') sol+=' ';
            else sol+=ump[a];
        }
        return  sol;
    }
};