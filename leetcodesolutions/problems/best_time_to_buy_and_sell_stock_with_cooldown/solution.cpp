class Solution {
public:
    int fun(vector<int>& prices){
        
        int n,i,j;
        n = prices.size();
        if(n==0){return 0;}
        int dp[n];
        memset(dp,0,sizeof(dp));
        int mx=0;
        for(i=1;i<n;i++){
            for(j=0;j<=i;j++){
                if(prices[i]>prices[j]){
                    if(j<2){
                        dp[i]=max(prices[i]-prices[j],dp[i]);
                        mx = max(dp[i],mx);
                    }
                    else{
                        dp[i]=max(prices[i]-prices[j]+dp[j-2],dp[i]);
                        mx = max(mx,dp[i]);
                    }
                }
                else{
                    dp[i]=max(dp[j],dp[i]);
                }
                
            }
            // cout<<i<<" "<<dp[i]<<" "<<mx<<endl;
        }
        return mx;
//         if(i<0){
//             return 0;
//         }
        
//         else{
//            int mx=0;
//            for(int k=i;k>=0;k--){
//             for(int j=k-1;j>=0;j--){
//                  if(prices[k]>prices[j]){
//                      mx = max(mx,(prices[k]-prices[j])+fun(prices,j-2));
//                  }
//             }
//            }
//             return mx;
//         }
    }
    int maxProfit(vector<int>& prices) {
        return fun(prices);
    }
};