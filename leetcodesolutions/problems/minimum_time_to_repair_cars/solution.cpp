class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {

     long long l = 1, r = INT_MAX, mid = 0, ans;
       
     for(int i = 0; i<ranks.size(); i++){
       r = min((long long)ranks[i], r);
     }

      r = r*(long long)cars*(long long)cars;

     while(l<=r){

         long long carSum = 0;

         mid = (l + r)/2;

         for(int i = 0; i<ranks.size(); i++){
           carSum += sqrt((long long)mid/(long long)ranks[i]);
         }

         if(carSum < cars){
           l = mid + 1; 
         }else{
           r = mid - 1;
           ans = mid;
         }

     }

     
        return ans;
    }
};