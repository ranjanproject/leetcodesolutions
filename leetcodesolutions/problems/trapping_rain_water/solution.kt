class Solution {
    fun trap(height: IntArray): Int {
        var sumTotal  = 0
        var prev = height[0]
        var curSum = 0
        val size = height.size - 1
        var prevIndex = 0
        for(i in 1..size){
            if(prev <= height[i]){
                sumTotal += curSum
                curSum = 0
                prev = height[i]
                prevIndex = i
            }else{
                curSum += prev - height[i]
            }
        }

        if(prevIndex < size){
             curSum = 0
             prev = height[size]
        for(i in (size - 1) downTo prevIndex){
            if(prev <= height[i]){
                sumTotal += curSum
                curSum = 0
                prev = height[i]
                prevIndex = i
            }else{
                curSum += prev - height[i]
            }
        }
        }
       
      
        return sumTotal
    
    }
}