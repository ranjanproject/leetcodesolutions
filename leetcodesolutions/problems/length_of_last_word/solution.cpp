class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,ct;
        ct = 0;
        for(i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && ct!=0)break;
            if(s[i]!=' ')
             ct = ct +1;
        }
        return ct;
    }
};