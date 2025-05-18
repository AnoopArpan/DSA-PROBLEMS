class Solution {
public:
 int selfdividing(int n){
     int  temp=n;
    while(temp>0){
        int digit=temp%10;
        if(digit==0||n%digit!=0){
            return false;
        }
        temp/=10;
    }
    return true;
 };
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++){
            if(selfdividing(i)){
             result.push_back(i);
            }
        }
        return result;
    }
};