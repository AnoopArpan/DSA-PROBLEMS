class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int result = 0;
        int digit;
        int sign=1;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < s.size() && isdigit(s[i])) {
            digit = s[i] - '0';

            if (result > (INT_MAX-digit) / 10) {
                return(sign == -1) ? INT_MIN : INT_MAX;
            }
            result = result * 10 + digit;
            i++;
        }
        return result*sign;
    }
};