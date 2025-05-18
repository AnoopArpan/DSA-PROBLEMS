class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int a=num;
        while(num){
            int digits=num%10;
            if(a!=0&&a%digits==0){
                count++;
            }
            num=num/10;
        }
        return count;
    }
};