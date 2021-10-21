/*151. Reverse Words in a String*/
class Solution {
public:
    string reverseWords(string s) {
        int start,end=s.length()-1;
        string r;
        while(end>=0){
             while(s[end]==' '){
                end--;
             }
            start=end;
             while(s[start]!=' '){
                start--;
             if(start<0)
              break;
             }
         int m=start+1;
        while(end>=m){
             r.push_back(s[m]);
             m++;
      }
       if(start>=0){
      while(s[start]==' '){
           start--;
          if(start<0)
              break;
         }
      }
      if(start>=0)
      r.push_back(' ');
      end=start;
  }
  return r;
    }
   
};