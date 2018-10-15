class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size()==0)return 0;
       int i,j;
        j = 1;
        for(i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        
        return j;
    }
};