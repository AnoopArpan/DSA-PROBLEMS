class Solution {
public:
    int climbStairs(int n) {
        int one=1;
        int two=2;
        int ways=0;
        if(n<=2){
            return n;
        }
        for(int i=3;i<=n;i++){
            ways=one+two;
            one=two;
            two=ways;
        }
        return ways;
        
    }
};