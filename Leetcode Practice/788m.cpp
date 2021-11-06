//788. Rotated Digits
class Solution {
public:
    int rotatedDigits(int n) {
        vector<int> val(10,-1);
        val[0]=0;val[1]=1;val[2]=5;val[5]=2;val[6]=9;val[8]=8;val[9]=6;
        int count=0;
        if(n<10){
            while(n){
                if(val[n]!=n && val[n]!=-1){
                    count++;
                }
                n--;
            }
            return count;
        }
        count=4;
        for(int i=11;i<=n;i++){
            int j=i,sum=0,ct=0,flag=1;
            while(j && j%10==0){
                ct++;
                j=j/10;
            }
            while(j){
                int rem=j%10;
                if(val[rem]==-1){
                    sum=i;
                    flag=0;
                    break;
                }
                sum=sum*10+val[rem];
                j=j/10;
            }
            j=0;
            while(sum && flag){
                int rem=sum%10;
                j=j*10+rem;
                sum=sum/10;
            }
            while(ct){
                j=j*10;
                ct--;
            }
            if(j!=i && flag){
                cout<<i<<" "<<j<<endl;
                count++;
            }
        }
        return count;

    }
};
