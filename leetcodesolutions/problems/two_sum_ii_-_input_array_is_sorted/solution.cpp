class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int l,r;
        vector<int> v;
       l = 0;r=nums.size()-1;
       while(l<r){
        if(nums[l]+nums[r]==target){
            v.push_back(l+1);
            v.push_back(r+1);
            return v;
        }
        else if(nums[l]+nums[r]>target){
            r--;
        }
        else
            l++;
       }
        return v;
    }
};