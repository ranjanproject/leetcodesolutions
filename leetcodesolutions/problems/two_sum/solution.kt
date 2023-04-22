class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        var map1 = mutableMapOf<Int, Int>()
        var ls = mutableListOf<Int>()
        
        for(i in (0..(nums.size - 1))){
            map1[nums[i]] = i
        }
        
       for(i in (0..(nums.size - 1))){
        
          val n = map1.getOrDefault(target - nums[i], -1)
          
          if(n != -1 && i != map1[target - nums[i]]!!){
              
              ls = mutableListOf(i, map1[target - nums[i]]!!)
              
              break
                           
          }
        
      }
       
    return ls.toIntArray()     
    }
}