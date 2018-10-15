class Solution {
public:
    int reverse(int x) {
        long long int sm=0;
        int sg=1;
        if(x<0){
           sg=-1;
            x = -x;
        }
        
        while(x!=0){
            sm = sm*10 + x%10;
            x = x/10;
            if(sm>INT_MAX||sm<0)return 0;
        }
        return sm*sg;
    }
};