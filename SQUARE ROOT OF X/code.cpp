class Solution {
public:
    int mySqrt(int x) {
        if(x==1||x==0){
            return x;
        }
        for(int i=1;i<=x;i++){
            if(i==x/i){
                return i;
            }
            if(i>x/i){
                return i-1;
            }
        }
        return 0;
    }
};