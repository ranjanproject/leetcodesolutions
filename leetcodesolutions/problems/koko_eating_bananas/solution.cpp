class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       
        long r = 0, n = piles.size(), l = 1, mid;

        for(int i = 0; i<n; i++){
            r += piles[i];
        }

        while(l<=r){

          int countHour = 0;

          mid = l + (r-l)/2;

         for(int i = 0; i<n; i++){
            countHour += (piles[i] - 1)/mid + 1;
         }
         if(countHour > h){
            l = mid + 1;
         }else{
            r = mid - 1;
         }

        }
        
        return r+1;

    }
};