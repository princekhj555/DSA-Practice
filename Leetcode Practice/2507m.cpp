class Solution {
public:
    int smallestValue(int n) {
        while(n){
            int sum = 0;
            int prev = n;
            for(int i=2;i<=n;){
                if(n%i ==0){
                    sum+=i;
                    n/=i;
                }
                else{
                    i++;
                }
            }
            if(prev == sum )return sum;
            if(sum == 0)return n;
            n=sum;
        }
        return 0;
    }
};