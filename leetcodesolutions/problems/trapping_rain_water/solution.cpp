class Solution {
public:
    int trap(vector<int>& height) {
        int curSum = 0, tSum =0, n = height.size()-1;

        int start = height[0];

        for(int i = 1; i<=n; i++){
           
           if(height[i]<=start){
               curSum += start - height[i];
           }else{
               tSum += curSum;
               start = height[i];
               curSum = 0;
           }
        }
        
        start = height[n];
        curSum =0;

        for(int i = n - 1; i>=0;i--){
           if(height[i]<start){
               curSum += start - height[i];
           }else{
               tSum += curSum;
               start = height[i];
               curSum = 0;
           }

        }

        return tSum;
    }
};