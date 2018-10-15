class Solution {
public:
    int climbStairs(int n) {
        int a,b,i,t;
        a = 1;b = 1;
        for(i=2;i<=n;i++){
            t = b;
            b = a + b;
            a = t;
        }
        return b;
    }
};