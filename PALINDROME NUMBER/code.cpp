class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long reversed = 0;
        if (x < 0) {
            return false;
        }
        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }
        if (original == reversed) {
            return true;
        } else {
            return false;
        }
    }
};