class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)return 0;
     int mn = prices[0],i,mx = 0;
     for(i=1;i<prices.size();i++){
         mx = max(mx,prices[i]-mn);
         if(mn>prices[i])mn = prices[i];
     }
        return mx;
    }
};