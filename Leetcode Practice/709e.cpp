//709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        string sol="";
        for(auto a: s)
        {
        	if(isupper(a))
           		 sol+=tolower(a);
       		 else sol+=a;
    	}
        return sol;
    }
};