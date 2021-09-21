/*567. Permutation in String*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        vector<int> st1(26,0);
        vector<int> st2(26,0);
        if(n1>n2) return false;
        
        int l=0,r=n1-1;
        for(int i=0;i<n1;i++)
            {st2[s2[i]-'a']++;
            st1[s1[i]-'a']++;}
        
        while(r<n2){
            if(st1==st2) return true;
            r++;
            if(r!=n2)
                st2[s2[r]-'a']++;
            st2[s2[l]-'a']--;
            l++;
        }
       
        return false;    
        
    }
};