class KthLargest(val k: Int, nums: IntArray) {
   lateinit var streamNum:MutableList<Int>
   var size = 0
    init{
        streamNum = nums.toMutableList()
        streamNum.sort()
        size = streamNum.size
    }

    fun add(`val`: Int): Int { 
        streamNum.add(`val`)
        streamNum.sort()
        size++
        return streamNum[size - k]
    }

}

/**
 * Your KthLargest object will be instantiated and called as such:
 * var obj = KthLargest(k, nums)
 * var param_1 = obj.add(`val`)
 */