class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int i=0;
      int j=0;
      string s;
      while(i<word1.size()||j<word2.size()){
       if(i<word1.size()){ s=s+word1[i];
       i++;
       }
       if(j<word2.size()){
        s=s+word2[j];
        j++;
       }
      }
      return s;  
    }
};