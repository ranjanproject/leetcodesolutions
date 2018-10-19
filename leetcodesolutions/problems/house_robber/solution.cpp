class Solution {
public:
    int rob(vector<int>& nums) {
        int i,mx;
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        if(nums.size()==3)return max(nums[1],nums[0]+nums[2]);
        mx = max(nums[1],nums[0]+nums[2]);
        nums[2]=nums[0]+nums[2];
        for(i=3;i<nums.size();i++){
            nums[i]=max(nums[i]+nums[i-2],nums[i]+nums[i-3]);
            mx = max(nums[i],mx);
        }
        return mx;
    }
};