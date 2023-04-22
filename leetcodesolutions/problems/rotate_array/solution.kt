class Solution {
    fun rotate(nums: IntArray, k: Int): Unit {
        
        val sizeOfArray = nums.size
        
        val rotateIndex = sizeOfArray - (k % sizeOfArray)

        reverse(0, rotateIndex - 1, nums)
        reverse(rotateIndex, sizeOfArray - 1, nums)
        nums.reverse()
        
    }
    
    fun reverse(startIndex: Int, endIndex: Int, nums: IntArray){
        
        var fromIndex = startIndex
        var toIndex = endIndex
        
        while(fromIndex < toIndex){
           var temp = nums[fromIndex]
            nums[fromIndex] = nums[toIndex]
            nums[toIndex] = temp
            
            fromIndex++
            toIndex--
        }
        

    }
}