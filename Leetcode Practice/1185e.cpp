/*  1185. Day of the Week    */

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
     long long int i,sum=0;
        string s[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        for(i=1971;i<year;i++)
        {
            if(abs(1972-i)%4==0)
            {
                sum++;
            }
            sum=sum+365;
        }
        for(i=1;i<month;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            {
                sum=sum+31;
            }
            else if(i==2&&abs(year-1972)%4==0&&year!=2100)
            {
                sum=sum+29;
            }
            else if(i==2)
            {
                sum=sum+28;
            }
            else
            {
                sum=sum+30;
            }
        }
        sum=sum+day+4;
        sum=sum%7;
        return s[sum];
    }
};