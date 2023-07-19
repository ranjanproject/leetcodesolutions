class Solution {
    fun search(nums: IntArray, target: Int): Int {
        
        var targetIndex = -1
        var l = 0
        var r = nums.size - 1
       

        while(l <= r){

            var mid = (l + r)/2

            if(nums[mid] == target) {
                return mid
            }
            else if(nums[mid] > target){
               r = mid - 1
            }else{
               l = mid + 1
            }

        }

        
        return targetIndex
    }
}