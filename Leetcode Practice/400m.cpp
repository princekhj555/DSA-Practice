//400. Nth Digit

class Solution {
public:
    int findNthDigit(int n) {
        long long Length = 1, Number = 9, Used = 1;
        while (n > Length * Number)
        {
            n -= Length * Number;
            Number *= 10;
            Used *=10;
            Length++;
        }
        --n;
        Used += n / Length;
        string Template = to_string(Used);
        return Template[n % Length] - '0';
    }
};