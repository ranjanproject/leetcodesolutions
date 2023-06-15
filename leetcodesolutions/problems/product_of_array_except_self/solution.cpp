
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

       long long prod = 1;
       int countZero = 0;

       for(int i = 0; i <nums.size(); i++){
           if(nums[i]==0){
               countZero++;
           }else{
               prod *= nums[i];
           }
       }

     for(int i = 0; i<nums.size(); i++){
       if(countZero>=2){
         nums[i] = 0;
       }else{
           if(countZero == 1){
             if(nums[i]==0){
               nums[i] = prod;
             }else{
               nums[i] = 0; 
             }
           }else{
             nums[i] = prod/nums[i];
           }
       }
        
    }
    return nums;
    }
};