class Solution {
public:
     bool isVowel(char ch) 
        { 
                return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u');
        }


        int countVowelSubstrings(string word) {
        
        if(word.size()<5)
            return 0;   
        
        int countOfVowelSubstring=0;
        
        for(int i=0; i<word.size()-4; i++)
        {
            unordered_set<char> uniqueVowel;
            
            for(int j=i; j<word.size(); j++)
            {
                if(isVowel(word[j]))
                {
                    uniqueVowel.insert(word[j]);
                    
                    if(uniqueVowel.size()==5)
                        ++countOfVowelSubstring;
                    
                }
                else 
                    break;
            }
        }
        
        return countOfVowelSubstring;
    }

};