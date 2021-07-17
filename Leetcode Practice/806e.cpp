/*806. Number of Lines To Write String*/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
    int length=0,line=1;
        for(int i=0; i<s.length(); i++){
		
			// If adding the length of the next letter results in a line width greater than 100, move to new line and 
			// reinitialize the value of length to the length of that letter
            if(length+widths[s[i]-'a']>100){
                length=widths[s[i]-'a'];
                line++;
            }   
			
			// If that is ot the case, simply add the length of that letter and move ahead
            else
                length+=widths[s[i]-'a'];
        }
        return {line,length};
    }
};