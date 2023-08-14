class Solution {
    fun findKthLargest(nums: IntArray, k: Int): Int {
        val pq = PriorityQueue<Int>(Collections.reverseOrder())

        for(n in nums){
           pq.add(n)
        }
        var result = 0
        for(i in 1..k){
           result = pq.peek()
           pq.remove()
        }
        return result
    }
}