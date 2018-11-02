class Solution {
public:
    int trailingZeroes(int n) {
        int d=n/5;
        int ct=0;
        while(d!=0){
            ct = ct+d;
            d = d/5;
           
        }
        return ct;
    }
};