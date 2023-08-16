class Solution {
    fun maxSlidingWindow(nums: IntArray, k: Int): IntArray {
        val list = mutableListOf<Int>()
        val pq = PriorityQueue<Int>(Collections.reverseOrder())
        var r = 0
        var l = 0
        while(r<nums.size){  
           if(r>=k){   
              list.add(pq.peek())
              pq.remove(nums[l])
              l++
           } 
           pq.add(nums[r])  
           r++  
        }
        
        list.add(pq.peek())
       
        return list.toIntArray()
    }
}