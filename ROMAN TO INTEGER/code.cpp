class Solution {
public:
    int romanToInt(string s) {
        int total=0;
        int prev=0;
        for(char c:s){
            int current=0;
            if(c=='I'){
                current=1;
            }
            else if(c=='V'){
                current=5;
            }
            else if(c=='X'){
                current=10;
            }
            else if(c=='L'){
                current=50;
            }
            else if(c=='C'){
                current=100;
            }
            else if(c=='D'){
                current=500;
            }
            else if(c=='M'){
                current=1000;
            }
            if(current>prev){
                total=total+(current-2*prev);
            }
            else{
                total=total+current;
            }
            prev=current;
        }
        return total;
    }
};