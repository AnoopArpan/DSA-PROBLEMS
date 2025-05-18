class Solution {
public:
    int divide(int dividend, int divisor) {
        long long answer = 0;
        if (divisor == 0) {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
        long long absdividend = abs((long long)dividend);
        long long absdivisor = abs((long long)divisor);
        while (absdividend >= absdivisor) {
            long long temp = absdivisor, multiple = 1;
            while (absdividend >= (temp *2)) {
                temp = temp*2;
                multiple=multiple*2;
            }

            absdividend-=temp ;
            answer+=multiple;
        }
        return sign * answer;
    }
};