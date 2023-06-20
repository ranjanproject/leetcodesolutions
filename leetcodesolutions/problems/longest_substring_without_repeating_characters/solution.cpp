class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length() == 0) return 0;

        int count = 1, maxLen = 1, li = 0, ri = 1;

        for(int i = 1; i<s.length(); i++){
            bool isCharRepeated = false;
            for(int j = li; j<i; j++){
               if(s[i] == s[j]){
                 isCharRepeated = true;
                 count -=  (j - li);
                 li = j + 1;
                 break;
               }
            }
             
            if(!isCharRepeated){
              count++;  
              maxLen = max(maxLen, count);
            }else{
              count;
            }
        }

        return maxLen;
        
    }
};