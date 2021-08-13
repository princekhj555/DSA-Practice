/*50. Pow(x, n)*/

/*#########################################################################################################*/
class Solution {
public:
    double myPow(double x, int n) {     
        if(n==0)
            return 1;
        if(n==-1)
            return 1/x; 
        if(n%2==0)
        {
            double y=myPow(x,n/2);
            return y*y;
        }
        else if(n<0)
        {
            double y=myPow(x,(n-1)/2);
            return y*y*x;
        }
        else
        {
            double y=myPow(x,n/2);
            return y*y*x;
        }
    }
};

/*##############################################################################################*/
class Solution {
public:
    double myPow(double x, int n) {
        double sol=pow(x,n);
        return sol;
    }
};
/*##############################################################################################