class Solution {
public:
    string countAndSay(int n) {
        int ct=0,i;
        string s,s2;
        if(n==1)return "1";
        s = "1";
        int j;
        char c;
        for(i=1;i<n;i++){
            c = s[0];
            ct = 1;
            s2 = "";
            for(j=1;j<s.length();j++){
                // cout<<"h"<<endl;
                if(s[j-1]!=s[j]){
                    s2 = s2+to_string(ct);
                    s2 = s2 + s[j-1];
                    ct = 1;
                    c = s[j];
                }
                else{
                    ct++;
                }
            }
            s2 = s2+to_string(ct) + s[j-1];
            s = s2; 
        }
        return s;
    }
};