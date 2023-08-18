class Solution {
    fun maxSubArray(nums: IntArray): Int {
        var mx = Int.MIN_VALUE
        var curSum = 0
        for(n in nums){
            curSum = maxOf(curSum + n, n)
            mx = maxOf(mx, curSum)
        }
        return mx
    }
}