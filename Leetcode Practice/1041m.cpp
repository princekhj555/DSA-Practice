/*1041. Robot Bounded In Circle*/

class Solution {
public:
    bool isRobotBounded(string st) {
        int x=0,y=0;
        char cur='N';
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='G')
            {
                if(cur=='N')
                    y++;
                if(cur=='S')
                    y--;
                if(cur=='E')
                    x++;
                if(cur=='W')
                    x--;
            }else{
                char n=st[i];
                if(cur=='N')
                    {
                        if(n=='L')
                            cur='W';
                        else cur='E';
                }
               else if(cur=='E')
                    {
                        if(n=='L')
                            cur='N';
                        else cur='S';
               }
                else if(cur=='W')
                   { 
                    if(n=='L')
                        cur='S';
                    else cur='N';
                }
                else if(cur=='S')
                   { 
                    if(n=='L')
                        cur='E';
                    else cur='W';
                }
                    
            }
        }
        if((x==0 and y==0) or cur!='N' )
            return true;
        return false;
    }
};