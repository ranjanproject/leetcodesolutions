class Solution {
public:
    vector<int> countBits(int n) {
        int i,pw=1;
        vector<int> dp(n+1);
        dp[0]=0;
        for(i=1;i<=n;i++){
            if(i==pw){
                dp[i]=1;
                pw*=2;
            }
            else{
                dp[i]=1+dp[i-(pw/2)];
            }
        }
        return dp;
    }
};