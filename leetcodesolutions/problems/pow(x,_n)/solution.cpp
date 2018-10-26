class Solution {
public:
    double pw(double x,int n){
        if(n==0){
            return 1.000;
        }
        
        double v=pw(x,n/2);
        if(n%2==0){
            return v*v;
        }
        else{
            return x*v*v;
        }
    }
    double myPow(double x, int n) {
        double s,v;
        s = 1;
        if(x<0){
            if(n%2==0)s==1;
            else s = -1;
            x = -x;
        }
        if(n<0){
            n = -n;
            x = 1/x;
        }
       v = pw(x,n);
        return v*s;
    }
};