class Solution {
public:
    int modpow(int a, int b, int mod) {
        a = a % mod;
        int y = 1;
        while (b > 0) {
            if (b % 2 == 1) {
                y = (y * a) % mod;
            }
            a = (a * a) % mod;
            b = b / 2;
        }
        return y;
    }
    int superPow(int a, vector<int>& b) {
        int mod = 1337;
        int result = 0;
        for (int digit : b) {
            result = (result * 10 + digit) % 1140;
        }
        if(result==0&&b.size()>1){
            result=1440;
        }
        return modpow(a, result, mod);
    }
};