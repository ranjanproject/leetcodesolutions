class Solution {
    fun moveZeroes(nums: IntArray): Unit {
        
        var p = -1
        for((index, n) in nums.withIndex()){
            if(p == -1 && n == 0){
                p = index
            }else if(p != -1 && n != 0){
                nums[p] = nums[index]
                nums[index] = 0
                p++
            }
        }
    }
}