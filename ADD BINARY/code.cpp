class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string result;
        while(i>=0||j>=0||carry){
            int sum=carry;
           if(i>=0){
            sum=sum+a[i--]-'0';
           }
           if(j>=0){
            sum=sum+b[j--]-'0';
           }
           result=char((sum%2)+'0')+result;
           carry=sum/2;
        }
        return result;
    }
};