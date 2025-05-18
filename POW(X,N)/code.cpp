class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){return 1;}
        long long N=n;
        if(n<0){ x=1/x;N=-N;}
        double y=1;
        while(N>0){
            if(N%2==1){y=y*x;}
            x=x*x;
            N=N/2;
        }
        return y;
    }
};