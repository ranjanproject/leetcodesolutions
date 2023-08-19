class Solution {
    fun nextGreaterElement(nums1: IntArray, nums2: IntArray): IntArray {
        val s = ArrayDeque<Int>()
        val mp = mutableMapOf<Int, Int>()

        for(n in nums2){
            while(!s.isEmpty() && s.peek()<n){
               mp[s.peek()] = n
               s.pop()
            }
            s.push(n)
        }

       while(!s.isEmpty()){
        mp[s.peek()] = -1
        s.pop()
       }
     
       
       val res = mutableListOf<Int>()

       for(n in nums1){
           mp[n]?.let{
               res.add(it)
           }
       }

       return res.toIntArray()
    }
}