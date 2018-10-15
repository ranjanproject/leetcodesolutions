class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int sm = 0,v;
        v = x;
        while(x!=0){
            sm = sm*10 + x%10;
            x = x/10;
        }
        if(v==sm)return true;
        return false;
    }
};