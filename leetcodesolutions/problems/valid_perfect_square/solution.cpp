class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i;
        for(i=1;i*i<=(long long int)num;i++){
            if((i*i)==(long long int)num)return true;
        }
        return false;
    }
};