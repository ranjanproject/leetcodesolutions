class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,sm=0;
        for(i=0;i<nums.size();i=i+2){
            sm = sm + nums[i];
        }
        return sm;
    }
};