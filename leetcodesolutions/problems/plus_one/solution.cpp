class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int cr=0,i,n,a;
        n = digits.size()-1;
        cr = (digits[n]+1)/10;
        digits[n]=(digits[n]+1)%10;
        for(i=n-1;i>=0;i--){
            if(cr==0)return digits;
            a = (digits[i]+cr)/10;
            digits[i]=(digits[i]+cr)%10;
            cr = a;
        }
        if(cr!=0){
            digits.insert(digits.begin(),cr);
        }
        return digits;
    }
};