class Solution {
public:
    int titleToNumber(string s) {
        int c,sm,pw=1,i;
        sm = 0;
        for(i=s.length()-1;i>-1;i--){
            c = s[i]-'A' + 1;
            sm = sm + pw*c;
            pw*=26;
        }
        return sm;
    }
};