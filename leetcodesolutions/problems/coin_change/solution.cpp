class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        int dp[n+1],i,j;
        for(i=0;i<=n;i++)dp[i]=n+1;
        dp[0]=0;
        for(i=1;i<=n;i++){
            for(j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        return dp[n]>n?-1:dp[n];
    }
};