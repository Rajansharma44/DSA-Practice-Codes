class Solution {
public:
    int myAtoi(string s) {
        int index = 0;
        while (index < s.length() && s[index] == ' ') {
            index++;
        }

        int sign = 1;
        if (index < s.length() && (s[index] == '+' || s[index] == '-')) {                    //Leetcode solution 
            sign = (s[index] == '-') ? -1 : 1;
            index++;
        }

        // Perform the actual conversion
        int result = 0;
        while (index < s.length() && isdigit(s[index])) {
            int digit = s[index] - '0';

            // Check for overflow
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            index++;
        }

        return sign * result;
    }
};
