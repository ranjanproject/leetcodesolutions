class Solution {
    fun removeDuplicates(nums: IntArray): Int {
        var k = 0
        var prevNumber = nums[0]
        
        for(index in 1..(nums.size -1)) {
            if(prevNumber != nums[index]){
                k++
                prevNumber = nums[index]
                nums[k]  = nums[index]
            }
        }
       
        return k + 1
        
    }
}