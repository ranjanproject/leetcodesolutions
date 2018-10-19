class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int curr,mx,i;
        mx = nums[0];
        curr = nums[0];
        for(i=1;i<nums.size();i++){
            curr =max(nums[i],curr+nums[i]);
            mx = max(curr,mx);
        }
        return mx;
    }
};