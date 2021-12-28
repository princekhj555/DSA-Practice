
/*476. Number Complement*/
class Solution {
public:
    int findComplement(int num) {
      vector<int> bin;
        while(num>0)
        {
            bin.push_back(num%2);
            num/=2;
        }
        reverse(bin.begin(), bin.end());
        for(int i=0;i<bin.size();i++)
        {
            if(bin[i]==1)bin[i]=0;
            else bin[i]=1;
        }
        long long int comp =0;
        long long int cm = 1;
        for(int i=bin.size()-1;i>=0;i--)
        {
            comp+=(cm *bin[i]);
            cm *= 2;
        }
        return comp;  
    }
};