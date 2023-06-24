class Solution {
public:
    bool checkInclusion(string s1, string s2) {

      vector<int> v(26, -1);
      int l = 0, r = 0;

      for(int i =0; i<s1.length(); i++){
           int index = s1[i] - 'a';
           if(v[index] == -1){
               v[index] = 1;
           }else{
               v[index]++;
           } 
      }

    
      while(r < s2.length()){

          int index = s2[r] - 'a';
          
          if(v[index] == -1){
               if(l < r){
                   int index2 = s2[l] - 'a';
                   v[index2]++;
                   l++;
               }else{
                   l++;
                   r++;
               }
          }else{
            if(v[index] > 0){
               v[index]--;
               if(r - l + 1  == s1.length())return true;
               r++; 
            }else{
               int index2 = s2[l] - 'a';
               v[index2]++;
               l++; 
            }
        } 
         
      }
       return false; 
    }
};