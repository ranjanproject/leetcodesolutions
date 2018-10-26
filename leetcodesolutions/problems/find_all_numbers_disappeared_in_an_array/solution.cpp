class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         int i;
         for(i=0;i<nums.size();i++){
             int v = abs(nums[i])-1;
            if(nums[v]>0){
             nums[v]=-nums[v];
            }
          }
        vector<int> res;
        for(i=0;i<nums.size();i++){
            if(nums[i]>0)res.push_back(i+1);
        }
      
        return res;
    }
};