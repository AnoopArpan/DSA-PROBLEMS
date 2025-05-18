class Solution {
public:
    bool isPalindrome(string s) {
        string reverse;
        string temp;
        for (char c:s){
            if(isalnum(c)){
                temp+=tolower(c);
            }
        }
        for(int i=temp.length()-1;i>=0;i--){
            reverse+=temp[i];
        }
        return temp==reverse;
    }
};