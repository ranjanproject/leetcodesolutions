class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        int l,r;
        l = 0;
        r = nums.size();
        if(target<nums[l])return 0;
        if(target>nums[r-1])return r;
        while(l<r){
           int mid =(l+r)/2; 
            if(nums[mid]==target){
                return mid;
                break;
            }
            else if(nums[mid]<target && nums[mid+1]>target){
                return mid+1;
                break;
            }
            else if(nums[mid]>target){
                r = mid;
            }
            else
                l = mid+1;
        }
    }
};