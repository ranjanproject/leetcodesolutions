class Solution {
    fun nextGreaterElements(nums: IntArray): IntArray {
        val  s = ArrayDeque<Int>()
        val res = IntArray(nums.size){-1}
        

        val mp = mutableMapOf<Int, Int>()
        var index = 0
        val t = nums.size*2 -1
        for(c in 0..t){
            while(!s.isEmpty() && nums[s.peek()] < nums[index]){
                res[s.peek()] = nums[index]
                s.pop()
            }
            s.push(index)
            index++
            index = index%nums.size 
        }

    
        return res
    }
}