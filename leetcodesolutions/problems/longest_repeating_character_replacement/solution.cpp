class Solution {
public:
    int characterReplacement(string s, int k) {
      map<char, int>mp;
      int maxLen = 0, l = 0,  winLen = 0, maxRepeat = 0;

      for(int i = 0; i<s.length(); i++){

         mp[s[i]]++;
         
         maxRepeat = max(maxRepeat, mp[s[i]]);

         int winLen = i-l+1;

         if((winLen - maxRepeat) <= k){
           maxLen = max(maxLen, winLen);
         }else{
             mp[s[l]]--;
             l++;
         }
        
      }

      return maxLen;
  
    }
};