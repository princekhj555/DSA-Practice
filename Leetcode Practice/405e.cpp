/*405. Convert a Number to Hexadecimal*/

class Solution {
public:
    string toHex(int num) {
string st = "";
map<int, char> mp;
int quo = 0;
int rem;

    if(num == 0)
        return "0";
    
    mp.insert({10, 'a'});
    mp.insert({11, 'b'});
    mp.insert({12, 'c'});
    mp.insert({13, 'd'});
    mp.insert({14, 'e'});
    mp.insert({15, 'f'});
    
    if(num > 0) {
        while(num > 0) {
            rem = num % 16;
            num = num/16;

            if(rem > 9) {
                st += mp[rem];
            }else {
                st += to_string(rem);
            }   
        }
    }else {
        u_int n = num;
        
         while(n > 0) {
            rem = n % 16;
            n = n/16;

            if(rem > 9) {
                st += mp[rem];
            }else {
                st += to_string(rem);
            }   
        }
        
    }
    reverse(st.begin(), st.end());
    
    return st;
}

};