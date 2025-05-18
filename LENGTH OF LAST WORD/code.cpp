class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastword;
        istringstream stream(s);
        while(stream>>lastword){
        } 
        return lastword.length();
    }
};