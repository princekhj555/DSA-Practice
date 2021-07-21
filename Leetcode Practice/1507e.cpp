/*1507. Reformat Date */

class Solution {
public:
    string reformatDate(string date)
    {
        string ans;
        string month;
        if(date.size() == 13)
        {
            month = date.substr(5,3);
            ans = date.substr(9,4) + '-' + month_conversion(month) + '-' + date.substr(0,2);
        }
        else
        {
            month = date.substr(4,3);
            ans = date.substr(8,4) + '-' + month_conversion(month) + "-0" + date.substr(0,1);
        }
        return ans;
    }
    
    string month_conversion(string month)
    {
        if(month == "Jan") return "01";
        else if(month == "Feb") return "02";
        else if(month == "Mar") return "03";
        else if(month == "Apr") return "04";
        else if(month == "May") return "05";
        else if(month == "Jun") return "06";
        else if(month == "Jul") return "07";
        else if(month == "Aug") return "08";
        else if(month == "Sep") return "09";
        else if(month == "Oct") return "10";
        else if(month == "Nov") return "11";
        else return "12";
    }
};