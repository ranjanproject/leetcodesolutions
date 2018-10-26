class Solution {
public:
    int rotatedDigits(int N) {
        int ct=0,i;
        int dp[N+1];
        memset(dp,0,sizeof(dp));
        
        for(i=0;i<=N;i++){
          if(i<10){
              if(i==2||i==5||i==6||i==9){
                  dp[i]=2;
                  ct++;
              }
              else if(i==0||i==1||i==8){
                  dp[i]=1;
              }
              else dp[i]=0;
          }
          else{
              int a,b;
              a = dp[i%10];b = dp[i/10];
              if(a==1 && b==1)dp[i]=1;
              else if(a>=1 && b>=1){
                  dp[i]=2;
                  ct++;
              }
              else dp[i]=0;
          }  
        }
        return ct;
    }
};