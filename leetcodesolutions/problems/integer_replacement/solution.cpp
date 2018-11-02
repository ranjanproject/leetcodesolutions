class Solution {
public:
    int integerReplacement(int n) {
        int res = 0;
        if(n == INT_MAX){n/=2;res++;}
        while(n != 1){
            if(n%2) 
            {
                if( (n+1)%4 == 0 && n!=3) n+=1;
                else n-=1;
            }
            else 
                n/=2;
            res++;
        }
        return res;
    }
};